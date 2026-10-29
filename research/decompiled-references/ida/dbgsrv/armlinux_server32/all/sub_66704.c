/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_66704
// Address: 0x00066704

//----- (00066704) --------------------------------------------------------
_DWORD *__fastcall sub_66704(_DWORD *result)
{
  _DWORD *v1; // r5
  int v2; // r4

  v1 = result;
  v2 = *result;
  if ( *result )
  {
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v2 + 36))(*result);
    result = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
  }
  *v1 = 0;
  return result;
}
