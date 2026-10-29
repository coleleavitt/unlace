/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5BE40
// Address: 0x0005BE40

//----- (0005BE40) --------------------------------------------------------
unsigned int __cdecl sub_5BE40(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // esi
  _DWORD *v3; // ecx
  _DWORD *v4; // eax
  int v5; // esi
  bool v6; // zf
  _DWORD v8[9]; // [esp+8h] [ebp-24h] BYREF

  v8[4] = __readgsdword(0x14u);
  a1[1] = 0;
  a1[2] = 0;
  *a1 = a1 + 1;
  v2 = (_DWORD *)*a2;
  if ( a2 + 1 != (_DWORD *)*a2 )
  {
    do
    {
      v8[2] = a1 + 1;
      sub_681E0(v8, (int)a1, a1 + 1, (int)(v2 + 4), (int)(v2 + 4));
      v3 = (_DWORD *)v2[1];
      if ( v3 )
      {
        do
        {
          v4 = v3;
          v3 = (_DWORD *)*v3;
        }
        while ( v3 );
      }
      else
      {
        v4 = (_DWORD *)v2[2];
        if ( (_DWORD *)*v4 != v2 )
        {
          v5 = (int)(v2 + 2);
          do
          {
            v4 = *(_DWORD **)(*(_DWORD *)v5 + 8);
            v6 = *v4 == *(_DWORD *)v5;
            v5 = *(_DWORD *)v5 + 8;
          }
          while ( !v6 );
        }
      }
      v2 = v4;
    }
    while ( a2 + 1 != v4 );
  }
  a1[3] = 1;
  a1[4] = a2[4];
  return __readgsdword(0x14u);
}
