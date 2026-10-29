/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: deserialize_insn
// Address: 0x00000000000B58A0

//----- (00000000000B58A0) ----------------------------------------------------
char *__fastcall deserialize_insn(__int64 a1, unsigned __int64 *a2)
{
  char *v2; // rax
  char v3; // cl
  char *v4; // rax
  char v5; // cl
  __int64 v6; // r14
  __int64 i; // r15
  char *v8; // rax
  char v9; // cl
  char *v10; // rax
  char v11; // cl
  char *v12; // rax
  char v13; // cl
  char *v14; // rax
  char v15; // cl
  char *v16; // rax
  char v17; // cl
  char *v18; // rax
  char v19; // cl
  char *v20; // rax
  char v21; // cl
  char *v22; // rax
  char v23; // cl
  char *result; // rax
  char v25; // cl

  *(_QWORD *)a1 = unpack_dq(a2, a2[1]) - 1;
  *(_QWORD *)(a1 + 8) = unpack_dq(a2, a2[1]) - 1;
  *(_QWORD *)(a1 + 16) = unpack_dq(a2, a2[1]) - 1;
  *(_WORD *)(a1 + 24) = unpack_dw(a2, a2[1]);
  *(_WORD *)(a1 + 26) = unpack_dw(a2, a2[1]);
  *(_DWORD *)(a1 + 28) = unpack_dd(a2, a2[1]);
  v2 = (char *)*a2;
  if ( *a2 >= a2[1] )
    v3 = 0;
  else
    v3 = *v2++;
  *a2 = (unsigned __int64)v2;
  *(_BYTE *)(a1 + 32) = v3;
  v4 = (char *)*a2;
  if ( *a2 >= a2[1] )
    v5 = 0;
  else
    v5 = *v4++;
  *a2 = (unsigned __int64)v4;
  *(_BYTE *)(a1 + 33) = v5;
  *(_WORD *)(a1 + 34) = unpack_dw(a2, a2[1]);
  v6 = a1 + 40;
  for ( i = 0; i != 8; ++i )
  {
    *(_BYTE *)v6 = i;
    v8 = (char *)*a2;
    if ( *a2 >= a2[1] )
      v9 = 0;
    else
      v9 = *v8++;
    *a2 = (unsigned __int64)v8;
    *(_BYTE *)(v6 + 1) = v9;
    v10 = (char *)*a2;
    if ( *a2 >= a2[1] )
      v11 = 0;
    else
      v11 = *v10++;
    *a2 = (unsigned __int64)v10;
    *(_BYTE *)(v6 + 2) = v11;
    v12 = (char *)*a2;
    if ( *a2 >= a2[1] )
      v13 = 0;
    else
      v13 = *v12++;
    *a2 = (unsigned __int64)v12;
    *(_BYTE *)(v6 + 3) = v13;
    v14 = (char *)*a2;
    if ( *a2 >= a2[1] )
      v15 = 0;
    else
      v15 = *v14++;
    *a2 = (unsigned __int64)v14;
    *(_BYTE *)(v6 + 4) = v15;
    v16 = (char *)*a2;
    if ( *a2 >= a2[1] )
      v17 = 0;
    else
      v17 = *v16++;
    *a2 = (unsigned __int64)v16;
    *(_BYTE *)(v6 + 5) = v17;
    *(_WORD *)(v6 + 6) = unpack_dw(a2, a2[1]);
    *(_QWORD *)(v6 + 8) = unpack_dq(a2, a2[1]) - 1;
    *(_QWORD *)(v6 + 16) = unpack_dq(a2, a2[1]) - 1;
    *(_QWORD *)(v6 + 24) = unpack_dq(a2, a2[1]) - 1;
    v18 = (char *)*a2;
    if ( *a2 >= a2[1] )
      v19 = 0;
    else
      v19 = *v18++;
    *a2 = (unsigned __int64)v18;
    *(_BYTE *)(v6 + 32) = v19;
    v20 = (char *)*a2;
    if ( *a2 >= a2[1] )
      v21 = 0;
    else
      v21 = *v20++;
    *a2 = (unsigned __int64)v20;
    *(_BYTE *)(v6 + 33) = v21;
    v22 = (char *)*a2;
    if ( *a2 >= a2[1] )
      v23 = 0;
    else
      v23 = *v22++;
    *a2 = (unsigned __int64)v22;
    *(_BYTE *)(v6 + 34) = v23;
    result = (char *)*a2;
    if ( *a2 >= a2[1] )
      v25 = 0;
    else
      v25 = *result++;
    *a2 = (unsigned __int64)result;
    *(_BYTE *)(v6 + 35) = v25;
    v6 += 40;
  }
  return result;
}
