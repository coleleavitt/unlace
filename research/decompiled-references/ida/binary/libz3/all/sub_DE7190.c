__int64 __fastcall sub_DE7190(__int64 a1, _QWORD *a2, unsigned int a3, __int64 *a4)
{
  char *v7; // rax
  __int64 *v8; // r10
  __int64 v9; // r9
  __int64 *v10; // rcx
  __int64 v11; // rax
  int v12; // edi
  unsigned int v13; // edx
  __int64 *v14; // rsi
  __int64 v15; // rdx
  __int64 *v16; // r8
  __int64 *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // r12
  __int64 v21; // r15
  __int64 v23; // r9
  char *v24; // rcx
  __int64 v25; // rax
  int v26; // edi
  unsigned int v27; // edx
  char *v28; // rsi
  __int64 v29; // rdx
  char *v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 *v33; // r12
  __int64 v34; // rdx
  unsigned int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  __m128i *v39; // r15
  __int64 v40; // r14
  const __m128i *v41; // rdi
  bool v42; // zf
  __m128i v43; // xmm0
  _BYTE *v44; // rcx
  __int64 v45; // rax
  char *v46; // r14
  char *v47; // r15
  char *v48; // rdi
  __int64 v49; // rax
  _OWORD *v50; // rax
  __int64 v51; // rax
  int v52; // [rsp+8h] [rbp-180h]
  int v54; // [rsp+1Ch] [rbp-16Ch]
  __m128i *v55; // [rsp+20h] [rbp-168h]
  __m128i v56; // [rsp+30h] [rbp-158h] BYREF
  void *ptr; // [rsp+40h] [rbp-148h]
  __int64 v58; // [rsp+48h] [rbp-140h]
  _BYTE v59[312]; // [rsp+50h] [rbp-138h] BYREF

  v7 = *(char **)(a1 + 40);
  if ( !v7 )
    goto LABEL_11;
  if ( !*(_DWORD *)v7 )
    goto LABEL_54;
  v8 = a4;
  if ( *(_DWORD *)v7 == 1 )
    goto LABEL_20;
  do
  {
    v9 = *v8;
    v10 = *((__int64 **)v7 + 2);
    v11 = *((unsigned int *)v7 + 6);
    v12 = *(_DWORD *)(*v8 + 12);
    v13 = v11 - 1;
    v11 *= 16;
    v14 = (__int64 *)((char *)v10 + v11);
    v15 = 16LL * (v12 & v13);
    v16 = &v10[(unsigned __int64)v15 / 8];
    if ( v15 == v11 )
    {
LABEL_28:
      if ( v10 == v16 )
        goto LABEL_11;
      while ( 1 )
      {
        v32 = *v10;
        if ( (unsigned __int64)*v10 > 1 )
        {
          if ( *(_DWORD *)(v32 + 12) == v12 && v9 == v32 )
          {
            v17 = v10;
            goto LABEL_18;
          }
        }
        else if ( !v32 )
        {
          v19 = *(_QWORD *)(a1 + 48);
          if ( !v19 )
          {
LABEL_36:
            ptr = v59;
            v58 = 0x1000000000LL;
            if ( !a3 )
            {
              v44 = v59;
              v34 = 0;
LABEL_57:
              v45 = sub_15D4E60(*a2, a1 + 24, v34, v44);
              v46 = (char *)ptr;
              v20 = v45;
              v47 = (char *)ptr + 16 * (unsigned int)v58;
              if ( ptr != v47 )
              {
                do
                {
                  v48 = v46;
                  v46 += 16;
                  sub_15D0DF0(v48);
                }
                while ( v47 != v46 );
                v47 = (char *)ptr;
              }
              if ( v47 != v59 && v47 )
                sub_186B220(v47);
              goto LABEL_13;
            }
            v33 = a4;
            v34 = 0;
            v35 = 16;
            while ( 2 )
            {
              v36 = *v33;
              v56.m128i_i8[8] = 1;
              v56.m128i_i64[0] = v36;
              if ( (unsigned int)v34 < v35 )
              {
                *((__m128i *)ptr + v34) = _mm_load_si128(&v56);
              }
              else
              {
                v54 = 2 * v35;
                v37 = sub_186B270(32LL * v35);
                v38 = (unsigned int)v58;
                v55 = (__m128i *)v37;
                if ( (_DWORD)v58 )
                {
                  v39 = (__m128i *)v37;
                  v40 = 0;
                  do
                  {
                    v41 = (const __m128i *)((char *)ptr + 16 * v40);
                    v42 = v41->m128i_i8[8] == 0;
                    *v39 = _mm_loadu_si128(v41);
                    v41->m128i_i32[0] = 0;
                    if ( !v42 )
                      v41->m128i_i8[8] = 0;
                    sub_15D0DF0(v41);
                    v38 = (unsigned int)v58;
                    ++v40;
                    ++v39;
                  }
                  while ( (unsigned int)v40 < (unsigned int)v58 );
                }
                if ( ptr != v59 && ptr )
                {
                  sub_186B220(ptr);
                  v38 = (unsigned int)v58;
                }
                v43 = _mm_load_si128(&v56);
                v42 = v56.m128i_i8[8] == 0;
                ptr = v55;
                HIDWORD(v58) = v54;
                v55[v38] = v43;
                if ( v42 )
                {
                  v56.m128i_i32[0] = 0;
                  goto LABEL_40;
                }
              }
              v56.m128i_i32[0] = 0;
              v56.m128i_i8[8] = 0;
LABEL_40:
              LODWORD(v58) = v58 + 1;
              ++v33;
              sub_15D0DF0(&v56);
              v34 = (unsigned int)v58;
              if ( v33 == &a4[a3] )
              {
                v44 = ptr;
                goto LABEL_57;
              }
              v35 = HIDWORD(v58);
              continue;
            }
          }
LABEL_12:
          v20 = (*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD, __int64 *))(*(_QWORD *)v19 + 88LL))(
                  v19,
                  a2,
                  a3,
                  a4);
LABEL_13:
          v21 = *(_QWORD *)(a1 + 40);
          if ( !v21 )
          {
            v52 = *(_DWORD *)(a1 + 12);
            v49 = sub_17E9C90(a2[1], 40);
            *(_QWORD *)(v49 + 8) = 0;
            v21 = v49;
            *(_DWORD *)v49 = v52;
            v50 = (_OWORD *)sub_186B270(0x80u);
            *v50 = 0;
            v50[1] = 0;
            v50[2] = 0;
            v50[3] = 0;
            v50[4] = 0;
            v50[5] = 0;
            v50[6] = 0;
            v50[7] = 0;
            *(_QWORD *)(v21 + 16) = v50;
            *(_QWORD *)(v21 + 24) = 8;
            *(_DWORD *)(v21 + 32) = 0;
            *(_QWORD *)(a1 + 40) = v21;
          }
          sub_DE9EC0(v21, a2, a4, v20);
          sub_DE5EB0((__int64)a2, v20, a1, a3, a4);
          return v20;
        }
        v10 += 2;
        if ( v16 == v10 )
          goto LABEL_11;
      }
    }
    v17 = &v10[(unsigned __int64)v15 / 8];
    while ( 1 )
    {
      v18 = *v17;
      if ( (unsigned __int64)*v17 <= 1 )
      {
        if ( !v18 )
          goto LABEL_11;
        goto LABEL_8;
      }
      if ( *(_DWORD *)(v18 + 12) == v12 && v9 == v18 )
        break;
LABEL_8:
      v17 += 2;
      if ( v14 == v17 )
        goto LABEL_28;
    }
