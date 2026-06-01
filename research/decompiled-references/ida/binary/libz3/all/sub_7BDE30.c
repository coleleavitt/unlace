void __fastcall sub_7BDE30(_QWORD *a1, int a2, unsigned int **a3, int a4, int a5, int a6)
{
  char **exception; // r12
  __int64 v7; // rdx
  unsigned int *v10; // rbp
  unsigned int *v11; // r14
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int32 v14; // edx
  int v15; // eax
  unsigned int v16; // r12d
  __int64 (__fastcall *v17)(_QWORD); // rax
  __int64 v18; // rax
  int v19; // eax
  __int64 v21; // rax
  __int64 v22; // r9
  unsigned int *v23; // r8
  _QWORD *v24; // rbp
  unsigned int *v25; // r14
  __int64 v26; // rdi
  int v27; // r15d
  __int64 v28; // rax
  int *v29; // rax
  unsigned int v30; // r15d
  __int64 (__fastcall *v31)(_QWORD); // rax
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rdi
  __int64 v35; // rsi
  unsigned int v36; // ecx
  size_t v37; // rsi
  unsigned int *v38; // rax
  __m128i *v39; // rax
  _QWORD *v40; // rax
  unsigned int *v41; // [rsp+28h] [rbp-90h]
  unsigned int v42; // [rsp+34h] [rbp-84h]
  __m128i v43; // [rsp+40h] [rbp-78h] BYREF
  __int64 v44; // [rsp+50h] [rbp-68h]
  __m128i v45; // [rsp+60h] [rbp-58h] BYREF
  __int32 v46; // [rsp+70h] [rbp-48h]

  if ( a2 == -2 )
  {
    v10 = *a3;
    if ( !*a3 )
      return;
    v11 = &v10[*(v10 - 1)];
    if ( v11 == v10 )
      return;
    while ( 1 )
    {
      while ( 1 )
      {
        v16 = *v10;
        v17 = *(__int64 (__fastcall **)(_QWORD))(*a1 + 536LL);
        if ( v17 == sub_7C55E0 )
          break;
        v19 = ((__int64 (__fastcall *)(_QWORD *, _QWORD))v17)(a1, v16);
LABEL_14:
        if ( !v19 )
        {
LABEL_6:
          v12 = a1[3];
          v13 = *(_QWORD *)(v12 + 3288);
          v14 = *(_DWORD *)(v12 + 3612);
          v43.m128i_i64[1] = 0;
          LODWORD(v44) = 0;
          v15 = *(_DWORD *)(v13 + 4LL * v16);
          v43.m128i_i32[0] = v14;
          if ( v15 )
          {
            if ( v15 == 1 )
            {
              v45.m128i_i32[0] = v14;
              v45.m128i_i64[1] = 0;
              v46 = 0;
              if ( !v14 && !*(_BYTE *)(v12 + 3832) )
              {
                v39 = (__m128i *)(*(_QWORD *)(v12 + 3296) + 24LL * (v16 >> 1));
                if ( v39->m128i_i32[0] )
                {
                  *v39 = _mm_load_si128(&v45);
                  v39[1].m128i_i32[0] = v46;
                }
              }
            }
            else if ( v15 == -1 )
            {
              v43.m128i_i32[0] = v14;
              v43.m128i_i64[1] = 0;
              LODWORD(v44) = 0;
              sub_11B4C90(v12, v16 ^ 1, v14, v13, a5, a6, (__int128)_mm_load_si128(&v43), 0);
            }
          }
          else
          {
            v43.m128i_i32[0] = v14;
            v43.m128i_i64[1] = 0;
            LODWORD(v44) = 0;
            sub_11C3360(v12, v16, v14, v13, a5, a6, (__int128)_mm_load_si128(&v43), v44);
          }
          goto LABEL_10;
        }
        if ( v11 == ++v10 )
          return;
      }
      v18 = a1[20];
      if ( !v18 )
      {
        v19 = *(_DWORD *)(*(_QWORD *)(a1[3] + 3288LL) + 4LL * v16);
        goto LABEL_14;
      }
      if ( *(_DWORD *)(*(_QWORD *)(v18 + 880) + 4LL * (v16 >> 1)) < *(_DWORD *)(v18 + 888) )
        goto LABEL_6;
LABEL_10:
      if ( v11 == ++v10 )
        return;
    }
  }
  v21 = sub_186B270(0x10u);
  v23 = *a3;
  *(_DWORD *)(v21 + 8) = a2;
  v24 = (_QWORD *)(v21 + 8);
  *(_QWORD *)v21 = 0x100000002LL;
  if ( !v23 || (v41 = &v23[*(v23 - 1)], v41 == v23) )
  {
    v34 = a1[3];
    v35 = 1;
    v45 = (__m128i)0xFFFFFFFF00000001LL;
LABEL_34:
    sub_11C4C20(v34, v35, v24, &v45, v23, v22);
    sub_186B220(v24 - 1);
    return;
  }
  v25 = v23;
  do
  {
    while ( 1 )
    {
      v30 = *v25;
      v31 = *(__int64 (__fastcall **)(_QWORD))(*a1 + 536LL);
      if ( v31 != sub_7C55E0 )
        break;
      v32 = a1[20];
      if ( !v32 )
      {
        v33 = *(_DWORD *)(*(_QWORD *)(a1[3] + 3288LL) + 4LL * v30);
        goto LABEL_30;
      }
      if ( *(_DWORD *)(*(_QWORD *)(v32 + 880) + 4LL * (v30 >> 1)) < *(_DWORD *)(v32 + 888) )
        goto LABEL_22;
LABEL_26:
      if ( v41 == ++v25 )
        goto LABEL_32;
    }
    v33 = ((__int64 (__fastcall *)(_QWORD *, _QWORD))v31)(a1, v30);
LABEL_30:
    if ( !v33 )
    {
LABEL_22:
      v26 = a1[3];
      v43 = (__m128i)0xFFFFFFFF00000001LL;
      sub_11C4C70(v26, a2 ^ 1u, v30, &v43);
      v27 = v30 ^ 1;
      if ( v24 )
      {
        v28 = *((unsigned int *)v24 - 1);
        if ( (_DWORD)v28 == *((_DWORD *)v24 - 2) )
        {
          v36 = (unsigned int)(3 * v28 + 1) >> 1;
          v37 = 4 * v36 + 8;
          if ( 4 * (int)v28 + 8 >= (unsigned int)v37 || (unsigned int)v28 >= v36 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_113C8C(v45.m128i_i64, "Overflow encountered when expanding vector", v7);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v45);
            sub_233E40((__int64)&v45);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v42 = (unsigned int)(3 * v28 + 1) >> 1;
          v38 = (unsigned int *)sub_186B300(v24 - 1, v37);
          v24 = v38 + 2;
          *v38 = v42;
          v29 = (int *)&v38[v38[1] + 2];
        }
        else
        {
          v29 = (int *)v24 + v28;
        }
      }
      else
      {
        v40 = (_QWORD *)sub_186B270(0x10u);
        v24 = v40 + 1;
        *v40 = 2;
        v29 = (int *)(v40 + 1);
      }
      *v29 = v27;
      ++*((_DWORD *)v24 - 1);
      goto LABEL_26;
    }
    ++v25;
  }
  while ( v41 != v25 );
LABEL_32:
  v34 = a1[3];
  v45 = (__m128i)0xFFFFFFFF00000001LL;
  if ( v24 )
  {
    v35 = *((unsigned int *)v24 - 1);
    goto LABEL_34;
  }
  sub_11C4C20(v34, 0, 0, &v45, v23, v22);
}

