__int64 __fastcall sub_BAA080(__int64 a1, __int64 a2, unsigned int *a3, __m128 a4, __m128 a5, __m128 a6)
{
  unsigned int v6; // r14d
  unsigned int **v7; // r14
  __int64 result; // rax
  unsigned int *v9; // rsi
  int v10; // r12d
  unsigned int v11; // r13d
  unsigned int *v12; // r15
  unsigned int *v13; // [rsp+8h] [rbp-88h]
  unsigned int *v15; // [rsp+18h] [rbp-78h]
  __int64 v16; // [rsp+28h] [rbp-68h] BYREF
  int v17; // [rsp+30h] [rbp-60h] BYREF
  char v18; // [rsp+38h] [rbp-58h]
  int v19[20]; // [rsp+40h] [rbp-50h] BYREF

  v6 = sub_B39350(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8LL * *a3), *(_DWORD *)(a1 + 8));
  sub_BA8A20((_QWORD *)a1, v6, a4, a5, a6);
  sub_BA8A20((_QWORD *)a1, v6, a4, a5, a6);
  v7 = (unsigned int **)(*(_QWORD *)(a1 + 192) + 8LL * v6);
  result = sub_16744A0(v19, *(_QWORD *)(a1 + 24));
  v9 = *v7;
  if ( *v7 )
  {
    result = (__int64)&v9[*(v9 - 1)];
    v13 = (unsigned int *)result;
    if ( (unsigned int *)result != v9 )
    {
      v15 = *v7;
      v10 = 0;
      do
      {
        v11 = *v15;
        v16 = a2;
        v17 = v10;
        v18 = 0;
        v12 = (unsigned int *)sub_15DCAD0(v19[2], (int)&v16, 0);
        sub_15D0DF0(&v17);
        ++v10;
        LODWORD(v12) = sub_966440(a1, v12);
        sub_B6A470(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 8), v11 ^ 1, (unsigned int)v12, 0, 0);
        sub_B6A470(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 8), v11, (unsigned int)v12 ^ 1, 0, 0);
        result = (__int64)++v15;
      }
      while ( v13 != v15 );
    }
  }
  return result;
}

