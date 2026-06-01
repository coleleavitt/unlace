/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100025A64
// Address: 0x0000000100025A64

//----- (0000000100025A64) ----------------------------------------------------
__int64 __fastcall sub_100025A64(__int64 a1)
{
  __int64 v2; // x8
  __int64 v3; // x1
  unsigned int v4; // w8
  unsigned __int64 v5; // x20
  _QWORD **v6; // x21
  _QWORD *v7; // x8
  _QWORD *v8; // x9
  int v9; // w22
  __int64 v10; // x20
  _QWORD *v11; // x1
  __int64 v12; // x8
  __int64 v13; // x20
  _QWORD *v14; // x1
  __int64 v15; // x8
  __int64 v16; // x20
  _QWORD *v17; // x1
  __int64 v18; // x8
  __int64 v19; // x20
  _QWORD *v20; // x1
  __int64 v21; // x8
  __int64 v22; // x20
  _QWORD *v23; // x1
  __int64 v24; // x8
  char v26; // [xsp+7h] [xbp-29h] BYREF

  v2 = *(_QWORD *)(a1 + 232);
  v3 = *(unsigned int *)(*(_QWORD *)(a1 + 224) + 4 * v2 - 4);
  if ( v2 )
    *(_QWORD *)(a1 + 232) = v2 - 1;
  v4 = *(_DWORD *)(a1 + 208);
  if ( v4 == (_DWORD)v3 + 4 )
  {
    if ( v4 <= 4 )
    {
      if ( under_debugger == 1 )
        __break(1u);
      interr(708);
      JUMPOUT(0x100025D3CLL);
    }
    v5 = v4 - 5;
    *(_DWORD *)(a1 + 208) = v5;
    v6 = *(_QWORD ***)(a1 + 200);
    v7 = *v6;
    v8 = v6[1];
    v9 = *((unsigned __int8 *)*v6 + v5);
    if ( (unsigned __int64)v8 >= v5 )
    {
      if ( v8 != (_QWORD *)v5 )
      {
        v26 = 0;
        sub_10001B764(v6, v5, &v26);
      }
    }
    else
    {
      if ( (unsigned __int64)v6[2] < v5 )
      {
        v7 = qvector_reserve(*(_QWORD **)(a1 + 200), *v6, v5, 1u);
        *v6 = v7;
        v8 = v6[1];
      }
      bzero((char *)v8 + (_QWORD)v7, v5 - (_QWORD)v8);
      v6[1] = (_QWORD *)v5;
    }
    *(_BYTE *)(a1 + 212) = -87;
    if ( v9 == 171 )
    {
      *(_BYTE *)(a1 + 212) = -85;
      v10 = *(_QWORD *)(a1 + 200);
      v11 = *(_QWORD **)v10;
      v12 = *(_QWORD *)(v10 + 8);
      if ( *(_QWORD *)(v10 + 16) < (unsigned __int64)(v12 + 1) )
      {
        v11 = qvector_reserve(*(_QWORD **)(a1 + 200), v11, v12 + 1, 1u);
        *(_QWORD *)v10 = v11;
        v12 = *(_QWORD *)(v10 + 8);
      }
      *((_BYTE *)v11 + v12) = -85;
      ++*(_QWORD *)(v10 + 8);
      ++*(_DWORD *)(a1 + 208);
      v13 = *(_QWORD *)(a1 + 200);
      v14 = *(_QWORD **)v13;
      v15 = *(_QWORD *)(v13 + 8);
      if ( *(_QWORD *)(v13 + 16) < (unsigned __int64)(v15 + 1) )
      {
        v14 = qvector_reserve(*(_QWORD **)(a1 + 200), v14, v15 + 1, 1u);
        *(_QWORD *)v13 = v14;
        v15 = *(_QWORD *)(v13 + 8);
      }
      *((_BYTE *)v14 + v15) = 0;
      ++*(_QWORD *)(v13 + 8);
      ++*(_DWORD *)(a1 + 208);
      v16 = *(_QWORD *)(a1 + 200);
      v17 = *(_QWORD **)v16;
      v18 = *(_QWORD *)(v16 + 8);
      if ( *(_QWORD *)(v16 + 16) < (unsigned __int64)(v18 + 1) )
      {
        v17 = qvector_reserve(*(_QWORD **)(a1 + 200), v17, v18 + 1, 1u);
        *(_QWORD *)v16 = v17;
        v18 = *(_QWORD *)(v16 + 8);
      }
      *((_BYTE *)v17 + v18) = 0;
      ++*(_QWORD *)(v16 + 8);
      ++*(_DWORD *)(a1 + 208);
      v19 = *(_QWORD *)(a1 + 200);
      v20 = *(_QWORD **)v19;
      v21 = *(_QWORD *)(v19 + 8);
      if ( *(_QWORD *)(v19 + 16) < (unsigned __int64)(v21 + 1) )
      {
        v20 = qvector_reserve(*(_QWORD **)(a1 + 200), v20, v21 + 1, 1u);
        *(_QWORD *)v19 = v20;
        v21 = *(_QWORD *)(v19 + 8);
      }
      *((_BYTE *)v20 + v21) = 0;
      ++*(_QWORD *)(v19 + 8);
      ++*(_DWORD *)(a1 + 208);
      v22 = *(_QWORD *)(a1 + 200);
      v23 = *(_QWORD **)v22;
      v24 = *(_QWORD *)(v22 + 8);
      if ( *(_QWORD *)(v22 + 16) < (unsigned __int64)(v24 + 1) )
      {
        v23 = qvector_reserve(*(_QWORD **)(a1 + 200), v23, v24 + 1, 1u);
        *(_QWORD *)v22 = v23;
        v24 = *(_QWORD *)(v22 + 8);
      }
      *((_BYTE *)v23 + v24) = 0;
      ++*(_QWORD *)(v22 + 8);
      ++*(_DWORD *)(a1 + 208);
    }
    else
    {
      ((void (__fastcall *)(__int64))loc_100025D3C)(a1);
    }
  }
  else
  {
    sub_10002DF38(*(_QWORD **)(a1 + 200), v3, v4 - (v3 + 4));
    *(_BYTE *)(a1 + 212) = -1;
  }
  return 0;
}
// 100025D38: control flows out of bounds to 100025D3C
// 1000A590D: using guessed type char under_debugger;
