__int64 __fastcall sub_118B4C0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int32 v7; // r13d
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r15
  __int64 v11; // r8
  __int64 v12; // rdi
  char *v13; // rsi
  char *v14; // rcx
  unsigned __int64 v15; // r9
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // r15
  __int64 v19; // rdi
  char *v20; // rsi
  char *v21; // rcx
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 result; // rax
  __int64 v26; // rdx
  __int64 v27; // rbp
  __int64 v28; // r12
  __int64 v29; // rdi
  char *v30; // rsi
  __int64 v31; // rax
  char *v32; // rcx
  unsigned __int64 v33; // rdx
  __int64 v34; // [rsp+8h] [rbp-D0h]
  __int64 v35; // [rsp+8h] [rbp-D0h]
  __m128i v36[2]; // [rsp+10h] [rbp-C8h] BYREF
  __int16 v37; // [rsp+30h] [rbp-A8h]
  __m128i v38[2]; // [rsp+40h] [rbp-98h] BYREF
  __int16 v39; // [rsp+60h] [rbp-78h]
  __m128i v40; // [rsp+70h] [rbp-68h] BYREF
  __int64 v41; // [rsp+80h] [rbp-58h]
  __int16 v42; // [rsp+90h] [rbp-48h]

  v38[0].m128i_i32[0] = sub_11BC5C0(a1, a2);
  v7 = v38[0].m128i_i32[0];
  v40.m128i_i64[0] = (__int64)"--amdhsa-code-object-version=";
  v42 = 2307;
  v41 = v38[0].m128i_i64[0];
  v8 = sub_10DA6C0(a2, (__int64)&v40);
  v9 = *(unsigned int *)(a3 + 8);
  v10 = *(_QWORD *)a3;
  v11 = v8;
  v12 = 8 * v9;
  v13 = (char *)(*(_QWORD *)a3 + 8LL);
  v14 = (char *)(*(_QWORD *)a3 + 8 * v9);
  if ( v13 == v14 )
  {
    sub_10DC5D0(a3, v8);
    LODWORD(v16) = *(_DWORD *)(a3 + 8);
  }
  else
  {
    v15 = *(unsigned int *)(a3 + 12);
    LODWORD(v16) = *(_DWORD *)(a3 + 8);
    v17 = v9 + 1;
    if ( v17 > v15 )
    {
      v35 = v11;
      sub_2237220(a3, a3 + 16, v17, 8);
      v10 = *(_QWORD *)a3;
      v11 = v35;
      v16 = *(unsigned int *)(a3 + 8);
      v12 = 8 * v16;
      v13 = (char *)(*(_QWORD *)a3 + 8LL);
      v14 = (char *)(*(_QWORD *)a3 + 8 * v16);
    }
    *(_QWORD *)v14 = *(_QWORD *)(v10 + v12 - 8);
    if ( v13 != (char *)(*(_QWORD *)a3 + v12 - 8) )
    {
      v34 = v11;
      memmove(&v13[*(_QWORD *)a3 + 8 - *(_QWORD *)a3], v13, *(_QWORD *)a3 + v12 - 8 - (_QWORD)v13);
      LODWORD(v16) = *(_DWORD *)(a3 + 8);
      v11 = v34;
    }
    LODWORD(v16) = v16 + 1;
    *(_DWORD *)(a3 + 8) = v16;
    *(_QWORD *)(v10 + 8) = v11;
  }
  v18 = *(_QWORD *)a3;
  v19 = 8LL * (unsigned int)v16;
  v20 = (char *)(*(_QWORD *)a3 + 8LL);
  v21 = (char *)(*(_QWORD *)a3 + v19);
  if ( v20 == v21 )
  {
    result = sub_10DC5D0(a3, (__int64)"-mllvm");
  }
  else
  {
    v22 = *(unsigned int *)(a3 + 12);
    v23 = (unsigned int)v16 + 1LL;
    if ( v23 > v22 )
    {
      sub_2237220(a3, a3 + 16, v23, 8);
      v18 = *(_QWORD *)a3;
      v16 = *(unsigned int *)(a3 + 8);
      v19 = 8 * v16;
      v20 = (char *)(*(_QWORD *)a3 + 8LL);
      v21 = (char *)(*(_QWORD *)a3 + 8 * v16);
    }
    *(_QWORD *)v21 = *(_QWORD *)(v18 + v19 - 8);
    v24 = *(_QWORD *)a3;
    if ( v20 != (char *)(*(_QWORD *)a3 + v19 - 8) )
    {
      memmove(&v20[v24 + 8 - *(_QWORD *)a3], v20, *(_QWORD *)a3 + v19 - 8 - (_QWORD)v20);
      LODWORD(v16) = *(_DWORD *)(a3 + 8);
    }
    *(_DWORD *)(a3 + 8) = v16 + 1;
    result = (__int64)"-mllvm";
    *(_QWORD *)(v18 + 8) = "-mllvm";
  }
  if ( !a4 )
  {
    v38[0].m128i_i32[0] = v7;
    v39 = 265;
    v37 = 259;
    v36[0].m128i_i64[0] = (__int64)"-mcode-object-version=";
    sub_A41580(&v40, v36, v38, v24, v22, v15);
    v31 = sub_10DA6C0(a2, (__int64)&v40);
    v26 = *(unsigned int *)(a3 + 8);
    v27 = *(_QWORD *)a3;
    v28 = v31;
    v29 = 8 * v26;
    v30 = (char *)(*(_QWORD *)a3 + 8LL);
    LODWORD(v31) = *(_DWORD *)(a3 + 8);
    v32 = (char *)(*(_QWORD *)a3 + 8 * v26);
    if ( v30 == v32 )
    {
      return sub_10DC5D0(a3, v28);
    }
    else
    {
      v33 = v26 + 1;
      if ( v33 > *(unsigned int *)(a3 + 12) )
      {
        sub_2237220(a3, a3 + 16, v33, 8);
        v27 = *(_QWORD *)a3;
        v31 = *(unsigned int *)(a3 + 8);
        v29 = 8 * v31;
        v30 = (char *)(*(_QWORD *)a3 + 8LL);
        v32 = (char *)(*(_QWORD *)a3 + 8 * v31);
      }
      *(_QWORD *)v32 = *(_QWORD *)(v27 + v29 - 8);
      if ( (char *)(*(_QWORD *)a3 + v29 - 8) != v30 )
      {
        memmove(&v30[*(_QWORD *)a3 + 8 - *(_QWORD *)a3], v30, *(_QWORD *)a3 + v29 - 8 - (_QWORD)v30);
        LODWORD(v31) = *(_DWORD *)(a3 + 8);
      }
      result = (unsigned int)(v31 + 1);
      *(_DWORD *)(a3 + 8) = result;
      *(_QWORD *)(v27 + 8) = v28;
    }
  }
  return result;
}
