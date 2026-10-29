/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100018C50
// Address: 0x0000000100018C50

//----- (0000000100018C50) ----------------------------------------------------
__int64 __fastcall sub_100018C50(__int64 a1, __int128 *a2)
{
  __int64 v4; // x22
  __int128 v5; // q1
  __int64 v6; // x23
  __int64 v7; // x21
  _QWORD *v8; // x1
  __int64 v9; // x8
  _QWORD *v10; // x8
  _QWORD *v11; // x21
  int v12; // w22
  __int64 v13; // x8
  unsigned __int64 v14; // x9
  _QWORD *v15; // x1
  unsigned __int64 v16; // x2
  __int128 v18; // [xsp+0h] [xbp-80h] BYREF
  __int128 v19; // [xsp+10h] [xbp-70h]
  __int64 v20; // [xsp+20h] [xbp-60h]
  __int128 v21; // [xsp+30h] [xbp-50h]
  __int64 v22; // [xsp+40h] [xbp-40h]

  if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
  {
    v21 = *a2;
    v4 = *((_QWORD *)a2 + 3);
    v22 = *((_QWORD *)a2 + 2);
    v5 = a2[3];
    v18 = a2[2];
    v19 = v5;
    v20 = *((_QWORD *)a2 + 8);
    v6 = *(_QWORD *)(a1 + 40);
    v7 = *(_QWORD *)(a1 + 24);
    v8 = *(_QWORD **)v7;
    v9 = *(_QWORD *)(v7 + 8);
    if ( *(_QWORD *)(v7 + 16) < (unsigned __int64)(v9 + 1) )
    {
      v8 = qvector_reserve(*(_QWORD **)(a1 + 24), v8, v9 + 1, 0x48u);
      *(_QWORD *)v7 = v8;
      v9 = *(_QWORD *)(v7 + 8);
    }
    v10 = &v8[9 * v9];
    *(_OWORD *)v10 = v21;
    v10[2] = v22;
    v10[3] = v6 + v4;
    *((_OWORD *)v10 + 2) = v18;
    *((_OWORD *)v10 + 3) = v19;
    v10[8] = v20;
    ++*(_QWORD *)(v7 + 8);
    v11 = *(_QWORD **)(a1 + 32);
    v12 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 8LL);
    LODWORD(v18) = v12;
    v13 = v11[1];
    v14 = v11[2];
    v15 = (_QWORD *)*v11;
    v16 = v13 + 1;
    if ( *v11 > (unsigned __int64)&v18 || *v11 + 4 * v14 <= (unsigned __int64)&v18 )
    {
      if ( v14 < v16 )
      {
        v15 = qvector_reserve(v11, v15, v16, 4u);
        *v11 = v15;
        v13 = v11[1];
        v12 = v18;
      }
    }
    else if ( v14 < v16 )
    {
      v15 = qvector_reserve(v11, v15, v16, 4u);
      *v11 = v15;
      v13 = v11[1];
    }
    *((_DWORD *)v15 + v13) = v12;
    ++v11[1];
    *(_DWORD *)(a1 + 52) = *((_DWORD *)a2 + 16);
  }
  else
  {
    sub_10000EA94();
  }
  return 0;
}
