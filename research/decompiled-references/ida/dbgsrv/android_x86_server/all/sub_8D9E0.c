/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8D9E0
// Address: 0x0008D9E0

//----- (0008D9E0) --------------------------------------------------------
unsigned int __cdecl sub_8D9E0(_DWORD *a1, unsigned __int8 a2)
{
  _DWORD *v2; // esi
  _DWORD *v3; // ecx
  _DWORD *v4; // eax
  int v5; // esi
  bool v6; // zf

  v2 = (_DWORD *)a1[65];
  if ( a1 + 66 != v2 )
  {
    do
    {
      (*(void (__cdecl **)(_DWORD *, _DWORD *, _DWORD))(*a1 + 172))(a1, v2, a2);
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
    while ( a1 + 66 != v4 );
  }
  return __readgsdword(0x14u);
}
