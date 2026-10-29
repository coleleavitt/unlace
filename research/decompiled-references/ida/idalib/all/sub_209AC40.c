__int64 __fastcall sub_209AC40(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 *v6; // r12
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 v11; // rdx
  unsigned int v12; // ecx
  __int64 *v13; // rsi
  __int64 v14; // r8
  unsigned __int64 v15; // r14
  __int64 *v16; // rdx
  int v17; // esi
  __int64 *v18; // r12
  __int64 result; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r13
  __int64 v23; // rdx
  unsigned int v24; // ecx
  __int64 *v25; // rsi
  __int64 v26; // r8
  unsigned __int64 v27; // r14
  __int64 *v28; // rdx
  __int64 v29; // r13
  int v30; // esi
  int v31; // r8d
  int v32; // r8d
  __int64 v33; // [rsp+0h] [rbp-78h]
  __int64 v34; // [rsp+0h] [rbp-78h]
  __int64 *v35; // [rsp+8h] [rbp-70h]
  __int64 *v36; // [rsp+8h] [rbp-70h]
  __int64 v38; // [rsp+18h] [rbp-60h]
  __int64 v39; // [rsp+18h] [rbp-60h]
  __int64 v40; // [rsp+28h] [rbp-50h]
  __m128 v41[4]; // [rsp+30h] [rbp-48h] BYREF

  v5 = sub_209A570(*(_QWORD *)(a1 + 8), a4);
  v6 = *(__int64 **)(v5 + 144);
  v38 = v5;
  v35 = &v6[*(unsigned int *)(v5 + 152)];
  if ( v35 != v6 )
  {
    v33 = a1 + 208;
    while ( 1 )
    {
      v9 = *(unsigned int *)(a1 + 224);
      v10 = *v6;
      v11 = *(_QWORD *)(a1 + 208);
      if ( !(_DWORD)v9 )
        break;
      v12 = (v9 - 1) & (((unsigned int)v10 >> 9) ^ ((unsigned int)v10 >> 4));
      v13 = (__int64 *)(v11 + 16LL * v12);
      v14 = *v13;
      if ( v10 != *v13 )
      {
        v17 = 1;
        if ( v14 == -4096 )
          break;
        while ( 1 )
        {
          v32 = v17 + 1;
          v12 = (v9 - 1) & (v17 + v12);
          v13 = (__int64 *)(v11 + 16LL * v12);
          if ( v10 == *v13 )
            break;
          if ( *v13 == -4096 )
            goto LABEL_15;
          v17 = v32;
        }
      }
      sub_2097C80(v41, v13, (__int64 *)(16 * v9 + v11), v33, 1);
      v15 = v41[0].m128_u64[0];
LABEL_12:
      v16 = (__int64 *)(*(_QWORD *)(a1 + 208) + 16LL * *(unsigned int *)(a1 + 224));
      sub_2097C80(v41, v16, v16, v33, 1);
      if ( v15 == v41[0].m128_u64[0] )
        v7 = sub_2097D10(*(_QWORD *)(a1 + 8), v10);
      else
        v7 = *(_QWORD *)(v15 + 8);
      if ( v7 )
      {
        v8 = *(unsigned int *)(a2 + 8);
        if ( v8 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
        {
          v40 = v7;
          sub_2237220(a2, a2 + 16, v8 + 1, 8);
          v8 = *(unsigned int *)(a2 + 8);
          v7 = v40;
        }
        *(_QWORD *)(*(_QWORD *)a2 + 8 * v8) = v7;
        ++*(_DWORD *)(a2 + 8);
      }
      if ( v35 == ++v6 )
        goto LABEL_16;
    }
LABEL_15:
    sub_2097C80(v41, (__int64 *)(v11 + 16LL * (unsigned int)v9), (__int64 *)(v11 + 16LL * (unsigned int)v9), v33, 1);
    v15 = v41[0].m128_u64[0];
    goto LABEL_12;
  }
LABEL_16:
  v18 = *(__int64 **)v38;
  result = *(_QWORD *)v38 + 8LL * *(unsigned int *)(v38 + 8);
  v36 = (__int64 *)result;
  if ( *(_QWORD *)v38 != result )
  {
    v34 = a1 + 208;
    while ( 1 )
    {
      v21 = *(unsigned int *)(a1 + 224);
      v22 = *v18;
      v23 = *(_QWORD *)(a1 + 208);
      if ( !(_DWORD)v21 )
        break;
      v24 = (v21 - 1) & (((unsigned int)v22 >> 9) ^ ((unsigned int)v22 >> 4));
      v25 = (__int64 *)(v23 + 16LL * v24);
      v26 = *v25;
      if ( v22 != *v25 )
      {
        v30 = 1;
        if ( v26 == -4096 )
          break;
        while ( 1 )
        {
          v31 = v30 + 1;
          v24 = (v21 - 1) & (v30 + v24);
          v25 = (__int64 *)(v23 + 16LL * v24);
          if ( v22 == *v25 )
            break;
          if ( *v25 == -4096 )
            goto LABEL_32;
          v30 = v31;
        }
      }
      sub_2097C80(v41, v25, (__int64 *)(16 * v21 + v23), v34, 1);
      v27 = v41[0].m128_u64[0];
LABEL_25:
      v28 = (__int64 *)(*(_QWORD *)(a1 + 208) + 16LL * *(unsigned int *)(a1 + 224));
      sub_2097C80(v41, v28, v28, v34, 1);
      if ( v41[0].m128_u64[0] == v27 )
      {
        result = sub_2097D10(*(_QWORD *)(a1 + 8), v22);
        if ( !result )
          goto LABEL_27;
LABEL_19:
        v20 = *(unsigned int *)(a2 + 8);
        if ( v20 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
        {
          v39 = result;
          sub_2237220(a2, a2 + 16, v20 + 1, 8);
          v20 = *(unsigned int *)(a2 + 8);
          result = v39;
        }
        ++v18;
        *(_QWORD *)(*(_QWORD *)a2 + 8 * v20) = result;
        ++*(_DWORD *)(a2 + 8);
        if ( v36 == v18 )
          return result;
      }
      else
      {
        result = *(_QWORD *)(v27 + 8);
        if ( result )
          goto LABEL_19;
LABEL_27:
        v29 = *v18;
        result = *(unsigned int *)(a3 + 8);
        if ( result + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
        {
          sub_2237220(a3, a3 + 16, result + 1, 8);
          result = *(unsigned int *)(a3 + 8);
        }
        ++v18;
        *(_QWORD *)(*(_QWORD *)a3 + 8 * result) = v29;
        ++*(_DWORD *)(a3 + 8);
        if ( v36 == v18 )
          return result;
      }
    }
LABEL_32:
    sub_2097C80(v41, (__int64 *)(v23 + 16LL * (unsigned int)v21), (__int64 *)(v23 + 16LL * (unsigned int)v21), v34, 1);
    v27 = v41[0].m128_u64[0];
    goto LABEL_25;
  }
  return result;
}
