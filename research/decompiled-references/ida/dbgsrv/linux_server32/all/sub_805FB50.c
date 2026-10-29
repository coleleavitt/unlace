/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_805FB50
// Address: 0x0805FB50

//----- (0805FB50) --------------------------------------------------------
_DWORD *__userpurge sub_805FB50@<eax>(_DWORD *a1, _DWORD *a2, _DWORD *a3, const __m128i *a4)
{
  __m128i *v4; // esi
  __m128i v5; // xmm0
  __int64 v6; // xmm1_8
  void *v7; // ebp
  __int32 v8; // eax
  __int32 v9; // eax
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  _BOOL4 v13; // edx
  int v15; // ecx
  int v16; // [esp+4h] [ebp-44h]
  _DWORD *v17; // [esp+8h] [ebp-40h]
  int v18; // [esp+Ch] [ebp-3Ch]
  _DWORD v19[5]; // [esp+14h] [ebp-34h] BYREF
  unsigned int v20; // [esp+28h] [ebp-20h]

  v20 = __readgsdword(0x14u);
  v4 = (__m128i *)operator new(0x40u);
  v5 = _mm_loadu_si128(a4);
  v6 = a4[2].m128i_i64[1];
  a4[2].m128i_i32[2] = 0;
  v7 = (void *)a4[2].m128i_i32[1];
  a4[2].m128i_i32[3] = 0;
  v4[1] = v5;
  v8 = a4[1].m128i_i32[0];
  a4[2].m128i_i32[1] = 0;
  v4[2].m128i_i32[0] = v8;
  v16 = _mm_cvtsi128_si32(v5);
  v4[2].m128i_i8[4] = a4[1].m128i_i8[4];
  v9 = a4[1].m128i_i32[2];
  v4[3].m128i_i32[1] = (__int32)v7;
  v4[2].m128i_i32[2] = v9;
  LOWORD(v9) = a4[1].m128i_i16[6];
  v4[3].m128i_i64[1] = v6;
  v4[2].m128i_i16[6] = v9;
  v10 = (int)a3;
  v4[3].m128i_i32[0] = a4[2].m128i_i32[0];
  v17 = a2 + 1;
  if ( a2 + 1 == a3 )
  {
    if ( a2[5] )
    {
      v12 = a2[4];
      v10 = 0;
      if ( *(_DWORD *)(v12 + 16) < v16 )
        goto LABEL_6;
    }
LABEL_5:
    sub_8055100(v19, (int)a2, v16);
    v10 = v19[0];
    v12 = v19[1];
    goto LABEL_6;
  }
  v11 = a3[4];
  if ( v11 > v16 )
  {
    v12 = (int)a3;
    if ( (_DWORD *)a2[3] == a3 )
      goto LABEL_6;
    v12 = std::_Rb_tree_decrement(a3);
    if ( *(_DWORD *)(v12 + 16) >= v16 )
      goto LABEL_5;
    if ( *(_DWORD *)(v12 + 12) )
    {
      v10 = (int)a3;
      v12 = (int)a3;
    }
    else
    {
      v10 = 0;
    }
LABEL_6:
    if ( v12 )
    {
      if ( v17 == (_DWORD *)v12 || v10 )
      {
        v13 = 1;
LABEL_10:
        std::_Rb_tree_insert_and_rebalance(v13, v4, v12, v17);
        ++a2[5];
        *a1 = v4;
        goto LABEL_16;
      }
      goto LABEL_28;
    }
    goto LABEL_12;
  }
  v18 = a3[4];
  if ( v11 >= v16 )
    goto LABEL_12;
  if ( (_DWORD *)a2[4] != a3 )
  {
    v12 = std::_Rb_tree_increment(a3);
    if ( *(_DWORD *)(v12 + 16) > v16 )
    {
      v10 = (int)a3;
      v15 = v18;
      if ( !a3[3] )
      {
        v12 = (int)a3;
        if ( a3 )
          goto LABEL_29;
        goto LABEL_12;
      }
      v10 = v12;
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v12 = (int)a3;
  if ( a3 )
  {
LABEL_28:
    v15 = *(_DWORD *)(v12 + 16);
LABEL_29:
    v13 = v15 > v16;
    goto LABEL_10;
  }
LABEL_12:
  *a1 = v10;
  if ( v4 )
  {
    if ( v7 )
    {
      v4[3].m128i_i32[2] = 0;
      sub_80CF780(v7);
    }
    operator delete(v4, 0x40u);
  }
LABEL_16:
  if ( v20 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return a1;
}
// 804B110: using guessed type int __cdecl std::_Rb_tree_insert_and_rebalance(_DWORD, _DWORD, _DWORD, _DWORD);
// 804B4A0: using guessed type int __cdecl std::_Rb_tree_increment(_DWORD);
// 804B760: using guessed type int __cdecl std::_Rb_tree_decrement(_DWORD);
