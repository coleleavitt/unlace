__int64 __fastcall sub_1366CC0(_QWORD *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  char v8; // dl
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  _QWORD *v11; // rbp
  __int64 *v12; // rdi
  __int64 v13; // rcx
  _DWORD *v14; // rax
  _DWORD *v15; // rdx
  _BYTE v16[25]; // [rsp+Fh] [rbp-19h] BYREF

  v16[0] = 0;
  if ( (unsigned int)(a2 + 1) <= 1 )
    return 0;
  if ( a2 < 0 )
  {
    v9 = (unsigned int)(-2 - a2);
    v10 = *(_QWORD *)(a1[40] + 8LL * ((unsigned int)(-2 - a2) >> 6));
    if ( _bittest64(&v10, v9) )
    {
      v11 = (_QWORD *)(a1[34] + 8 * ((unsigned __int64)(int)v9 >> 5));
      if ( *v11 )
      {
        v6 = *v11 + 24LL * ((-2 - (_BYTE)a2) & 0x1F);
        goto LABEL_4;
      }
      v12 = (__int64 *)(a1[36] & 0xFFFFFFFFFFFFFFF8LL);
      v13 = *v12;
      v12[10] += 768;
      v14 = (_DWORD *)((v13 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v12[1] >= (unsigned __int64)(v14 + 192) && v13 )
        *v12 = (__int64)(v14 + 192);
      else
        v14 = (_DWORD *)sub_986170((__int64)v12, 768, 768, 3, a5, a6);
      *v11 = v14;
      v15 = v14 + 192;
      do
      {
        *v14 = 0;
        v14 += 6;
        *((_OWORD *)v14 - 1) = 0;
        *((_QWORD *)v14 - 1) = 0;
      }
      while ( v14 != v15 );
      v8 = v16[0];
      v6 = *v11 + 24LL * ((-2 - (_BYTE)a2) & 0x1F);
    }
    else
    {
      v6 = sub_101F930((__int64)a1, v9, v16);
      v8 = v16[0];
    }
    if ( v8 )
      return 0;
    goto LABEL_4;
  }
  v6 = a1[23] + 24LL * (unsigned int)a2;
LABEL_4:
  if ( v6 && *(char *)(v6 + 3) >= 0 )
    return *(_QWORD *)((*(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 8);
  return 0;
}
