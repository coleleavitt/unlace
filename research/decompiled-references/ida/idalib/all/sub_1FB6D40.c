__int64 __fastcall sub_1FB6D40(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  char *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  unsigned int v18; // edi
  __int64 *v19; // rsi
  __int64 v20; // r8
  __int64 *v21; // rdx
  __int64 v22; // rax
  unsigned int v23; // eax
  __int64 v24; // rdx
  int v25; // r11d
  __int64 *v26; // r10
  int v27; // edi
  int v28; // edi
  bool v29; // zf
  __int64 *v30; // rdx
  __int64 v31; // rax
  unsigned __int64 v32; // r8
  __int64 v33; // r9
  __int64 *v34; // rax
  int v35; // edx
  __int64 v36; // rdx
  int v37; // esi
  int v38; // esi
  __int64 v39; // r8
  int v40; // edi
  __int64 v41; // r10
  unsigned __int64 v42; // [rsp+10h] [rbp-68h]
  __int64 v43; // [rsp+18h] [rbp-60h]
  __int64 v44; // [rsp+28h] [rbp-50h] BYREF
  __m128 v45[4]; // [rsp+30h] [rbp-48h] BYREF

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2);
  if ( result )
  {
    v12 = (char *)result;
    while ( v12[29] >= 0 )
    {
      if ( a3 )
      {
        v44 = 0;
        v23 = *(_DWORD *)(a4 + 16);
        if ( !v23 )
        {
          v45[0].m128_u64[0] = 0;
          goto LABEL_34;
        }
        v9 = *(__int64 **)a4;
        v24 = **(_QWORD **)a4;
        v19 = *(__int64 **)a4;
        if ( !v24 )
          goto LABEL_13;
        if ( v24 == -4096 )
        {
LABEL_25:
          v35 = *(_DWORD *)(a4 + 8);
          v45[0].m128_u64[0] = (unsigned __int64)v19;
          v8 = (unsigned int)(v35 + 1);
          v10 = (unsigned int)(4 * v8);
          if ( (unsigned int)v10 < 3 * v23 )
          {
            v10 = 0;
            v11 = v23 >> 3;
            if ( v23 - *(_DWORD *)(a4 + 12) - (unsigned int)v8 > (unsigned int)v11 )
              goto LABEL_27;
            v38 = v23;
LABEL_35:
            sub_1FB6B40((__int64 *)a4, v38, v8, (__int64)v9, v10, v11);
            sub_1FB49E0((__int64 *)a4, &v44, v45);
            v10 = v44;
            v9 = *(__int64 **)a4;
            v19 = (__int64 *)v45[0].m128_u64[0];
            LODWORD(v8) = *(_DWORD *)(a4 + 8) + 1;
LABEL_27:
            v29 = *v19 == -4096;
            *(_DWORD *)(a4 + 8) = v8;
            if ( !v29 )
              --*(_DWORD *)(a4 + 12);
            *((_DWORD *)v19 + 2) = 0;
            v36 = *(unsigned int *)(a4 + 16);
            *v19 = v10;
            v30 = &v9[2 * v36];
LABEL_21:
            sub_1FB4B10(v45, v19, v30, a4, 1);
            v31 = *(unsigned int *)(a4 + 32);
            v32 = v45[0].m128_u64[0];
            v33 = v44;
            if ( v31 + 1 > (unsigned __int64)*(unsigned int *)(a4 + 36) )
            {
              v43 = v44;
              v42 = v45[0].m128_u64[0];
              sub_2237220(a4 + 24, a4 + 40, v31 + 1, 16);
              v31 = *(unsigned int *)(a4 + 32);
              v33 = v43;
              v32 = v42;
            }
            v34 = (__int64 *)(*(_QWORD *)(a4 + 24) + 16 * v31);
            *v34 = v33;
            v34[1] = 0;
            v22 = *(unsigned int *)(a4 + 32);
            *(_DWORD *)(a4 + 32) = v22 + 1;
            *(_DWORD *)(v32 + 8) = v22;
LABEL_10:
            *(_QWORD *)(*(_QWORD *)(a4 + 24) + 16 * v22 + 8) = v12;
            goto LABEL_4;
          }
LABEL_34:
          v38 = 2 * v23;
          goto LABEL_35;
        }
        v39 = *(_QWORD *)a4;
        v40 = 1;
        v41 = 0;
        LODWORD(v11) = 0;
        while ( 1 )
        {
          if ( v41 || v24 != -8192 )
            v39 = v41;
          v11 = (v23 - 1) & (v40 + (_DWORD)v11);
          v19 = &v9[2 * (unsigned int)v11];
          v24 = *v19;
          if ( !*v19 )
            break;
          if ( v24 == -4096 )
          {
            if ( v39 )
              v19 = (__int64 *)v39;
            goto LABEL_25;
          }
          ++v40;
          v41 = v39;
          v39 = (__int64)&v9[2 * (unsigned int)v11];
        }
LABEL_13:
        v21 = &v9[2 * v23];
LABEL_9:
        sub_1FB4B10(v45, v19, v21, a4, 1);
        v22 = *(unsigned int *)(v45[0].m128_u64[0] + 8);
        goto LABEL_10;
      }
LABEL_4:
      result = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v12 + 48LL))(v12);
      v12 = (char *)result;
      if ( !result )
        return result;
    }
    v13 = sub_1EAB3B0(*(_QWORD *)(*(_QWORD *)a1 + 48LL), (__int64)v12);
    v17 = *(unsigned int *)(a4 + 16);
    v44 = v13;
    if ( (_DWORD)v17 )
    {
      v14 = *(_QWORD *)a4;
      v18 = (v17 - 1) & (((unsigned int)v13 >> 9) ^ ((unsigned int)v13 >> 4));
      v19 = (__int64 *)(*(_QWORD *)a4 + 16LL * v18);
      v20 = *v19;
      if ( v13 == *v19 )
      {
LABEL_8:
        v21 = (__int64 *)(16 * v17 + v14);
        goto LABEL_9;
      }
      v25 = 1;
      v26 = nullptr;
      if ( v20 != -4096 )
      {
        while ( 1 )
        {
          if ( !v26 && v20 == -8192 )
            v26 = v19;
          v18 = (v17 - 1) & (v25 + v18);
          v19 = (__int64 *)(v14 + 16LL * v18);
          v20 = *v19;
          if ( v13 == *v19 )
            goto LABEL_8;
          if ( v20 == -4096 )
          {
            if ( v26 )
              v19 = v26;
            break;
          }
          ++v25;
        }
      }
      v27 = *(_DWORD *)(a4 + 8);
      v15 = (unsigned int)(3 * v17);
      v45[0].m128_u64[0] = (unsigned __int64)v19;
      v28 = v27 + 1;
      v16 = (unsigned int)(4 * v28);
      if ( (unsigned int)v16 < (unsigned int)v15 )
      {
        v15 = (unsigned int)(v17 - *(_DWORD *)(a4 + 12) - v28);
        v16 = (unsigned int)v17 >> 3;
        if ( (unsigned int)v15 > (unsigned int)v16 )
        {
LABEL_18:
          v29 = *v19 == -4096;
          *(_DWORD *)(a4 + 8) = v28;
          if ( !v29 )
            --*(_DWORD *)(a4 + 12);
          *v19 = v13;
          *((_DWORD *)v19 + 2) = 0;
          v30 = (__int64 *)(16LL * *(unsigned int *)(a4 + 16) + v14);
          goto LABEL_21;
        }
        v37 = v17;
LABEL_32:
        sub_1FB6B40((__int64 *)a4, v37, v14, v17, v15, v16);
        sub_1FB49E0((__int64 *)a4, &v44, v45);
        v13 = v44;
        v14 = *(_QWORD *)a4;
        v19 = (__int64 *)v45[0].m128_u64[0];
        v28 = *(_DWORD *)(a4 + 8) + 1;
        goto LABEL_18;
      }
    }
    else
    {
      v45[0].m128_u64[0] = 0;
    }
    v37 = 2 * v17;
    goto LABEL_32;
  }
  return result;
}
