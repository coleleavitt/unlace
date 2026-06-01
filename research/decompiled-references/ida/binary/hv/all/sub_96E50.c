void __fastcall sub_96E50(char a1, int a2)
{
  __int64 v2; // rax
  _DWORD *v3; // rbx
  int v4; // r8d
  int v5; // r9d
  void *v6; // rdi
  __int64 v7; // rax
  void (*v8)(void); // rbp
  void *v9; // rbp

  byte_1671AC = 1;
  if ( qword_1671B0 )
  {
    if ( qword_1671B8 )
    {
      v2 = operator new(0x20u);
      *(_QWORD *)(v2 + 8) = 0;
      v3 = (_DWORD *)v2;
      *(_QWORD *)(v2 + 16) = 0;
      *(_QWORD *)v2 = off_163F88;
      *(_DWORD *)(v2 + 24) = a2;
      *(_BYTE *)(v2 + 28) = a1;
      if ( (unsigned __int8)sub_98310() )
      {
        while ( 1 )
        {
          v9 = qword_1671B8;
          if ( !qword_1671B8 )
            break;
          v7 = *((_QWORD *)qword_1671B8 + 1);
          if ( !v7 )
          {
            if ( *(_QWORD *)qword_1671B8 )
              j__free(*(void **)qword_1671B8);
            j__free(v9);
            break;
          }
          v8 = *(void (**)(void))(*(_QWORD *)qword_1671B8 + 8 * v7 - 8);
          sub_96D50((__int64)v8);
          v8();
        }
        qword_1671B8 = nullptr;
        if ( *((_BYTE *)v3 + 28) )
          exit(v3[6]);
      }
      else
      {
        off_165640(86, (_DWORD)v3, 2, (unsigned int)&off_165640, v4, v5);
      }
      if ( v3 )
      {
        v6 = *((void **)v3 + 2);
        *(_QWORD *)v3 = &off_1644D8;
        sub_97C30(v6);
        operator delete(v3, 0x20u);
      }
    }
  }
  else if ( a1 )
  {
    exit(a2);
  }
}

