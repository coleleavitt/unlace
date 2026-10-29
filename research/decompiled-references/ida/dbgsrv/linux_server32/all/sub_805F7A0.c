/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_805F7A0
// Address: 0x0805F7A0

//----- (0805F7A0) --------------------------------------------------------
int *__userpurge sub_805F7A0@<eax>(int *a1, _DWORD *a2, _DWORD *a3, int a4)
{
  int v4; // esi
  int v5; // ecx
  __int64 v6; // xmm1_8
  __int64 v7; // xmm2_8
  unsigned int v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // ecx
  unsigned int v12; // ecx
  __m128i v13; // xmm5
  int v14; // eax
  int v15; // eax
  unsigned int v16; // ecx
  void *v17; // eax
  __int64 v18; // xmm3_8
  __int64 v19; // xmm4_8
  void *v20; // eax
  int v21; // eax
  int v22; // edi
  unsigned int v23; // edx
  int v24; // eax
  _BOOL4 v25; // edx
  int v26; // edi
  _DWORD *v27; // ebp
  void *v28; // eax
  void *v29; // eax
  void *v30; // eax
  unsigned int v32; // edx
  _DWORD *v33; // [esp+4h] [ebp-50h]
  void *v34; // [esp+8h] [ebp-4Ch]
  void *ptr; // [esp+Ch] [ebp-48h]
  unsigned int v36; // [esp+10h] [ebp-44h]
  unsigned int v37; // [esp+10h] [ebp-44h]
  unsigned int v38; // [esp+10h] [ebp-44h]
  unsigned int v39; // [esp+14h] [ebp-40h]
  _DWORD v40[7]; // [esp+18h] [ebp-3Ch] BYREF
  unsigned int v41; // [esp+34h] [ebp-20h]

  v41 = __readgsdword(0x14u);
  v4 = operator new(0x68u);
  v5 = *(_DWORD *)(a4 + 8);
  v6 = *(_QWORD *)(a4 + 16);
  *(_DWORD *)(a4 + 16) = 0;
  v7 = *(_QWORD *)(a4 + 28);
  v8 = *(_DWORD *)a4;
  *(_DWORD *)(a4 + 20) = 0;
  *(_DWORD *)(v4 + 24) = v5;
  v9 = *(_DWORD *)(a4 + 12);
  v10 = *(_DWORD *)(a4 + 4);
  *(_DWORD *)(v4 + 16) = v8;
  *(_DWORD *)(v4 + 28) = v9;
  v11 = *(_DWORD *)(a4 + 24);
  *(_DWORD *)(v4 + 20) = v10;
  *(_DWORD *)(v4 + 40) = v11;
  v12 = *(_DWORD *)(a4 + 44);
  *(_DWORD *)(a4 + 12) = 0;
  *(_DWORD *)(a4 + 24) = 0;
  *(_DWORD *)(a4 + 28) = 0;
  *(_DWORD *)(a4 + 32) = 0;
  *(_QWORD *)(v4 + 32) = v6;
  *(_QWORD *)(v4 + 44) = v7;
  if ( v12 )
  {
    v13 = _mm_cvtsi32_si128(*(_DWORD *)(a4 + 48));
    *(_DWORD *)(v4 + 56) = *(_DWORD *)(a4 + 40);
    v14 = *(_DWORD *)(a4 + 52);
    *(_QWORD *)(v4 + 60) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v12), v13).m128i_u64[0];
    *(_DWORD *)(v4 + 68) = v14;
    *(_DWORD *)(v12 + 4) = v4 + 56;
    v15 = *(_DWORD *)(a4 + 56);
    *(_DWORD *)(a4 + 44) = 0;
    v16 = *(_DWORD *)(v4 + 16);
    *(_DWORD *)(v4 + 72) = v15;
    *(_DWORD *)(a4 + 48) = a4 + 40;
    *(_DWORD *)(a4 + 52) = a4 + 40;
    *(_DWORD *)(a4 + 56) = 0;
  }
  else
  {
    v40[2] = v8;
    v16 = v8;
    v40[3] = v10;
    *(_DWORD *)(v4 + 56) = 0;
    *(_DWORD *)(v4 + 60) = 0;
    *(_DWORD *)(v4 + 64) = v4 + 56;
    *(_DWORD *)(v4 + 68) = v4 + 56;
    *(_DWORD *)(v4 + 72) = 0;
  }
  v17 = *(void **)(a4 + 60);
  v18 = *(_QWORD *)(a4 + 64);
  *(_DWORD *)(a4 + 60) = 0;
  v19 = *(_QWORD *)(a4 + 76);
  *(_DWORD *)(a4 + 64) = 0;
  v34 = v17;
  *(_DWORD *)(v4 + 76) = v17;
  v20 = *(void **)(a4 + 72);
  *(_DWORD *)(a4 + 68) = 0;
  ptr = v20;
  *(_DWORD *)(v4 + 88) = v20;
  v21 = *(_DWORD *)(a4 + 84);
  *(_DWORD *)(a4 + 72) = 0;
  *(_DWORD *)(a4 + 76) = 0;
  *(_DWORD *)(a4 + 80) = 0;
  v22 = (int)a3;
  *(_DWORD *)(v4 + 100) = v21;
  v33 = a2 + 1;
  *(_QWORD *)(v4 + 80) = v18;
  *(_QWORD *)(v4 + 92) = v19;
  if ( a2 + 1 == a3 )
  {
    if ( a2[5] )
    {
      v24 = a2[4];
      v22 = 0;
      if ( *(_DWORD *)(v24 + 16) < v16 )
        goto LABEL_8;
    }
LABEL_7:
    v37 = v16;
    sub_80551E0(v40, (int)a2, v16);
    v22 = v40[0];
    v24 = v40[1];
    v16 = v37;
    goto LABEL_8;
  }
  v23 = a3[4];
  if ( v16 < v23 )
  {
    v24 = (int)a3;
    if ( (_DWORD *)a2[3] == a3 )
      goto LABEL_8;
    v36 = v16;
    v24 = std::_Rb_tree_decrement(a3);
    v16 = v36;
    if ( *(_DWORD *)(v24 + 16) >= v36 )
      goto LABEL_7;
    if ( *(_DWORD *)(v24 + 12) )
      v24 = (int)a3;
    else
      v22 = 0;
LABEL_8:
    if ( v24 )
    {
      if ( v33 == (_DWORD *)v24 || v22 )
      {
        v25 = 1;
LABEL_12:
        std::_Rb_tree_insert_and_rebalance(v25, v4, v24, v33);
        ++a2[5];
        *a1 = v4;
        goto LABEL_28;
      }
      goto LABEL_41;
    }
    goto LABEL_14;
  }
  v38 = a3[4];
  if ( v23 >= v16 )
    goto LABEL_14;
  if ( (_DWORD *)a2[4] != a3 )
  {
    v39 = v16;
    v24 = std::_Rb_tree_increment(a3);
    v16 = v39;
    if ( v39 < *(_DWORD *)(v24 + 16) )
    {
      v32 = v38;
      if ( !a3[3] )
      {
        v24 = (int)a3;
        if ( a3 )
          goto LABEL_42;
        goto LABEL_14;
      }
      v22 = v24;
      goto LABEL_8;
    }
    goto LABEL_7;
  }
  v24 = (int)a3;
  if ( a3 )
  {
LABEL_41:
    v32 = *(_DWORD *)(v24 + 16);
LABEL_42:
    v25 = v16 < v32;
    goto LABEL_12;
  }
