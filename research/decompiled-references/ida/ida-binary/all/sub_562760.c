void __fastcall sub_562760(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned int v5; // r9d
  unsigned int v6; // r10d
  unsigned int v7; // r11d
  unsigned int v8; // edx
  char v9; // r13
  int v10; // ebx
  unsigned int v11; // ebp
  unsigned int v12; // r12d
  unsigned int *v13; // rax
  unsigned int *v14; // rsi
  unsigned __int32 v15; // r14d
  unsigned int v16; // ecx
  unsigned int v17; // r15d
  int v18; // r8d
  int v19; // eax
  __int64 v20; // rax
  char *v21; // r8
  _DWORD *v22; // rsi
  unsigned int v23; // esi
  int v24; // esi
  __m128i *v25; // rax
  unsigned int v26; // r15d
  char *v27; // rax
  char *v28; // rax
  unsigned int v29; // [rsp+Ch] [rbp-8Ch]
  unsigned int v30; // [rsp+Ch] [rbp-8Ch]
  unsigned int v31; // [rsp+Ch] [rbp-8Ch]
  unsigned int v35; // [rsp+2Ch] [rbp-6Ch]
  unsigned int v36; // [rsp+2Ch] [rbp-6Ch]
  unsigned int v37; // [rsp+2Ch] [rbp-6Ch]
  unsigned int v38; // [rsp+2Ch] [rbp-6Ch]
  unsigned int v39; // [rsp+30h] [rbp-68h]
  unsigned int v40; // [rsp+30h] [rbp-68h]
  unsigned int v41; // [rsp+30h] [rbp-68h]
  unsigned int v42; // [rsp+34h] [rbp-64h]
  unsigned int v43; // [rsp+38h] [rbp-60h]
  unsigned int v44; // [rsp+3Ch] [rbp-5Ch]

  if ( a2 | a4 )
  {
    v5 = a2;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    do
    {
      v13 = (unsigned int *)(a1 + 24LL * v11);
      v14 = (unsigned int *)(a3 + 24LL * v12);
      if ( (_BYTE)v10 )
      {
        v15 = v13[5];
        v16 = v13[3];
        v29 = v13[2];
      }
      else
      {
        if ( v11 >= v5 )
        {
          if ( !v9 )
          {
            if ( v12 < a4 )
            {
              v8 = v14[4];
              v7 = *v14;
              v6 = v14[1];
              if ( v8 != -1 )
                goto LABEL_21;
            }
            else
            {
              v7 = -1;
              v8 = -1;
              v6 = -1;
            }
            goto LABEL_20;
          }
          v17 = v14[5];
          v19 = v14[2];
          v18 = v14[3];
          if ( v17 != -1 )
            goto LABEL_35;
          goto LABEL_37;
        }
        v15 = v13[4];
        v16 = v13[1];
        v29 = *v13;
      }
      if ( v9 )
      {
        v17 = v14[5];
        v18 = v14[3];
        v19 = v14[2];
        if ( v15 < v17 )
        {
          if ( (_BYTE)v10 )
            goto LABEL_27;
          v20 = *(unsigned int *)(a5 + 8);
          if ( !(_DWORD)v20 )
          {
            if ( v8 >= v15 )
              goto LABEL_12;
            goto LABEL_42;
          }
          goto LABEL_9;
        }
      }
      else
      {
        if ( v12 >= a4 )
        {
          if ( v15 != -1 )
            goto LABEL_24;
          if ( !(_BYTE)v10 )
          {
            v6 = -1;
            v8 = -1;
            v7 = -1;
            goto LABEL_20;
          }
          v18 = -1;
          v17 = -1;
          v19 = -1;
          goto LABEL_37;
        }
        v17 = v14[4];
        v18 = v14[1];
        v19 = *v14;
        if ( v15 < v17 )
        {
LABEL_24:
          if ( (_BYTE)v10 )
          {
            v20 = *(unsigned int *)(a5 + 8);
            if ( !(_DWORD)v20 )
            {
              if ( v8 >= v15 )
              {
LABEL_27:
                ++v11;
                goto LABEL_12;
              }
LABEL_42:
              v37 = 1;
              v21 = *(char **)a5;
              v23 = *(_DWORD *)(a5 + 12);
              if ( v23 )
              {
LABEL_43:
                v24 = v20 + 1;
                v25 = (__m128i *)&v21[24 * v20];
                *(_DWORD *)(a5 + 8) = v24;
                v25[1].m128i_i32[0] = v8;
                v25[1].m128i_i32[1] = v15;
                *v25 = _mm_unpacklo_epi64(
                         _mm_unpacklo_epi32(_mm_cvtsi32_si128(v7), _mm_cvtsi32_si128(v6)),
                         _mm_unpacklo_epi32(_mm_cvtsi32_si128(v29), _mm_cvtsi32_si128(v16)));
                goto LABEL_11;
              }
LABEL_46:
              v26 = 2 * v23;
              if ( 2 * v23 < 8 )
                v26 = 8;
              if ( v26 < v37 )
                v26 = v37;
              if ( v23 < v26 )
              {
                v44 = v5;
                v43 = v8;
                v42 = v7;
                v41 = v6;
                v38 = v16;
                if ( v21 )
                {
                  v27 = (char *)off_8C52A8(v21, 24LL * v26);
                  v16 = v38;
                  v6 = v41;
                  v7 = v42;
                  v8 = v43;
                  v21 = v27;
                  v5 = v44;
                }
                else
                {
                  v28 = (char *)off_8C52B8(24LL * v26);
                  v5 = v44;
                  v8 = v43;
                  v7 = v42;
                  v6 = v41;
                  v21 = v28;
                  v16 = v38;
                }
                *(_QWORD *)a5 = v21;
                *(_DWORD *)(a5 + 12) = v26;
                v20 = *(unsigned int *)(a5 + 8);
              }
              goto LABEL_43;
            }
LABEL_9:
            v21 = *(char **)a5;
            v22 = (_DWORD *)(*(_QWORD *)a5 + 24LL * (unsigned int)(v20 - 1));
            if ( v22[5] >= v8 )
            {
              v22[5] = v15;
              v22[3] = v16;
              v22[2] = v29;
              goto LABEL_11;
            }
            if ( v8 < v15 )
            {
              v37 = v20 + 1;
              v23 = *(_DWORD *)(a5 + 12);
              if ( v23 >= (int)v20 + 1 )
                goto LABEL_43;
              goto LABEL_46;
            }
LABEL_11:
            if ( (_BYTE)v10 )
              goto LABEL_27;
          }
LABEL_12:
          v7 = v29;
          v10 ^= 1u;
          v6 = v16;
          v8 = v15;
          continue;
        }
      }
      if ( v17 < v15 )
      {
        if ( v9 == (_BYTE)v10 )
        {
          v6 = v18;
          v8 = v17;
          v7 = v19;
        }
        else
        {
LABEL_35:
          v39 = v5;
          v35 = v19;
          v30 = v18;
          sub_560070((char **)a5, __SPAIR64__(v7, v8), v6, __SPAIR64__(v19, v17), v18);
          v6 = v30;
          v7 = v35;
          v8 = v17;
          v5 = v39;
        }
        v12 -= (v9 == 0) - 1;
        goto LABEL_21;
      }
      if ( v9 == (_BYTE)v10 )
      {
        v6 = v18;
        v8 = v17;
        v7 = v19;
        goto LABEL_38;
      }
LABEL_37:
      v40 = v5;
      v36 = v19;
      v31 = v18;
      sub_560070((char **)a5, __SPAIR64__(v7, v8), v6, __SPAIR64__(v19, v17), v18);
      v6 = v31;
      v7 = v36;
      v8 = v17;
      v5 = v40;
LABEL_38:
      v11 -= ((_BYTE)v10 == 0) - 1;
      v12 -= (v9 == 0) - 1;
LABEL_20:
      v10 ^= 1u;
LABEL_21:
      v9 ^= 1u;
    }
    while ( v11 < v5 || v12 < a4 );
  }
}
