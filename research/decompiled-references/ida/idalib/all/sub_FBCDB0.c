__int64 __fastcall sub_FBCDB0(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  unsigned int *v6; // rax
  __int64 v8; // r8
  __int64 v9; // rax
  unsigned int *v10; // rsi
  __int64 v11; // rdx
  const char *v12; // rsi

  v6 = *(unsigned int **)(a3 + 16);
  v8 = *v6;
  v9 = (__int64)(v6 + 4);
  if ( a2 )
  {
    v10 = *(unsigned int **)(a2 + 16);
    v11 = *v10;
    v12 = (const char *)(v10 + 4);
  }
  else
  {
    v11 = 0;
    v12 = &byte_22F0C30;
  }
  return sub_FBC550(a1, (__int64)v12, v11, v9, v8, a4, a5, a6);
}
