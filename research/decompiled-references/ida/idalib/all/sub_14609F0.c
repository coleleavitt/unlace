bool __fastcall sub_14609F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  _QWORD *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v13; // rbp
  __int64 v14; // rax
  _QWORD *v15; // r12
  char v16; // dl
  __int64 *v17; // rdi
  __int64 v18; // rcx
  _DWORD *v19; // rax
  _DWORD *v20; // rdx
  _BYTE v21[25]; // [rsp+Fh] [rbp-19h] BYREF

  v6 = *(unsigned int *)(a1 + 2396);
  v7 = *(_QWORD **)(a1 + 88);
  v21[0] = 0;
  if ( (unsigned int)(v6 + 1) <= 1 )
    goto LABEL_11;
  if ( (int)v6 < 0 )
  {
    v13 = (unsigned int)(-2 - v6);
    v14 = *(_QWORD *)(v7[40] + 8LL * ((unsigned int)(-2 - v6) >> 6));
    if ( _bittest64(&v14, v13) )
    {
      v15 = (_QWORD *)(v7[34] + 8 * ((unsigned __int64)(int)v13 >> 5));
      if ( *v15 )
      {
        v8 = *v15 + 24 * (v13 & 0x1F);
        goto LABEL_4;
      }
      v17 = (__int64 *)(v7[36] & 0xFFFFFFFFFFFFFFF8LL);
      v18 = *v17;
      v17[10] += 768;
      v19 = (_DWORD *)((v18 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v17[1] >= (unsigned __int64)(v19 + 192) && v18 )
        *v17 = (__int64)(v19 + 192);
      else
        v19 = (_DWORD *)sub_986170((__int64)v17, 768, 768, 3, a5, a6);
      *v15 = v19;
      v20 = v19 + 192;
      do
      {
        *v19 = 0;
        v19 += 6;
        *((_OWORD *)v19 - 1) = 0;
        *((_QWORD *)v19 - 1) = 0;
      }
      while ( v19 != v20 );
      v16 = v21[0];
      v8 = *v15 + 24 * (v13 & 0x1F);
    }
    else
    {
      v8 = sub_101F930((__int64)v7, v13, v21);
      v16 = v21[0];
    }
    if ( v16 )
    {
LABEL_11:
      v11 = 0;
      return a2 == v11;
    }
  }
  else
  {
    v8 = v7[23] + 24 * v6;
  }
LABEL_4:
  if ( !v8 )
    goto LABEL_11;
  if ( *(char *)(v8 + 3) < 0 )
    goto LABEL_11;
  v9 = *(_QWORD *)((*(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 8);
  if ( !v9 )
    goto LABEL_11;
  v10 = *(_QWORD *)(v9 + 8);
  if ( !v10 )
    goto LABEL_11;
  while ( 1 )
  {
    v11 = v10 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v10 & 4) == 0 || !v11 )
      return a2 == v11;
    v10 = *(_QWORD *)(v11 + 8);
    if ( !v10 )
      goto LABEL_11;
  }
}
