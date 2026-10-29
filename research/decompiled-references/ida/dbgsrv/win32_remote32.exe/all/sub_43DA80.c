/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43DA80
// Address: 0x0043DA80

//----- (0043DA80) --------------------------------------------------------
char __thiscall sub_43DA80(_DWORD *this)
{
  _DWORD *v1; // edx
  _DWORD *v2; // edi
  _DWORD *v3; // ebx
  _DWORD *v4; // esi
  int **v5; // eax
  int i; // eax
  int *j; // ecx
  _DWORD *v8; // esi
  void *v9; // eax

  v1 = this;
  v2 = (_DWORD *)*(this + 54);
  v3 = this + 54;
  v4 = (_DWORD *)*v2;
  if ( (_DWORD *)*v2 != v2 )
  {
    do
    {
      if ( !(*(int (__stdcall **)(_DWORD *, _DWORD, _DWORD *, _DWORD, _DWORD))(*v1 + 144))(
              v1,
              v4[5],
              v4 + 6,
              *((unsigned __int8 *)v4 + 32),
              0) )
        sub_402760("Failed to restore broken breakpoint at 0x%a\n");
      v5 = (int **)v4[2];
      if ( *((_BYTE *)v5 + 13) )
      {
        for ( i = v4[1]; !*(_BYTE *)(i + 13); i = *(_DWORD *)(i + 4) )
        {
          if ( v4 != *(_DWORD **)(i + 8) )
            break;
          v4 = (_DWORD *)i;
        }
        v4 = (_DWORD *)i;
      }
      else
      {
        v4 = (_DWORD *)v4[2];
        for ( j = *v5; !*((_BYTE *)j + 13); j = (int *)*j )
          v4 = j;
      }
      v2 = (_DWORD *)*v3;
      v1 = this;
    }
    while ( v4 != (_DWORD *)*v3 );
  }
  v8 = (_DWORD *)v2[1];
  while ( !*((_BYTE *)v8 + 13) )
  {
    sub_408820((int)v3, v8[2]);
    v9 = v8;
    v8 = (_DWORD *)*v8;
    sub_4627F2(v9);
  }
  v2[1] = v2;
  *v2 = v2;
  v2[2] = v2;
  v3[1] = 0;
  return 1;
}
