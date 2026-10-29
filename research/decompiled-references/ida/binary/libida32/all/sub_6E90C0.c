char __fastcall sub_6E90C0(__int64 a1, unsigned __int64 a2)
{
  _QWORD **v2; // rdi
  __int64 (*v3)(void); // rax

  v2 = *(_QWORD ***)(a1 + 24);
  v3 = (__int64 (*)(void))(*v2)[20];
  if ( (char *)v3 == (char *)sub_6E9070 )
  {
    if ( a2 )
    {
      if ( *(char *)(a2 + 28) >= 0 )
      {
        LOBYTE(v3) = *(_BYTE *)(a2 + 73) >> 5;
        if ( (((_BYTE)v3 + 6) & 7u) <= 1 || !(_BYTE)v3 )
        {
          LODWORD(v3) = (*(_BYTE *)(a2 + 28) & 0x7F) - 59;
          if ( (unsigned int)v3 <= 2 )
            LOBYTE(v3) = sub_6E8F60(v2[2], a2);
        }
      }
    }
  }
  else
  {
    LOBYTE(v3) = v3();
  }
  return (char)v3;
}

