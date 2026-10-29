/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48BF0
// Address: 0x00048BF0

//----- (00048BF0) --------------------------------------------------------
int __cdecl sub_48BF0(int a1)
{
  _DWORD *v1; // eax
  const char *v2; // eax
  char *v3; // eax
  const char *v4; // esi

  *(_BYTE *)(a1 + 124) = 0;
  sub_52030(*(_DWORD **)(a1 + 108), 1, *(_WORD *)(a1 + 68));
  if ( *(_BYTE *)(a1 + 116) != 0xAF )
    sub_48D00(a1);
  sub_52330(*(_DWORD *)(a1 + 104) + 16, (int *)(a1 + 212));
  if ( *(_DWORD *)(a1 + 100) )
  {
    v1 = *(_DWORD **)(a1 + 104);
    v2 = v1[1] ? (const char *)*v1 : byte_EF875;
    v3 = strchr(v2, 46);
    if ( v3 )
    {
      v4 = v3 + 1;
      if ( !strcmp(v3 + 1, "__getattr__") )
      {
        *(_DWORD *)(*(_DWORD *)(a1 + 100) + 32) = sub_52DE0(*(_DWORD **)(a1 + 60), *(_DWORD *)(a1 + 104));
      }
      else if ( !strcmp(v4, "__setattr__") )
      {
        *(_DWORD *)(*(_DWORD *)(a1 + 100) + 36) = sub_52DE0(*(_DWORD **)(a1 + 60), *(_DWORD *)(a1 + 104));
      }
    }
  }
  sub_46D10((unsigned int *)a1);
  return 0;
}
