unsigned __int64 __fastcall sub_4CECC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // rdx
  __int64 v7; // rbx
  void (*v8)(void); // rax
  __int64 v9; // rbp
  int v10; // ecx
  __int64 v11; // rax
  __int64 v13; // rsi
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v15; // [rsp+8h] [rbp-30h]
  unsigned __int64 v16; // [rsp+18h] [rbp-20h]

  v6 = xmmword_2CA2068;
  v16 = __readfsqword(0x28u);
  v7 = qword_2CA2060;
  if ( 16LL * (_QWORD)xmmword_2CA2068 )
  {
    do
    {
      v9 = *(_QWORD *)(*(_QWORD *)v7 + 48LL);
      if ( v9 )
      {
        v10 = *(_DWORD *)(v9 + 4) & 0x100;
        if ( (BYTE1(*(_DWORD *)(v9 + 4)) & 0x80u) == 0 )
        {
          if ( v10 )
          {
            v13 = *(_QWORD *)(v9 + 72);
            if ( v13 )
              callui(182, v13, *(_QWORD *)(v9 + 64), (int)&callui, a5, a6);
          }
          else
          {
            v8 = *(void (**)(void))(v9 + 16);
            if ( v8 )
            {
              v8();
              v6 = xmmword_2CA2068;
            }
          }
        }
        else if ( !v10 )
        {
          v11 = *(_QWORD *)(v9 + 88);
          ptr = nullptr;
          v15 = 0;
          if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64, const char *, _QWORD, _QWORD, void **))(v11 + 104))(
                  0,
                  v9 + 96,
                  "term",
                  0,
                  0,
                  &ptr) )
            sub_375400();
          v6 = xmmword_2CA2068;
          if ( ptr )
          {
            *(_QWORD *)&v15 = 0;
            qfree(ptr);
            v6 = xmmword_2CA2068;
          }
        }
      }
      v7 += 16;
    }
    while ( v7 != qword_2CA2060 + 16 * v6 );
  }
  *(_QWORD *)&xmmword_2CA2068 = 0;
  byte_2CA2050 = 0;
  return v16 - __readfsqword(0x28u);
}

