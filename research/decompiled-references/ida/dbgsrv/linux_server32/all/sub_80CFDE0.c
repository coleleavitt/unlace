/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CFDE0
// Address: 0x080CFDE0

//----- (080CFDE0) --------------------------------------------------------
unsigned int __cdecl sub_80CFDE0(char a1, int status)
{
  _DWORD *v2; // eax
  void *v3; // edi
  unsigned int result; // eax
  int v5; // eax
  void (*v6)(void); // ebp
  void *v7; // ebp
  _BYTE v8[16]; // [esp+0h] [ebp-30h] BYREF
  unsigned int v9; // [esp+10h] [ebp-20h]

  v9 = __readgsdword(0x14u);
  byte_811F8AC = 1;
  if ( dword_811F8B0 )
  {
    if ( dword_811F8B4 )
    {
      v2 = (_DWORD *)operator new(0x14u);
      v2[1] = 0;
      v3 = v2;
      v2[2] = 0;
      *v2 = off_811C900;
      v2[3] = status;
      *((_BYTE *)v2 + 16) = a1;
      if ( sub_80D14A0() )
      {
        while ( 1 )
        {
          v7 = (void *)dword_811F8B4;
          if ( !dword_811F8B4 )
            break;
          v5 = *(_DWORD *)(dword_811F8B4 + 4);
          if ( !v5 )
          {
            if ( *(_DWORD *)dword_811F8B4 )
              sub_80CF780(*(void **)dword_811F8B4);
            sub_80CF780(v7);
            break;
          }
          v6 = *(void (**)(void))(*(_DWORD *)dword_811F8B4 + 4 * v5 - 4);
          sub_80CFCD0((int)v6);
          v6();
        }
        dword_811F8B4 = 0;
        if ( *((_BYTE *)v3 + 16) )
          exit(*((_DWORD *)v3 + 3));
      }
      else
      {
        off_811E568(v8);
      }
      if ( v3 )
      {
        *(_DWORD *)v3 = &off_811CA98;
        sub_80D0D50(*((char **)v3 + 2));
        operator delete(v3, 0x14u);
      }
    }
  }
  else if ( a1 )
  {
    exit(status);
  }
  result = v9 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
// 811C900: using guessed type int (__cdecl *off_811C900[2])(int);
// 811CA98: using guessed type _UNKNOWN *off_811CA98;
// 811E568: using guessed type _DWORD (__stdcall *off_811E568)(_DWORD);
// 811F8AC: using guessed type char byte_811F8AC;
// 811F8B0: using guessed type int dword_811F8B0;
// 811F8B4: using guessed type int dword_811F8B4;
