__int64 __fastcall sub_1A416F0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  unsigned int v8; // edx
  int v9; // r13d
  unsigned int v10; // r12d
  __int64 v11; // rbp
  unsigned __int8 v12; // al
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rbp
  __int64 v20; // rax
  unsigned int v21; // r8d
  __int64 v22; // rdi
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  int v26; // r10d
  __int64 *v27; // r11
  int v28; // edi
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r8
  unsigned __int64 v32; // rax
  __int64 *v33; // rax
  __int64 v34; // rax
  unsigned int v35; // edx
  int v36; // r9d
  unsigned int v37; // edx
  __int64 *v38; // r10
  int v39; // r11d
  int i; // r10d
  unsigned int v41; // [rsp+8h] [rbp-50h]
  __int64 *v42; // [rsp+8h] [rbp-50h]
  __m128 v43[4]; // [rsp+10h] [rbp-48h] BYREF

  v6 = a1 + 12544;
  v8 = *(_DWORD *)(a1 + 12408);
  v9 = *(_DWORD *)(a1 + 11320);
  v10 = v8;
  if ( v9 == v8 )
    return v6;
  do
  {
    while ( 2 )
    {
      v11 = *(_QWORD *)(*(_QWORD *)(a1 + 11312) + ((unsigned __int64)v10 << 6) + 16);
      if ( !v11 )
      {
        v19 = 0;
        goto LABEL_20;
      }
      while ( 1 )
      {
        v12 = *(_BYTE *)(v11 + 28) & 0x7F;
        v13 = (unsigned int)v12 - 34;
        if ( (unsigned int)v13 > 5 )
        {
          v16 = (unsigned int)v12 - 59;
          if ( (unsigned int)v16 > 2 )
          {
            if ( v12 == 62 )
            {
              v33 = sub_B7E890(v11, (__int64)a2, 62, v16, a5, a6);
              if ( v33 )
                v11 = (__int64)v33;
            }
            else
            {
              v15 = (unsigned int)v12 - 40;
              if ( (unsigned int)v15 <= 6 )
              {
                v34 = sub_B7CEC0(v11);
                if ( v34 )
                  v11 = v34;
              }
            }
          }
          else
          {
            v32 = sub_B9DFE0(v11, (__int64)a2, v12, v16, a5, a6);
            if ( v32 )
              v11 = v32;
          }
        }
        else
        {
          a2 = (_QWORD *)(&dword_0 + 1);
          v14 = sub_B7D580(v11, 1, v12, v13);
          if ( v14 )
            v11 = v14;
        }
        v17 = *(_QWORD *)(v11 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v11 + 16) & 4) == 0 )
          break;
        v17 = *(_QWORD *)(v17 + 8);
        if ( (*(_BYTE *)(v17 + 8) & 0x7F) == 0 || (*(_BYTE *)(v17 + 8) & 0x7F) == 0x18 )
          goto LABEL_12;
LABEL_9:
        v11 = sub_B8C1B0(v17);
      }
      if ( (*(_BYTE *)(v17 + 8) & 0x7F) != 0x18 && (*(_BYTE *)(v17 + 8) & 0x7F) != 0 )
        goto LABEL_9;
