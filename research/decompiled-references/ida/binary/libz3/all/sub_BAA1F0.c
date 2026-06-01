__int64 __fastcall sub_BAA1F0(__int64 a1, unsigned int a2, __int64 a3, __m128 a4, __m128 a5, __m128 a6)
{
  unsigned int **v6; // r14
  __int64 result; // rax
  unsigned int *v8; // rsi
  int v9; // r12d
  unsigned int v10; // r13d
  unsigned int *v11; // r15
  unsigned int *v12; // [rsp+8h] [rbp-88h]
  unsigned int *v14; // [rsp+18h] [rbp-78h]
  __int64 v15; // [rsp+28h] [rbp-68h] BYREF
  int v16; // [rsp+30h] [rbp-60h] BYREF
  char v17; // [rsp+38h] [rbp-58h]
  int v18[20]; // [rsp+40h] [rbp-50h] BYREF

  sub_BA8A20((_QWORD *)a1, a2, a4, a5, a6);
  sub_BA8A20((_QWORD *)a1, a2, a4, a5, a6);
  v6 = (unsigned int **)(*(_QWORD *)(a1 + 192) + 8LL * a2);
  result = sub_16744A0(v18, *(_QWORD *)(a1 + 24));
  v8 = *v6;
  if ( *v6 )
  {
    result = (__int64)&v8[*(v8 - 1)];
    v12 = (unsigned int *)result;
    if ( (unsigned int *)result != v8 )
    {
      v14 = *v6;
      v9 = 0;
      do
      {
        v10 = *v14;
        v15 = a3;
        v16 = v9;
        v17 = 0;
        v11 = (unsigned int *)sub_15DCAD0(v18[2], (int)&v15, 0);
        sub_15D0DF0(&v16);
        ++v9;
        LODWORD(v11) = sub_966440(a1, v11);
        sub_B6A470(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 8), v10 ^ 1, (unsigned int)v11, 0, 0);
        sub_B6A470(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 8), v10, (unsigned int)v11 ^ 1, 0, 0);
        result = (__int64)++v14;
      }
      while ( v12 != v14 );
    }
  }
  return result;
}

