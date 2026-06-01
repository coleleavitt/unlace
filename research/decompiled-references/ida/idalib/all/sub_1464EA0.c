void __fastcall sub_1464EA0(unsigned __int64 a1, __int64 a2, int a3, char a4)
{
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // r12
  int v12; // eax
  __int64 v13; // rsi
  _QWORD *v14; // rdx
  _QWORD *v15; // rdi
  __int64 v16; // r8
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 *v21; // rbx
  __int64 *v22; // r14
  __int64 v23; // rdi
  unsigned int v24; // edx
  __int64 *v25; // rsi
  __int64 v26; // r8
  __int64 v27; // rax
  int v28; // esi
  bool v29; // zf
  int v30; // r13d
  __int64 *v31; // r11
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  unsigned int v37; // edi
  __int64 *v38; // rsi
  __int64 v39; // r9
  int v40; // r11d
  __int64 *v41; // r10
  int v42; // edx
  int v43; // esi
  __int64 v44; // [rsp+8h] [rbp-60h] BYREF
  char v45; // [rsp+1Fh] [rbp-49h] BYREF
  __m128 v46[4]; // [rsp+20h] [rbp-48h] BYREF

  v5 = *(_QWORD *)(a1 + 1704);
  v44 = a2;
  v46[0].m128_u64[0] = a1;
  sub_FF1730(v5 + 24, a2, a3, a4, (__int64)nullsub_684, (__int64)&v45, (char)sub_145BD30);
  v8 = *(unsigned int *)(a1 + 1336);
  if ( !(_DWORD)v8 )
    return;
  v9 = *(_QWORD *)(a1 + 1328) + 32 * v8;
  v10 = v44;
  v11 = *(_QWORD *)(v9 - 32);
  if ( v11 == v44 )
    return;
  v12 = *(_DWORD *)(v11 + 928);
  if ( v12 )
  {
    v35 = *(unsigned int *)(v11 + 936);
    v36 = v11 + 920;
    if ( (_DWORD)v35 )
    {
      v6 = *(_QWORD *)(v11 + 920);
      v37 = (v35 - 1) & (((unsigned int)v44 >> 9) ^ ((unsigned int)v44 >> 4));
      v38 = (__int64 *)(v6 + 8LL * v37);
      v39 = *v38;
      if ( v44 == *v38 )
      {
LABEL_44:
        sub_A8BB00(v46, v38, (_QWORD *)(v6 + 8 * v35), v36, 1);
        return;
      }
      v30 = 1;
      v31 = nullptr;
      if ( v39 != -4096 )
      {
        while ( 1 )
        {
          if ( !v31 && v39 == -8192 )
            v31 = v38;
          v37 = (v35 - 1) & (v30 + v37);
          v38 = (__int64 *)(v6 + 8LL * v37);
          v39 = *v38;
          if ( v44 == *v38 )
            goto LABEL_44;
          if ( v39 == -4096 )
          {
            if ( v31 )
              v38 = v31;
            break;
          }
          ++v30;
        }
      }
      v32 = v12 + 1;
      v46[0].m128_u64[0] = (unsigned __int64)v38;
      v7 = (unsigned int)(4 * v32);
      if ( (unsigned int)v7 < 3 * (int)v35 )
      {
        v7 = (unsigned int)v35 >> 3;
        if ( (int)v35 - *(_DWORD *)(v11 + 932) - v32 > (unsigned int)v7 )
        {
LABEL_36:
          v29 = *v38 == -4096;
          *(_DWORD *)(v11 + 928) = v32;
          if ( !v29 )
            --*(_DWORD *)(v11 + 932);
          *v38 = v10;
          sub_A8BB00(v46, v38, (_QWORD *)(v6 + 8 * v35), v36, 1);
          v33 = *(unsigned int *)(v11 + 952);
          v34 = v44;
          if ( v33 + 1 > (unsigned __int64)*(unsigned int *)(v11 + 956) )
          {
            sub_2237220(v11 + 944, v11 + 960, v33 + 1, 8);
            v33 = *(unsigned int *)(v11 + 952);
          }
          *(_QWORD *)(*(_QWORD *)(v11 + 944) + 8 * v33) = v34;
          ++*(_DWORD *)(v11 + 952);
          return;
        }
        v43 = v35;
LABEL_62:
        sub_AB4280(v11 + 920, v43, v35, v36, v6, v7);
        sub_12EEFE0((__int64 *)(v11 + 920), &v44, v46);
        v10 = v44;
        v6 = *(_QWORD *)(v11 + 920);
        v35 = *(unsigned int *)(v11 + 936);
        v32 = *(_DWORD *)(v11 + 928) + 1;
        v38 = (__int64 *)v46[0].m128_u64[0];
        v36 = v11 + 920;
        goto LABEL_36;
      }
    }
    else
    {
      v46[0].m128_u64[0] = 0;
    }
    v43 = 2 * v35;
    goto LABEL_62;
  }
  v13 = *(unsigned int *)(v11 + 952);
  v14 = *(_QWORD **)(v11 + 944);
  v15 = &v14[v13];
  v16 = (8 * v13) >> 3;
  v17 = (8 * v13) >> 5;
  if ( !v17 )
  {
    v18 = *(_QWORD **)(v11 + 944);
    goto LABEL_17;
  }
  if ( v44 == *v14 )
  {
    v18 = *(_QWORD **)(v11 + 944);
    goto LABEL_46;
  }
  v18 = v14 + 1;
  if ( v44 != v14[1] )
  {
    v18 = v14 + 2;
    if ( v44 != v14[2] )
    {
      v18 = v14 + 3;
      v17 = (__int64)&v14[4 * v17];
      if ( v44 != v14[3] )
      {
        while ( 1 )
        {
          v18 = v14 + 4;
          if ( (_QWORD *)v17 == v14 + 4 )
            break;
          if ( v44 == v14[4] )
            goto LABEL_46;
          if ( v44 == v14[5] )
          {
            v18 = v14 + 5;
            goto LABEL_46;
          }
          if ( v44 == v14[6] )
          {
            v18 = v14 + 6;
            goto LABEL_46;
          }
          if ( v44 == v14[7] )
          {
            v18 = v14 + 7;
            goto LABEL_46;
          }
          v14 += 4;
        }
        v16 = v15 - v18;
LABEL_17:
        if ( v16 != 2 )
        {
          if ( v16 != 3 )
          {
            if ( v16 != 1 )
              goto LABEL_20;
            goto LABEL_54;
          }
          if ( v44 == *v18 )
            goto LABEL_46;
          ++v18;
        }
        if ( v44 == *v18 )
          goto LABEL_46;
        ++v18;
LABEL_54:
        if ( v44 != *v18 )
          goto LABEL_20;
      }
    }
  }
LABEL_46:
  if ( v15 != v18 )
    return;
LABEL_20:
  v19 = v13 + 1;
  if ( v13 + 1 > (unsigned __int64)*(unsigned int *)(v11 + 956) )
  {
    sub_2237220(v11 + 944, v11 + 960, v19, 8);
    v19 = *(unsigned int *)(v11 + 952);
    v15 = (_QWORD *)(*(_QWORD *)(v11 + 944) + 8 * v19);
  }
  *v15 = v44;
  v20 = (unsigned int)(*(_DWORD *)(v11 + 952) + 1);
  *(_DWORD *)(v11 + 952) = v20;
  if ( (unsigned int)v20 > 2 )
  {
    v21 = *(__int64 **)(v11 + 944);
    v22 = &v21[v20];
    while ( 1 )
    {
      v27 = *(unsigned int *)(v11 + 936);
      if ( !(_DWORD)v27 )
        break;
      v17 = *v21;
      v23 = *(_QWORD *)(v11 + 920);
      v24 = (v27 - 1) & (((unsigned int)*v21 >> 9) ^ ((unsigned int)*v21 >> 4));
      v25 = (__int64 *)(v23 + 8LL * v24);
      v26 = *v25;
      if ( *v21 != *v25 )
      {
        v40 = 1;
        v41 = nullptr;
        if ( v26 != -4096 )
        {
          while ( 1 )
          {
            if ( !v41 && v26 == -8192 )
              v41 = v25;
            v24 = (v27 - 1) & (v40 + v24);
            v25 = (__int64 *)(v23 + 8LL * v24);
            v26 = *v25;
            if ( v17 == *v25 )
              goto LABEL_25;
            if ( v26 == -4096 )
            {
              if ( v41 )
                v25 = v41;
              break;
            }
            ++v40;
          }
        }
        v42 = *(_DWORD *)(v11 + 928);
        v16 = (unsigned int)(3 * v27);
        v46[0].m128_u64[0] = (unsigned __int64)v25;
        v19 = (unsigned int)(v42 + 1);
        v7 = (unsigned int)(4 * v19);
        if ( (unsigned int)v7 < (unsigned int)v16 )
        {
          v16 = (unsigned int)(v27 - *(_DWORD *)(v11 + 932) - v19);
          v7 = (unsigned int)v27 >> 3;
          if ( (unsigned int)v16 <= (unsigned int)v7 )
          {
            v28 = v27;
LABEL_29:
            sub_AB4280(v11 + 920, v28, v19, v17, v16, v7);
            sub_12EEFE0((__int64 *)(v11 + 920), v21, v46);
            v17 = *v21;
            v23 = *(_QWORD *)(v11 + 920);
            v27 = *(unsigned int *)(v11 + 936);
            LODWORD(v19) = *(_DWORD *)(v11 + 928) + 1;
            v25 = (__int64 *)v46[0].m128_u64[0];
          }
          v29 = *v25 == -4096;
          *(_DWORD *)(v11 + 928) = v19;
          if ( !v29 )
            --*(_DWORD *)(v11 + 932);
          *v25 = v17;
          goto LABEL_25;
        }
LABEL_28:
        v28 = 2 * v27;
        goto LABEL_29;
      }
LABEL_25:
      sub_A8BB00(v46, v25, (_QWORD *)(v23 + 8 * v27), v11 + 920, 1);
      if ( v22 == ++v21 )
        return;
    }
    v46[0].m128_u64[0] = 0;
    goto LABEL_28;
  }
}
