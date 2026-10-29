__int64 __fastcall sub_7E4200(_DWORD *a1, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // ebp
  void (__fastcall __noreturn *v4)(); // rax
  unsigned int v5; // eax

  v2 = a1[4] >> 1;
  if ( v2 < a2 )
    v2 = a2;
  if ( a1[4] == -2 )
    v2 = a2;
  if ( a1[8] )
  {
    v3 = 0;
    do
    {
      v4 = *(void (__fastcall __noreturn **)())(*(_QWORD *)a1 + 88LL);
      if ( v4 == sub_7E48F0 )
      {
        sub_1872CE0("");
        sub_1873130(114, 106);
      }
      v5 = ((unsigned int (__fastcall *)(_DWORD *, _QWORD))v4)(a1, v3) >> 1;
      if ( v2 < v5 )
        v2 = v5;
      ++v3;
    }
    while ( v3 < a1[8] );
  }
  return v2;
}

