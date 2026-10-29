void __fastcall sub_11650(char a1, int a2)
{
  __int64 v2; // rax
  _DWORD *v3; // rbx
  int v4; // r8d
  int v5; // r9d
  void *v6; // rdi
  __int64 v7; // rax
  void (*v8)(void); // rbp
  void *v9; // rbp

  byte_1D3C8 = 1;
  if ( qword_1D3D0 )
  {
    if ( ptr )
    {
      v2 = operator new(0x20u);
      *(_QWORD *)(v2 + 8) = 0;
      v3 = (_DWORD *)v2;
      *(_QWORD *)(v2 + 16) = 0;
      *(_QWORD *)v2 = off_1BCB0;
      *(_DWORD *)(v2 + 24) = a2;
      *(_BYTE *)(v2 + 28) = a1;
      if ( (unsigned __int8)sub_11E80() )
      {
        while ( 1 )
        {
          v9 = ptr;
          if ( !ptr )
            break;
          v7 = *((_QWORD *)ptr + 1);
          if ( !v7 )
          {
            if ( *(_QWORD *)ptr )
              j__free(*(void **)ptr);
            j__free(v9);
            break;
          }
          v8 = *(void (**)(void))(*(_QWORD *)ptr + 8 * v7 - 8);
          sub_11550((__int64)v8);
          v8();
        }
        ptr = nullptr;
        if ( *((_BYTE *)v3 + 28) )
          exit(v3[6]);
      }
      else
      {
        off_1C2D8(86, (_DWORD)v3, 2, (unsigned int)&off_1C2D8, v4, v5);
      }
      if ( v3 )
      {
        v6 = *((void **)v3 + 2);
        *(_QWORD *)v3 = &off_1BD28;
        sub_11D30(v6);
        operator delete(v3, 0x20u);
      }
    }
  }
  else if ( a1 )
  {
    exit(a2);
  }
}

