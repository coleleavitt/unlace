__int64 __fastcall sub_F63DE0(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r10
  __int64 v10; // r9
  __int64 *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rcx
  bool v16; // zf
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rbp
  __int64 v20; // rdx
  __int64 v21; // rbp
  __int64 v22; // rax
  __int64 *v23; // rbp
  __int64 *v24; // r13
  __int64 v25; // rdi
  unsigned int v26; // edx
  __int64 *v27; // rsi
  __int64 v28; // r8
  __int64 v29; // rax
  int v30; // esi
  int v31; // r10d
  __int64 *v32; // r11
  int v33; // edx
  __int64 *v34; // [rsp+8h] [rbp-40h] BYREF
  __m128 v35[3]; // [rsp+10h] [rbp-38h] BYREF

  if ( !*(_DWORD *)(a1 + 8) )
  {
    v4 = sub_F567B0(*(_QWORD **)(a1 + 24), *(_QWORD *)(a1 + 24) + 8LL * *(unsigned int *)(a1 + 32), a2);
    if ( (_QWORD *)v7 != v4 )
      return 0;
    v20 = v8 + 1;
    v21 = *a2;
    if ( v8 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 36) )
    {
      sub_22134E0(a1 + 24, a1 + 40, v20, 8);
      v20 = *(unsigned int *)(a1 + 32);
      v7 = *(_QWORD *)(a1 + 24) + 8 * v20;
    }
    *(_QWORD *)v7 = v21;
    v22 = (unsigned int)(*(_DWORD *)(a1 + 32) + 1);
    *(_DWORD *)(a1 + 32) = v22;
    if ( (unsigned int)v22 > 8 )
    {
      v23 = *(__int64 **)(a1 + 24);
      v24 = &v23[v22];
      while ( 1 )
      {
        v29 = *(unsigned int *)(a1 + 16);
        if ( !(_DWORD)v29 )
          break;
        v5 = *v23;
        v25 = *(_QWORD *)a1;
        v26 = (v29 - 1) & (((unsigned int)*v23 >> 9) ^ ((unsigned int)*v23 >> 4));
        v27 = (__int64 *)(*(_QWORD *)a1 + 8LL * v26);
        v28 = *v27;
        if ( *v23 != *v27 )
        {
          v31 = 1;
          v32 = nullptr;
          if ( v28 != -4096 )
          {
            while ( 1 )
            {
              if ( !v32 && v28 == -8192 )
                v32 = v27;
              v26 = (v29 - 1) & (v31 + v26);
              v27 = (__int64 *)(v25 + 8LL * v26);
              v28 = *v27;
              if ( v5 == *v27 )
                goto LABEL_19;
              if ( v28 == -4096 )
              {
                if ( v32 )
                  v27 = v32;
                break;
              }
              ++v31;
            }
          }
          v33 = *(_DWORD *)(a1 + 8);
          v6 = (unsigned int)(3 * v29);
          v35[0].m128_u64[0] = (unsigned __int64)v27;
          v20 = (unsigned int)(v33 + 1);
          v7 = (unsigned int)(4 * v20);
          if ( (unsigned int)v7 < (unsigned int)v6 )
          {
            v6 = (unsigned int)(v29 - *(_DWORD *)(a1 + 12) - v20);
            v7 = (unsigned int)v29 >> 3;
            if ( (unsigned int)v6 <= (unsigned int)v7 )
            {
              v30 = v29;
LABEL_23:
              sub_F63B80(a1, v30, v20, v5, v6, v7);
              sub_F5C450((__int64 *)a1, v23, v35);
              v5 = *v23;
              v25 = *(_QWORD *)a1;
              v29 = *(unsigned int *)(a1 + 16);
              LODWORD(v20) = *(_DWORD *)(a1 + 8) + 1;
              v27 = (__int64 *)v35[0].m128_u64[0];
            }
            v16 = *v27 == -4096;
            *(_DWORD *)(a1 + 8) = v20;
            if ( !v16 )
              --*(_DWORD *)(a1 + 12);
            *v27 = v5;
            goto LABEL_19;
          }
LABEL_22:
          v30 = 2 * v29;
          goto LABEL_23;
        }
LABEL_19:
        sub_F60500(v35, v27, (_QWORD *)(v25 + 8 * v29), a1, 1);
        if ( v24 == ++v23 )
          return 1;
      }
      v35[0].m128_u64[0] = 0;
      goto LABEL_22;
    }
    return 1;
  }
  if ( !(unsigned __int8)sub_F5C450((__int64 *)a1, a2, &v34) )
  {
    v11 = v34;
    v12 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
    v13 = *(unsigned int *)(a1 + 16);
    v35[0].m128_u64[0] = (unsigned __int64)v34;
    v14 = (unsigned int)(4 * v12);
    if ( (unsigned int)v14 >= 3 * (int)v13 )
    {
      sub_F63B80(a1, 2 * v13, v12, (unsigned int)(2 * v13), v14, v10);
    }
    else
    {
      v15 = (unsigned int)(v13 - *(_DWORD *)(a1 + 12) - v12);
      if ( (unsigned int)v15 > (unsigned int)v13 >> 3 )
      {
LABEL_7:
        v16 = *v11 == -4096;
        *(_DWORD *)(a1 + 8) = v12;
        if ( !v16 )
          --*(_DWORD *)(a1 + 12);
        *v11 = *a2;
        v17 = *(_QWORD *)a1;
        v34 = v11;
        sub_F60500(v35, v11, (_QWORD *)(v17 + 8 * v13), a1, 1);
        v18 = *(unsigned int *)(a1 + 32);
        v19 = *a2;
        if ( v18 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 36) )
        {
          sub_22134E0(a1 + 24, a1 + 40, v18 + 1, 8);
          v18 = *(unsigned int *)(a1 + 32);
        }
        *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v18) = v19;
        ++*(_DWORD *)(a1 + 32);
        return 1;
      }
      sub_F63B80(a1, v13, v12, v15, v14, v10);
    }
    sub_F5C450((__int64 *)a1, a2, v35);
    v13 = *(unsigned int *)(a1 + 16);
    v11 = (__int64 *)v35[0].m128_u64[0];
    LODWORD(v12) = *(_DWORD *)(a1 + 8) + 1;
    goto LABEL_7;
  }
  sub_F60500(v35, v34, (_QWORD *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 16)), a1, 1);
  return 0;
}

