/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DAFEE
// Address: 0x000DAFEE

//----- (000DAFEE) --------------------------------------------------------
int __usercall sub_DAFEE@<eax>(int a1@<eax>)
{
  _BYTE *v2; // ecx
  int result; // eax
  int v4; // edi
  _BYTE *v5; // eax
  _BYTE *v6; // eax
  _BYTE *v7; // eax
  char *v8; // edi
  _BYTE *v9; // eax
  char v10; // dl
  int v11; // [esp+4h] [ebp-14h] BYREF
  int v12; // [esp+8h] [ebp-10h] BYREF
  _DWORD v13[3]; // [esp+Ch] [ebp-Ch] BYREF

  v2 = (_BYTE *)(a1 + 9 + strlen((const char *)(a1 + 9)) + 1);
  if ( *(_BYTE *)(a1 + 8) > 3u )
  {
    result = 255;
    if ( *v2 != 4 || v2[1] )
      return result;
    v2 += 2;
  }
  if ( *(_BYTE *)(a1 + 9) != 122 )
    return 0;
  v4 = a1;
  v5 = sub_DAC66(v2, &v12);
  v6 = sub_DAC91(v5, v13);
  if ( *(_BYTE *)(v4 + 8) == 1 )
    v7 = v6 + 1;
  else
    v7 = sub_DAC66(v6, &v12);
  v8 = (char *)(v4 + 10);
  v9 = sub_DAC66(v7, &v12);
  while ( 1 )
  {
    v10 = *v8;
    if ( *v8 == 82 )
      break;
    if ( v10 == 80 )
    {
      v9 = sub_DAECB(*v9 & 0x7F, nullptr, v9 + 1, &v11);
    }
    else
    {
      if ( v10 != 76 )
        return 0;
      ++v9;
    }
    ++v8;
  }
  return (unsigned __int8)*v9;
}
