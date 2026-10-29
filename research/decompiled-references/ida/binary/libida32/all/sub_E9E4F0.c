__int64 __fastcall sub_E9E4F0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v8; // eax
  __int64 v9; // rdi
  unsigned int v10; // ecx
  unsigned __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // rax
  int v15; // r10d
  unsigned __int64 v16; // r11
  int v17; // ecx
  __int64 v18; // r8
  __int64 v19; // r9
  bool v20; // zf
  unsigned __int64 v21; // r13
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rdx
  __m128 *v25; // rsi
  __int64 v26; // rdi
  _BYTE *v27; // rdi
  unsigned __int64 v28; // rbp
  __int64 v29; // rdi
  __m128 v30; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v31; // [rsp+A0h] [rbp-B8h]
  _BYTE v32[176]; // [rsp+A8h] [rbp-B0h] BYREF

  v8 = *(_DWORD *)(a1 + 16);
  if ( !v8 )
  {
    v30.m128_u64[0] = 0;
LABEL_18:
    sub_E9E2F0((__int64 *)a1, 2 * v8, a3, a4, a5, a6);
LABEL_19:
    sub_E9D3D0((__int64 *)a1, a2, &v30);
    v9 = *(_QWORD *)a1;
    a3 = *a2;
    v11 = v30.m128_u64[0];
    LODWORD(a4) = *(_DWORD *)(a1 + 8) + 1;
    goto LABEL_8;
  }
  a3 = *a2;
  v9 = *(_QWORD *)a1;
  v10 = (v8 - 1) & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4));
  v11 = v9 + 16LL * v10;
  v12 = *(_QWORD *)v11;
  if ( *(_QWORD *)v11 == a3 )
  {
LABEL_3:
    sub_E9E010(&v30, (_QWORD *)v11, (_QWORD *)(v9 + 16LL * v8), a1, 1);
    v13 = *(unsigned int *)(v30.m128_u64[0] + 8);
    return *(_QWORD *)(a1 + 24) + 152 * v13 + 8;
  }
  v15 = 1;
  v16 = 0;
  if ( v12 != -4096 )
  {
    while ( 1 )
    {
      if ( v12 == -8192 && !v16 )
        v16 = v11;
      v10 = (v8 - 1) & (v15 + v10);
      v11 = v9 + 16LL * v10;
      v12 = *(_QWORD *)v11;
      if ( a3 == *(_QWORD *)v11 )
        goto LABEL_3;
      if ( v12 == -4096 )
      {
        if ( v16 )
          v11 = v16;
        break;
      }
      ++v15;
    }
  }
  v17 = *(_DWORD *)(a1 + 8);
  a5 = 3 * v8;
  v30.m128_u64[0] = v11;
  a4 = (unsigned int)(v17 + 1);
  a6 = (unsigned int)(4 * a4);
  if ( (unsigned int)a6 >= (unsigned int)a5 )
    goto LABEL_18;
  v18 = v8 - *(_DWORD *)(a1 + 12) - (unsigned int)a4;
  v19 = v8 >> 3;
  if ( (unsigned int)v18 <= (unsigned int)v19 )
  {
    sub_E9E2F0((__int64 *)a1, v8, a3, a4, v18, v19);
    goto LABEL_19;
  }
LABEL_8:
  v20 = *(_QWORD *)v11 == -4096;
  *(_DWORD *)(a1 + 8) = a4;
  if ( !v20 )
    --*(_DWORD *)(a1 + 12);
  *(_QWORD *)v11 = a3;
  *(_DWORD *)(v11 + 8) = 0;
  sub_E9E010(&v30, (_QWORD *)v11, (_QWORD *)(v9 + 16LL * *(unsigned int *)(a1 + 16)), a1, 1);
  v21 = v30.m128_u64[0];
  v30.m128_u64[0] = *a2;
  v31 = 0x800000000LL;
  v22 = *(unsigned int *)(a1 + 32);
  v30.m128_u64[1] = (unsigned __int64)v32;
  v23 = v22 + 1;
  if ( v22 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 36) )
  {
    v28 = *(_QWORD *)(a1 + 24);
    v29 = a1 + 24;
    if ( v28 > (unsigned __int64)&v30 || (unsigned __int64)&v30 >= v28 + 152 * v22 )
    {
      sub_E9E1D0(v29, v23);
      v24 = *(_QWORD *)(a1 + 24);
      v22 = *(unsigned int *)(a1 + 32);
      v25 = &v30;
    }
    else
    {
      sub_E9E1D0(v29, v23);
      v24 = *(_QWORD *)(a1 + 24);
      v22 = *(unsigned int *)(a1 + 32);
      v25 = (__m128 *)((char *)&v30 + v24 - v28);
    }
  }
  else
  {
    v24 = *(_QWORD *)(a1 + 24);
    v25 = &v30;
  }
  v26 = v24 + 152 * v22;
  *(_QWORD *)v26 = v25->m128_u64[0];
  *(_QWORD *)(v26 + 8) = v26 + 24;
  *(_QWORD *)(v26 + 16) = 0x800000000LL;
  if ( v25[1].m128_i32[0] )
    sub_E9E080((char ***)(v26 + 8), (char ***)&v25->m128_u64[1]);
  v13 = *(unsigned int *)(a1 + 32);
  v27 = (_BYTE *)v30.m128_u64[1];
  *(_DWORD *)(a1 + 32) = v13 + 1;
  if ( v27 != v32 )
  {
    free(v27);
    v13 = (unsigned int)(*(_DWORD *)(a1 + 32) - 1);
  }
  *(_DWORD *)(v21 + 8) = v13;
  return *(_QWORD *)(a1 + 24) + 152 * v13 + 8;
}

