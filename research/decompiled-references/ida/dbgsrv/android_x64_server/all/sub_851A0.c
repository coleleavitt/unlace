/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_851A0
// Address: 0x00000000000851A0

//----- (00000000000851A0) ----------------------------------------------------
int __fastcall sub_851A0(__int64 a1, __int64 a2)
{
  __int64 i; // rax
  unsigned __int8 *v3; // rdx
  unsigned __int8 v4; // r12
  __int64 v5; // rax
  __int64 v6; // rbp
  _BYTE *v7; // rax

  *(_QWORD *)(a2 + 8) = 0;
  if ( *(_QWORD *)(a2 + 16) <= 0x3FFu )
    *(_QWORD *)a2 = qvector_reserve(a2, *(char **)a2, 0x400u, 1u);
  for ( i = -1; ; i = 1 )
  {
    v3 = (unsigned __int8 *)(*(_QWORD *)(a1 + 8) + i);
    *(_QWORD *)(a1 + 8) = v3;
    v4 = *v3;
    if ( (*v3 & 0x80u) != 0 || (LODWORD(i) = isalnum(v4), !(_DWORD)i) )
    {
      if ( v4 != 95 && v4 != 36 )
        break;
    }
    v5 = *(_QWORD *)(a2 + 8);
    v6 = v5 - 1;
    if ( !v5 )
      v6 = 0;
    v7 = *(_BYTE **)a2;
    if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v6 + 2) )
    {
      v7 = qvector_reserve(a2, *(char **)a2, v6 + 2, 1u);
      *(_QWORD *)a2 = v7;
    }
    *(_QWORD *)(a2 + 8) = v6 + 2;
    v7[v6] = v4;
    *(_BYTE *)(*(_QWORD *)a2 + v6 + 1) = 0;
  }
  return i;
}