LABEL_12:
      v18 = *(_QWORD *)(v11 + 8) & 7LL;
      if ( *(char *)(v11 + 29) < 0 )
      {
        if ( !v18 )
          goto LABEL_19;
        v19 = sub_B8C660(v11);
LABEL_15:
        if ( !v19 )
          goto LABEL_31;
        v20 = *(unsigned int *)(a1 + 12560);
        if ( !(_DWORD)v20 )
          goto LABEL_48;
        v16 = *(_QWORD *)(a1 + 12544);
        v15 = ((unsigned int)v19 >> 4) ^ ((unsigned int)v19 >> 9);
        v21 = (v20 - 1) & (((unsigned int)v19 >> 4) ^ ((unsigned int)v19 >> 9));
        a2 = (__int64 *)(v16 + 8LL * v21);
        v22 = *a2;
        if ( v19 == *a2 )
        {
LABEL_18:
          sub_A8BB00(v43, a2, (_QWORD *)(v16 + 8 * v20), v6, 1);
          goto LABEL_19;
        }
        v26 = 1;
        v27 = nullptr;
        if ( v22 != -4096 )
        {
          while ( 1 )
          {
            if ( !v27 && v22 == -8192 )
              v27 = a2;
            v21 = (v20 - 1) & (v26 + v21);
            a2 = (__int64 *)(v16 + 8LL * v21);
            v22 = *a2;
            if ( v19 == *a2 )
              goto LABEL_18;
            if ( v22 == -4096 )
              break;
            ++v26;
          }
          if ( v27 )
            a2 = v27;
        }
        a5 = (unsigned int)(3 * v20);
        v28 = *(_DWORD *)(a1 + 12552) + 1;
        a6 = (unsigned int)(4 * v28);
        if ( (unsigned int)a6 < (unsigned int)a5 )
        {
          v29 = (unsigned int)(v20 - *(_DWORD *)(a1 + 12556) - v28);
          v30 = (unsigned int)v20 >> 3;
          if ( (unsigned int)v29 > (unsigned int)v30 )
          {
LABEL_27:
            v31 = *a2;
            goto LABEL_28;
          }
          v41 = ((unsigned int)v19 >> 4) ^ ((unsigned int)v19 >> 9);
          sub_AB4280(v6, v20, v15, v16, v29, v30);
          v20 = *(unsigned int *)(a1 + 12560);
          if ( (_DWORD)v20 )
          {
            v36 = v20 - 1;
            v16 = *(_QWORD *)(a1 + 12544);
            v37 = (v20 - 1) & v41;
            v28 = *(_DWORD *)(a1 + 12552) + 1;
            a2 = (__int64 *)(v16 + 8LL * v37);
            v31 = *a2;
            if ( v19 != *a2 )
            {
              if ( v31 != -4096 )
              {
                v38 = (__int64 *)(v16 + 8LL * (v36 & v41));
                v39 = 1;
                a2 = nullptr;
                while ( 1 )
                {
                  if ( !a2 && v31 == -8192 )
                    a2 = v38;
                  v37 = v36 & (v39 + v37);
                  v38 = (__int64 *)(v16 + 8LL * v37);
                  v31 = *v38;
                  if ( v19 == *v38 )
                  {
                    a2 = (__int64 *)(v16 + 8LL * v37);
                    goto LABEL_28;
                  }
                  if ( v31 == -4096 )
                    break;
                  ++v39;
                }
                if ( a2 )
                  goto LABEL_27;
                a2 = (__int64 *)(v16 + 8LL * v37);
              }
LABEL_51:
              *(_DWORD *)(a1 + 12552) = v28;
LABEL_30:
              *a2 = v19;
              sub_A8BB00(v43, a2, (_QWORD *)(v16 + 8 * v20), v6, 1);
LABEL_31:
              v8 = *(_DWORD *)(a1 + 12408);
              goto LABEL_20;
            }
            goto LABEL_28;
          }
        }
        else
        {
LABEL_48:
          sub_AB4280(v6, 2 * v20, v15, v16, a5, a6);
          v20 = *(unsigned int *)(a1 + 12560);
          if ( (_DWORD)v20 )
          {
            v16 = *(_QWORD *)(a1 + 12544);
            v35 = (v20 - 1) & (((unsigned int)v19 >> 9) ^ ((unsigned int)v19 >> 4));
            v28 = *(_DWORD *)(a1 + 12552) + 1;
            a2 = (__int64 *)(v16 + 8LL * v35);
            v31 = *a2;
            if ( v19 != *a2 )
            {
              if ( v31 != -4096 )
              {
                v42 = nullptr;
                for ( i = 1; ; ++i )
                {
                  if ( v31 != -8192 || v42 )
                    a2 = v42;
                  v35 = (v20 - 1) & (i + v35);
                  v31 = *(_QWORD *)(v16 + 8LL * v35);
                  if ( v19 == v31 )
                  {
                    a2 = (__int64 *)(v16 + 8LL * v35);
                    goto LABEL_28;
                  }
                  if ( v31 == -4096 )
                    break;
                  v42 = a2;
                  a2 = (__int64 *)(v16 + 8LL * v35);
                }
                if ( a2 )
                  goto LABEL_27;
                a2 = (__int64 *)(v16 + 8LL * v35);
              }
              goto LABEL_51;
            }
LABEL_28:
            *(_DWORD *)(a1 + 12552) = v28;
            if ( v31 != -4096 )
              --*(_DWORD *)(a1 + 12556);
            goto LABEL_30;
          }
        }
        ++*(_DWORD *)(a1 + 12552);
        BUG();
      }
      if ( v18 )
      {
        v19 = *(_QWORD *)(v11 - 8);
        goto LABEL_15;
      }
LABEL_19:
      v8 = *(_DWORD *)(a1 + 12408);
      v19 = 0;
LABEL_20:
      v23 = v8;
      v24 = v8 + 1LL;
      if ( v24 > *(unsigned int *)(a1 + 12412) )
      {
        a2 = (__int64 *)(a1 + 12416);
        ++v10;
        sub_2237220(a1 + 12400, a1 + 12416, v24, 8);
        *(_QWORD *)(*(_QWORD *)(a1 + 12400) + 8LL * *(unsigned int *)(a1 + 12408)) = v19;
        v8 = *(_DWORD *)(a1 + 12408) + 1;
        *(_DWORD *)(a1 + 12408) = v8;
        if ( v9 == v10 )
          return v6;
        continue;
      }
      break;
    }
    ++v10;
    *(_QWORD *)(*(_QWORD *)(a1 + 12400) + 8 * v23) = v19;
    v8 = *(_DWORD *)(a1 + 12408) + 1;
    *(_DWORD *)(a1 + 12408) = v8;
  }
  while ( v10 != v9 );
  return v6;
}
