unsigned __int64 __fastcall sub_F87280(__int64 a1, char *a2, unsigned __int64 a3)
{
  __int64 v4; // rbp
  __int64 v6; // rcx
  __int64 v7; // rdi
  int v8; // r10d
  unsigned int i; // eax
  char **v10; // rsi
  unsigned int v11; // eax
  unsigned __int64 v12; // r14
  _QWORD *v13; // rdx
  __int64 v15; // r9
  __int64 *v16; // r14
  unsigned __int64 v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 *v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // [rsp+8h] [rbp-440h] BYREF
  __int64 *v24; // [rsp+10h] [rbp-438h]
  __int64 *v25; // [rsp+18h] [rbp-430h]
  __m128 v26; // [rsp+20h] [rbp-428h] BYREF
  _QWORD v27[2]; // [rsp+30h] [rbp-418h] BYREF
  __int64 v28; // [rsp+40h] [rbp-408h] BYREF
  __m128 v29[2]; // [rsp+50h] [rbp-3F8h] BYREF
  __m128 v30; // [rsp+70h] [rbp-3D8h] BYREF
  char *v31; // [rsp+80h] [rbp-3C8h]
  __int64 v32; // [rsp+88h] [rbp-3C0h]
  _QWORD *v33; // [rsp+90h] [rbp-3B8h]
  __int64 v34; // [rsp+98h] [rbp-3B0h]
  _QWORD v35[66]; // [rsp+A0h] [rbp-3A8h] BYREF
  int v36; // [rsp+2B0h] [rbp-198h]
  char v37; // [rsp+2B4h] [rbp-194h]
  _QWORD v38[6]; // [rsp+2B8h] [rbp-190h] BYREF
  __int64 v39; // [rsp+2E8h] [rbp-160h] BYREF
  _QWORD *v40; // [rsp+3E8h] [rbp-60h] BYREF
  __int64 v41; // [rsp+3F0h] [rbp-58h]
  unsigned int v42; // [rsp+3F8h] [rbp-50h]
  __int64 v43; // [rsp+400h] [rbp-48h]

  v4 = a1 + 88;
  v6 = *(unsigned int *)(a1 + 104);
  v7 = *(_QWORD *)(a1 + 88);
  v23 = a3;
  v26 = _mm_loadh_ps((const double *)&v23);
  if ( (_DWORD)v6 )
  {
    v8 = 1;
    for ( i = (v6 - 1)
            & (((0xBF58476D1CE4E5B9LL
               * (((unsigned int)a3 >> 9) ^ ((unsigned int)a3 >> 4)
                | ((unsigned __int64)(((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4)) << 32))) >> 31)
             ^ (484763065 * (((unsigned int)a3 >> 9) ^ ((unsigned int)a3 >> 4)))); ; i = (v6 - 1) & v11 )
    {
      v10 = (char **)(v7 + 24LL * i);
      if ( a2 == *v10 && (char *)a3 == v10[1] )
        break;
      if ( *v10 == (char *)-4096LL && v10[1] == (char *)-4096LL )
        goto LABEL_7;
      v11 = v8 + i;
      ++v8;
    }
    sub_F7FA10(&v30, v10, (_QWORD *)(v7 + 24 * v6), v4, 1);
    v12 = v30.m128_u64[0];
  }
  else
  {
LABEL_7:
    sub_F7FA10(&v30, (_QWORD *)(v7 + 24 * v6), (_QWORD *)(v7 + 24 * v6), v4, 1);
    v12 = v30.m128_u64[0];
  }
  v13 = (_QWORD *)(*(_QWORD *)(a1 + 88) + 24LL * *(unsigned int *)(a1 + 104));
  sub_F7FA10(&v30, v13, v13, v4, 1);
  if ( v12 != v30.m128_u64[0] )
    return *(_QWORD *)(v12 + 16);
  v23 = (unsigned __int64)a2;
  v31 = a2;
  v30 = _mm_loadh_ps((const double *)&v23);
  v32 = sub_B8C330((__int64)a2);
  v33 = v35;
  v34 = 0x4000000000LL;
  v35[64] = v38;
  v38[4] = &v39;
  v38[5] = 0x1000000000LL;
  v35[65] = 4;
  v36 = 0;
  v37 = 1;
  v40 = nullptr;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  sub_F821D0((__int64)&v30, a2, 0, 0, 0, v15);
  if ( (_DWORD)v41 )
    sub_F7FB90(v29, v40, &v40[2 * v42], (__int64)&v40, 0);
  else
    sub_F7FB90(v29, &v40[2 * v42], &v40[2 * v42], (__int64)&v40, 1);
  v17 = v29[0].m128_u64[1];
  v16 = (__int64 *)v29[0].m128_u64[0];
  sub_F7FB90(v29, &v40[2 * v42], &v40[2 * v42], (__int64)&v40, 1);
  v25 = v27;
  v23 = v29[0].m128_u64[0];
  v24 = &v28;
  while ( v16 != (__int64 *)v23 )
  {
    v18 = *v16;
    v19 = v16[1];
    v27[0] = a2;
    v27[1] = v18;
    v28 = v19;
    sub_F87110((__m128i *)v29, v4, v25, v24);
    if ( v16 + 2 != (__int64 *)v17 )
    {
      v20 = v16[2];
      if ( v20 != -8192 && v20 != -4096 )
      {
        v16 += 2;
        continue;
      }
      v21 = v16 + 4;
      while ( 1 )
      {
        v16 = v21;
        if ( v21 == (__int64 *)v17 )
          break;
        v22 = *v21;
        v21 += 2;
        if ( v22 != -4096 && v22 != -8192 )
          goto LABEL_22;
      }
    }
    v16 = (__int64 *)v17;
LABEL_22:
    ;
  }
  v23 = *(_QWORD *)(sub_F7FA90(v4, (__int64 *)&v26) + 16);
  sub_F796E0((__int64)&v30);
  return v23;
}
