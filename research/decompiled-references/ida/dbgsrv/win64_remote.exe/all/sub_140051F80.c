/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140051F80
// Address: 0x0000000140051F80

//----- (0000000140051F80) ----------------------------------------------------
__int64 __fastcall sub_140051F80(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // rax

  v2 = sub_140040EC0(a1, a2);
  if ( v2 <= 0x80 )
    return -1;
  else
    return v2 - 128;
}
