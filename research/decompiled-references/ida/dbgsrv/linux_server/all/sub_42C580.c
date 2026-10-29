/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42C580
// Address: 0x000000000042C580

//----- (000000000042C580) ----------------------------------------------------
__int64 __fastcall sub_42C580(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  unsigned __int8 *v4; // rbx
  __int64 v5; // r13
  int v6; // edi

  v3 = a1[2];
  if ( v3 > 1 )
  {
    v4 = (unsigned __int8 *)a1[1];
    v5 = (__int64)&v4[v3 - 1];
    do
    {
      v6 = *v4++;
      *(v4 - 1) = tolower(v6);
    }
    while ( v4 != (unsigned __int8 *)v5 );
  }
  *(_BYTE *)a2 = 7;
  *(_OWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 8) = a1[1];
  *(_QWORD *)(a2 + 16) = a1[2];
  *(_QWORD *)(a2 + 24) = a1[3];
  a1[1] = 0;
  *((_OWORD *)a1 + 1) = 0;
  return 0;
}
