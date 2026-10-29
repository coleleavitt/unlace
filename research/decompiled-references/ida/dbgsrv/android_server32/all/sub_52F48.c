/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_52F48
// Address: 0x00052F48

//----- (00052F48) --------------------------------------------------------
int __fastcall sub_52F48(int a1, char *s)
{
  char *v3; // r5
  int result; // r0
  int v5; // r6

  v3 = strchr(s, 40);
  result = -1;
  if ( v3 )
  {
    *(_BYTE *)(a1 + 460) = 40;
    v5 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a1 + 4) = v3 + 1;
    result = sub_52D54(a1);
    if ( result >= 0 )
      *v3 = 0;
    *(_DWORD *)(a1 + 4) = v5;
  }
  return result;
}
