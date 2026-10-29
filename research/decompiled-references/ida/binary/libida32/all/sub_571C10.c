__int64 __fastcall sub_571C10(__int64 a1, int a2, __int64 a3, _DWORD *a4)
{
  int v4; // r15d
  __int64 v7; // rdx
  __int64 result; // rax
  __int64 *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rbx
  int tinfo_size; // eax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r12
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // [rsp+0h] [rbp-58h]

  v4 = a3 + 64;
  v7 = *(_QWORD *)(a1 + 32);
  if ( *a4 == 1 )
    return pack_idcobj_to_bv(a2, v4, v7);
  v11 = *(__int64 **)(a1 + 24);
  v12 = *(_QWORD *)(v7 + 8);
  v13 = v11[1];
  v14 = *v11;
  v21 = v12;
  if ( v11[2] < (unsigned __int64)(v13 + 1) )
  {
    v14 = qvector_reserve(v11, v14, v13 + 1, 56);
    *v11 = v14;
    v13 = v11[1];
  }
  v15 = v14 + 56 * v13;
  *(_OWORD *)(v15 + 32) = 0;
  *(_QWORD *)v15 = 0;
  *(_QWORD *)(v15 + 8) = 0;
  *(_QWORD *)(v15 + 24) = 0;
  *(_QWORD *)(v15 + 48) = 0;
  ++v11[1];
  copy_argloc(v15, a4);
  *(_DWORD *)(v15 + 16) = 0;
  copy_tinfo_t(v15 + 48);
  tinfo_size = get_tinfo_size(0, *(_QWORD *)(a3 + 64), 0);
  v17 = *(_QWORD *)(v15 + 32);
  v18 = tinfo_size;
  if ( (unsigned __int64)tinfo_size < 4 )
    v18 = 4;
  if ( v17 < v18 )
  {
    v19 = *(_QWORD *)(v15 + 24);
    if ( *(_QWORD *)(v15 + 40) < v18 )
    {
      v20 = qvector_reserve(v15 + 24, v19, v18, 1);
      v17 = *(_QWORD *)(v15 + 32);
      *(_QWORD *)(v15 + 24) = v20;
      v19 = v20;
    }
    memset((void *)(v19 + v17), 0, v18 - v17);
    *(_QWORD *)(v15 + 32) = v18;
  }
  else if ( v17 != v18 )
  {
    *(_QWORD *)(v15 + 32) = v18;
  }
  **(_DWORD **)(v15 + 24) = -1;
  result = pack_idcobj_to_bv(a2, v4, *(_QWORD *)(a1 + 32));
  if ( v15 )
  {
    if ( v21 != *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) )
      *(_DWORD *)(v15 + 16) = 1;
  }
  return result;
}