LABEL_18:
    v7 = (char *)v17[1];
    if ( !v7 )
      goto LABEL_11;
    ++v8;
  }
  while ( *(_DWORD *)v7 != 1 );
LABEL_20:
  v23 = *v8;
  v24 = *((char **)v7 + 2);
  v25 = *((unsigned int *)v7 + 6);
  v26 = *(_DWORD *)(*v8 + 12);
  v27 = v25 - 1;
  v25 *= 16;
  v28 = &v24[v25];
  v29 = 16LL * (v26 & v27);
  v30 = &v24[v29];
  if ( v29 == v25 )
  {
LABEL_63:
    while ( v30 != v24 )
    {
      v51 = *(_QWORD *)v24;
      if ( *(_QWORD *)v24 > 1u )
      {
        if ( *(_DWORD *)(v51 + 12) == v26 && v23 == v51 )
        {
          v7 = v24;
          goto LABEL_54;
        }
      }
      else if ( !v51 )
      {
        break;
      }
      v24 += 16;
    }
LABEL_11:
    v19 = *(_QWORD *)(a1 + 48);
    if ( !v19 )
      goto LABEL_36;
    goto LABEL_12;
  }
  v7 = &v24[v29];
  while ( 1 )
  {
    v31 = *(_QWORD *)v7;
    if ( *(_QWORD *)v7 > 1u )
      break;
    if ( !v31 )
      goto LABEL_11;
LABEL_24:
    v7 += 16;
    if ( v28 == v7 )
      goto LABEL_63;
  }
  if ( *(_DWORD *)(v31 + 12) != v26 || v23 != v31 )
    goto LABEL_24;
LABEL_54:
  v20 = *((_QWORD *)v7 + 1);
  if ( !v20 )
    goto LABEL_11;
  return v20;
}

