/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6A280
// Address: 0x000000000006A280

//----- (000000000006A280) ----------------------------------------------------
__int64 __fastcall sub_6A280(__int64 a1, char a2)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  char *v4; // rax

  v2 = *(_QWORD *)(a1 + 8);
  v3 = v2 - 1;
  if ( !v2 )
    v3 = 0;
  v4 = *(char **)a1;
  if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v3 + 2) )
  {
    v4 = (char *)qvector_reserve(a1, *(char **)a1, v3 + 2, 1u);
    *(_QWORD *)a1 = v4;
  }
  *(_QWORD *)(a1 + 8) = v3 + 2;
  v4[v3] = a2;
  *(_BYTE *)(*(_QWORD *)a1 + v3 + 1) = 0;
  return 0;
}
