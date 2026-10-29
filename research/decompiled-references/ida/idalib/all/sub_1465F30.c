__int64 __fastcall sub_1465F30(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  _QWORD *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  char v11; // dl
  unsigned __int64 v12; // rbx
  __int64 v13; // rax
  _QWORD *v14; // rbp
  __int64 *v15; // rdi
  __int64 v16; // rcx
  _DWORD *v17; // rax
  _DWORD *v18; // rdx
  _BYTE v19[25]; // [rsp+Fh] [rbp-19h] BYREF

  v6 = *(_QWORD *)(a1 + 8);
  v19[0] = 0;
  v7 = *(_QWORD **)(v6 + 88);
  v8 = *(unsigned int *)(a1 + 16);
  if ( (unsigned int)(v8 + 1) <= 1 )
    return 0;
  if ( (int)v8 < 0 )
  {
    v12 = (unsigned int)(-2 - v8);
    v13 = *(_QWORD *)(v7[40] + 8LL * ((unsigned int)(-2 - v8) >> 6));
    if ( _bittest64(&v13, v12) )
    {
      v14 = (_QWORD *)(v7[34] + 8 * ((unsigned __int64)(int)v12 >> 5));
      if ( *v14 )
      {
        v9 = *v14 + 24 * (v12 & 0x1F);
        goto LABEL_4;
      }
      v15 = (__int64 *)(v7[36] & 0xFFFFFFFFFFFFFFF8LL);
      v16 = *v15;
      v15[10] += 768;
      v17 = (_DWORD *)((v16 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v15[1] >= (unsigned __int64)(v17 + 192) && v16 )
        *v15 = (__int64)(v17 + 192);
      else
        v17 = (_DWORD *)sub_986170((__int64)v15, 768, 768, 3, a5, a6);
      *v14 = v17;
      v18 = v17 + 192;
      do
      {
        *v17 = 0;
        v17 += 6;
        *((_OWORD *)v17 - 1) = 0;
        *((_QWORD *)v17 - 1) = 0;
      }
      while ( v17 != v18 );
      v11 = v19[0];
      v9 = *v14 + 24 * (v12 & 0x1F);
    }
    else
    {
      v9 = sub_101F930((__int64)v7, v12, v19);
      v11 = v19[0];
    }
    if ( v11 )
      return 0;
    goto LABEL_4;
  }
  v9 = v7[23] + 24 * v8;
LABEL_4:
  if ( v9 && *(char *)(v9 + 3) >= 0 )
    return *(_QWORD *)((*(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 8);
  return 0;
}
