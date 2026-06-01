__int64 __fastcall sub_3C0380(__int64 a1, unsigned __int64 *a2, int a3, __int64 a4)
{
  char v6; // r13
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r15
  void *v9; // rdi
  char *v10; // rdx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rax
  char *v15; // rbx
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  unsigned __int64 v20; // r15
  void *v21; // rsi
  __int64 v22; // r14
  __m128i si128; // xmm0
  unsigned __int64 v25; // r12
  unsigned __int64 v26; // r15
  unsigned __int8 v27; // al
  unsigned int v28; // r15d
  int v29; // [rsp+0h] [rbp-A8h]
  void *v30; // [rsp+8h] [rbp-A0h]
  void *v31; // [rsp+8h] [rbp-A0h]
  void *v32; // [rsp+10h] [rbp-98h] BYREF
  __int128 v33; // [rsp+18h] [rbp-90h]
  __int64 v34; // [rsp+28h] [rbp-80h]
  __int64 v35; // [rsp+30h] [rbp-78h]
  _BYTE ptr[24]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v37; // [rsp+58h] [rbp-50h]
  int v38; // [rsp+60h] [rbp-48h]
  unsigned __int64 v39; // [rsp+68h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  if ( !a4 || (*(_BYTE *)(a4 + 44) & 8) != 0 )
  {
    v6 = sub_3FC580(a1);
    if ( v6 )
      return 0;
  }
  else
  {
    v6 = 1;
  }
  v7 = *a2;
  v8 = a2[1];
  v9 = &v32;
  v32 = nullptr;
  v34 = 0;
  LODWORD(v35) = -1;
  v33 = 0;
  if ( v7 < v8 )
  {
    v32 = (void *)qvector_reserve(&v32, 0, 1, 16);
    v9 = &v32;
    *((__m128i *)v32 + v33) = _mm_unpacklo_epi64((__m128i)v7, (__m128i)v8);
    *(_QWORD *)&v33 = v33 + 1;
  }
  v29 = a1 + 1040;
  rangeset_t_sub2((int)&v32);
  v14 = v33;
  if ( !(_QWORD)v33 )
  {
    v9 = v32;
    v28 = 0;
    goto LABEL_25;
  }
  if ( a3 == -1 )
  {
    v25 = *a2;
    v26 = a2[1];
    memset(ptr, 0, sizeof(ptr));
    v37 = 0;
    v38 = -1;
    if ( v25 < v26 )
    {
      *(_QWORD *)ptr = qvector_reserve(ptr, 0, 1, 16);
      *(__m128i *)(*(_QWORD *)ptr + 16LL * (*(_QWORD *)&ptr[8])++) = _mm_unpacklo_epi64((__m128i)v25, (__m128i)v26);
    }
    v27 = rangeset_t_contains(a1 + 1120, ptr);
    v9 = *(void **)ptr;
    a3 = v27;
    if ( *(_QWORD *)ptr )
    {
      *(_QWORD *)&ptr[8] = 0;
      qfree(*(void **)ptr);
    }
    v14 = v33;
  }
  v15 = (char *)v32;
  if ( !(16 * v14) )
  {
    v9 = v32;
    v28 = 0;
    goto LABEL_21;
  }
  while ( 1 )
  {
    v20 = *((_QWORD *)v15 + 1);
    v21 = *(void **)v15;
    if ( a3 )
    {
      *(__m128i *)ptr = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v21, (__m128i)v20);
      if ( (unsigned __int8)rangeset_t_add(
                              (int)a1 + 1120,
                              (int)ptr,
                              (int)v10,
                              v11,
                              v12,
                              v13,
                              v29,
                              v30,
                              (__int64)v32,
                              v33,
                              SDWORD2(v33),
                              v34,
                              v35) )
      {
        *(_QWORD *)(a1 + 1208) = -1;
        *(_BYTE *)(a1 + 1200) = 1;
      }
      goto LABEL_12;
    }
    v31 = *(void **)v15;
    v22 = *(_QWORD *)(a1 + 1016);
    if ( (unsigned __int8)must_journal(v9, v21, v10) )
    {
      if ( *(_DWORD *)(v22 + 96) != -1 )
        break;
    }
    v28 = sub_8BBE70(v22, v31, v20, 0);
    if ( v28 )
      goto LABEL_29;
LABEL_12:
    rangeset_t_add(v29, (int)v15, v16, v17, v18, v19, v29, v31, (__int64)v32, v33, SDWORD2(v33), v34, v35);
    if ( v6 && (unsigned __int8)sub_3FD360(a1, *(_QWORD *)v15) )
      v28 = sub_3FD1E0(a1, (int)v15);
    else
      v28 = 0;
    v9 = v32;
    v15 += 16;
    v10 = (char *)v32 + 16 * v33;
    if ( v15 == v10 )
      goto LABEL_21;
  }
  memset(ptr, 0, sizeof(ptr));
  v28 = sub_8BBE70(v22, v31, v20, ptr);
  if ( !v28 )
  {
    v16 = *(_DWORD *)&ptr[8];
    if ( *(_QWORD *)&ptr[8] )
    {
      add_undo_record(*(unsigned int *)(v22 + 96), *(_QWORD *)ptr, *(_QWORD *)&ptr[8]);
      if ( *(_QWORD *)ptr )
      {
        *(_QWORD *)&ptr[8] = 0;
        qfree(*(void **)ptr);
      }
    }
    else if ( *(_QWORD *)ptr )
    {
      qfree(*(void **)ptr);
    }
    goto LABEL_12;
  }
  if ( *(_QWORD *)ptr )
  {
    *(_QWORD *)&ptr[8] = 0;
    qfree(*(void **)ptr);
    v9 = v32;
    goto LABEL_21;
  }
LABEL_29:
  v9 = v32;
LABEL_21:
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
  *(_QWORD *)(a1 + 1024) = -1;
  *(__m128i *)(a1 + 1584) = si128;
  *(_OWORD *)(a1 + 1600) = -1;
LABEL_25:
  if ( v9 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(v9);
  }
  return v28;
}
