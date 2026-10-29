__int64 __fastcall sub_205C220(__int64 a1, __int64 a2, char *a3)
{
  int v6; // edx
  void **p_ptr; // r13
  __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r11
  __m128i *v12; // r8
  __int64 v13; // rdx
  __m128i *v14; // r15
  __int64 v15; // rbx
  __int64 v16; // r9
  char v17; // r10
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  char *v20; // rax
  bool v21; // zf
  _QWORD *v22; // rdi
  __int64 v23; // r15
  bool v25; // al
  __int64 v26; // rdx
  void **v27; // r11
  __int64 v28; // rcx
  _QWORD *v29; // rdx
  _QWORD *v30; // rax
  void **v31; // r11
  int v32; // r9d
  unsigned int v33; // eax
  __int64 v34; // rbx
  __int64 v35; // r13
  __int64 v36; // rbp
  _QWORD *v37; // rdi
  char *v38; // [rsp+8h] [rbp-110h]
  int v39; // [rsp+8h] [rbp-110h]
  unsigned int v40; // [rsp+8h] [rbp-110h]
  __int64 v41; // [rsp+8h] [rbp-110h]
  void **v42; // [rsp+10h] [rbp-108h] BYREF
  int *v43; // [rsp+18h] [rbp-100h]
  void **v44; // [rsp+20h] [rbp-F8h]
  __m128i *v45; // [rsp+28h] [rbp-F0h]
  void **v46; // [rsp+30h] [rbp-E8h]
  int v47; // [rsp+3Ch] [rbp-DCh]
  __int64 v48; // [rsp+40h] [rbp-D8h] BYREF
  __m128 v49[2]; // [rsp+50h] [rbp-C8h] BYREF
  int v50; // [rsp+70h] [rbp-A8h] BYREF
  __m128 v51; // [rsp+78h] [rbp-A0h]
  __m128i *v52; // [rsp+88h] [rbp-90h]
  void *ptr; // [rsp+90h] [rbp-88h] BYREF
  __int64 v54; // [rsp+98h] [rbp-80h]
  _BYTE v55[120]; // [rsp+A0h] [rbp-78h] BYREF

  v6 = *(_DWORD *)(a1 + 4);
  p_ptr = &ptr;
  v54 = 0x800000000LL;
  v8 = (__int64)v55;
  v9 = v6 & 0x7FFFFFF;
  ptr = v55;
  if ( v9 > 8 )
  {
    sub_2237220(&ptr, v55, v9, 8);
    v9 = *(_DWORD *)(a1 + 4) & 0x7FFFFFF;
  }
  v10 = 32 * v9;
  if ( (*(_BYTE *)(a1 + 7) & 0x40) == 0 )
  {
    v12 = (__m128i *)a1;
    v11 = a1 - v10;
    if ( a1 - v10 != a1 )
      goto LABEL_5;
LABEL_19:
    LODWORD(v15) = 0;
    LODWORD(v16) = 0;
    goto LABEL_20;
  }
  v11 = *(_QWORD *)(a1 - 8);
  v12 = (__m128i *)(v11 + v10);
  if ( v11 == v11 + v10 )
    goto LABEL_19;
LABEL_5:
  LODWORD(v13) = v54;
  v14 = (__m128i *)v11;
  LODWORD(v15) = 0;
  v16 = 0;
  v17 = 1;
  do
  {
    while ( 1 )
    {
      v20 = (char *)v14->m128i_i64[0];
      if ( a2 == v14->m128i_i64[0] )
      {
        v16 = (unsigned int)(v16 + 1);
        v20 = a3;
        v15 = ((__int64)v14->m128i_i64 - v11) >> 5;
      }
      else
      {
        v17 &= a3 == v20;
      }
      v18 = (unsigned int)v13;
      v8 = HIDWORD(v54);
      v19 = (unsigned int)v13 + 1LL;
      if ( v19 > HIDWORD(v54) )
        break;
      v14 += 2;
      *((_QWORD *)ptr + v18) = v20;
      v13 = (unsigned int)(v54 + 1);
      LODWORD(v54) = v54 + 1;
      if ( v14 == v12 )
        goto LABEL_12;
    }
    v8 = (__int64)v55;
    v14 += 2;
    v45 = v12;
    LOBYTE(v44) = v17;
    v43 = (int *)v11;
    LODWORD(v42) = v16;
    v38 = v20;
    sub_2237220(&ptr, v55, v19, 8);
    v12 = v45;
    v18 = (unsigned int)v54;
    v21 = v14 == v45;
    v16 = (unsigned int)v42;
    v11 = (__int64)v43;
    *((_QWORD *)ptr + (unsigned int)v54) = v38;
    v17 = (char)v44;
    v13 = (unsigned int)(v54 + 1);
    LODWORD(v54) = v54 + 1;
  }
  while ( !v21 );
LABEL_12:
  if ( !v17 )
  {
    v22 = *(_QWORD **)(a1 + 8);
    goto LABEL_14;
  }
LABEL_20:
  v40 = v16;
  v25 = sub_20510E0(a3, v8);
  v22 = *(_QWORD **)(a1 + 8);
  v16 = v40;
  if ( v25 )
  {
    v23 = sub_2056DA0(v22, v8, v26, v18, (__int64)v12, v40);
    goto LABEL_15;
  }
  v13 = (unsigned int)v54;
  if ( (unsigned __int8)*a3 <= 1u )
  {
    v23 = sub_2057E60(v22, v8, (unsigned int)v54, v18, (__int64)v12, v40);
    goto LABEL_15;
  }
LABEL_14:
  v39 = v16;
  v23 = sub_2058BD0(v22, (char **)ptr, v13, v18, (__int64)v12, v16);
  if ( !v23 )
  {
    v47 = v39;
    v27 = *(void ***)sub_20CB0D0(a1);
    v42 = *(void ***)(a1 + 8);
    v46 = v27;
    v45 = (__m128i *)(unsigned int)v54;
    v44 = (void **)ptr;
    v41 = (__int64)(v27 + 177);
    v43 = &v50;
    v50 = sub_2053D00(ptr, (__int64)ptr + 8 * (unsigned int)v54);
    v50 = sub_2050FF0((__int64)v42, &v50);
    v42 = v44;
    v52 = v45;
    v51 = _mm_loadh_ps((const double *)&v42);
    v44 = (void **)sub_2056960(v41, (__int64)&v50);
    v28 = *((unsigned int *)v46 + 358);
    v29 = v46[177];
    v42 = v46;
    v45 = (__m128i *)v49;
    sub_20568F0(v49, &v29[v28], &v29[v28], v41, 1);
    if ( (void **)v49[0].m128_u64[0] == v44 )
    {
      LODWORD(v44) = v47;
      v30 = (_QWORD *)sub_205A1B0(v41, a1);
      v31 = v42;
      v32 = (int)v44;
      *v30 = -8192;
      --*((_DWORD *)v31 + 356);
      ++*((_DWORD *)v31 + 357);
      if ( v32 == 1 )
      {
        sub_20166C0(
          (_QWORD *)(a1 + 32 * ((unsigned int)v15 - (unsigned __int64)(*(_DWORD *)(a1 + 4) & 0x7FFFFFF))),
          (__int64)a3);
      }
      else
      {
        v33 = *(_DWORD *)(a1 + 4) & 0x7FFFFFF;
        if ( v33 )
        {
          v42 = &ptr;
          v34 = 0;
          v35 = (__int64)a3;
          v36 = v33 - 1;
          while ( 1 )
          {
            v37 = (_QWORD *)(a1 + 32 * (v34 - v33));
            if ( a2 == *v37 )
              sub_20166C0(v37, v35);
            if ( v34 == v36 )
              break;
            ++v34;
            v33 = *(_DWORD *)(a1 + 4) & 0x7FFFFFF;
          }
          p_ptr = v42;
        }
      }
      v48 = a1;
      sub_205C0B0(v45, v41, &v48, (__int64)v43);
    }
    else
    {
      v23 = (__int64)*v44;
    }
  }
LABEL_15:
  if ( ptr != p_ptr + 2 )
    free(ptr);
  return v23;
}
