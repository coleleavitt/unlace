__int64 __fastcall sub_A572A0(__int64 a1)
{
  __int64 v2; // rax
  int v3; // r14d
  char *v4; // r8
  int v5; // esi
  char *v6; // rcx
  unsigned int v7; // edi
  __int64 v8; // rax
  unsigned int v9; // ebx
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rbp
  __int64 v16; // r14
  char v17; // r15
  __int64 *v18; // rbx
  char v19; // r13
  unsigned int v20; // edx
  _QWORD *v21; // r15
  __int64 v22; // rax
  _QWORD *v23; // rax
  unsigned int v25; // ebx
  size_t v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rdi
  _DWORD *v29; // r9
  __int64 v30; // r10
  unsigned __int64 v31; // rax
  __int64 v32; // r10
  __int64 v33; // rbp
  __int64 v34; // rax
  _QWORD *v35; // rcx
  __int64 v36; // rbx
  unsigned int v37; // eax
  __int64 v38; // rsi
  int v39; // eax
  __int64 *v40; // rsi
  unsigned int v41; // edx
  size_t v42; // rsi
  unsigned int v43; // r13d
  unsigned int *v44; // rax
  __int64 v45; // rsi
  _QWORD *v46; // rax
  _QWORD *v47; // rcx
  char **exception; // rbx
  int v49; // [rsp+20h] [rbp-78h]
  int v50; // [rsp+20h] [rbp-78h]
  int v51; // [rsp+24h] [rbp-74h]
  _DWORD *v52; // [rsp+28h] [rbp-70h]
  unsigned int v53; // [rsp+3Ch] [rbp-5Ch] BYREF
  int *v54[11]; // [rsp+40h] [rbp-58h] BYREF

  if ( *(_BYTE *)(a1 + 1376) )
  {
    sub_A56C60(a1);
    v2 = *(_QWORD *)(a1 + 1432);
    if ( v2 )
      goto LABEL_3;
LABEL_46:
    v3 = 0;
    goto LABEL_4;
  }
  v2 = *(_QWORD *)(a1 + 1432);
  if ( !v2 )
    goto LABEL_46;
LABEL_3:
  v3 = *(_DWORD *)(v2 - 4);
LABEL_4:
  if ( *(_DWORD *)(a1 + 1356) || *(_DWORD *)(a1 + 1360) )
  {
    v4 = *(char **)(a1 + 1344);
    v5 = 0;
    v6 = &v4[8 * *(unsigned int *)(a1 + 1352)];
    v7 = *(_DWORD *)(a1 + 1352);
    v8 = *(_QWORD *)(a1 + 1344);
    if ( v4 == v6 )
      goto LABEL_19;
    do
    {
      while ( *(_DWORD *)(v8 + 4) != 0x80000000 )
      {
        *(_DWORD *)(v8 + 4) = 0x80000000;
        v8 += 8;
        if ( v6 == (char *)v8 )
          goto LABEL_11;
      }
      v8 += 8;
      ++v5;
    }
    while ( v6 != (char *)v8 );
LABEL_11:
    if ( v7 <= 0x10 || 3 * v7 >= 4 * v5 )
      goto LABEL_19;
    if ( v4 )
    {
      sub_186B220(v4);
      v9 = *(_DWORD *)(a1 + 1352);
      *(_QWORD *)(a1 + 1344) = 0;
      v9 >>= 1;
      *(_DWORD *)(a1 + 1352) = v9;
      v10 = v9;
      v11 = sub_186B270(8LL * v9);
      if ( !v9 )
      {
LABEL_18:
        *(_QWORD *)(a1 + 1344) = v11;
LABEL_19:
        *(_QWORD *)(a1 + 1356) = 0;
        goto LABEL_20;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 1344) = 0;
      *(_DWORD *)(a1 + 1352) = v7 >> 1;
      v10 = v7 >> 1;
      v11 = sub_186B270(8 * v10);
    }
    v12 = v11 + 8 * v10;
    v13 = v11;
    if ( (v10 & 1) == 0 || (v13 = v11 + 8, *(_DWORD *)(v11 + 4) = 0x80000000, v11 + 8 != v12) )
    {
      do
      {
        *(_DWORD *)(v13 + 4) = 0x80000000;
        v13 += 16;
        *(_DWORD *)(v13 - 4) = 0x80000000;
      }
      while ( v13 != v12 );
    }
    goto LABEL_18;
  }
LABEL_20:
  v14 = *(_QWORD *)(a1 + 32);
  if ( v14 )
  {
    v15 = *(unsigned int *)(v14 - 4);
    if ( (int)v15 > 0 )
    {
      v51 = v3;
      v16 = 0;
      v17 = 0;
      while ( 1 )
      {
        v18 = *(__int64 **)(v14 + 8 * v16);
        v19 = sub_966310(a1, v18);
        if ( v19 )
        {
          v54[0] = nullptr;
          v53 = v16;
          sub_98D380(a1 + 1328, &v53, v54);
          v20 = v54[0][1];
          if ( v20 != (_DWORD)v16 && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * v20) + 8LL) != v18[1] )
          {
            v21 = *(_QWORD **)(a1 + 1432);
            if ( v21 )
            {
              v22 = *((unsigned int *)v21 - 1);
              if ( (_DWORD)v22 == *((_DWORD *)v21 - 2) )
              {
                v25 = (unsigned int)(3 * v22 + 1) >> 1;
                v26 = 8 * v25 + 8;
                if ( 8 * (int)v22 + 8 >= (unsigned int)v26 || (unsigned int)v22 >= v25 )
                  goto LABEL_54;
                v49 = v54[0][1];
                v27 = sub_186B270(v26);
                v28 = *(_QWORD *)(a1 + 1432);
                v20 = v49;
                v29 = (_DWORD *)v27;
                v21 = (_QWORD *)(v27 + 8);
                if ( v28 )
                {
                  v30 = *(unsigned int *)(v28 - 4);
                  *(_DWORD *)(v27 + 4) = v30;
                  v31 = 0;
                  v32 = 8 * v30;
                  if ( v32 )
                  {
                    do
                    {
                      *(_QWORD *)&v29[v31 / 4 + 2] = *(_QWORD *)(v28 + v31);
                      v31 += 8LL;
                    }
                    while ( v32 != v31 );
                  }
                  v52 = v29;
                  sub_186B220((void *)(v28 - 8));
                  v29 = v52;
                  v20 = v49;
                  v23 = &v21[v52[1]];
                }
                else
                {
                  *(_DWORD *)(v27 + 4) = 0;
                  v23 = (_QWORD *)(v27 + 8);
                }
                *(_QWORD *)(a1 + 1432) = v21;
                *v29 = v25;
              }
              else
              {
                v23 = &v21[v22];
              }
            }
            else
            {
              v50 = v54[0][1];
              v46 = (_QWORD *)sub_186B270(0x18u);
              v20 = v50;
              v21 = v46 + 1;
              *v46 = 2;
              *(_QWORD *)(a1 + 1432) = v46 + 1;
              v23 = v46 + 1;
            }
            *v23 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v20), _mm_cvtsi32_si128(v16)).m128i_u64[0];
            ++*((_DWORD *)v21 - 1);
            v17 = v19;
          }
        }
        if ( v15 == ++v16 )
          break;
        v14 = *(_QWORD *)(a1 + 32);
      }
      if ( v17 )
      {
        v33 = *(_QWORD *)(a1 + 16);
        v34 = sub_180C100(v33 + 8400, 24);
        v35 = *(_QWORD **)(v33 + 9456);
        v36 = v34;
        *(_QWORD *)v34 = off_1C55298;
        *(_QWORD *)(v34 + 8) = a1 + 1432;
        *(_DWORD *)(v34 + 16) = v51;
        if ( v35 )
        {
          v37 = *((_DWORD *)v35 - 1);
          if ( v37 == *((_DWORD *)v35 - 2) )
          {
            v41 = (3 * v37 + 1) >> 1;
            v42 = 8 * v41 + 8;
            v43 = v41;
            if ( 8 * v37 + 8 >= (unsigned int)v42 || v37 >= v41 )
            {
LABEL_54:
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_98B3B0((__int64 *)v54, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v54);
              sub_233E40((__int64)v54);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v44 = (unsigned int *)sub_186B300(v35 - 1, v42);
            v45 = v44[1];
            v35 = v44 + 2;
            *(_QWORD *)(v33 + 9456) = v44 + 2;
            *v44 = v43;
            LODWORD(v44) = v45;
            v40 = &v35[v45];
            v39 = (_DWORD)v44 + 1;
          }
          else
          {
            v38 = v37;
            v39 = v37 + 1;
            v40 = &v35[v38];
          }
        }
        else
        {
          v47 = (_QWORD *)sub_186B270(0x18u);
          *v47 = 2;
          v39 = 1;
          v35 = v47 + 1;
          *(_QWORD *)(v33 + 9456) = v35;
          v40 = v35;
        }
        *v40 = v36;
        *((_DWORD *)v35 - 1) = v39;
      }
    }
  }
  return sub_9CF290(a1);
}

