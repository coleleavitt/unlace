__int64 __fastcall sub_10C72B0(__int64 a1, __int64 a2)
{
  unsigned int v3; // r14d
  int v4; // eax
  _DWORD *v5; // rbp
  __int64 v6; // r8
  __int64 v7; // rcx
  const char **v8; // rax
  const char *v9; // r12
  size_t v10; // rax
  int i; // r12d
  __int64 v12; // r14
  __int64 v13; // rbp
  void *v14; // rbx
  __int64 v15; // rax
  __int64 v17; // rbp
  const char **v18; // r8
  const char **v19; // r14
  __int64 v20; // rax
  const char *v21; // r12
  size_t v22; // rax
  int v23; // ebx
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rsi
  void *v26; // rcx
  __int64 v27; // rax
  const __m128i *v28; // rcx
  unsigned __int64 v29; // rdx
  __m128i *v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  _DWORD *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // [rsp+0h] [rbp-C8h]
  _BYTE *v39; // [rsp+0h] [rbp-C8h]
  const char **v40; // [rsp+0h] [rbp-C8h]
  signed __int64 v41; // [rsp+8h] [rbp-C0h]
  __int64 v42; // [rsp+8h] [rbp-C0h]
  int v43; // [rsp+18h] [rbp-B0h]
  int v44; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v45; // [rsp+28h] [rbp-A0h]
  void *v46; // [rsp+40h] [rbp-88h] BYREF
  __int64 v47; // [rsp+48h] [rbp-80h]
  _BYTE v48[16]; // [rsp+50h] [rbp-78h] BYREF
  void *v49; // [rsp+60h] [rbp-68h] BYREF
  const char *v50; // [rsp+68h] [rbp-60h]
  size_t v51; // [rsp+70h] [rbp-58h] BYREF
  int v52; // [rsp+78h] [rbp-50h]
  __int16 v53; // [rsp+80h] [rbp-48h]

  v3 = *(_DWORD *)(a2 + 8);
  if ( v3 )
  {
    if ( v3 == 17 )
    {
      if ( *(_DWORD *)(a2 + 12) != 58 || (v3 = 1, *(_BYTE *)(a1 + 169)) )
      {
        *(_DWORD *)(a1 + 128) = 0;
        v17 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL * *(unsigned int *)(a2 + 24) - 8);
        sub_21922B0(&v46, *(_QWORD *)(v17 + 88), *(_QWORD *)(a1 + 48));
        if ( *(_DWORD *)(v17 + 12) != 58 )
          goto LABEL_27;
        v49 = &v46;
        v53 = 260;
        if ( !(unsigned __int8)sub_22671F0(&v49, 0) )
          goto LABEL_49;
        v33 = sub_2266E50(v46, v47, 0);
        v35 = 0;
        if ( v34 )
        {
          --v34;
          v35 = 1;
        }
        if ( (unsigned int)sub_12A8FD0(v35 + v33, v34) != 58
          || (v36 = (_DWORD *)sub_2266E50(v46, v47, 0), v37 == 4) && *v36 == 1651076142 )
        {
LABEL_49:
          v3 = 1;
        }
        else
        {
LABEL_27:
          v18 = *(const char ***)(a1 + 72);
          v40 = &v18[*(unsigned int *)(a1 + 80)];
          if ( v18 != v40 )
          {
            v19 = *(const char ***)(a1 + 72);
            v42 = a2 + 88;
            do
            {
              v20 = *(unsigned int *)(a1 + 128);
              v21 = *v19;
              if ( v20 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 132) )
              {
                sub_22134E0(a1 + 120, a1 + 136, v20 + 1, 8);
                v20 = *(unsigned int *)(a1 + 128);
              }
              *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8 * v20) = a2;
              v22 = 0;
              v23 = *(_DWORD *)(a1 + 64);
              ++*(_DWORD *)(a1 + 128);
              if ( v21 )
                v22 = j__strlen(v21);
              v24 = *(_QWORD *)(a2 + 88);
              v25 = *(unsigned int *)(a2 + 100);
              v26 = **(void ***)(a1 + 16);
              v51 = v22;
              v27 = *(unsigned int *)(a2 + 96);
              v50 = v21;
              v49 = v26;
              v28 = (const __m128i *)&v49;
              v29 = v27 + 1;
              v52 = v23;
              v30 = (__m128i *)(v24 + 32 * v27);
              if ( v29 > v25 )
              {
                v31 = a2 + 104;
                if ( v24 > (unsigned __int64)&v49 || v30 <= (__m128i *)&v49 )
                {
                  sub_22134E0(v42, v31, v29, 32);
                  v28 = (const __m128i *)&v49;
                  v30 = (__m128i *)(*(_QWORD *)(a2 + 88) + 32LL * *(unsigned int *)(a2 + 96));
                }
                else
                {
                  v45 = v24;
                  sub_22134E0(v42, v31, v29, 32);
                  v32 = *(_QWORD *)(a2 + 88);
                  v30 = (__m128i *)(v32 + 32LL * *(unsigned int *)(a2 + 96));
                  v28 = (const __m128i *)((char *)&v49 + v32 - v45);
                }
              }
              ++v19;
              *v30 = _mm_loadu_si128(v28);
              v30[1] = _mm_loadu_si128(v28 + 1);
              ++*(_DWORD *)(a2 + 96);
            }
            while ( v40 != v19 );
          }
          *(_BYTE *)(a1 + 168) = 1;
          v3 = 0;
        }
        if ( v46 != v48 )
          operator delete(v46);
      }
    }
    else
    {
      return *(_BYTE *)(a1 + 168) ^ 1u;
    }
  }
  else
  {
    v4 = *(_DWORD *)(a2 + 12);
    if ( (unsigned int)(v4 - 10) <= 1 || v4 == 8 )
    {
      v5 = *(_DWORD **)(a1 + 176);
      *(_BYTE *)(a1 + 168) = 1;
      if ( (unsigned int)(*v5 - 3) > 1 )
      {
        v6 = *(_QWORD *)(a1 + 48);
        v7 = 0;
        v8 = *(const char ***)(*(_QWORD *)(a2 + 88) + 48LL);
        v9 = *v8;
        if ( *v8 )
        {
          v38 = *(_QWORD *)(a1 + 48);
          v10 = j__strlen(*v8);
          v6 = v38;
          v7 = v10;
        }
        sub_10B7FA0((__int64)&v46, (__int64)v5, (__int64)v9, v7, v6);
        if ( v46 )
        {
          v49 = &v51;
          sub_10B5070(&v49, v46, (__int64)v46 + v47);
        }
        else
        {
          LOBYTE(v51) = 0;
          v49 = &v51;
          v50 = nullptr;
        }
        sub_9E6D90(a2 + 96, &v49);
        if ( v49 != &v51 )
          operator delete(v49);
        if ( v46 != v48 )
          operator delete(v46);
      }
      if ( !*(_BYTE *)(a1 + 68) )
      {
        v43 = 3 * (*(_DWORD *)(a2 + 12) == 11) + 9;
        v44 = *(_DWORD *)(a1 + 80);
        if ( v44 )
        {
          for ( i = 0; i != v44; ++i )
          {
            while ( 1 )
            {
              v12 = *(_QWORD *)(a2 + 88);
              v13 = *(_QWORD *)(a1 + 8);
              v41 = *(_QWORD *)(a2 + 104);
              v39 = *(_BYTE **)(a2 + 96);
              v14 = (void *)operator new(0x80u);
              sub_10AE2B0((__int64)v14, v12, v43, v39, v41);
              v49 = v14;
              sub_10C7210(v13 + 88, (__int64 *)&v49);
              if ( v49 )
                (*(void (__fastcall **)(void *))(*(_QWORD *)v49 + 8LL))(v49);
              v15 = *(unsigned int *)(a1 + 128);
              if ( v15 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 132) )
                break;
              ++i;
              *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8 * v15) = v14;
              ++*(_DWORD *)(a1 + 128);
              if ( i == v44 )
                return 0;
            }
            sub_22134E0(a1 + 120, a1 + 136, v15 + 1, 8);
            *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 128))++) = v14;
          }
          return 0;
        }
      }
    }
    else
    {
      *(_BYTE *)(a1 + 168) = 0;
      return 1;
    }
  }
  return v3;
}

