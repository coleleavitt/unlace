/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80639C0
// Address: 0x080639C0

//----- (080639C0) --------------------------------------------------------
int __cdecl sub_80639C0(int a1, char **a2, int a3, __int32 a4, char *n)
{
  int v5; // edi
  unsigned int v6; // ebp
  int (__cdecl *v7)(int, int, unsigned int *, int); // eax
  int v8; // eax
  int (__cdecl *v9)(int, int, int, int); // eax
  int v10; // eax
  int result; // eax
  __m128i *v12; // eax
  _DWORD *v13; // ecx
  _DWORD *v14; // edx
  _DWORD *v15; // edi
  unsigned int v16; // eax
  _DWORD *v17; // eax
  bool v18; // al
  _DWORD *v19; // eax
  _DWORD *v20; // eax
  int v21; // eax
  void *v22; // eax
  _DWORD *v23; // [esp-10h] [ebp-5Ch]
  int v24; // [esp-Ch] [ebp-58h]
  int v25; // [esp-8h] [ebp-54h]
  int v26; // [esp-4h] [ebp-50h]
  int v27; // [esp+0h] [ebp-4Ch]
  int v28; // [esp+0h] [ebp-4Ch]
  _DWORD *v29; // [esp+0h] [ebp-4Ch]
  _DWORD *v30; // [esp+0h] [ebp-4Ch]
  __m128i v31; // [esp+18h] [ebp-34h] BYREF
  __int32 v32; // [esp+28h] [ebp-24h]
  unsigned int v33; // [esp+2Ch] [ebp-20h]

  v33 = __readgsdword(0x14u);
  v5 = (int)n;
  if ( a3 != 4 )
  {
    v6 = a4;
    goto LABEL_17;
  }
  if ( a2 && sub_80A1320((_DWORD *)a1, a2, a4, n) < 0 )
  {
    result = -2;
    goto LABEL_18;
  }
  v27 = *(_DWORD *)(a1 + 252);
  if ( v5 < 0 )
    v5 = *(_DWORD *)(a1 + 256);
  if ( v5 <= 0 || *(_DWORD *)(a1 + 256) < (unsigned int)v5 )
  {
    if ( !byte_811F8A1 )
    {
      if ( v33 == __readgsdword(0x14u) )
        sub_80CFF40(30066, v24, v25, v26);
      sub_80D7AB0();
    }
LABEL_63:
    JUMPOUT(0x804C774);
  }
  v6 = a4;
  v32 = 0;
  v31.m128i_i8[12] = v5;
  v31.m128i_i32[0] = a4;
  if ( (unsigned __int8)v5 > 7u )
  {
    if ( !byte_811F8A1 )
    {
      if ( v33 == __readgsdword(0x14u) )
        sub_80CFF40(1796, v24, v25, v26);
      sub_80D7AB0();
    }
    goto LABEL_63;
  }
  v7 = *(int (__cdecl **)(int, int, unsigned int *, int))(*(_DWORD *)a1 + 144);
  if ( v7 == sub_80627D0 )
    v8 = sub_80623D0(a1, -1, a4, &v31.m128i_u32[1], v5, 1);
  else
    v8 = ((int (__cdecl *)(int, __int32, char *, int, _DWORD))v7)(a1, a4, (char *)v31.m128i_i64 + 4, v5, 0);
  if ( !v8 )
    goto LABEL_17;
  v9 = *(int (__cdecl **)(int, int, int, int))(*(_DWORD *)a1 + 148);
  if ( v9 == sub_80637F0 )
  {
    if ( *(_BYTE *)(a1 + 733) || *(_DWORD *)(a1 + 724) == -1 )
      goto LABEL_17;
    v10 = sub_8063570(a1, -1, v6, v27, v5, 1);
  }
  else
  {
    v10 = ((int (__cdecl *)(int, unsigned int, int, int, _DWORD))v9)(a1, v6, v27, v5, 0);
  }
  if ( v5 != v10 )
  {
LABEL_17:
    result = (unsigned __int8)sub_80B9E10((int *)a1, a3, v6, v5);
    goto LABEL_18;
  }
  v12 = (__m128i *)sub_805EA40((_DWORD *)(a1 + 264), (unsigned int *)&a4);
  v13 = (_DWORD *)(a1 + 740);
  *v12 = _mm_loadu_si128(&v31);
  v12[1].m128i_i32[0] = v32;
  v14 = *(_DWORD **)(a1 + 744);
  if ( v14 )
  {
    v15 = *(_DWORD **)(a1 + 744);
    while ( 1 )
    {
      v16 = v15[4];
      if ( v16 < v6 )
      {
        v15 = (_DWORD *)v15[3];
      }
      else
      {
        if ( v6 >= v16 )
        {
          v19 = (_DWORD *)v15[3];
          v30 = v13;
          v14 = *(_DWORD **)(a1 + 744);
          v13 = (_DWORD *)(a1 + 740);
          while ( v19 )
          {
            if ( v6 >= v19[4] )
            {
              v19 = (_DWORD *)v19[3];
            }
            else
            {
              v30 = v19;
              v19 = (_DWORD *)v19[2];
            }
          }
          v20 = (_DWORD *)v15[2];
          while ( v20 )
          {
            if ( v20[4] < v6 )
            {
              v20 = (_DWORD *)v20[3];
            }
            else
            {
              v15 = v20;
              v20 = (_DWORD *)v20[2];
            }
          }
          if ( *(_DWORD **)(a1 + 748) != v15 || v13 != v30 )
          {
            for ( ; v15 != v30; --*(_DWORD *)(a1 + 756) )
            {
              v21 = std::_Rb_tree_increment(v15);
              v23 = v15;
              v15 = (_DWORD *)v21;
              v22 = (void *)std::_Rb_tree_rebalance_for_erase(v23, a1 + 740);
              operator delete(v22, 0x14u);
            }
            goto LABEL_35;
          }
LABEL_34:
          v29 = v13;
          sub_8057480(v14);
          *(_DWORD *)(a1 + 744) = 0;
          *(_DWORD *)(a1 + 756) = 0;
          *(_DWORD *)(a1 + 748) = v29;
          *(_DWORD *)(a1 + 752) = v29;
          goto LABEL_35;
        }
        v13 = v15;
        v15 = (_DWORD *)v15[2];
      }
      if ( !v15 )
      {
        v17 = v13;
        v28 = (int)v13;
        v13 = (_DWORD *)(a1 + 740);
        v14 = *(_DWORD **)(a1 + 744);
        v18 = v17 == (_DWORD *)(a1 + 740);
        goto LABEL_32;
      }
    }
  }
  v28 = a1 + 740;
  v18 = 1;
LABEL_32:
  if ( *(_DWORD *)(a1 + 748) == v28 && v18 )
    goto LABEL_34;
LABEL_35:
  result = 1;
LABEL_18:
  if ( v33 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 8063D45: control flows out of bounds to 804C774
// 8063D60: variable 'v24' is possibly undefined
// 8063D60: variable 'v25' is possibly undefined
// 8063D60: variable 'v26' is possibly undefined
// 804B400: using guessed type int __cdecl std::_Rb_tree_rebalance_for_erase(_DWORD, _DWORD);
// 804B870: using guessed type int __cdecl std::_Rb_tree_increment(_DWORD);
// 811F8A1: using guessed type char byte_811F8A1;
