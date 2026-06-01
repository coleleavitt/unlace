__int64 __fastcall sub_3BB410(__int64 a1, __int64 *a2, int a3, __int64 a4)
{
  char v7; // r14
  __int64 v8; // rbp
  unsigned int v9; // eax
  void *v10; // rdi
  void **p_ptr; // rsi
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rax
  unsigned int *v16; // rbx
  __int64 v17; // rdx
  unsigned int v18; // ebp
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  unsigned int v23; // ebp
  __m128i si128; // xmm0
  __int64 v26; // r15
  __int64 v27; // r15
  unsigned int v28; // eax
  unsigned __int8 v29; // al
  int v30; // [rsp+0h] [rbp-A8h]
  void *v31; // [rsp+8h] [rbp-A0h]
  void *v32; // [rsp+10h] [rbp-98h] BYREF
  int v33[4]; // [rsp+18h] [rbp-90h]
  int v34[2]; // [rsp+28h] [rbp-80h]
  __int64 v35; // [rsp+30h] [rbp-78h]
  void *ptr; // [rsp+40h] [rbp-68h] BYREF
  __int128 v37; // [rsp+48h] [rbp-60h]
  __int64 v38; // [rsp+58h] [rbp-50h]
  int v39; // [rsp+60h] [rbp-48h]
  unsigned __int64 v40; // [rsp+68h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  if ( !a4 || (*(_BYTE *)(a4 + 24) & 8) != 0 )
  {
    v7 = sub_3E9640(a1);
    if ( v7 )
      return 0;
  }
  else
  {
    v7 = 1;
  }
  v8 = *a2;
  v9 = *((_DWORD *)a2 + 1);
  v10 = &v32;
  v32 = nullptr;
  *(_QWORD *)v34 = 0;
  LODWORD(v35) = -1;
  *(_OWORD *)v33 = 0;
  if ( *(_DWORD *)a2 < v9 )
  {
    v10 = &v32;
    v32 = (void *)qvector_reserve(&v32, 0, 1, 8);
    *((_QWORD *)v32 + (*(_QWORD *)v33)++) = v8;
  }
  p_ptr = (void **)(a1 + 1032);
  v30 = a1 + 1032;
  rangeset_t_sub2((int)&v32);
  v15 = *(_QWORD *)v33;
  if ( !*(_QWORD *)v33 )
  {
    v10 = v32;
    v23 = 0;
    goto LABEL_19;
  }
  if ( a3 == -1 )
  {
    v27 = *a2;
    v28 = *((_DWORD *)a2 + 1);
    v39 = -1;
    ptr = nullptr;
    v38 = 0;
    v37 = 0;
    if ( *(_DWORD *)a2 < v28 )
    {
      ptr = (void *)qvector_reserve(&ptr, 0, 1, 8);
      *((_QWORD *)ptr + v37) = v27;
      *(_QWORD *)&v37 = v37 + 1;
    }
    p_ptr = &ptr;
    v29 = rangeset_t_contains(a1 + 1112, &ptr);
    v10 = ptr;
    a3 = v29;
    if ( ptr )
    {
      *(_QWORD *)&v37 = 0;
      qfree(ptr);
    }
    v15 = *(_QWORD *)v33;
  }
  v16 = (unsigned int *)v32;
  if ( !(8 * v15) )
  {
    v10 = v32;
    v23 = 0;
    goto LABEL_15;
  }
  while ( 1 )
  {
    v17 = v16[1];
    v18 = *v16;
    if ( a3 )
    {
      ptr = (void *)_mm_unpacklo_epi32(_mm_cvtsi32_si128(v18), _mm_cvtsi32_si128(v17)).m128i_u64[0];
      if ( (unsigned __int8)rangeset_t_add(
                              (int)a1 + 1112,
                              (int)&ptr,
                              v17,
                              v12,
                              v13,
                              v14,
                              v30,
                              v31,
                              (__int64)v32,
                              v33[0],
                              v33[2],
                              v34[0],
                              v35) )
      {
        *(_DWORD *)(a1 + 1196) = -1;
        *(_BYTE *)(a1 + 1192) = 1;
      }
      goto LABEL_12;
    }
    HIDWORD(v31) = v16[1];
    v26 = *(_QWORD *)(a1 + 1008);
    if ( (unsigned __int8)must_journal(v10, p_ptr, v17) )
    {
      if ( *(_DWORD *)(v26 + 88) != -1 )
        break;
    }
    v23 = sub_898180(v26, v18, HIDWORD(v31), 0);
    if ( v23 )
      goto LABEL_30;
LABEL_12:
    p_ptr = (void **)v16;
    rangeset_t_add(v30, (int)v16, v19, v20, v21, v22, v30, v31, (__int64)v32, v33[0], v33[2], v34[0], v35);
    if ( v7 && (p_ptr = (void **)*v16, (unsigned __int8)sub_3EA400(a1, p_ptr)) )
    {
      p_ptr = (void **)v16;
      v23 = sub_3EA290(a1, (int)v16);
    }
    else
    {
      v23 = 0;
    }
    v10 = v32;
    v16 += 2;
    if ( v16 == (unsigned int *)((char *)v32 + 8 * *(_QWORD *)v33) )
      goto LABEL_15;
  }
  ptr = nullptr;
  v37 = 0;
  v23 = sub_898180(v26, v18, HIDWORD(v31), &ptr);
  if ( !v23 )
  {
    v19 = v37;
    if ( (_QWORD)v37 )
    {
      add_undo_record(*(unsigned int *)(v26 + 88), ptr, v37);
      if ( ptr )
      {
        *(_QWORD *)&v37 = 0;
        qfree(ptr);
      }
    }
    else if ( ptr )
    {
      qfree(ptr);
    }
    goto LABEL_12;
  }
  if ( ptr )
  {
    *(_QWORD *)&v37 = 0;
    qfree(ptr);
    v10 = v32;
    goto LABEL_15;
  }
LABEL_30:
  v10 = v32;
LABEL_15:
  si128 = _mm_load_si128((const __m128i *)&xmmword_2383860);
  *(_DWORD *)(a1 + 1016) = -1;
  *(__m128i *)(a1 + 1532) = si128;
LABEL_19:
  if ( v10 )
  {
    *(_QWORD *)v33 = 0;
    qfree(v10);
  }
  return v23;
}

