/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8DBF0
// Address: 0x0008DBF0

//----- (0008DBF0) --------------------------------------------------------
char __cdecl sub_8DBF0(_DWORD *a1)
{
  _DWORD *v1; // edi
  _DWORD *v2; // ecx
  _DWORD *v3; // eax
  int v4; // edi
  bool v5; // zf
  _DWORD *v7; // [esp+0h] [ebp-1Ch]

  v1 = (_DWORD *)a1[56];
  v7 = a1 + 57;
  if ( a1 + 57 != v1 )
  {
    do
    {
      if ( !(*(int (__cdecl **)(_DWORD *, _DWORD, _DWORD *, _DWORD, _DWORD))(*a1 + 148))(
              a1,
              v1[5],
              v1 + 6,
              *((unsigned __int8 *)v1 + 32),
              0) )
        sub_1C900();
      v2 = (_DWORD *)v1[1];
      if ( v2 )
      {
        do
        {
          v3 = v2;
          v2 = (_DWORD *)*v2;
        }
        while ( v2 );
      }
      else
      {
        v3 = (_DWORD *)v1[2];
        if ( (_DWORD *)*v3 != v1 )
        {
          v4 = (int)(v1 + 2);
          do
          {
            v3 = *(_DWORD **)(*(_DWORD *)v4 + 8);
            v5 = *v3 == *(_DWORD *)v4;
            v4 = *(_DWORD *)v4 + 8;
          }
          while ( !v5 );
        }
      }
      v1 = v3;
    }
    while ( v7 != v3 );
  }
  sub_1BD50((int)(a1 + 56), (void **)a1[57]);
  a1[58] = 0;
  a1[56] = v7;
  a1[57] = 0;
  return 1;
}
