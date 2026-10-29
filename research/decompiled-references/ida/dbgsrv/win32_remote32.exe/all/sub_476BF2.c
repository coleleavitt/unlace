/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_476BF2
// Address: 0x00476BF2

//----- (00476BF2) --------------------------------------------------------
void **__cdecl sub_476BF2(const char *a1)
{
  const char *v1; // ebx
  int v2; // edx
  const char *v3; // esi
  char i; // al
  void **v5; // eax
  void **v6; // edi
  unsigned int v7; // ecx
  int v8; // eax
  _BYTE *v9; // eax
  _BYTE *v10; // esi
  int v12; // [esp+Ch] [ebp-8h]
  void **v13; // [esp+10h] [ebp-4h]

  v1 = a1;
  v2 = 0;
  v3 = a1;
  for ( i = *a1; i; i = *v3 )
  {
    if ( i != 61 )
      ++v2;
    v3 += strlen(v3) + 1;
  }
  v5 = (void **)sub_4791B9(v2 + 1, 4u);
  v6 = v5;
  if ( v5 )
  {
    v13 = v5;
    while ( *v1 )
    {
      v7 = strlen(v1);
      v8 = v7 + 1;
      v12 = v7 + 1;
      if ( *v1 != 61 )
      {
        v9 = sub_4791B9(v7 + 1, 1u);
        v10 = v9;
        if ( !v9 )
        {
          sub_476DCF(v6);
          sub_479216(nullptr);
          goto LABEL_16;
        }
        if ( sub_46C78C((int)v1, (int)v6, v9, v12, (int)v1) )
        {
          sub_467F04((int)v1, (int)v6);
          __debugbreak();
        }
        *v13++ = v10;
        sub_479216(nullptr);
        v8 = v12;
      }
      v1 += v8;
    }
  }
  else
  {
LABEL_16:
    v6 = nullptr;
  }
  sub_479216(nullptr);
  return v6;
}
