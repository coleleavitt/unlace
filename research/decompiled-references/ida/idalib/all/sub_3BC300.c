unsigned __int64 __fastcall sub_3BC300(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // r15
  int v5; // edx
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 range; // rax
  __int64 v11; // rdx
  __int64 v12; // rbx
  const char *v13; // rdx
  __int64 v14; // [rsp+8h] [rbp-20E0h]
  FILE *s; // [rsp+18h] [rbp-20D0h]
  __int64 v16; // [rsp+20h] [rbp-20C8h]
  int v17; // [rsp+20h] [rbp-20C8h]
  char v18[4096]; // [rsp+40h] [rbp-20A8h] BYREF
  __int64 ptr; // [rsp+1040h] [rbp-10A8h] BYREF
  char v20; // [rsp+1048h] [rbp-10A0h]
  _BYTE v21[4087]; // [rsp+1049h] [rbp-109Fh] BYREF
  _BYTE v22[100]; // [rsp+2040h] [rbp-A8h] BYREF
  _BYTE v23[4]; // [rsp+20A4h] [rbp-44h] BYREF
  unsigned __int64 v24; // [rsp+20A8h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 1200) )
  {
    *(_BYTE *)(a1 + 1200) = 0;
    sub_592AF0(*(_QWORD *)a1, v18, 4096, &off_23AD860);
    if ( !*(_QWORD *)(a1 + 1128) && !*(_QWORD *)(a1 + 992) )
    {
      qunlink(v18);
      return v24 - __readfsqword(0x28u);
    }
    s = (FILE *)fopenWB(v18);
    if ( !s )
      goto LABEL_27;
    if ( !(unsigned __int8)sub_597600(
                             20LL * *(_QWORD *)(a1 + 992)
                           + 24
                           + 20LL * (*(_QWORD *)(a1 + 1128) + *(_QWORD *)(a1 + 1168)),
                             v18,
                             "write sparse info") )
      sub_378C70(0);
    ptr = 0x5555A51D53414449LL;
    v20 = 0;
    v2 = sub_3B7F40(s, a1 + 1120, (__int64)&ptr, (__int64)v21, (__int64)v23);
    if ( !v2 )
      goto LABEL_27;
    v3 = sub_3B7F40(s, a1 + 1160, (__int64)&ptr, v2, (__int64)v23);
    if ( !v3 )
      goto LABEL_27;
    v4 = *(_QWORD *)(a1 + 976);
    if ( a1 + 960 == v4 )
    {
      v11 = -1;
      goto LABEL_22;
    }
    v14 = 0;
    while ( 1 )
    {
      v5 = *(_DWORD *)(v4 + 48);
      v6 = *(_QWORD *)(v4 + 32);
      if ( (v5 & 0x1FF) == 0x100 )
      {
        if ( !*(_QWORD *)(a1 + 1168)
          || (v17 = *(_DWORD *)(v4 + 48),
              range = rangeset_t_find_range(a1 + 1160, *(_QWORD *)(v4 + 32)),
              v5 = v17,
              !range) )
        {
LABEL_14:
          if ( (v5 & 0xFFFFF) != 0x200 )
          {
            v7 = pack_dq(v3, v23, v6 - v14);
            v8 = pack_dd(v7, v23, *(unsigned int *)(v4 + 48));
            v9 = pack_dq(v8, v23, *(_QWORD *)(v4 + 40));
            v14 = v6;
            v3 = v9;
            if ( (unsigned __int64)(v9 - (_QWORD)&ptr) > 0xFFF )
            {
              v16 = v9 - (_QWORD)&ptr;
              if ( qfwrite(s, &ptr) != 4096 )
                goto LABEL_27;
              v3 -= 4096;
              __memmove_chk(&ptr, v22, v16 - 4096, 4196);
            }
          }
          goto LABEL_11;
        }
        BYTE1(v5) = BYTE1(v17) & 0xFE;
      }
      if ( v5 )
        goto LABEL_14;
LABEL_11:
      v4 = std::_Rb_tree_increment(v4);
      if ( a1 + 960 == v4 )
      {
        v11 = ~v14;
LABEL_22:
        v12 = pack_dq(v3, v23, v11) - (_QWORD)&ptr;
        if ( !v12 || v12 == qfwrite(s, &ptr) )
        {
          qfclose(s);
          return v24 - __readfsqword(0x28u);
        }
LABEL_27:
        v13 = (const char *)qstrerror(0xFFFFFFFFLL);
        sub_378C70((__int64)"%s: %s", v18, v13);
      }
    }
  }
  return v24 - __readfsqword(0x28u);
}
