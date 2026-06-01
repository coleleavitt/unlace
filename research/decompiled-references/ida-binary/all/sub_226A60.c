void __fastcall sub_226A60(__int64 a1)
{
  __int64 v1; // rax
  int v3; // ebx
  _BYTE *v4; // rdi

  if ( (_QWORD)xmmword_8CC458 )
  {
    v1 = 0;
    v3 = 0;
    do
    {
      v4 = *((_BYTE **)qword_8CC450 + v1);
      if ( (v4[16] & 4) != 0 )
        (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v4 + 24LL))(v4, a1);
      v1 = ++v3;
    }
    while ( v3 < (unsigned __int64)xmmword_8CC458 );
  }
}
