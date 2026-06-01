void __fastcall sub_B6F80(unsigned int a1)
{
  __int64 v1; // rax
  int v3; // ebx
  _BYTE *v4; // rdi

  if ( (_QWORD)xmmword_251438 )
  {
    v1 = 0;
    v3 = 0;
    do
    {
      v4 = *((_BYTE **)qword_251430 + v1);
      if ( (v4[16] & 4) != 0 )
        (*(void (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)v4 + 24LL))(v4, a1);
      v1 = ++v3;
    }
    while ( v3 < (unsigned __int64)xmmword_251438 );
  }
}

