/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_481990
// Address: 0x0000000000481990

//----- (0000000000481990) ----------------------------------------------------
void __fastcall sub_481990(char a1, int a2)
{
  _QWORD *v2; // rax
  void *v3; // rbx
  int v4; // r8d
  int v5; // r9d
  char *v6; // rdi
  __int64 v7; // rax
  void (*v8)(void); // rbp
  void *v9; // rbp

  byte_4C94EC = 1;
  if ( qword_4C94F0 )
  {
    if ( qword_4C94F8 )
    {
      v2 = (_QWORD *)operator new(0x20u);
      v2[1] = 0;
      v3 = v2;
      v2[2] = 0;
      *v2 = off_4C4260;
      *((_DWORD *)v2 + 6) = a2;
      *((_BYTE *)v2 + 28) = a1;
      if ( sub_482DD0() )
      {
        while ( 1 )
        {
          v9 = qword_4C94F8;
          if ( !qword_4C94F8 )
            break;
          v7 = *((_QWORD *)qword_4C94F8 + 1);
          if ( !v7 )
          {
            if ( *(_QWORD *)qword_4C94F8 )
              j__free(*(void **)qword_4C94F8);
            j__free(v9);
            break;
          }
          v8 = *(void (**)(void))(*(_QWORD *)qword_4C94F8 + 8 * v7 - 8);
          sub_481890((__int64)v8);
          v8();
        }
        qword_4C94F8 = nullptr;
        if ( *((_BYTE *)v3 + 28) )
          exit(*((_DWORD *)v3 + 6));
      }
      else
      {
        off_4C7FB0(86, (_DWORD)v3, 2, (unsigned int)&off_4C7FB0, v4, v5);
      }
      if ( v3 )
      {
        v6 = *((char **)v3 + 2);
        *(_QWORD *)v3 = &off_4C4590;
        sub_4826F0(v6);
        operator delete(v3, 0x20u);
      }
    }
  }
  else if ( a1 )
  {
    exit(a2);
  }
}
// 481A0A: variable 'v4' is possibly undefined
// 481A0A: variable 'v5' is possibly undefined
// 4C4260: using guessed type __int64 (__fastcall *off_4C4260[2])();
// 4C4590: using guessed type _UNKNOWN *off_4C4590;
// 4C7FB0: using guessed type double (*off_4C7FB0)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, ...);
// 4C94EC: using guessed type char byte_4C94EC;
// 4C94F0: using guessed type __int64 qword_4C94F0;
