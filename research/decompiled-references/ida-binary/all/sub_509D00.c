_DWORD *__fastcall sub_509D00(volatile signed __int32 **a1, signed int *a2, unsigned int *a3)
{
  volatile signed __int32 *v6; // rax
  volatile signed __int32 *v7; // rbp
  volatile signed __int32 *v8; // rbx
  __int64 v9; // r8
  __int64 v10; // rax
  signed int v11; // esi
  _DWORD *v12; // r15
  __int64 v13; // rcx
  __int64 v14; // rdx
  _QWORD *v16; // rax
  signed int v17; // r12d
  _DWORD *v18; // r14
  __int64 v19; // r8
  signed int v20; // r13d
  __int64 v21; // rdx
  __int64 v22; // rax
  _BOOL8 v23; // rdi
  __int64 v24; // rax
  volatile signed __int32 *v25; // r15
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  volatile signed __int32 *v33; // r15
  __int64 v34; // rax
  volatile signed __int32 *v35; // r15
  __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rax
  __int64 v39; // [rsp+0h] [rbp-48h]
  __int64 v40; // [rsp+0h] [rbp-48h]
  __int64 v41; // [rsp+8h] [rbp-40h]
  __int64 v42; // [rsp+8h] [rbp-40h]

  v6 = *a1;
  if ( !*a1 )
  {
    v7 = nullptr;
    goto LABEL_41;
  }
  v7 = nullptr;
  if ( *v6 != 1 )
  {
    _InterlockedAdd(v6, 1u);
    v7 = v6;
    v6 = *a1;
  }
  if ( !v6 )
  {
LABEL_41:
    v34 = operator new(0x38u);
    v9 = v34 + 16;
    *(_DWORD *)v34 = 0;
    v8 = (volatile signed __int32 *)v34;
    *(_DWORD *)(v34 + 16) = 0;
    *(_QWORD *)(v34 + 24) = 0;
    *(_QWORD *)(v34 + 32) = v34 + 16;
    *(_QWORD *)(v34 + 40) = v34 + 16;
    *(_QWORD *)(v34 + 48) = 0;
    if ( *a1 )
    {
      if ( !_InterlockedSub(*a1, 1u) )
      {
        v35 = *a1;
        if ( *a1 )
        {
          v40 = v34 + 16;
          sub_509750(*((_QWORD **)v35 + 3));
          operator delete((void *)v35, 0x38u);
          v9 = v40;
        }
      }
    }
    *a1 = v8;
    if ( v8 )
    {
      _InterlockedAdd(v8, 1u);
      goto LABEL_6;
    }
    goto LABEL_7;
  }
  if ( *v6 == 1 )
  {
LABEL_6:
    v8 = *a1;
    v9 = (__int64)(*a1 + 4);
    goto LABEL_7;
  }
  v24 = operator new(0x38u);
  v25 = *a1;
  v9 = v24 + 16;
  *(_DWORD *)v24 = 0;
  v8 = (volatile signed __int32 *)v24;
  *(_DWORD *)(v24 + 16) = 0;
  *(_QWORD *)(v24 + 24) = 0;
  *(_QWORD *)(v24 + 32) = v24 + 16;
  *(_QWORD *)(v24 + 40) = v24 + 16;
  *(_QWORD *)(v24 + 48) = 0;
  v26 = *((_QWORD *)v25 + 3);
  if ( v26 )
  {
    v39 = v24 + 16;
    v27 = sub_509920(v26, v24 + 16);
    v9 = v39;
    v28 = v27;
    do
    {
      v29 = v28;
      v28 = *(_QWORD *)(v28 + 16);
    }
    while ( v28 );
    *((_QWORD *)v8 + 4) = v29;
    v30 = v27;
    do
    {
      v31 = v30;
      v30 = *(_QWORD *)(v30 + 24);
    }
    while ( v30 );
    *((_QWORD *)v8 + 5) = v31;
    v32 = *((_QWORD *)v25 + 6);
    *((_QWORD *)v8 + 3) = v27;
    *((_QWORD *)v8 + 6) = v32;
  }
  if ( v8 )
    _InterlockedAdd(v8, 1u);
  v33 = *a1;
  *a1 = v8;
  if ( v33 )
  {
    if ( _InterlockedSub(v33, 1u) )
      goto LABEL_6;
    sub_509750(*((_QWORD **)v33 + 3));
    operator delete((void *)v33, 0x38u);
    v8 = *a1;
    v9 = (__int64)(*a1 + 4);
  }
LABEL_7:
  v10 = *((_QWORD *)v8 + 3);
  if ( v10 )
  {
    v11 = *a2;
    v12 = (_DWORD *)v9;
    do
    {
      while ( 1 )
      {
        v13 = *(_QWORD *)(v10 + 16);
        v14 = *(_QWORD *)(v10 + 24);
        if ( *(_DWORD *)(v10 + 32) < v11 )
          break;
        v12 = (_DWORD *)v10;
        v10 = *(_QWORD *)(v10 + 16);
        if ( !v13 )
          goto LABEL_12;
      }
      v10 = *(_QWORD *)(v10 + 24);
    }
    while ( v14 );
LABEL_12:
    v41 = v9;
    if ( (_DWORD *)v9 != v12 )
    {
      if ( v11 >= v12[8] )
      {
        v12[9] = *a3;
        goto LABEL_15;
      }
      v16 = (_QWORD *)operator new(0x28u);
      v17 = *a2;
      v18 = v16;
      v19 = v41;
      v16[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v17), _mm_cvtsi32_si128(*a3)).m128i_u64[0];
      v20 = v12[8];
      if ( v17 < v20 )
      {
        v21 = (__int64)v12;
        if ( *((_DWORD **)v8 + 4) == v12 )
          goto LABEL_24;
        v22 = std::_Rb_tree_decrement(v12);
        v19 = v41;
        v21 = v22;
        if ( v17 > *(_DWORD *)(v22 + 32) )
        {
          if ( *(_QWORD *)(v22 + 24) )
            v21 = (__int64)v12;
          else
            v12 = nullptr;
          goto LABEL_24;
        }
LABEL_57:
        v42 = v19;
        v38 = sub_5096C0((__int64)(v8 + 2), v17);
        v19 = v42;
        v12 = (_DWORD *)v38;
        goto LABEL_24;
      }
      if ( v17 <= v20 )
        goto LABEL_48;
      if ( *((_DWORD **)v8 + 5) != v12 )
      {
        v36 = std::_Rb_tree_increment(v12);
        v19 = v41;
        v21 = v36;
        if ( v17 >= *(_DWORD *)(v36 + 32) )
          goto LABEL_57;
        if ( *((_QWORD *)v12 + 3) )
        {
          v12 = (_DWORD *)v36;
          goto LABEL_24;
        }
      }
      v21 = (__int64)v12;
      if ( v12 )
        goto LABEL_60;
      goto LABEL_48;
    }
    v37 = (_QWORD *)operator new(0x28u);
  }
  else
  {
    v41 = v9;
    v37 = (_QWORD *)operator new(0x28u);
  }
  v17 = *a2;
  v18 = v37;
  v37[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v17), _mm_cvtsi32_si128(*a3)).m128i_u64[0];
  v19 = v41;
  if ( !*((_QWORD *)v8 + 6) )
    goto LABEL_57;
  v21 = *((_QWORD *)v8 + 5);
  v12 = nullptr;
  if ( *(_DWORD *)(v21 + 32) >= v17 )
    goto LABEL_57;
LABEL_24:
  if ( v21 )
  {
    if ( v12 || v19 == v21 )
    {
      v23 = 1;
LABEL_28:
      v12 = v18;
      std::_Rb_tree_insert_and_rebalance(v23, v18, v21, v19);
      ++*((_QWORD *)v8 + 6);
      goto LABEL_15;
    }
    v20 = *(_DWORD *)(v21 + 32);
LABEL_60:
    v23 = v17 < v20;
    goto LABEL_28;
  }
LABEL_48:
  if ( v18 )
    operator delete(v18, 0x28u);
LABEL_15:
  if ( v7 && !_InterlockedSub(v7, 1u) )
  {
    sub_509750(*((_QWORD **)v7 + 3));
    operator delete((void *)v7, 0x38u);
  }
  return v12;
}
