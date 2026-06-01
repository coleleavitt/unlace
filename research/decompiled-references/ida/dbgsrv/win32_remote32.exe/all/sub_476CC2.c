/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_476CC2
// Address: 0x00476CC2

//----- (00476CC2) --------------------------------------------------------
void **__cdecl sub_476CC2(const unsigned __int16 *a1)
{
  const unsigned __int16 *v1; // ebx
  int v2; // edx
  const unsigned __int16 *v3; // esi
  unsigned __int16 v4; // cx
  void **v5; // edi
  unsigned __int16 v6; // dx
  unsigned int v7; // eax
  _WORD *v8; // eax
  _WORD *v9; // esi
  int v11; // [esp+Ch] [ebp-Ch]
  void **v12; // [esp+10h] [ebp-8h]

  v1 = a1;
  v2 = 0;
  v3 = a1;
  if ( *a1 )
  {
    v4 = *a1;
    do
    {
      if ( v4 != 61 )
        ++v2;
      v3 += wcslen(v3) + 1;
      v4 = *v3;
    }
    while ( *v3 );
    v1 = a1;
  }
  v5 = (void **)sub_4791B9(v2 + 1, 4u);
  if ( v5 )
  {
    v12 = v5;
    if ( *v1 )
    {
      v6 = *v1;
      do
      {
        v7 = wcslen(v1) + 1;
        v11 = v7;
        if ( v6 != 61 )
        {
          v8 = sub_4791B9(v7, 2u);
          v9 = v8;
          if ( !v8 )
          {
            sub_476DCF(v5);
            v5 = nullptr;
            sub_479216(nullptr);
            break;
          }
          if ( sub_47B594((int)v1, (int)v5, v8, v11, (int)v1) )
          {
            sub_467F04((int)v1, (int)v5);
            __debugbreak();
          }
          *v12++ = v9;
          sub_479216(nullptr);
          v7 = v11;
        }
        v1 += v7;
        v6 = *v1;
      }
      while ( *v1 );
    }
  }
  sub_479216(nullptr);
  return v5;
}
