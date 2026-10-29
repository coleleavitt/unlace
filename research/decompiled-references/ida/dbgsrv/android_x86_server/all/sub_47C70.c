/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47C70
// Address: 0x00047C70

//----- (00047C70) --------------------------------------------------------
int __cdecl sub_47C70(_DWORD *a1)
{
  char *v1; // eax
  _DWORD *v2; // esi
  unsigned int v3; // edi
  const char *v4; // eax
  char *v6; // [esp+Ch] [ebp-20h]
  _DWORD *v7; // [esp+10h] [ebp-1Ch]
  unsigned int v8; // [esp+18h] [ebp-14h]

  if ( a1[6] )
    v1 = (char *)a1[5];
  else
    v1 = byte_EF875;
  v6 = v1;
  v7 = a1 + 19;
  v8 = a1[20];
  if ( v8 )
  {
    v2 = (_DWORD *)(*v7 + 4);
    v3 = 0;
    while ( 1 )
    {
      v4 = byte_EF875;
      if ( *v2 )
        v4 = (const char *)*(v2 - 1);
      if ( !strcmp(v4, v6) )
        break;
      ++v3;
      v2 += 3;
      if ( v3 >= v8 )
        goto LABEL_10;
    }
  }
  else
  {
LABEL_10:
    if ( sub_4B430((int)v7, v6) != -1 )
      return 0;
  }
  set_error_string(0, v6);
  return set_qerrno(52);
}
