/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_433020
// Address: 0x0000000000433020

//----- (0000000000433020) ----------------------------------------------------
__int64 __fastcall sub_433020(__int64 a1, __int64 a2)
{
  __int64 v4; // x2
  unsigned __int8 *v5; // x1
  unsigned __int64 i; // x2
  __int64 v7; // x0
  __int64 *v8; // x25
  size_t v9; // x20
  __int64 v10; // x22
  size_t v11; // x24
  _BYTE *v12; // x0
  unsigned __int64 v13; // x23
  size_t v15; // x20
  __int64 v16; // x23
  size_t v17; // x25
  __int64 v18; // x23
  _BYTE *v19; // x0
  void *src; // [xsp+40h] [xbp-20h] BYREF
  __int64 v21; // [xsp+48h] [xbp-18h]
  __int64 v22; // [xsp+50h] [xbp-10h]
  __int64 v23; // [xsp+58h] [xbp-8h]

  v4 = *(_QWORD *)(a2 + 8);
  if ( *(_BYTE *)(a2 + 40) )
  {
    src = nullptr;
    v21 = 0;
    v22 = 0;
    if ( !v4 )
      goto LABEL_7;
    v5 = *(unsigned __int8 **)a2;
    for ( i = (unsigned int)(v4 - 1); !(unsigned __int8)sub_4866D8((__int64)&src, v5, i); i = 0 )
    {
      if ( !under_debugger )
        sub_492270(274);
      __break(0x3E8u);
LABEL_7:
      v5 = (unsigned __int8 *)&qword_4B2D48;
    }
    if ( v21 )
    {
      v7 = *(_QWORD *)(a1 + 8);
      v8 = (__int64 *)src;
      v9 = 2 * (v21 - 1);
      if ( v7 )
        goto LABEL_10;
    }
    else
    {
      v7 = *(_QWORD *)(a1 + 8);
      v9 = 0;
      v8 = &qword_4C5B78;
      if ( v7 )
      {
LABEL_10:
        v10 = v7 - 1;
        v11 = v7 - 1 + v9;
        v12 = *(_BYTE **)a1;
        v13 = v11 + 1;
        if ( v11 + 1 <= *(_QWORD *)(a1 + 16) )
          goto LABEL_11;
LABEL_23:
        v12 = sub_491288(a1, v12, v13, 1u);
        *(_QWORD *)a1 = v12;
LABEL_11:
        *(_QWORD *)(a1 + 8) = v13;
        v12[v11] = 0;
        memmove((void *)(*(_QWORD *)a1 + v10), v8, v9);
        if ( src )
        {
          v21 = 0;
          j__free(src);
        }
        return v23 ^ _stack_chk_guard;
      }
    }
    v11 = v9;
    v13 = v9 + 1;
    v10 = 0;
    v12 = *(_BYTE **)a1;
    if ( v9 + 1 <= *(_QWORD *)(a1 + 16) )
      goto LABEL_11;
    goto LABEL_23;
  }
  if ( v4 )
  {
    v15 = v4 - 1;
    if ( v4 != 1 )
    {
      v16 = *(_QWORD *)(a1 + 8);
      if ( v16 )
      {
        v18 = v16 - 1;
        v17 = v15 + v18;
      }
      else
      {
        v17 = v4 - 1;
        v18 = 0;
      }
      v19 = *(_BYTE **)a1;
      if ( v17 + 1 > *(_QWORD *)(a1 + 16) )
      {
        v19 = sub_491288(a1, *(void **)a1, v17 + 1, 1u);
        *(_QWORD *)a1 = v19;
      }
      *(_QWORD *)(a1 + 8) = v17 + 1;
      v19[v17] = 0;
      memcpy((void *)(*(_QWORD *)a1 + v18), *(const void **)a2, v15);
    }
  }
  return v23 ^ _stack_chk_guard;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 4C5B78: using guessed type __int64 qword_4C5B78;
// 52451C: using guessed type char under_debugger;
