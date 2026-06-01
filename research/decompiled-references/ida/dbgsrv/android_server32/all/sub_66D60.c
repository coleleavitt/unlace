/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_66D60
// Address: 0x00066D60

//----- (00066D60) --------------------------------------------------------
int __fastcall sub_66D60(_DWORD *a1)
{
  _DWORD *v2; // r5
  _DWORD **v3; // r7
  _DWORD *v4; // r0
  _DWORD *v5; // r0
  bool v6; // zf
  int v7; // r1
  _DWORD *v9; // [sp+4h] [bp-8h]

  v2 = (_DWORD *)a1[56];
  v3 = (_DWORD **)(a1 + 57);
  v9 = a1 + 56;
  if ( a1 + 57 != v2 )
  {
    do
    {
      if ( !(*(int (__fastcall **)(_DWORD *, _DWORD, _DWORD *, _DWORD, _DWORD))(*a1 + 148))(
              a1,
              v2[5],
              v2 + 6,
              *((unsigned __int8 *)v2 + 32),
              0) )
        sub_1BBA0((int)"Failed to restore broken breakpoint at 0x%a\n", v2[5]);
      v4 = (_DWORD *)v2[1];
      if ( v4 )
      {
        do
        {
          v2 = v4;
          v4 = (_DWORD *)*v4;
        }
        while ( v4 );
      }
      else
      {
        v5 = v2 + 2;
        v6 = *(_DWORD *)v2[2] == (_DWORD)v2;
        v2 = (_DWORD *)v2[2];
        if ( !v6 )
        {
          do
          {
            v7 = *v5;
            v5 = (_DWORD *)(*v5 + 8);
            v2 = *(_DWORD **)(v7 + 8);
          }
          while ( *v2 != v7 );
        }
      }
    }
    while ( v3 != v2 );
  }
  sub_1B450((int)v9, *v3);
  a1[58] = 0;
  *v9 = v3;
  *v3 = nullptr;
  return 1;
}
