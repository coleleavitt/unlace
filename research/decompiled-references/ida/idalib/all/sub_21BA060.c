_QWORD *__fastcall sub_21BA060(
        _QWORD *a1,
        const __m128i *a2,
        __int64 (__fastcall ***a3)(_QWORD),
        __int64 a4,
        __int64 a5,
        char a6,
        int *a7)
{
  __int64 v10; // r15
  __int64 v12; // rbx
  int v13; // ebp
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rbp
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r15
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  __m128i v29; // rax
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // r8
  __int32 *v33; // r15
  __int32 v34; // esi
  __int64 v35; // rcx
  unsigned __int64 v36; // r9
  const char *v37; // r15
  size_t v38; // rax
  __int64 v39; // rdx
  const char *v40; // r15
  const char *v41; // r9
  size_t v42; // rax
  __int64 (__fastcall **v43)(_QWORD); // rax
  __int64 v44; // rax
  const char *v45; // r14
  size_t v46; // r8
  __int64 v47; // r15
  const void **v48; // rbx
  void *v49; // r14
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rcx
  unsigned int v52; // ebp
  char *v53; // rax
  void *v54; // rdi
  __int64 v55; // r12
  char *v56; // rsi
  __int64 v57; // rdx
  const char *v58; // rdi
  unsigned int v59; // eax
  const char *v60; // r14
  __int64 v61; // rbx
  void *v62; // rbx
  __int64 v63; // rax
  __m128i v64; // [rsp+0h] [rbp-1C8h] BYREF
  __int64 v65; // [rsp+18h] [rbp-1B0h]
  __int64 v66; // [rsp+20h] [rbp-1A8h]
  __int64 v67; // [rsp+28h] [rbp-1A0h]
  void *v68; // [rsp+38h] [rbp-190h] BYREF
  _QWORD v69[4]; // [rsp+40h] [rbp-188h] BYREF
  __int16 v70; // [rsp+60h] [rbp-168h]
  _BYTE ptr[24]; // [rsp+70h] [rbp-158h] BYREF
  _BYTE v72[320]; // [rsp+88h] [rbp-140h] BYREF

  if ( a6 && (v10 = a2->m128i_i64[0], *(_BYTE *)(a2->m128i_i64[0] + 44) == 3) )
  {
    v12 = a2->m128i_i64[1];
    v64.m128i_i64[0] = a4;
    v65 = a5;
    v13 = *a7;
    v14 = operator new(0x58u);
    v15 = v64.m128i_i64[0];
    v64.m128i_i64[0] = v14;
    sub_21B58D0(v14, v10, v12, v15, v65, v13, 0);
    v68 = (void *)v64.m128i_i64[0];
  }
  else
  {
    sub_21B98B0((__int64 *)&v68, a2, a3, a4, a5, a7);
    if ( !v68 )
    {
      *a1 = 0;
      return a1;
    }
  }
  v16 = sub_21BB380(a2->m128i_i64[1], *(unsigned __int16 *)(a2->m128i_i64[0] + 58));
  v18 = v16;
  if ( !v16 )
  {
LABEL_37:
    *a1 = v68;
    return a1;
  }
  v19 = v17;
  v20 = sub_21BB380(v17, *(unsigned __int16 *)(v16 + 58));
  v22 = v20;
  if ( v20 )
  {
    v19 = v21;
    v23 = sub_21BB380(v21, *(unsigned __int16 *)(v20 + 58));
    v18 = v23;
    if ( !v23 )
      goto LABEL_52;
    v19 = v24;
    v25 = sub_21BB380(v24, *(unsigned __int16 *)(v23 + 58));
    v22 = v25;
    if ( !v25 )
      goto LABEL_14;
    v19 = v26;
    v27 = sub_21BB380(v26, *(unsigned __int16 *)(v25 + 58));
    v18 = v27;
    if ( v27 )
    {
      v19 = v28;
      v29.m128i_i64[0] = sub_21BB380(v28, *(unsigned __int16 *)(v27 + 58));
      v64 = v29;
      *(__m128i *)ptr = _mm_load_si128(&v64);
      if ( *(_QWORD *)ptr )
      {
        v18 = sub_11BAC70(ptr);
        v19 = v30;
      }
    }
    else
    {
LABEL_52:
      v18 = v22;
    }
  }
LABEL_14:
  v31 = *(_DWORD *)(v18 + 40);
  if ( *(_DWORD *)(a2->m128i_i64[0] + 40) == v31 )
    goto LABEL_37;
  v32 = *(_QWORD *)(v19 + 16);
  v33 = (__int32 *)(*(_QWORD *)(v19 + 32) + 80LL * (unsigned int)(v31 - 1));
  v34 = *v33;
  v35 = **(_QWORD **)(v19 + 8);
  if ( !*v33 )
  {
    v36 = 0;
    v37 = (const char *)(v35 + (unsigned int)v33[1]);
    if ( !v37 )
    {
      v36 = 0;
      v38 = 0;
      goto LABEL_19;
    }
    goto LABEL_17;
  }
  v36 = 0;
  v58 = (const char *)(v35 + *(unsigned int *)(v32 + 4LL * (unsigned int)(v34 + 1)));
  if ( v58 )
  {
    v66 = **(_QWORD **)(v19 + 8);
    v65 = v32;
    v64.m128i_i32[0] = v34;
    v59 = strlen(v58);
    v35 = v66;
    v32 = v65;
    v34 = v64.m128i_i32[0];
    v36 = v59;
  }
  v38 = 0;
  v37 = (const char *)(v35 + (unsigned int)v33[1]);
  if ( v37 )
  {
LABEL_17:
    v67 = v35;
    v66 = v36;
    v65 = v32;
    v64.m128i_i32[0] = v34;
    v38 = strlen(v37);
    v35 = v67;
    v36 = v66;
    v32 = v65;
    v34 = v64.m128i_i32[0];
  }
  v39 = 0;
  if ( v38 >= v36 )
  {
LABEL_19:
    v39 = v38 - v36;
    v38 = v36;
  }
  v40 = &v37[v38];
  v41 = nullptr;
  v42 = 0;
  if ( v34 )
  {
    v41 = (const char *)(v35 + *(unsigned int *)(v32 + 4LL * (unsigned int)(v34 + 1)));
    if ( v41 )
    {
      v65 = v39;
      v64.m128i_i64[0] = (__int64)v41;
      v42 = strlen(v41);
      v39 = v65;
      v41 = (const char *)v64.m128i_i64[0];
    }
  }
  v69[1] = v42;
  v43 = *a3;
  v69[2] = v40;
  *(_QWORD *)ptr = v72;
  v44 = (__int64)v43[2];
  v69[0] = v41;
  v69[3] = v39;
  v70 = 1285;
  *(__m128i *)&ptr[8] = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  v64.m128i_i64[0] = v44;
  sub_22538C0(v69, ptr);
  v45 = (const char *)((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _QWORD, _QWORD))v64.m128i_i64[0])(
                        a3,
                        *(_QWORD *)ptr,
                        *(_QWORD *)&ptr[8]);
  if ( *(_BYTE **)ptr != v72 )
    free(*(void **)ptr);
  v46 = 0;
  if ( v45 )
    v46 = strlen(v45);
  v65 = v46;
  v64.m128i_i32[0] = *((_DWORD *)v68 + 10);
  v47 = operator new(0x58u);
  sub_21B58D0(v47, v18, v19, (__int64)v45, v65, v64.m128i_i32[0], 0);
  v48 = (const void **)v68;
  v49 = *(void **)(v47 + 80);
  v68 = nullptr;
  *(_QWORD *)(v47 + 80) = v48;
  if ( v49 )
  {
    sub_21B59C0((__int64)v49);
    operator delete(v49, 0x58u);
  }
  if ( *(_BYTE *)(a2->m128i_i64[0] + 44) != 3 )
  {
    if ( v48 != (const void **)v47 )
    {
      v50 = *((unsigned int *)v48 + 14);
      v51 = *(unsigned int *)(v47 + 56);
      v52 = *((_DWORD *)v48 + 14);
      if ( v50 <= v51 )
      {
        if ( *((_DWORD *)v48 + 14) )
          memmove(*(void **)(v47 + 48), v48[6], 8 * v50);
      }
      else
      {
        if ( v50 > *(unsigned int *)(v47 + 60) )
        {
          *(_DWORD *)(v47 + 56) = 0;
          sub_2237220(v47 + 48, v47 + 64, v50, 8);
          v53 = (char *)v48[6];
          v50 = *((unsigned int *)v48 + 14);
          v51 = 0;
          v54 = *(void **)(v47 + 48);
          v56 = v53;
        }
        else
        {
          v53 = (char *)v48[6];
          v54 = *(void **)(v47 + 48);
          v55 = 8 * v51;
          v56 = v53;
          if ( *(_DWORD *)(v47 + 56) )
          {
            memmove(v54, v53, 8 * v51);
            v53 = (char *)v48[6];
            v51 = v55;
            v50 = *((unsigned int *)v48 + 14);
            v54 = (void *)(v55 + *(_QWORD *)(v47 + 48));
            v56 = &v53[v55];
          }
        }
        v57 = 8 * v50;
        if ( v56 != &v53[v57] )
          memcpy(v54, v56, v57 - v51);
      }
      *(_DWORD *)(v47 + 56) = v52;
    }
    *(_BYTE *)(v47 + 44) = *((_BYTE *)v48 + 44) & 4 | *(_BYTE *)(v47 + 44) & 0xFB;
    *((_BYTE *)v48 + 44) &= ~4u;
    *a1 = v47;
    goto LABEL_50;
  }
  v60 = *(const char **)(a2->m128i_i64[0] + 64);
  if ( v60 )
  {
    if ( *v60 )
    {
      v61 = *(unsigned int *)(v47 + 56);
      v64.m128i_i64[0] = v47 + 48;
      v65 = v47 + 64;
      do
      {
        if ( v61 + 1 > (unsigned __int64)*(unsigned int *)(v47 + 60) )
        {
          sub_2237220(v64.m128i_i64[0], v65, v61 + 1, 8);
          *(_QWORD *)(*(_QWORD *)(v47 + 48) + 8LL * *(unsigned int *)(v47 + 56)) = v60;
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)(v47 + 48) + 8 * v61) = v60;
        }
        v61 = (unsigned int)(*(_DWORD *)(v47 + 56) + 1);
        *(_DWORD *)(v47 + 56) = v61;
        v60 += strlen(v60) + 1;
      }
      while ( *v60 );
      if ( *(_BYTE *)(v18 + 44) == 4 && !*(_QWORD *)(a2->m128i_i64[0] + 64) )
        goto LABEL_58;
    }
  }
  else if ( *(_BYTE *)(v18 + 44) == 4 )
  {
LABEL_58:
    v63 = *(unsigned int *)(v47 + 56);
    if ( v63 + 1 > (unsigned __int64)*(unsigned int *)(v47 + 60) )
    {
      sub_2237220(v47 + 48, v47 + 64, v63 + 1, 8);
      v63 = *(unsigned int *)(v47 + 56);
    }
    *(_QWORD *)(*(_QWORD *)(v47 + 48) + 8 * v63) = &byte_22F0C30;
    ++*(_DWORD *)(v47 + 56);
  }
  *a1 = v47;
LABEL_50:
  v62 = v68;
  if ( v68 )
  {
    sub_21B59C0((__int64)v68);
    operator delete(v62, 0x58u);
  }
  return a1;
}
