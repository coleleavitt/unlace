__int64 *__fastcall sub_6EC30(__int64 *a1, _QWORD *a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rax
  const char **v7; // rbx
  __int64 v8; // r12
  __int64 v9; // r13
  __int64 v10; // r15
  __int64 i; // r14
  const char *v12; // rsi
  const char *v13; // rdi
  __int64 v14; // rax
  int v15; // r12d
  __int64 v16; // rax
  unsigned __int8 v18; // al
  unsigned __int64 v19; // r13
  __int64 v20; // rax
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 v23; // r14
  const char *v24; // rbp
  const char *v25; // r12
  __int64 v26; // rbp
  __int64 v27; // rax
  __m128i v28; // xmm0
  __int64 v29; // rdx
  size_t v30; // r8
  const char *v31; // r9
  void *v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 *v35; // r14
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r13
  __int64 v39; // rsi
  __m128i v40; // xmm0
  __int64 v41; // rdi
  __int64 *v43; // rbp
  __int64 v44; // r12
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v49; // [rsp+18h] [rbp-70h]
  unsigned int v50; // [rsp+20h] [rbp-68h]
  unsigned __int8 v51; // [rsp+27h] [rbp-61h]
  __int64 v52; // [rsp+28h] [rbp-60h]
  const char *v53; // [rsp+28h] [rbp-60h]
  __int64 v54; // [rsp+30h] [rbp-58h] BYREF
  __m128i v55; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v56; // [rsp+48h] [rbp-40h]

  v50 = a5;
  v56 = __readfsqword(0x28u);
  if ( (debug & 0x40000) != 0 )
    sub_16DD0((__int64)"DWARF: find_source_items(ea=%a, size=%llu)\n");
  v6 = sub_69FC0((__int64)a2, a3, a3, a4, a5);
  v7 = (const char **)v6;
  if ( !v6 )
    goto LABEL_17;
  v8 = a2[6];
  if ( v8 )
  {
    v9 = *(_QWORD *)(v6 + 8);
    v10 = a2[5];
    for ( i = 0; i != v8; ++i )
    {
      v14 = *(_QWORD *)(v10 + 8);
      if ( v9 )
      {
        v12 = *v7;
        v13 = src;
        if ( !v14 )
          goto LABEL_7;
      }
      else
      {
        if ( !v14 )
        {
LABEL_13:
          v15 = *(unsigned __int8 *)(v10 + 24);
          goto LABEL_14;
        }
        v12 = src;
      }
      v13 = *(const char **)v10;
LABEL_7:
      if ( !strcmp(v13, v12) )
        goto LABEL_13;
      v10 += 32;
    }
  }
  v18 = sub_6DB70((__int64)v7);
  v19 = a2[7];
  v51 = v18;
  v15 = v18;
  v20 = a2[6];
  if ( v19 < v20 + 1 )
  {
    v33 = qvector_reserve(a2 + 5, 0, v20 + 1, 32);
    v34 = a2[6];
    v35 = (__int64 *)a2[5];
    v21 = v33;
    v36 = a2[7];
    a2[7] = v19;
    v52 = v36;
    v37 = v34 - 1;
    if ( v37 >= 0 )
    {
      v38 = v21;
      do
      {
        v39 = *v35;
        v40 = _mm_loadu_si128((const __m128i *)(v35 + 1));
        *v35 = 0;
        v35[2] = 0;
        *(_QWORD *)v38 = v39;
        *(__m128i *)(v38 + 8) = v40;
        *(_BYTE *)(v38 + 24) = *((_BYTE *)v35 + 24);
        v41 = *v35;
        if ( *v35 )
        {
          v35[1] = 0;
          v49 = v37;
          qfree(v41);
          v37 = v49;
        }
        v35 += 4;
        v38 += 32;
      }
      while ( v37-- != 0 );
      v35 = (__int64 *)a2[5];
    }
    qfree(v35);
    a2[5] = v21;
    a2[7] = v52;
    v20 = a2[6];
  }
  else
  {
    v21 = a2[5];
  }
  v22 = 32 * v20;
  v23 = v21 + v22;
  *(_QWORD *)v23 = 0;
  *(_OWORD *)(v23 + 8) = 0;
  ++a2[6];
  if ( v7 != (const char **)(v21 + v22) )
  {
    v24 = v7[1];
    if ( !v24 || (v30 = (size_t)(v24 - 1), v24 == (_BYTE *)&dword_0 + 1) )
    {
      *(_QWORD *)(v23 + 8) = 0;
    }
    else
    {
      v31 = *v7;
      v32 = *(void **)v23;
      if ( *(_QWORD *)(v23 + 16) < (unsigned __int64)v24 )
      {
        v53 = *v7;
        v46 = qvector_reserve(v21 + v22, *(_QWORD *)v23, v7[1], 1);
        v31 = v53;
        v30 = (size_t)(v24 - 1);
        *(_QWORD *)v23 = v46;
        v32 = (void *)v46;
      }
      *(_QWORD *)(v23 + 8) = v24;
      memmove(v32, v31, v30);
      v24[*(_QWORD *)v23 - 1] = 0;
    }
  }
  *(_BYTE *)(v23 + 24) = v51;
  if ( (debug & 0x40000) != 0 )
    sub_16DD0((__int64)"DWARF: find_source_items(); DWARF info for module %s: %d\n");
LABEL_14:
  if ( v15 != 1 )
    goto LABEL_17;
  if ( v50 > 4 )
  {
    if ( v50 == 6 )
      goto LABEL_17;
    goto LABEL_46;
  }
  if ( v50 <= 2 )
  {
    if ( v50 == 2 )
    {
      v25 = v7[9];
      v26 = sub_A17C0(v25, a3);
      if ( v26 )
      {
        v54 = 0;
        v55 = 0;
        v27 = sub_A17A0(v25);
        sub_A0B10(v25, &v54, a3, v27, 0xFFFFFFFFLL);
        v16 = operator new(0x40u);
        v28 = _mm_loadu_si128(&v55);
        *(_DWORD *)(v16 + 8) = 1;
        *(_QWORD *)v16 = &off_C88C0;
        v29 = v54;
        *(_QWORD *)(v16 + 16) = v7;
        *(_QWORD *)(v16 + 24) = v26;
        *(_DWORD *)(v16 + 56) = -1;
        *(_QWORD *)(v16 + 32) = v29;
        *(__m128i *)(v16 + 40) = v28;
        goto LABEL_18;
      }
LABEL_17:
      v16 = 0;
LABEL_18:
      *a1 = v16;
      return a1;
    }
LABEL_46:
    if ( !under_debugger )
      interr(30225);
    BUG();
  }
  v43 = (__int64 *)sub_A17C0(v7[9], a3);
  if ( v43 )
  {
    v44 = operator new(0x60u);
    v45 = operator new(0x30u);
    *(_QWORD *)(v45 + 8) = 0;
    *(_QWORD *)(v45 + 32) = 0;
    *(_OWORD *)(v45 + 16) = 0;
    *(_QWORD *)v45 = off_C8A70;
    *(_QWORD *)(v45 + 40) = a3;
    sub_6BBE0(v44, (__int64)v7, v43, v45);
  }
  else
  {
    v44 = 0;
  }
  *a1 = v44;
  return a1;
}
