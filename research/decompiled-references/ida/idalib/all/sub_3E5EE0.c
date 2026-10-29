unsigned __int64 __fastcall sub_3E5EE0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // r15
  unsigned __int64 *v8; // rbp
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rbx
  __int64 v11; // r13
  unsigned __int64 v12; // rax
  unsigned __int8 v13; // al
  size_t v15; // rbp
  unsigned int v16; // eax
  unsigned int v17; // r14d
  char *v18; // rbx
  __int128 v19; // kr00_16
  char *v20; // rbp
  unsigned __int64 v21; // rdx
  _QWORD *v22; // [rsp+0h] [rbp-88h]
  void *v23; // [rsp+8h] [rbp-80h]
  void *ptr; // [rsp+10h] [rbp-78h]
  int v25; // [rsp+18h] [rbp-70h]
  unsigned int v26; // [rsp+1Ch] [rbp-6Ch]
  __int128 v27; // [rsp+20h] [rbp-68h] BYREF
  void *src; // [rsp+30h] [rbp-58h] BYREF
  __int128 v29; // [rsp+38h] [rbp-50h]
  unsigned __int64 v30; // [rsp+48h] [rbp-40h]
  int v31; // [rsp+50h] [rbp-38h]
  int v32; // [rsp+58h] [rbp-30h]
  int v33; // [rsp+60h] [rbp-28h]
  int v34; // [rsp+68h] [rbp-20h]
  __int64 v35; // [rsp+70h] [rbp-18h]

  v5 = *(int *)(a2 + 8);
  v23 = (void *)a3;
  v30 = __readfsqword(0x28u);
  v29 = 0;
  src = nullptr;
  v6 = switch_dbctx(v5);
  sub_3E5300(a2, v6, (__int64 *)&src, a3);
  ptr = nullptr;
  v22 = *(_QWORD **)(v6 + 1672);
  if ( (_QWORD)v29 )
  {
    v15 = 24 * v29;
    ptr = (void *)qalloc_or_throw(24 * v29);
    memcpy(ptr, src, v15);
    if ( *(_BYTE *)(a1 + 72) != 100 )
      goto LABEL_3;
  }
  else if ( *(_BYTE *)(a1 + 72) != 100 )
  {
    goto LABEL_3;
  }
  v16 = *(_DWORD *)(a2 + 12);
  v17 = *(_DWORD *)(a1 + 12);
  v27 = 0;
  v26 = v16;
  getinf_buf(26, &v27, 16);
  v18 = (char *)src;
  v19 = v27;
  v20 = (char *)src + 24 * v29;
  if ( src != v20 )
  {
    do
    {
      v21 = *(_QWORD *)v18;
      if ( *(_QWORD *)v18 >= (unsigned __int64)v19 && v21 < *((_QWORD *)&v19 + 1) )
        (*(void (__fastcall **)(_QWORD, char *, unsigned __int64, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 32) + 24LL))(
          *(_QWORD *)(a1 + 32),
          v18,
          v21,
          v26,
          v17,
          0);
      v18 += 24;
    }
    while ( v20 != v18 );
  }
LABEL_3:
  v7 = switch_dbctx(*(int *)(a1 + 8));
  if ( (_QWORD)v29 )
  {
    v8 = (unsigned __int64 *)ptr;
    v9 = 0;
    do
    {
      while ( 1 )
      {
        v10 = *v8;
        if ( *v8 != -1 )
        {
          v11 = *((_QWORD *)src + 3 * v9);
          sub_4111A0(*(_QWORD *)(v7 + 1672));
          LOWORD(v12) = sub_3BE900(v22, v10, 4);
          if ( (v12 & 0x600) == 0x200 )
          {
            v10 = sub_3C2650(v22, v10);
            v12 = sub_3BE900(v22, v10, 4);
          }
          if ( (v12 & 0xC000) == 0 )
            break;
        }
        ++v9;
        v8 += 3;
        if ( v9 >= (unsigned __int64)v29 )
          goto LABEL_11;
      }
      sub_4D9890(
        (int)v22,
        (int)v22,
        v23,
        (__int64)ptr,
        v25,
        v27,
        SDWORD2(v27),
        (int)src,
        v29,
        SDWORD2(v29),
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
      v13 = sub_4E15C0(*(_QWORD *)(v7 + 1672), v11);
      sub_4CE8A0(v22, v10, v13);
      ++v9;
      v8 += 3;
    }
    while ( v9 < (unsigned __int64)v29 );
  }
LABEL_11:
  if ( ptr )
    qfree(ptr);
  if ( src )
  {
    *(_QWORD *)&v29 = 0;
    qfree(src);
  }
  return v30 - __readfsqword(0x28u);
}
