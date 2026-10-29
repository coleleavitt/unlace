__int64 __fastcall sub_484340(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rsi
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // r13
  unsigned __int64 v7; // r12
  _BYTE *v8; // rsi
  unsigned __int64 v9; // rbp
  size_t v10; // r13
  __int64 v12; // rax
  __int64 v13; // r12
  size_t v14; // r14
  _BYTE *v15; // rsi
  __int64 v16; // rax
  void *src; // [rsp+0h] [rbp-68h] BYREF
  __int128 v18; // [rsp+8h] [rbp-60h]
  void *v19; // [rsp+20h] [rbp-48h] BYREF
  __int128 v20; // [rsp+28h] [rbp-40h]
  unsigned __int64 v21; // [rsp+38h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  src = nullptr;
  v18 = 0;
  get_ea_diffpos_name(&src, *a2);
  v2 = a2[1];
  v19 = nullptr;
  v20 = 0;
  get_ea_diffpos_name(&v19, v2);
  v3 = v18;
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( !v3 )
    goto LABEL_14;
  if ( v3 == 1 )
  {
    v3 = 0;
LABEL_14:
    v6 = 2;
    v8 = nullptr;
    v7 = 3;
LABEL_15:
    v12 = qvector_reserve(a1, v8, v7, 1);
    *(_QWORD *)a1 = v12;
    v8 = (_BYTE *)v12;
    goto LABEL_6;
  }
  v4 = qvector_reserve(a1, 0, v3, 1);
  *(_QWORD *)a1 = v4;
  *(_QWORD *)(a1 + 8) = v3;
  *(_BYTE *)(v4 + v3 - 1) = 0;
  memcpy(*(void **)a1, src, v3 - 1);
  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 )
  {
    v3 = v5 - 1;
    v6 = v5 + 1;
    v7 = v5 + 2;
  }
  else
  {
    v3 = 0;
    v7 = 3;
    v6 = 2;
  }
  v8 = *(_BYTE **)a1;
  if ( *(_QWORD *)(a1 + 16) < v7 )
    goto LABEL_15;
LABEL_6:
  *(_QWORD *)(a1 + 8) = v7;
  v8[v6] = 0;
  *(_WORD *)(*(_QWORD *)a1 + v3) = 11822;
  v9 = v20;
  if ( (_QWORD)v20 )
  {
    v10 = v20 - 1;
    if ( (_QWORD)v20 != 1 )
    {
      v13 = *(_QWORD *)(a1 + 8);
      v14 = v20 - 1;
      if ( v13 )
      {
        --v13;
        v14 = v10 + v13;
        v9 = v20 + v13;
      }
      v15 = *(_BYTE **)a1;
      if ( *(_QWORD *)(a1 + 16) < v9 )
      {
        v16 = qvector_reserve(a1, v15, v9, 1);
        *(_QWORD *)a1 = v16;
        v15 = (_BYTE *)v16;
      }
      *(_QWORD *)(a1 + 8) = v9;
      v15[v14] = 0;
      memcpy((void *)(v13 + *(_QWORD *)a1), v19, v10);
    }
  }
  if ( v19 )
  {
    *(_QWORD *)&v20 = 0;
    qfree(v19);
  }
  if ( src )
  {
    *(_QWORD *)&v18 = 0;
    qfree(src);
  }
  return a1;
}