LABEL_14:
  *a1 = v22;
  if ( v4 )
  {
    if ( ptr )
    {
      *(_DWORD *)(v4 + 92) = 0;
      sub_80CF780(ptr);
      v34 = *(void **)(v4 + 76);
    }
    if ( v34 )
    {
      *(_DWORD *)(v4 + 80) = 0;
      sub_80CF780(v34);
    }
    v26 = *(_DWORD *)(v4 + 60);
    while ( v26 )
    {
      v27 = (_DWORD *)v26;
      sub_8057050(*(_DWORD **)(v26 + 12));
      v28 = *(void **)(v26 + 20);
      v26 = *(_DWORD *)(v26 + 8);
      if ( v28 )
      {
        v27[6] = 0;
        sub_80CF780(v28);
      }
      operator delete(v27, 0x20u);
    }
    v29 = *(void **)(v4 + 40);
    if ( v29 )
    {
      *(_DWORD *)(v4 + 44) = 0;
      sub_80CF780(v29);
    }
    v30 = *(void **)(v4 + 28);
    if ( v30 )
    {
      *(_DWORD *)(v4 + 32) = 0;
      sub_80CF780(v30);
    }
    operator delete((void *)v4, 0x68u);
  }
LABEL_28:
  if ( v41 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return a1;
}
// 804B110: using guessed type int __cdecl std::_Rb_tree_insert_and_rebalance(_DWORD, _DWORD, _DWORD, _DWORD);
// 804B4A0: using guessed type int __cdecl std::_Rb_tree_increment(_DWORD);
// 804B760: using guessed type int __cdecl std::_Rb_tree_decrement(_DWORD);
