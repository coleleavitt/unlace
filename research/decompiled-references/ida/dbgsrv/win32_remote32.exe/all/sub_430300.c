/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_430300
// Address: 0x00430300

//----- (00430300) --------------------------------------------------------
_DWORD *__usercall sub_430300@<eax>(int a1@<edi>, int a2, int *a3)
{
  _DWORD *result; // eax
  int v4; // esi
  int v5; // ebx

  result = (_DWORD *)a3[1];
  *result = 0;
  v4 = *a3;
  if ( *a3 )
  {
    do
    {
      v5 = *(_DWORD *)v4;
      sub_426200((void **)(v4 + 32));
      sub_430D50(v4 + 8, v5, a1);
      result = (_DWORD *)sub_4627F2((void *)v4);
      v4 = v5;
    }
    while ( v5 );
  }
  return result;
}
