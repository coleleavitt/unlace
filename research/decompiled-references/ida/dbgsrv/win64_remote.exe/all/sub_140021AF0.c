/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140021AF0
// Address: 0x0000000140021AF0

//----- (0000000140021AF0) ----------------------------------------------------
__int64 __fastcall sub_140021AF0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 i; // rbx
  __int64 j; // rcx
  _QWORD *v6; // rdi
  void *v7; // rcx

  v3 = a2;
  i = *(_QWORD *)(a2 + 16);
  if ( *(_BYTE *)(i + 25) )
  {
    for ( i = *(_QWORD *)(a2 + 8); !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 8) )
    {
      if ( v3 != *(_QWORD *)(i + 16) )
        break;
      v3 = i;
    }
  }
  else
  {
    for ( j = *(_QWORD *)i; !*(_BYTE *)(j + 25); j = *(_QWORD *)j )
      i = j;
  }
  v6 = (_QWORD *)sub_14000C8A0(a1, a2);
  sub_140029390((__int64)(v6 + 7));
  v7 = (void *)v6[4];
  if ( v7 )
  {
    v6[5] = 0;
    j_free(v7);
    v6[4] = 0;
    v6[6] = 0;
  }
  j_j_free(v6);
  return i;
}
