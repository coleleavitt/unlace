void __fastcall sub_1EFEEE0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  int v7; // eax
  __int64 v9; // rbp
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rsi
  unsigned __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned int v18; // edi
  __int64 *v19; // rsi
  __int64 v20; // r9
  __int64 *v21; // rbp
  __int64 *v22; // r15
  __int64 v23; // rdi
  unsigned int v24; // edx
  __int64 *v25; // rsi
  __int64 v26; // r8
  __int64 v27; // rax
  int v28; // esi
  bool v29; // zf
  int v30; // r11d
  __int64 *v31; // r15
  __int64 v32; // rax
  __int64 v33; // r15
  int v34; // r11d
  int v35; // edx
  int v36; // esi
  __int64 v37; // [rsp+10h] [rbp-78h]
  __int64 v38; // [rsp+18h] [rbp-70h]
  __int64 v39; // [rsp+20h] [rbp-68h]
  __int64 v40; // [rsp+20h] [rbp-68h]
  __int64 v41; // [rsp+38h] [rbp-50h] BYREF
  __m128 v42[4]; // [rsp+40h] [rbp-48h] BYREF

  v7 = *(_DWORD *)(a1 + 7776);
  if ( !v7 )
    goto LABEL_26;
  v9 = 0;
  v10 = 8LL * (unsigned int)(v7 - 1) + 8;
  v37 = a2 + 40;
  v38 = a2 + 24;
  while ( 2 )
  {
    while ( 1 )
    {
      v11 = sub_1EDB980((_QWORD *)a1, *(_QWORD *)(*(_QWORD *)(a1 + 7768) + v9), a3, a4, a5, a6);
      if ( !v11 )
        break;
      a3 = (*(_BYTE *)(v11 + 28) & 0x7Fu) - 64;
      if ( (unsigned int)a3 > 2 )
        break;
      v12 = *(unsigned int *)(a2 + 8);
      v41 = v11;
      if ( !(_DWORD)v12 )
      {
        v13 = *(unsigned int *)(a2 + 32);
        a4 = *(_QWORD *)(a2 + 24);
        a5 = a4 + 8 * v13;
        v14 = (8 * v13) >> 3;
        if ( (8 * v13) >> 5 )
        {
          if ( v11 == *(_QWORD *)a4 )
          {
            a3 = *(_QWORD *)(a2 + 24);
          }
          else if ( v11 == *(_QWORD *)(a4 + 8) )
          {
            a3 = a4 + 8;
          }
          else
          {
            if ( v11 != *(_QWORD *)(a4 + 16) )
            {
              v15 = a4 + 32 * ((8 * v13) >> 5);
              a3 = a4 + 24;
              if ( v11 == *(_QWORD *)(a4 + 24) )
                goto LABEL_28;
              while ( 1 )
              {
                a3 = a4 + 32;
                if ( v15 == a4 + 32 )
                {
                  v14 = (a5 - a3) >> 3;
                  goto LABEL_19;
                }
                if ( v11 == *(_QWORD *)(a4 + 32) )
                  goto LABEL_28;
                if ( v11 == *(_QWORD *)(a4 + 40) )
                {
                  a3 = a4 + 40;
                  goto LABEL_28;
                }
                if ( v11 == *(_QWORD *)(a4 + 48) )
                {
                  a3 = a4 + 48;
                  if ( a5 != a4 + 48 )
                    goto LABEL_29;
                  goto LABEL_22;
                }
                if ( v11 == *(_QWORD *)(a4 + 56) )
                  break;
                a4 += 32LL;
              }
              a3 = a4 + 56;
              if ( a5 != a4 + 56 )
                goto LABEL_29;
LABEL_22:
              a4 = *(unsigned int *)(a2 + 36);
              a3 = v13 + 1;
              if ( v13 + 1 > a4 )
              {
                v40 = v11;
                sub_2237220(v38, v37, a3, 8);
                a4 = *(unsigned int *)(a2 + 32);
                a3 = *(_QWORD *)(a2 + 24);
                v11 = v40;
                a5 = a3 + 8 * a4;
              }
              *(_QWORD *)a5 = v11;
              v16 = (unsigned int)(*(_DWORD *)(a2 + 32) + 1);
              *(_DWORD *)(a2 + 32) = v16;
              if ( (unsigned int)v16 <= 4 )
                break;
              v39 = v9;
              v21 = *(__int64 **)(a2 + 24);
              v22 = &v21[v16];
LABEL_48:
              v27 = *(unsigned int *)(a2 + 16);
              if ( !(_DWORD)v27 )
              {
                v42[0].m128_u64[0] = 0;
                goto LABEL_50;
              }
              a4 = *v21;
              v23 = *(_QWORD *)a2;
              v24 = (v27 - 1) & (((unsigned int)*v21 >> 9) ^ ((unsigned int)*v21 >> 4));
              v25 = (__int64 *)(*(_QWORD *)a2 + 8LL * v24);
              v26 = *v25;
              if ( *v21 == *v25 )
              {
LABEL_47:
                sub_17AD1A0(v42, v25, (_QWORD *)(v23 + 8 * v27), a2, 1);
                if ( v22 == ++v21 )
                {
                  v9 = v39 + 8;
                  if ( v10 == v39 + 8 )
                    goto LABEL_26;
                  continue;
                }
                goto LABEL_48;
              }
              v34 = 1;
              a6 = 0;
              if ( v26 != -4096 )
              {
                while ( 1 )
                {
                  if ( !a6 && v26 == -8192 )
                    a6 = (__int64)v25;
                  v24 = (v27 - 1) & (v34 + v24);
                  v25 = (__int64 *)(v23 + 8LL * v24);
                  v26 = *v25;
                  if ( a4 == *v25 )
                    goto LABEL_47;
                  if ( v26 == -4096 )
                  {
                    if ( a6 )
                      v25 = (__int64 *)a6;
                    break;
                  }
                  ++v34;
                }
              }
              v35 = *(_DWORD *)(a2 + 8);
              a5 = (unsigned int)(3 * v27);
              v42[0].m128_u64[0] = (unsigned __int64)v25;
              a3 = (unsigned int)(v35 + 1);
              if ( 4 * (int)a3 < (unsigned int)a5 )
              {
                a5 = (unsigned int)(v27 - *(_DWORD *)(a2 + 12) - a3);
                if ( (unsigned int)a5 <= (unsigned int)v27 >> 3 )
                {
                  v28 = v27;
LABEL_51:
                  sub_17E0E10(a2, v28, a3, a4, a5, a6);
                  sub_17AC650((__int64 *)a2, v21, v42);
                  a4 = *v21;
                  v23 = *(_QWORD *)a2;
                  v27 = *(unsigned int *)(a2 + 16);
                  LODWORD(a3) = *(_DWORD *)(a2 + 8) + 1;
                  v25 = (__int64 *)v42[0].m128_u64[0];
                }
                v29 = *v25 == -4096;
                *(_DWORD *)(a2 + 8) = a3;
                if ( !v29 )
                  --*(_DWORD *)(a2 + 12);
                *v25 = a4;
                goto LABEL_47;
              }
LABEL_50:
              v28 = 2 * v27;
              goto LABEL_51;
            }
            a3 = a4 + 16;
          }
LABEL_28:
          if ( a5 != a3 )
          {
LABEL_29:
            v9 += 8;
            if ( v10 != v9 )
              continue;
            goto LABEL_26;
          }
          goto LABEL_22;
        }
        a3 = *(_QWORD *)(a2 + 24);
LABEL_19:
        if ( v14 != 2 )
        {
          if ( v14 != 3 )
          {
            if ( v14 != 1 )
              goto LABEL_22;
            goto LABEL_43;
          }
          if ( v11 == *(_QWORD *)a3 )
            goto LABEL_28;
          a3 += 8;
        }
        if ( v11 == *(_QWORD *)a3 )
          goto LABEL_28;
        a3 += 8;
LABEL_43:
        if ( v11 == *(_QWORD *)a3 )
          goto LABEL_28;
        goto LABEL_22;
      }
      v17 = *(unsigned int *)(a2 + 16);
      if ( !(_DWORD)v17 )
      {
        v42[0].m128_u64[0] = 0;
LABEL_71:
        v36 = 2 * v17;
LABEL_72:
        sub_17E0E10(a2, v36, v12, v17, a5, a6);
        sub_17AC650((__int64 *)a2, &v41, v42);
        v11 = v41;
        a5 = *(_QWORD *)a2;
        v17 = *(unsigned int *)(a2 + 16);
        LODWORD(v12) = *(_DWORD *)(a2 + 8) + 1;
        v19 = (__int64 *)v42[0].m128_u64[0];
        goto LABEL_60;
      }
      a5 = *(_QWORD *)a2;
      v18 = (v17 - 1) & (((unsigned int)v11 >> 9) ^ ((unsigned int)v11 >> 4));
      v19 = (__int64 *)(*(_QWORD *)a2 + 8LL * v18);
      v20 = *v19;
      if ( v11 == *v19 )
        goto LABEL_33;
      v30 = 1;
      v31 = nullptr;
      if ( v20 != -4096 )
      {
        while ( 1 )
        {
          if ( !v31 && v20 == -8192 )
            v31 = v19;
          v18 = (v17 - 1) & (v30 + v18);
          v19 = (__int64 *)(a5 + 8LL * v18);
          v20 = *v19;
          if ( v11 == *v19 )
            break;
          if ( v20 == -4096 )
          {
            if ( v31 )
              v19 = v31;
            goto LABEL_58;
          }
          ++v30;
        }
LABEL_33:
        sub_17AD1A0(v42, v19, (_QWORD *)(a5 + 8 * v17), a2, 1);
        v9 += 8;
        if ( v10 != v9 )
          continue;
        goto LABEL_26;
      }
LABEL_58:
      v12 = (unsigned int)(v12 + 1);
      v42[0].m128_u64[0] = (unsigned __int64)v19;
      a6 = (unsigned int)(4 * v12);
      if ( (unsigned int)a6 >= 3 * (int)v17 )
        goto LABEL_71;
      a6 = (unsigned int)v17 >> 3;
      if ( (int)v17 - *(_DWORD *)(a2 + 12) - (int)v12 <= (unsigned int)a6 )
      {
        v36 = v17;
        goto LABEL_72;
      }
LABEL_60:
      v29 = *v19 == -4096;
      *(_DWORD *)(a2 + 8) = v12;
      if ( !v29 )
        --*(_DWORD *)(a2 + 12);
      *v19 = v11;
      sub_17AD1A0(v42, v19, (_QWORD *)(a5 + 8 * v17), a2, 1);
      v32 = *(unsigned int *)(a2 + 32);
      a4 = *(unsigned int *)(a2 + 36);
      v33 = v41;
      if ( v32 + 1 > a4 )
      {
        sub_2237220(v38, v37, v32 + 1, 8);
        v32 = *(unsigned int *)(a2 + 32);
      }
      a3 = *(_QWORD *)(a2 + 24);
      v9 += 8;
      *(_QWORD *)(a3 + 8 * v32) = v33;
      ++*(_DWORD *)(a2 + 32);
      if ( v10 == v9 )
        goto LABEL_26;
    }
    v9 += 8;
    if ( v10 != v9 )
      continue;
    break;
  }
LABEL_26:
  *(_DWORD *)(a1 + 7776) = 0;
}
