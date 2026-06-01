/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8D206
// Address: 0x0008D206

//----- (0008D206) --------------------------------------------------------
int __fastcall sub_8D206(int a1)
{
  int v1; // r5
  _DWORD *v2; // r4
  int v3; // r6

  if ( !a1 )
    return -102;
  v1 = *(_DWORD *)(a1 + 224);
  v2 = (_DWORD *)(a1 + 224);
  if ( !v1 )
    return -102;
  v3 = 0;
  if ( !*(_QWORD *)(v1 + 128) )
  {
    v3 = 0;
    if ( !*(_DWORD *)(v1 + 200) )
    {
      v3 = 0;
      if ( *(_DWORD *)(v1 + 112) != *(_DWORD *)(v1 + 116) )
        v3 = -105;
    }
  }
  free(*(void **)v1);
  *(_DWORD *)v1 = 0;
  if ( *(_DWORD *)(v1 + 72) == 8 )
    sub_8A494((_DWORD *)(v1 + 4));
  free((void *)v1);
  *v2 = 0;
  return v3;
}
