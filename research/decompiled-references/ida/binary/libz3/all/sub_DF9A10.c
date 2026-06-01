__int64 __fastcall sub_DF9A10(unsigned __int64 *a1, __int64 a2, __int64 a3)
{
  char v5; // dl
  __int64 result; // rax
  unsigned __int64 v7; // rdi
  __int64 v8; // r12
  _OWORD *v9; // rax
  unsigned __int64 v10; // rax
  __int64 *v11[6]; // [rsp+8h] [rbp-30h] BYREF

  v5 = sub_DF6930(a1, a3);
  result = 0;
  if ( !v5 )
  {
    if ( a3 )
      ++*(_DWORD *)(a3 + 8);
    v7 = *a1;
    if ( *a1 )
    {
      if ( (v7 & 7) != 0 )
      {
        v11[0] = (__int64 *)a3;
        sub_656920(v7 & 0xFFFFFFFFFFFFFFF8LL, v11);
      }
      else
      {
        v8 = sub_186B270(0x18u);
        v9 = (_OWORD *)sub_186B270(0x40u);
        *(_QWORD *)v8 = v9;
        *v9 = 0;
        v9[1] = 0;
        v9[2] = 0;
        v9[3] = 0;
        v10 = *a1;
        *(_QWORD *)(v8 + 8) = 8;
        *(_DWORD *)(v8 + 16) = 0;
        v11[0] = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFF8LL);
        sub_656920(v8, v11);
        v11[0] = (__int64 *)a3;
        sub_656920(v8, v11);
        *a1 = v8 | 1;
      }
    }
    else
    {
      *a1 = a3;
    }
    return 1;
  }
  return result;
}

