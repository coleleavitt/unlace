void __fastcall sub_B75F0(__int64 a1)
{
  __int64 v1; // rax
  int v3; // ebx
  _BYTE *v4; // rdi

  if ( (_QWORD)xmmword_2525B8 )
  {
    v1 = 0;
    v3 = 0;
    do
    {
      v4 = *((_BYTE **)qword_2525B0 + v1);
      if ( (v4[16] & 4) != 0 )
        (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v4 + 24LL))(v4, a1);
      v1 = ++v3;
    }
    while ( v3 < (unsigned __int64)xmmword_2525B8 );
  }
}

