unsigned __int64 __fastcall sub_1931760(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        unsigned __int8 a5,
        _QWORD *a6,
        __m128 a7,
        __int64 *a8,
        __int64 a9,
        _QWORD *a10,
        __int64 a11)
{
  char *v12; // rax
  char *v13; // rbp
  __int64 *v14; // r15
  char *v15; // r14
  __int64 v16; // rbx
  __int64 v17; // rdi
  char *v18; // rsi
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rbx
  _QWORD *v27; // [rsp+28h] [rbp-40h] BYREF

  v12 = (char *)operator new[](8LL * (unsigned int)a9);
  v13 = v12;
  if ( (_DWORD)a9 )
  {
    v14 = a8;
    v15 = v12;
    v16 = (__int64)&a8[(unsigned int)(a9 - 1) + 1];
    do
    {
      while ( *v14 )
      {
        v17 = *v14;
        v18 = v15;
        ++v14;
        v15 += 8;
        sub_1E5F010(v17, v18);
        if ( v14 == (__int64 *)v16 )
          goto LABEL_6;
      }
      ++v14;
      *(_QWORD *)v15 = 0;
      v15 += 8;
    }
    while ( v14 != (__int64 *)v16 );
  }
LABEL_6:
  if ( a5 )
  {
    v19 = sub_1912620(a1, (_BYTE *)a2, a3, a4, a5, a6, a7, v13, (_BYTE *)(unsigned int)a9, a10, a11);
  }
  else
  {
    sub_1E5F010(a6, &v27);
    v19 = sub_1912620(a1, (_BYTE *)a2, a3, a4, 0, v27, a7, v13, (_BYTE *)(unsigned int)a9, a10, a11);
  }
  v20 = v19;
  operator delete[](v13);
  return v20;
}
