void __fastcall sub_4180(char a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r9
  void *v6; // rdi
  __int64 v7; // rax
  void (*v8)(void); // rbp
  void *v9; // rbp

  byte_7028 = 1;
  if ( qword_7030 )
  {
    if ( ptr )
    {
      v2 = operator new(0x20u);
      *(_QWORD *)(v2 + 8) = 0;
      v3 = v2;
      *(_QWORD *)(v2 + 16) = 0;
      *(_QWORD *)v2 = off_6990;
      *(_DWORD *)(v2 + 24) = a2;
      *(_BYTE *)(v2 + 28) = a1;
      if ( (unsigned __int8)sub_4500() )
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
          sub_4080((__int64)v8);
          v8();
        }
        ptr = nullptr;
        if ( *(_BYTE *)(v3 + 28) )
          exit(*(_DWORD *)(v3 + 24));
      }
      else
      {
        ((void (__fastcall *)(unsigned int, __int64 (__fastcall ***)(_QWORD), const __m128i *, const __m128i *, __int64, __int64))off_7008)(
          0x56u,
          (__int64 (__fastcall ***)(_QWORD))v3,
          (const __m128i *)((char *)&dword_0 + 2),
          (const __m128i *)&off_7008,
          v4,
          v5);
      }
      if ( v3 )
      {
        v6 = *(void **)(v3 + 16);
        *(_QWORD *)v3 = &off_6B18;
        sub_43F0(v6);
        operator delete((void *)v3, 0x20u);
      }
    }
  }
  else if ( a1 )
  {
    exit(a2);
  }
}

