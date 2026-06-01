void __fastcall sub_1457AC0(__int64 a1, __int64 a2, __int64 a3, const __m128i *a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r12
  unsigned int v11; // esi
  __int64 v12; // rdi
  __int64 v13; // r8
  unsigned int v14; // ecx
  __int64 *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdi
  char *v18; // rsi
  char *v19; // rsi
  __int64 v20; // rax
  __int64 *v21; // rax
  int v22; // r10d
  __int64 *v23; // r11
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  int v27; // eax
  int v28; // edi
  __int64 v29; // r8
  unsigned int v30; // esi
  int v31; // eax
  int v32; // esi
  __int64 v33; // rdi
  unsigned int v34; // ebx
  __int64 *v35; // r8
  int v36; // r9d
  __int64 *v37; // r9
  int v38; // r10d
  __int64 v39; // [rsp+0h] [rbp-48h] BYREF
  __int64 v40; // [rsp+8h] [rbp-40h]
  __int64 v41; // [rsp+10h] [rbp-38h]

  v5 = sub_1451CA0((__int64 *)a2, a4);
  if ( v5 )
  {
    v10 = v5;
    if ( (*(_BYTE *)(v5 + 3) & 2) == 0 )
    {
LABEL_5:
      v39 = 0;
LABEL_6:
      v11 = *(_DWORD *)(a2 + 2288);
      v12 = a2 + 2272;
      if ( !v11 )
        goto LABEL_25;
      v9 = v11 - 1;
      v13 = *(_QWORD *)(a2 + 2272);
      v14 = v9 & (((unsigned int)v10 >> 9) ^ ((unsigned int)v10 >> 4));
      v15 = (__int64 *)(v13 + 32LL * v14);
      v16 = *v15;
      if ( v10 == *v15 )
      {
LABEL_8:
        v17 = (__int64)(v15 + 1);
        v18 = (char *)v15[2];
        if ( v18 != (char *)v15[3] )
        {
          v19 = v18 + 8;
          *((_QWORD *)v19 - 1) = v39;
          v15[2] = (__int64)v19;
          return;
        }
LABEL_24:
        sub_1452360(v17, v18, &v39);
        return;
      }
      v22 = 1;
      v23 = nullptr;
      if ( v16 != -4096 )
      {
        while ( 1 )
        {
          if ( !v23 && v16 == -8192 )
            v23 = v15;
          v14 = v9 & (v22 + v14);
          v15 = (__int64 *)(v13 + 32LL * v14);
          v16 = *v15;
          if ( v10 == *v15 )
            goto LABEL_8;
          if ( v16 == -4096 )
            break;
          ++v22;
        }
        if ( v23 )
          v15 = v23;
      }
      v7 = 3 * v11;
      v6 = (unsigned int)(*(_DWORD *)(a2 + 2280) + 1);
      v8 = (unsigned int)(4 * v6);
      if ( (unsigned int)v8 < (unsigned int)v7 )
      {
        v24 = v11 - *(_DWORD *)(a2 + 2284) - (unsigned int)v6;
        v25 = v11 >> 3;
        if ( (unsigned int)v24 > (unsigned int)v25 )
        {
LABEL_20:
          v26 = *v15;
          goto LABEL_21;
        }
        sub_1457870(v12, v11, v6, v24, v25, v9);
        v31 = *(_DWORD *)(a2 + 2288);
        if ( v31 )
        {
          v32 = v31 - 1;
          v33 = *(_QWORD *)(a2 + 2272);
          v34 = (v31 - 1) & (((unsigned int)v10 >> 9) ^ ((unsigned int)v10 >> 4));
          LODWORD(v6) = *(_DWORD *)(a2 + 2280) + 1;
          v15 = (__int64 *)(v33 + 32LL * v34);
          v26 = *v15;
          if ( v10 != *v15 )
          {
            if ( v26 != -4096 )
            {
              v35 = (__int64 *)(v33 + 32LL * v34);
              v36 = 1;
              v15 = nullptr;
              while ( 1 )
              {
                if ( !v15 && v26 == -8192 )
                  v15 = v35;
                v34 = v32 & (v36 + v34);
                v35 = (__int64 *)(v33 + 32LL * v34);
                v26 = *v35;
                if ( v10 == *v35 )
                {
                  v15 = (__int64 *)(v33 + 32LL * v34);
                  goto LABEL_21;
                }
                if ( v26 == -4096 )
                  break;
                ++v36;
              }
              if ( v15 )
                goto LABEL_20;
              v15 = (__int64 *)(v33 + 32LL * v34);
            }
LABEL_28:
            *(_DWORD *)(a2 + 2280) = v6;
LABEL_23:
            *v15 = v10;
            v17 = (__int64)(v15 + 1);
            v18 = nullptr;
            v15[1] = 0;
            v15[2] = 0;
            v15[3] = 0;
            goto LABEL_24;
          }
          goto LABEL_21;
        }
      }
      else
      {
LABEL_25:
        sub_1457870(v12, 2 * v11, v6, v7, v8, v9);
        v27 = *(_DWORD *)(a2 + 2288);
        if ( v27 )
        {
          v28 = v27 - 1;
          v29 = *(_QWORD *)(a2 + 2272);
          v30 = (v27 - 1) & (((unsigned int)v10 >> 9) ^ ((unsigned int)v10 >> 4));
          LODWORD(v6) = *(_DWORD *)(a2 + 2280) + 1;
          v15 = (__int64 *)(v29 + 32LL * v30);
          v26 = *v15;
          if ( v10 != *v15 )
          {
            if ( v26 != -4096 )
            {
              v37 = (__int64 *)(v29 + 32LL * (v28 & (((unsigned int)v10 >> 9) ^ ((unsigned int)v10 >> 4))));
              v38 = 1;
              v15 = nullptr;
              while ( 1 )
              {
                if ( !v15 && v26 == -8192 )
                  v15 = v37;
                v30 = v28 & (v38 + v30);
                v37 = (__int64 *)(v29 + 32LL * v30);
                v26 = *v37;
                if ( v10 == *v37 )
                {
                  v15 = (__int64 *)(v29 + 32LL * v30);
                  goto LABEL_21;
                }
                if ( v26 == -4096 )
                  break;
                ++v38;
              }
              if ( v15 )
                goto LABEL_20;
              v15 = (__int64 *)(v29 + 32LL * v30);
            }
            goto LABEL_28;
          }
LABEL_21:
          *(_DWORD *)(a2 + 2280) = v6;
          if ( v26 != -4096 )
            --*(_DWORD *)(a2 + 2284);
          goto LABEL_23;
        }
      }
      ++*(_DWORD *)(a2 + 2280);
      BUG();
    }
    sub_1423DB0((__int64)&v39, (_QWORD *)a2, v5, v7, v8, v9);
    if ( (v39 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      if ( !v41 )
      {
        v21 = sub_13F1C60((__int64 *)(v39 & 0xFFFFFFFFFFFFFFF8LL));
        if ( !v21 )
          goto LABEL_5;
        v20 = v21[2];
LABEL_13:
        v39 = v20;
        if ( v20 )
          *(_BYTE *)(v20 + 37) |= 1u;
        goto LABEL_6;
      }
    }
    else if ( !v41 )
    {
      goto LABEL_5;
    }
    v6 = v40;
    v20 = *(_QWORD *)(*(_QWORD *)(v40 + 8 * v41 - 8) + 16LL);
    goto LABEL_13;
  }
}
