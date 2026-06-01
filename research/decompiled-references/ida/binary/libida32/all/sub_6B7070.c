__int64 __fastcall sub_6B7070(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v5; // rax
  size_t v6; // rdx
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rbp
  size_t v11; // rbp
  const void *v12; // r13
  __m128i v13; // xmm0
  void *v14; // r12
  void *v15; // rdi
  __m128i si128; // xmm0
  void *v17; // rdi
  __int64 v19; // rax
  __int64 v20; // rax
  void *v21; // rdi
  int v22[4]; // [rsp+0h] [rbp-58h] BYREF
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  int v24[4]; // [rsp+18h] [rbp-40h] BYREF
  int v25[2]; // [rsp+28h] [rbp-30h]
  __int64 v26; // [rsp+30h] [rbp-28h]

  v3 = a2;
  *(_QWORD *)v25 = __readfsqword(0x28u);
  LODWORD(a2) = a3;
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v5 = sub_A6EEE0(*(_QWORD *)(v3 + 48), a3, 0);
  if ( !v5 )
    return a1;
  v10 = v5;
  if ( (*(_BYTE *)(v5 + 32) & 1) == 0 )
  {
    v19 = *(_QWORD *)(v3 + 48);
    v14 = nullptr;
    a2 = *(_QWORD *)(v19 + 2312);
    v20 = sub_EAE110(v10, a2);
    *(_BYTE *)(v10 + 32) |= 1u;
    v13 = 0;
    *(_QWORD *)(v10 + 8) = v20;
    v12 = (const void *)v20;
    *(_QWORD *)(v10 + 16) = v6;
    v11 = v6;
    if ( !v6 )
      goto LABEL_4;
LABEL_11:
    *(__m128i *)v24 = v13;
    v21 = nullptr;
    ptr = nullptr;
    if ( v11 != -1 )
    {
      ptr = (void *)qvector_reserve(&ptr, 0, v11 + 1, 1);
      v21 = ptr;
    }
    LODWORD(a2) = (_DWORD)v12;
    *(_QWORD *)v24 = v11 + 1;
    memmove(v21, v12, v11);
    *((_BYTE *)ptr + v11) = 0;
    v14 = ptr;
    v13 = _mm_loadu_si128((const __m128i *)v24);
    goto LABEL_4;
  }
  v11 = *(_QWORD *)(v5 + 16);
  v12 = *(const void **)(v5 + 8);
  v13 = 0;
  v14 = nullptr;
  if ( v11 )
    goto LABEL_11;
LABEL_4:
  ptr = nullptr;
  v15 = *(void **)a1;
  *(_OWORD *)v24 = 0;
  if ( v15 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    *(__m128i *)v22 = v13;
    qfree(v15);
    si128 = _mm_load_si128((const __m128i *)v22);
    v17 = ptr;
    *(_QWORD *)a1 = v14;
    *(__m128i *)(a1 + 8) = si128;
    if ( v17 )
    {
      *(_QWORD *)v24 = 0;
      qfree(v17);
    }
  }
  else
  {
    *(_QWORD *)a1 = v14;
    *(__m128i *)(a1 + 8) = v13;
  }
  rawcmt_to_tilcmt(a1, a2, v6, v7, v8, v9, v22[0], v22[2], ptr, v24[0], v24[2], v25[0], v26);
  return a1;
}

