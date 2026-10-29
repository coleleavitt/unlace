void __fastcall exc_chooser_t__::vfunc_8(__int64 a1, double a2)
{
  int v2; // eax
  _DWORD *v3; // rdi
  __int64 v4; // rdx
  char *v5; // rcx

  if ( *(_BYTE *)(a1 + 180) )
  {
    v2 = xmmword_8CC2F8;
    v3 = qword_8CC600;
    v4 = qword_8CC2F0;
    v5 = (char *)(unsigned int)xmmword_8CC2F8;
    if ( qword_8CC600 )
    {
      *(_QWORD *)qword_8CC600 = qword_8CC2F0;
      v3[2] = v2;
      sub_23D480((__int64)v3, 24, v4, v5, a2);
    }
    else
    {
      sub_20CEA0(dbg, 13, qword_8CC2F0, (unsigned int)xmmword_8CC2F8);
    }
  }
}
