__int64 __fastcall sub_2085CB0(__int64 *a1, int a2, __int8 a3, unsigned __int64 a4, unsigned int a5, char a6)
{
  __int64 v9; // r14
  unsigned int v10; // ecx
  __int64 v11; // r12
  int v12; // eax
  int v13; // r8d
  unsigned int v14; // eax
  __int64 *v15; // rsi
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  _QWORD *v18; // rdx
  __int64 result; // rax
  __int64 v20; // r9
  _QWORD *v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // rcx
  bool v26; // zf
  __int64 v27; // rdx
  unsigned __int8 v28; // r10
  __int64 v29; // rcx
  __int64 v30; // [rsp-8h] [rbp-B0h]
  __int64 v32; // [rsp+8h] [rbp-A0h]
  __int64 v33; // [rsp+8h] [rbp-A0h]
  int v35; // [rsp+18h] [rbp-90h]
  __int64 *v36; // [rsp+18h] [rbp-90h]
  __int64 v37; // [rsp+20h] [rbp-88h] BYREF
  _QWORD *v38; // [rsp+28h] [rbp-80h] BYREF
  __m128 v39; // [rsp+30h] [rbp-78h] BYREF
  __m128 v40[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v41; // [rsp+60h] [rbp-48h]
  unsigned __int64 v42; // [rsp+68h] [rbp-40h]

  v9 = *a1;
  if ( a5 )
    goto LABEL_15;
  v39.m128_i32[0] = a2;
  v39.m128_u64[1] = a4;
  v39.m128_i8[4] = a3;
  v10 = *(_DWORD *)(v9 + 824);
  v32 = v9 + 808;
  v11 = *(_QWORD *)(v9 + 808);
  if ( !v10 )
    goto LABEL_10;
  v35 = *(_DWORD *)(v9 + 824);
  v12 = sub_2070CD0(a2, &v39.m128_i8[4], &v39.m128_i64[1]);
  v13 = 1;
  v14 = (v35 - 1) & v12;
  v15 = (__int64 *)(v11 + 8LL * v14);
  v16 = *v15;
  if ( *v15 == -4096 )
  {
LABEL_9:
    v11 = *(_QWORD *)(v9 + 808);
    v10 = *(_DWORD *)(v9 + 824);
LABEL_10:
    sub_2081F40(v40, (_QWORD *)(v11 + 8LL * v10), (_QWORD *)(v11 + 8LL * v10), v32, 1);
    v17 = v40[0].m128_u64[0];
    goto LABEL_11;
  }
  while ( 1 )
  {
    if ( v16 != -8192 && v39.m128_i32[0] == *(_DWORD *)(v16 + 20) && v39.m128_i8[4] == *(_BYTE *)(v16 + 28) )
    {
      v28 = *(_BYTE *)(v16 - 16);
      v29 = (v28 & 2) != 0 ? *(_QWORD *)(v16 - 32) : -16 - 8LL * ((v28 >> 2) & 0xF) + v16;
      if ( v39.m128_u64[1] == *(_QWORD *)(v29 + 40) )
        break;
    }
    v14 = (v35 - 1) & (v13 + v14);
    v15 = (__int64 *)(v11 + 8LL * v14);
    v16 = *v15;
    if ( *v15 == -4096 )
      goto LABEL_9;
    ++v13;
  }
  sub_2081F40(v40, v15, (_QWORD *)(*(_QWORD *)(v9 + 808) + 8LL * *(unsigned int *)(v9 + 824)), v32, 1);
  v17 = v40[0].m128_u64[0];
LABEL_11:
  v36 = (__int64 *)v17;
  v18 = (_QWORD *)(*(_QWORD *)(v9 + 808) + 8LL * *(unsigned int *)(v9 + 824));
  sub_2081F40(v40, v18, v18, v32, 1);
  if ( (__int64 *)v40[0].m128_u64[0] == v36 || (result = *v36) == 0 )
  {
    if ( !a6 )
      return 0;
    v9 = *a1;
LABEL_15:
    memset(v40, 0, sizeof(v40));
    v41 = 0;
    v42 = a4;
    v33 = sub_20B4330(32, 6, a5);
    sub_20B2FD0(v33, (_DWORD)a1, 15, a5, (unsigned int)v40, 6, 0, 0);
    result = v33;
    *(_WORD *)(v33 + 2) = 21;
    *(_DWORD *)(v33 + 4) = 0;
    *(_DWORD *)(v33 + 16) = 0;
    *(_DWORD *)(v33 + 20) = a2;
    *(_DWORD *)(v33 + 24) = 0;
    *(_BYTE *)(v33 + 28) = a3;
    v37 = v33;
    if ( a5 )
    {
      if ( a5 != 1 )
        return result;
      sub_20AC2A0(v33, v30, 21);
      return v37;
    }
    if ( (unsigned __int8)sub_207F8F0((__int64 *)(v9 + 808), &v37, &v38) )
    {
      sub_2081F40(&v39, v38, (_QWORD *)(*(_QWORD *)(v9 + 808) + 8LL * *(unsigned int *)(v9 + 824)), v9 + 808, 1);
      return v37;
    }
    v21 = v38;
    v22 = (unsigned int)(*(_DWORD *)(v9 + 816) + 1);
    v23 = *(unsigned int *)(v9 + 824);
    v39.m128_u64[0] = (unsigned __int64)v38;
    v24 = (unsigned int)(4 * v22);
    if ( (unsigned int)v24 >= 3 * (int)v23 )
    {
      sub_20859C0((__m128i **)(v9 + 808), 2 * v23, v22, (unsigned int)(2 * v23), v24, v20);
    }
    else
    {
      v25 = (unsigned int)(v23 - *(_DWORD *)(v9 + 820) - v22);
      if ( (unsigned int)v25 > (unsigned int)v23 >> 3 )
      {
LABEL_23:
        v26 = *v21 == -4096;
        *(_DWORD *)(v9 + 816) = v22;
        if ( !v26 )
          --*(_DWORD *)(v9 + 820);
        *v21 = v37;
        v27 = *(_QWORD *)(v9 + 808);
        v38 = v21;
        sub_2081F40(&v39, v21, (_QWORD *)(v27 + 8 * v23), v9 + 808, 1);
        return v37;
      }
      sub_20859C0((__m128i **)(v9 + 808), v23, v22, v25, v24, (__int64)&v39);
    }
    sub_207F8F0((__int64 *)(v9 + 808), &v37, &v39);
    v23 = *(unsigned int *)(v9 + 824);
    v21 = (_QWORD *)v39.m128_u64[0];
    LODWORD(v22) = *(_DWORD *)(v9 + 816) + 1;
    goto LABEL_23;
  }
  return result;
}
