/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: deserialize_insn
// Address: 0x00000000000B0D20

//----- (00000000000B0D20) ----------------------------------------------------
unsigned __int64 __fastcall deserialize_insn(__int64 a1, unsigned __int64 *a2)
{
  char *v4; // x8
  char v5; // w9
  char v6; // t1
  char *v7; // x8
  char v8; // w9
  char v9; // t1
  __int64 v10; // x21
  char v11; // w22
  char *v12; // x9
  char v13; // w10
  char v14; // t1
  char *v15; // x8
  char v16; // w9
  char v17; // t1
  char *v18; // x9
  char v19; // w10
  char v20; // t1
  char *v21; // x8
  char v22; // w9
  char v23; // t1
  __int64 v24; // x23
  char *v25; // x8
  char v26; // w9
  char v27; // t1
  unsigned __int64 result; // x0
  char *v29; // x8
  char v30; // w9
  char v31; // t1
  char *v32; // x9
  char v33; // w10
  char v34; // t1
  char *v35; // x8
  char v36; // w9
  char v37; // t1
  __int64 v38; // x8
  char *v39; // x9
  char v40; // w10
  char v41; // t1

  *(_QWORD *)a1 = unpack_dq(a2, a2[1]) - 1;
  *(_QWORD *)(a1 + 8) = unpack_dq(a2, a2[1]) - 1;
  *(_QWORD *)(a1 + 16) = unpack_dq(a2, a2[1]) - 1;
  *(_WORD *)(a1 + 24) = unpack_dw(a2, a2[1]);
  *(_WORD *)(a1 + 26) = unpack_dw(a2, a2[1]);
  *(_DWORD *)(a1 + 28) = unpack_dd(a2, a2[1]);
  v4 = (char *)*a2;
  if ( *a2 >= a2[1] )
  {
    v5 = 0;
  }
  else
  {
    v6 = *v4++;
    v5 = v6;
  }
  *a2 = (unsigned __int64)v4;
  *(_BYTE *)(a1 + 32) = v5;
  v7 = (char *)*a2;
  if ( *a2 >= a2[1] )
  {
    v8 = 0;
  }
  else
  {
    v9 = *v7++;
    v8 = v9;
  }
  *a2 = (unsigned __int64)v7;
  *(_BYTE *)(a1 + 33) = v8;
  v10 = 0;
  v11 = 0;
  *(_WORD *)(a1 + 34) = unpack_dw(a2, a2[1]);
  do
  {
    *(_BYTE *)(a1 + v10 + 40) = v11;
    v12 = (char *)*a2;
    if ( *a2 >= a2[1] )
    {
      v13 = 0;
    }
    else
    {
      v14 = *v12++;
      v13 = v14;
    }
    *a2 = (unsigned __int64)v12;
    *(_BYTE *)(a1 + v10 + 41) = v13;
    v15 = (char *)*a2;
    if ( *a2 >= a2[1] )
    {
      v16 = 0;
    }
    else
    {
      v17 = *v15++;
      v16 = v17;
    }
    *a2 = (unsigned __int64)v15;
    *(_BYTE *)(a1 + v10 + 42) = v16;
    v18 = (char *)*a2;
    if ( *a2 >= a2[1] )
    {
      v19 = 0;
    }
    else
    {
      v20 = *v18++;
      v19 = v20;
    }
    *a2 = (unsigned __int64)v18;
    *(_BYTE *)(a1 + v10 + 43) = v19;
    v21 = (char *)*a2;
    if ( *a2 >= a2[1] )
    {
      v22 = 0;
    }
    else
    {
      v23 = *v21++;
      v22 = v23;
    }
    v24 = a1 + v10;
    *a2 = (unsigned __int64)v21;
    *(_BYTE *)(a1 + v10 + 44) = v22;
    v25 = (char *)*a2;
    if ( *a2 >= a2[1] )
    {
      v26 = 0;
    }
    else
    {
      v27 = *v25++;
      v26 = v27;
    }
    *a2 = (unsigned __int64)v25;
    *(_BYTE *)(v24 + 45) = v26;
    *(_WORD *)(v24 + 46) = unpack_dw(a2, a2[1]);
    *(_QWORD *)(v24 + 48) = unpack_dq(a2, a2[1]) - 1;
    *(_QWORD *)(v24 + 56) = unpack_dq(a2, a2[1]) - 1;
    result = unpack_dq(a2, a2[1]);
    *(_QWORD *)(v24 + 64) = result - 1;
    v29 = (char *)*a2;
    if ( *a2 >= a2[1] )
    {
      v30 = 0;
    }
    else
    {
      v31 = *v29++;
      v30 = v31;
    }
    *a2 = (unsigned __int64)v29;
    *(_BYTE *)(a1 + v10 + 72) = v30;
    v32 = (char *)*a2;
    if ( *a2 >= a2[1] )
    {
      v33 = 0;
    }
    else
    {
      v34 = *v32++;
      v33 = v34;
    }
    *a2 = (unsigned __int64)v32;
    *(_BYTE *)(a1 + v10 + 73) = v33;
    v35 = (char *)*a2;
    if ( *a2 >= a2[1] )
    {
      v36 = 0;
    }
    else
    {
      v37 = *v35++;
      v36 = v37;
    }
    *a2 = (unsigned __int64)v35;
    v38 = a1 + v10;
    *(_BYTE *)(a1 + v10 + 74) = v36;
    v39 = (char *)*a2;
    if ( *a2 >= a2[1] )
    {
      v40 = 0;
    }
    else
    {
      v41 = *v39++;
      v40 = v41;
    }
    v10 += 40;
    ++v11;
    *a2 = (unsigned __int64)v39;
    *(_BYTE *)(v38 + 75) = v40;
  }
  while ( v10 != 320 );
  return result;
}
