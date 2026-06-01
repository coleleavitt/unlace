/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100027B80
// Address: 0x0000000100027B80

//----- (0000000100027B80) ----------------------------------------------------
__int64 __fastcall sub_100027B80(__int64 a1)
{
  unsigned int v2; // w8
  char *v3; // x1
  size_t v4; // x2
  __int64 v5; // x20
  _QWORD *v6; // x1
  __int64 v7; // x8
  __int64 v8; // x20
  __int64 v9; // x20
  _QWORD *v10; // x1
  __int64 v11; // x8
  _Unwind_Exception *v13; // x0
  int v14; // w1
  void *v15; // [xsp+0h] [xbp-40h] BYREF
  __int64 v16; // [xsp+8h] [xbp-38h]
  __int64 v17; // [xsp+10h] [xbp-30h]

  v2 = *(unsigned __int16 *)(a1 + 64);
  if ( v2 <= 4 )
  {
    if ( v2 == 3 )
    {
LABEL_16:
      sub_100021DC0((_QWORD *)a1, *(_QWORD *)(a1 + 72));
      return 0;
    }
    if ( v2 != 4 )
      goto LABEL_24;
    v15 = nullptr;
    v16 = 0;
    v17 = 0;
    sub_100022CB4((_QWORD **)&v15, a1 + 40);
    if ( v16 )
      v3 = (char *)v15;
    else
      v3 = &byte_100075A30;
    if ( v16 )
      v4 = v16 - 1;
    else
      v4 = 0;
    sub_1000219A4(a1, v3, v4);
    if ( v15 )
    {
      v16 = 0;
      qfree(v15);
    }
  }
  else if ( v2 == 8 )
  {
    *(_BYTE *)(a1 + 212) = -45;
    v5 = *(_QWORD *)(a1 + 200);
    v6 = *(_QWORD **)v5;
    v7 = *(_QWORD *)(v5 + 8);
    if ( *(_QWORD *)(v5 + 16) < (unsigned __int64)(v7 + 1) )
    {
      v6 = qvector_reserve(*(_QWORD **)(a1 + 200), v6, v7 + 1, 1u);
      *(_QWORD *)v5 = v6;
      v7 = *(_QWORD *)(v5 + 8);
    }
    *((_BYTE *)v6 + v7) = -45;
    ++*(_QWORD *)(v5 + 8);
    ++*(_DWORD *)(a1 + 208);
    v8 = *(_QWORD *)(a1 + 88);
    sub_1000218E0((_QWORD *)a1, v8);
    sub_1000218E0((_QWORD *)a1, SWORD1(v8));
    sub_1000218E0((_QWORD *)a1, SWORD2(v8));
    sub_1000218E0((_QWORD *)a1, SHIWORD(v8));
  }
  else
  {
    if ( v2 != 7 )
    {
      if ( v2 != 5 )
      {
LABEL_24:
        if ( under_debugger == 1 )
          __break(1u);
        interr(275);
        if ( v14 )
          sub_1000013F4(v13);
        _Unwind_Resume(v13);
      }
      goto LABEL_16;
    }
    *(_BYTE *)(a1 + 212) = -46;
    v9 = *(_QWORD *)(a1 + 200);
    v10 = *(_QWORD **)v9;
    v11 = *(_QWORD *)(v9 + 8);
    if ( *(_QWORD *)(v9 + 16) < (unsigned __int64)(v11 + 1) )
    {
      v10 = qvector_reserve(*(_QWORD **)(a1 + 200), v10, v11 + 1, 1u);
      *(_QWORD *)v9 = v10;
      v11 = *(_QWORD *)(v9 + 8);
    }
    *((_BYTE *)v10 + v11) = -46;
    ++*(_QWORD *)(v9 + 8);
    ++*(_DWORD *)(a1 + 208);
    sub_10002CAD4(*(_QWORD **)(a1 + 200), (const void *)(a1 + 88), 0x10u);
    *(_DWORD *)(a1 + 208) += 16;
  }
  return 0;
}
// 100027D90: variable 'v14' is possibly undefined
// 100027D98: variable 'v13' is possibly undefined
// 100075A30: using guessed type char byte_100075A30;
// 10009D90D: using guessed type char under_debugger;
