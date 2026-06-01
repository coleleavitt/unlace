/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001A484
// Address: 0x000000010001A484

//----- (000000010001A484) ----------------------------------------------------
__int64 __fastcall sub_10001A484(__int64 a1, __int64 *a2)
{
  __int64 v4; // d8
  __int64 v5; // x23
  __int64 v6; // d0
  __int128 v7; // off
  __int128 v8; // q1
  __int64 v9; // x22
  __int128 v10; // q2
  __int64 v11; // x24
  __int64 v12; // x21
  _QWORD *v13; // x1
  __int64 v14; // x8
  _QWORD *v15; // x0
  _QWORD *v16; // x8
  _QWORD *v17; // x21
  int v18; // w22
  __int64 v19; // x8
  unsigned __int64 v20; // x9
  _QWORD *v21; // x1
  unsigned __int64 v22; // x2
  __int128 v24; // [xsp+0h] [xbp-80h]
  __int128 v25; // [xsp+10h] [xbp-70h]
  __int128 v26; // [xsp+20h] [xbp-60h] BYREF

  if ( *(_BYTE *)(a1 + 48) == 1 )
  {
    sub_10000F540();
  }
  else
  {
    v4 = *a2;
    v26 = *(_OWORD *)(a2 + 1);
    v5 = *((unsigned int *)a2 + 6);
    v6 = *(__int64 *)((char *)a2 + 28);
    *(_QWORD *)&v7 = (unsigned int)v6;
    *((_QWORD *)&v7 + 1) = HIDWORD(v6);
    v8 = v7;
    v9 = *((unsigned int *)a2 + 9);
    v10 = *(_OWORD *)(a2 + 5);
    v11 = *(_QWORD *)(a1 + 40);
    v12 = *(_QWORD *)(a1 + 24);
    v13 = *(_QWORD **)v12;
    v14 = *(_QWORD *)(v12 + 8);
    if ( *(_QWORD *)(v12 + 16) < (unsigned __int64)(v14 + 1) )
    {
      v24 = v10;
      v25 = v8;
      v15 = qvector_reserve(*(_QWORD **)(a1 + 24), v13, v14 + 1, 0x48u);
      v10 = v24;
      v8 = v25;
      v13 = v15;
      *(_QWORD *)v12 = v15;
      v14 = *(_QWORD *)(v12 + 8);
    }
    v16 = &v13[9 * v14];
    *v16 = v4;
    *(_OWORD *)(v16 + 1) = v26;
    v16[3] = v11 + v5;
    *((_OWORD *)v16 + 2) = v8;
    v16[6] = v9;
    *(_OWORD *)(v16 + 7) = v10;
    ++*(_QWORD *)(v12 + 8);
    v17 = *(_QWORD **)(a1 + 32);
    v18 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 8LL);
    LODWORD(v26) = v18;
    v19 = v17[1];
    v20 = v17[2];
    v21 = (_QWORD *)*v17;
    v22 = v19 + 1;
    if ( *v17 > (unsigned __int64)&v26 || *v17 + 4 * v20 <= (unsigned __int64)&v26 )
    {
      if ( v20 < v22 )
      {
        v21 = qvector_reserve(v17, v21, v22, 4u);
        *v17 = v21;
        v19 = v17[1];
        v18 = v26;
      }
    }
    else if ( v20 < v22 )
    {
      v21 = qvector_reserve(v17, v21, v22, 4u);
      *v17 = v21;
      v19 = v17[1];
    }
    *((_DWORD *)v21 + v19) = v18;
    ++v17[1];
    *(_DWORD *)(a1 + 52) = *((_DWORD *)a2 + 12);
  }
  return 0;
}
