/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006CB20
// Address: 0x000000010006CB20

//----- (000000010006CB20) ----------------------------------------------------
__int64 __fastcall sub_10006CB20(__int64 a1, char a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  bool v4; // cf
  __int64 v5; // rax
  _BYTE *v6; // rax

  v2 = *(_QWORD *)(a1 + 8);
  v3 = 0;
  v4 = v2 == 0;
  v5 = v2 - 1;
  if ( !v4 )
    v3 = v5;
  v6 = *(_BYTE **)a1;
  if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v3 + 2) )
  {
    v6 = qvector_reserve(a1, *(void **)a1, v3 + 2, 1u);
    *(_QWORD *)a1 = v6;
  }
  *(_QWORD *)(a1 + 8) = v3 + 2;
  v6[v3] = a2;
  *(_BYTE *)(*(_QWORD *)a1 + v3 + 1) = 0;
  return a1;
}
