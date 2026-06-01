__int64 __fastcall sub_E82F70(__int64 a1, __int64 *a2, double *a3)
{
  __int64 v5; // rsi
  unsigned int v6; // eax
  unsigned int v7; // ebx
  __int64 v9; // rax
  __int64 v10; // rdi
  char (__fastcall *v11)(__int64, __int64); // rdx
  int v12; // edx
  unsigned int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // rdx
  int *v16; // rax
  unsigned int v17; // edx
  unsigned int v18; // eax
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // r13
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // [rsp+0h] [rbp-A0h]
  int v31; // [rsp+18h] [rbp-88h] BYREF
  int v32; // [rsp+1Ch] [rbp-84h] BYREF
  __int64 v33; // [rsp+20h] [rbp-80h] BYREF
  int v34[2]; // [rsp+28h] [rbp-78h] BYREF
  int v35[4]; // [rsp+30h] [rbp-70h] BYREF
  __int64 v36; // [rsp+40h] [rbp-60h]
  __m128 v37; // [rsp+50h] [rbp-50h] BYREF
  __int64 v38; // [rsp+60h] [rbp-40h] BYREF
  __int64 v39; // [rsp+68h] [rbp-38h]

  v5 = *a2;
  v33 = 0;
  v6 = sub_1674350(a1 + 32, v5, &v31, &v32, &v33);
  if ( !(_BYTE)v6 )
    return 0;
  v7 = v6;
  v9 = *(_QWORD *)(a1 + 24);
  v10 = v33;
  v11 = *(char (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 16LL);
  if ( v11 == sub_E67DB0 )
  {
    if ( *(_WORD *)(v33 + 4) != 1 )
      return 0;
    v12 = *(_DWORD *)(v9 + 20);
    v13 = *(_DWORD *)(v33 + 16);
    if ( v12 == 1 )
    {
      v21 = *(_QWORD *)(v9 + 8);
      v22 = v13 >> 5;
      if ( v21 && (unsigned int)v22 < *(_DWORD *)(v21 - 4) && (*(_DWORD *)(v21 + 4 * v22) & (1 << v13)) != 0 )
        return 0;
    }
    else if ( v12 == 2 )
    {
      if ( v13 >= *(_DWORD *)(v9 + 16) )
        return 0;
    }
    else
    {
      if ( v12 )
      {
        sub_1872CE0("");
        sub_1873130(114, 58);
      }
      v14 = *(_QWORD *)(v9 + 8);
      v15 = v13 >> 5;
      if ( !v14 || (unsigned int)v15 >= *(_DWORD *)(v14 - 4) || (*(_DWORD *)(v14 + 4 * v15) & (1 << v13)) == 0 )
        return 0;
    }
  }
  else
  {
    if ( !v11(*(_QWORD *)(a1 + 24), v33) )
      return 0;
    v10 = v33;
  }
  *a2 = v10;
  v16 = *(int **)(*(_QWORD *)(sub_15D1F10(v10) + 24) + 8LL);
  if ( *((_BYTE *)v16 + 8) )
    sub_A8ADA((__int64)"std::get: wrong index for variant");
  v17 = *v16;
  v18 = v32 + 1;
  if ( v31 )
  {
    if ( v18 < v17 )
    {
      v37.m128_i8[8] = 0;
      v26 = *(_QWORD *)(a1 + 40);
      v37.m128_i32[0] = v17 - 1;
      *(_QWORD *)v35 = v33;
      LODWORD(v38) = v32 + 1;
      LOBYTE(v39) = 0;
      sub_15DCAD0(v26, (int)v35, 0);
      sub_15D0DF0(&v38);
      sub_15D0DF0(&v37);
      v37.m128_i8[8] = 0;
      v38 = 0;
      v27 = *(_QWORD *)(a1 + 40);
      *(_QWORD *)v34 = v33;
      v39 = 0;
      v37.m128_i32[0] = v31 - 1;
      *(__m128 *)v35 = _mm_loadh_ps(a3);
      v29 = sub_15DCAD0(v27, (int)v34, 0);
      sub_15D0DF0(&v38);
      sub_15D0DF0(&v37);
      v28 = *(_QWORD *)(a1 + 40);
      v36 = v29;
      *(_QWORD *)a3 = sub_15E1AF0(v28);
      return v7;
    }
    if ( v17 == v18 )
    {
      v37.m128_i8[8] = 0;
      v37.m128_i32[0] = v31 - 1;
      v23 = *(_QWORD *)(a1 + 40);
      v38 = 0;
      v39 = 0;
      *(double *)v35 = *a3;
      *(_QWORD *)v34 = v33;
      v24 = sub_15DCAD0(v23, (int)v34, 0);
      sub_15D0DF0(&v38);
      sub_15D0DF0(&v37);
      v25 = *(_QWORD *)(a1 + 40);
      *(_QWORD *)&v35[2] = v24;
      *(_QWORD *)a3 = sub_15E1AF0(v25);
      return v7;
    }
  }
  else if ( v18 < v17 )
  {
    LODWORD(v38) = v32 + 1;
    v19 = *(_QWORD *)(a1 + 40);
    v37.m128_i32[0] = v17 - 1;
    *(_QWORD *)v35 = v33;
    v37.m128_i8[8] = 0;
    LOBYTE(v39) = 0;
    sub_15DCAD0(v19, (int)v35, 0);
    sub_15D0DF0(&v38);
    sub_15D0DF0(&v37);
    v20 = *(_QWORD *)(a1 + 40);
    v37 = _mm_loadh_ps(a3);
    *(_QWORD *)a3 = sub_15E1AF0(v20);
    return v7;
  }
  return 0;
}

