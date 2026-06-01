unsigned __int64 __fastcall sub_3B7770(__int64 a1)
{
  __int64 *p_ptr; // rsi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rbx
  _DWORD *v6; // r13
  int v7; // edx
  unsigned int v8; // r15d
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 range; // rax
  __int64 v12; // rdx
  __int64 v13; // rbx
  const char *v14; // rdx
  unsigned int v15; // [rsp+Ch] [rbp-20DCh]
  FILE *s; // [rsp+18h] [rbp-20D0h]
  int v17; // [rsp+20h] [rbp-20C8h]
  char v18[4096]; // [rsp+40h] [rbp-20A8h] BYREF
  __int64 ptr; // [rsp+1040h] [rbp-10A8h] BYREF
  char v20; // [rsp+1048h] [rbp-10A0h]
  _BYTE v21[4087]; // [rsp+1049h] [rbp-109Fh] BYREF
  _BYTE v22[4]; // [rsp+20A4h] [rbp-44h] BYREF
  unsigned __int64 v23; // [rsp+20A8h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 1192) )
  {
    *(_BYTE *)(a1 + 1192) = 0;
    p_ptr = (__int64 *)v18;
    sub_579240(*(_QWORD *)a1, v18, 4096, &unk_2389820);
    if ( !*(_QWORD *)(a1 + 1120) && !*(_QWORD *)(a1 + 984) )
    {
      qunlink(v18);
      return v23 - __readfsqword(0x28u);
    }
    s = (FILE *)fopenWB(v18);
    if ( !s )
      goto LABEL_27;
    if ( !(unsigned __int8)sub_57DD00(
                             15LL * *(_QWORD *)(a1 + 984)
                           + 10LL * (*(_QWORD *)(a1 + 1120) + *(_QWORD *)(a1 + 1160))
                           + 24,
                             v18,
                             "write sparse info") )
      sub_375320(0);
    p_ptr = (__int64 *)(a1 + 1112);
    ptr = 0x5555A51D53414449LL;
    v20 = 0;
    v4 = sub_3B3780(s, a1 + 1112, (__int64)&ptr, (__int64)v21, (__int64)v22);
    if ( !v4 )
      goto LABEL_27;
    p_ptr = (__int64 *)(a1 + 1152);
    v5 = sub_3B3780(s, a1 + 1152, (__int64)&ptr, v4, (__int64)v22);
    if ( !v5 )
      goto LABEL_27;
    v6 = *(_DWORD **)(a1 + 968);
    if ( v6 == (_DWORD *)(a1 + 952) )
    {
      v12 = 0xFFFFFFFFLL;
      goto LABEL_22;
    }
    v15 = 0;
    while ( 1 )
    {
      v7 = v6[10];
      v8 = v6[8];
      if ( (v7 & 0x1FF) == 0x100 )
      {
        if ( !*(_QWORD *)(a1 + 1160) || (v17 = v6[10], range = rangeset_t_find_range(a1 + 1152, v8), v7 = v17, !range) )
        {
LABEL_14:
          if ( (v7 & 0xFFFFF) != 0x200 )
          {
            v9 = pack_dd(v5, v22, v8 - v15);
            v10 = pack_dd(v9, v22, (unsigned int)v6[10]);
            v15 = v8;
            v5 = pack_dd(v10, v22, (unsigned int)v6[9]);
            if ( (unsigned __int64)(v5 - (_QWORD)&ptr) > 0xFFF )
            {
              p_ptr = &ptr;
              if ( qfwrite(s, &ptr) != 4096 )
                goto LABEL_27;
              v5 -= 4096;
              __memmove_chk();
            }
          }
          goto LABEL_11;
        }
        BYTE1(v7) = BYTE1(v17) & 0xFE;
      }
      if ( v7 )
        goto LABEL_14;
LABEL_11:
      v6 = (_DWORD *)std::_Rb_tree_increment();
      if ( v6 == (_DWORD *)(a1 + 952) )
      {
        v12 = ~v15;
LABEL_22:
        v13 = pack_dd(v5, v22, v12) - (_QWORD)&ptr;
        if ( !v13 || (p_ptr = &ptr, v13 == qfwrite(s, &ptr)) )
        {
          qfclose(s);
          return v23 - __readfsqword(0x28u);
        }
LABEL_27:
        v14 = (const char *)qstrerror(0xFFFFFFFFLL, p_ptr, v3, v4);
        sub_375320((__int64)"%s: %s", v18, v14);
      }
    }
  }
  return v23 - __readfsqword(0x28u);
}

