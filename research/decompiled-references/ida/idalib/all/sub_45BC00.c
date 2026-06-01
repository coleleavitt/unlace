__int64 __fastcall sub_45BC00(__int64 a1, __int64 a2, __int64 a3)
{
  bool v5; // zf
  __int64 v7; // rsi
  __int64 (__fastcall *v8)(__int64); // rax
  void *v9; // r15
  __m128i v10; // kr00_16
  __m128 v11; // xmm0
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r12
  __m128i v20; // xmm0
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rdi
  unsigned __int64 v24; // r12
  unsigned __int64 v25; // rbx
  __int64 v26; // r12
  char *v27; // r15
  __int64 v28; // rbx
  __int64 v29; // r13
  _BYTE *v30; // rsi
  _DWORD *v31; // rbx
  __int64 v32; // rbx
  __int64 v33; // r13
  unsigned __int64 v34; // r12
  _BYTE *v35; // rsi
  _DWORD *v36; // rbx
  void *ptr; // [rsp+0h] [rbp-78h] BYREF
  __m128i v38; // [rsp+8h] [rbp-70h] BYREF
  void *v39; // [rsp+20h] [rbp-58h] BYREF
  __int128 v40; // [rsp+28h] [rbp-50h]
  unsigned __int64 v41; // [rsp+38h] [rbp-40h]

  v5 = *(_QWORD *)(a2 + 80) == 0;
  v41 = __readfsqword(0x28u);
  ptr = nullptr;
  v38 = 0;
  if ( !v5 )
  {
    switch_dbctx(*(int *)(a2 + 8));
    v7 = *(_QWORD *)(a2 + 80);
    v8 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL);
    if ( v8 == sub_454190 )
    {
      v9 = nullptr;
      v10 = 0u;
    }
    else
    {
      ((void (__fastcall *)(void **, __int64, _QWORD, __int64, _QWORD))v8)(
        &v39,
        v7,
        *(unsigned __int8 *)(a2 + 92),
        a3,
        *(_QWORD *)(a2 + 64));
      v9 = v39;
      v10 = (__m128i)v40;
    }
    v39 = nullptr;
    v40 = 0;
    ptr = v9;
    v38 = v10;
    if ( v10.m128i_i64[0] > 1uLL )
    {
      v11 = _mm_loadh_ps((const double *)&v38.m128i_i64[1]);
      *(_QWORD *)a1 = ptr;
      *(__m128 *)(a1 + 8) = v11;
      return a1;
    }
  }
  v13 = *(_DWORD *)(a2 + 88);
  if ( (v13 & 8) == 0 )
  {
    if ( (v13 & 0x30) != 0 )
    {
      v40 = 0;
      v39 = nullptr;
      sub_459E80(a2, (__int64 *)&v39, a3, 0xFFFFFFFF);
      v24 = v40;
      if ( (_QWORD)v40 )
      {
        if ( (unsigned __int64)v40 > 0x14 )
          v24 = 20;
        if ( v38.m128i_i64[1] < 2 * v24 )
          ptr = (void *)qvector_reserve(&ptr, ptr, 2 * v24, 1);
        v25 = 0;
        do
        {
          sub_35A910((__int64 *)&ptr);
          ++v25;
        }
        while ( v25 < v24 );
        if ( (unsigned __int64)v40 > 0x14 )
          sub_35A910((__int64 *)&ptr);
      }
      if ( v39 )
      {
        *(_QWORD *)&v40 = 0;
        qfree(v39);
      }
      goto LABEL_18;
    }
    v14 = switch_dbctx(*(int *)(a2 + 8));
    v15 = *(unsigned __int8 *)(a2 + 92);
    if ( (*(_BYTE *)(a2 + 89) & 0x10) != 0 )
    {
      BYTE1(v15) = 16;
      v16 = (unsigned __int8)sub_7BE710(a2 + 72, v14, a3, v15);
    }
    else
    {
      v16 = sub_7BE710(a2 + 72, v14, a3, v15);
    }
    v17 = *(_DWORD *)(a2 + 88);
    v18 = ((v17 & 0x2000) == 0) + v16 - 1;
    v19 = v18 + a3;
    if ( (v17 & 4) != 0 )
      v18 = v19;
    if ( (v17 & 0x200) != 0 )
    {
      v18 = node2ea(v18);
      v17 = *(_DWORD *)(a2 + 88);
    }
    if ( (v17 & 2) != 0 )
    {
      if ( v18 == -1 )
      {
        v32 = v38.m128i_i64[0];
        if ( v38.m128i_i64[0] )
        {
          v33 = v38.m128i_i64[0] + 6;
          v34 = v38.m128i_i64[0] + 7;
          v32 = v38.m128i_i64[0] - 1;
        }
        else
        {
          v34 = 8;
          v33 = 7;
        }
        v35 = ptr;
        if ( v38.m128i_i64[1] < v34 )
        {
          ptr = (void *)qvector_reserve(&ptr, ptr, v34, 1);
          v35 = ptr;
        }
        v38.m128i_i64[0] = v34;
        v35[v33] = 0;
        v36 = (char *)ptr + v32;
        *v36 = 1094992194;
        *(_DWORD *)((char *)v36 + 3) = 1380205633;
        goto LABEL_18;
      }
    }
    else if ( (v17 & 1) != 0 )
    {
      v26 = 5;
      v27 = "false";
      if ( v18 )
      {
        v26 = 4;
        v27 = "true";
      }
      v28 = v38.m128i_i64[0];
      v29 = v26;
      if ( v38.m128i_i64[0] )
      {
        v28 = v38.m128i_i64[0] - 1;
        v29 = v26 + v38.m128i_i64[0] - 1;
      }
      v30 = ptr;
      if ( v38.m128i_i64[1] < (unsigned __int64)(v29 + 1) )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, v29 + 1, 1);
        v30 = ptr;
      }
      v38.m128i_i64[0] = v29 + 1;
      v30[v29] = 0;
      v31 = (char *)ptr + v28;
      *v31 = *(_DWORD *)v27;
      *(_DWORD *)((char *)v31 + (unsigned int)v26 - 4) = *(_DWORD *)&v27[(unsigned int)v26 - 4];
      goto LABEL_18;
    }
    sub_35A790((char **)&ptr);
LABEL_18:
    v20 = _mm_loadu_si128(&v38);
    *(_QWORD *)a1 = ptr;
    *(__m128i *)(a1 + 8) = v20;
    return a1;
  }
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v21 = switch_dbctx(*(int *)(a2 + 8));
  v22 = *(unsigned __int8 *)(a2 + 92);
  v23 = a2 + 72;
  if ( (*(_BYTE *)(a2 + 88) & 0x20) != 0 )
    sub_7BEED0(v23, v21, a1, 1, a3, (unsigned int)v22 | 0x400);
  else
    sub_7BEA80(v23, v21, a1, a3, v22);
  if ( ptr )
  {
    v38.m128i_i64[0] = 0;
    qfree(ptr);
  }
  return a1;
}
