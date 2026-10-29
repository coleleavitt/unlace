void __fastcall sub_F300(unsigned __int64 a1)
{
  unsigned __int16 v1; // dx
  void (*v2)(void); // rax

  if ( a1 > 0x10 )
  {
    v1 = *(_WORD *)(a1 - 6);
    if ( v1 <= 0x41u && *(_QWORD *)(a1 - 16) && v1 )
    {
      v2 = (void (*)(void))qword_B76E0[3 * *(unsigned __int16 *)(a1 - 6) + 2];
      if ( v2 )
        v2();
      free((void *)(a1 - 16));
    }
  }
}

