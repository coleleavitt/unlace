__int64 __fastcall sub_4E1320(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned __int8 a5, __int64 a6)
{
  char v9; // dl
  __int64 result; // rax
  __int64 v11; // rdx
  _DWORD *v12; // r12
  __int64 v13; // rdx
  int v14; // ebx
  int v15; // r12d
  int v16; // ebp
  bool v17; // zf
  __int64 v18; // rsi
  __int64 v19; // rax
  unsigned int v21; // r15d
  __int64 (*v22)(); // rax
  _QWORD *v23; // rbx
  __int64 v24; // rax
  _QWORD *v25; // r9
  __int64 v26; // rsi
  __int64 v27; // rdx
  char j; // al
  unsigned int v29; // ebx
  void *v30; // rax
  __int64 v31; // rsi
  char i; // al
  __int64 v33; // rax
  __int64 v34; // r9
  unsigned int v35; // esi
  __int64 v36; // rdx
  __int64 v37; // rax
  void *v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  _DWORD *v44; // [rsp+8h] [rbp-A0h]
  _DWORD *v45; // [rsp+10h] [rbp-98h]
  __int64 v47; // [rsp+30h] [rbp-78h]
  unsigned int v48; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v49[9]; // [rsp+44h] [rbp-64h] BYREF
  char v50; // [rsp+4Dh] [rbp-5Bh]
  __int64 ptr; // [rsp+50h] [rbp-58h] BYREF
  void *ptr_8[2]; // [rsp+58h] [rbp-50h]
  unsigned __int64 v53; // [rsp+68h] [rbp-40h]

  v53 = __readfsqword(0x28u);
  v9 = *(_BYTE *)(a3 + 24);
  if ( (unsigned __int8)(v9 - 10) > 1u )
  {
    result = 0;
    if ( (unsigned __int8)(v9 - 12) <= 1u )
      goto LABEL_7;
    return result;
  }
  v11 = *(_QWORD *)(a3 + 8);
  v12 = *(_DWORD **)a3;
  ptr = 0;
  *(_OWORD *)ptr_8 = 0;
  v13 = 4 * v11;
  v44 = &v12[v13];
  if ( &v12[v13] == v12 )
  {
LABEL_5:
    *(_BYTE *)(a2 + 24) = 10;
    sub_4E0F80((__int64 *)a2, (__int64)&ptr, a6);
    if ( ptr )
    {
      ptr_8[0] = nullptr;
      qfree((void *)ptr);
    }
    return 1;
  }
  ptr = qvector_reserve(&ptr, 0, (v13 * 4) >> 4, 4);
  while ( 1 )
  {
    v21 = *v12 + 16 * *(_DWORD *)a6;
    if ( !(unsigned __int8)sub_4E08E0(v21) )
    {
      v22 = *(__int64 (**)())(*(_QWORD *)a1 + 40LL);
      if ( v22 == sub_4DC6F0 || !((unsigned __int8 (__fastcall *)(__int64, _QWORD))v22)(a1, v21) )
        break;
    }
    if ( __CFADD__(v21, a4) || !(unsigned __int8)get_data_value(&v48, v21, a4) )
      break;
    if ( (*(_BYTE *)(a1 + 20) & 2) == 0 )
    {
      for ( i = xrefblk_t_first_to(v49, v21, 2); i; i = xrefblk_t_next_to(v49) )
      {
        if ( v50 == 2 )
          goto LABEL_19;
      }
      goto LABEL_37;
    }
    v23 = *(_QWORD **)(a1 + 200);
    v24 = v23[2];
    if ( !v24 )
      goto LABEL_61;
    v25 = v23 + 1;
    do
    {
      while ( 1 )
      {
        v26 = *(_QWORD *)(v24 + 16);
        v27 = *(_QWORD *)(v24 + 24);
        if ( *(_DWORD *)(v24 + 32) < v21 )
          break;
        v25 = (_QWORD *)v24;
        v24 = *(_QWORD *)(v24 + 16);
        if ( !v26 )
          goto LABEL_33;
      }
      v24 = *(_QWORD *)(v24 + 24);
    }
    while ( v27 );
LABEL_33:
    if ( v23 + 1 == v25 )
    {
LABEL_61:
      v45 = (_DWORD *)operator new(0x28u);
      v45[8] = v21;
      *((_BYTE *)v45 + 36) = 0;
      if ( v23[5] )
      {
        v36 = v23[4];
        v34 = 0;
        if ( *(_DWORD *)(v36 + 32) < v21 )
          goto LABEL_51;
      }
      goto LABEL_63;
    }
    if ( v21 >= *((_DWORD *)v25 + 8) )
    {
      j = *((_BYTE *)v25 + 36);
      goto LABEL_36;
    }
    v47 = (__int64)v25;
    v33 = operator new(0x28u);
    v34 = v47;
    *(_DWORD *)(v33 + 32) = v21;
    *(_BYTE *)(v33 + 36) = 0;
    v35 = *(_DWORD *)(v47 + 32);
    v45 = (_DWORD *)v33;
    if ( v21 < v35 )
    {
      v36 = v47;
      if ( v23[3] == v47 )
        goto LABEL_51;
      v37 = std::_Rb_tree_decrement();
      v36 = v37;
      if ( *(_DWORD *)(v37 + 32) < v21 )
      {
        v34 = 0;
        if ( *(_QWORD *)(v37 + 24) )
        {
          v34 = v47;
          v36 = v47;
        }
LABEL_51:
        if ( !v36 )
          goto LABEL_58;
        goto LABEL_52;
      }
LABEL_63:
      v34 = sub_4DD100((__int64)v23, v21);
      goto LABEL_51;
    }
    if ( v35 >= v21 )
    {
LABEL_58:
      v38 = v45;
      v45 = (_DWORD *)v34;
      goto LABEL_59;
    }
    if ( v23[4] != v47 )
    {
      v39 = std::_Rb_tree_increment();
      v36 = v39;
      if ( v21 >= *(_DWORD *)(v39 + 32) )
        goto LABEL_63;
      v34 = v47;
      if ( *(_QWORD *)(v47 + 24) )
      {
        v34 = v39;
        goto LABEL_51;
      }
    }
    if ( !v34 )
    {
      v38 = v45;
      v45 = nullptr;
LABEL_59:
      if ( v38 )
        operator delete(v38, 0x28u);
      goto LABEL_53;
    }
LABEL_52:
    std::_Rb_tree_insert_and_rebalance();
    ++v23[5];
LABEL_53:
    for ( j = xrefblk_t_first_to(v49, v21, 2); j && v50 != 2; j = xrefblk_t_next_to(v49) )
      ;
    *((_BYTE *)v45 + 36) = j;
LABEL_36:
    if ( j )
      break;
LABEL_37:
    v48 = extend_sign(v48, a4, a5);
    v29 = v48;
    v30 = ptr_8[0];
    v31 = ptr;
    if ( ptr_8[1] < (char *)ptr_8[0] + 1 )
    {
      ptr = qvector_reserve(&ptr, ptr, (char *)ptr_8[0] + 1, 4);
      v31 = ptr;
      v30 = ptr_8[0];
    }
    *(_DWORD *)(v31 + 4LL * (_QWORD)v30) = v29;
    v12 += 4;
    ++ptr_8[0];
    if ( v12 == v44 )
      goto LABEL_5;
  }
LABEL_19:
  if ( ptr )
  {
    ptr_8[0] = nullptr;
    qfree((void *)ptr);
  }
LABEL_7:
  v14 = 0;
  *(_BYTE *)(a2 + 24) = 4;
  *(_QWORD *)(a2 + 8) = 0;
  v15 = *(_DWORD *)(a6 + 8);
  v16 = *(unsigned __int16 *)(a6 + 12);
  v17 = *(_BYTE *)(a6 + 49) == 5;
  ptr = 0xFFFFFFFFLL;
  LODWORD(ptr_8[0]) = v15;
  WORD2(ptr_8[0]) = v16;
  if ( v17 )
    v14 = *(_BYTE *)(a6 + 73) == 0;
  HIWORD(ptr_8[0]) = v14;
  v18 = *(_QWORD *)a2;
  v19 = *(_QWORD *)(a2 + 16);
  if ( (unsigned __int64)&ptr >= *(_QWORD *)a2 && (unsigned __int64)&ptr < v18 + 16 * v19 )
  {
    if ( !v19 )
    {
      v42 = qvector_reserve(a2, v18, 1, 16);
      *(_QWORD *)a2 = v42;
      v18 = 16LL * *(_QWORD *)(a2 + 8) + v42;
    }
    *(_DWORD *)(v18 + 8) = v15;
    *(_QWORD *)v18 = 0xFFFFFFFFLL;
    *(_DWORD *)(v18 + 12) = v16 | (v14 << 16);
  }
  else
  {
    if ( !v19 )
    {
      v40 = qvector_reserve(a2, v18, 1, 16);
      v41 = *(_QWORD *)(a2 + 8);
      *(_QWORD *)a2 = v40;
      v18 = v40 + 16 * v41;
    }
    *(__m128i *)v18 = _mm_load_si128((const __m128i *)&ptr);
  }
  ++*(_QWORD *)(a2 + 8);
  return 1;
}

