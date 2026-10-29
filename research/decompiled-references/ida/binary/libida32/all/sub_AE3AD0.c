__int64 __fastcall sub_AE3AD0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  const char *v4; // rsi
  __int64 v5; // rax

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    sub_F83A90(a1);
  sub_971800(a2, "__attribute__((interrupt_save_fp");
  sub_971800(a2, "(");
  v3 = sub_971800(a2, "\"");
  switch ( *(_DWORD *)(a1 + 40) )
  {
    case 0:
      v4 = "IRQ";
      break;
    case 1:
      v4 = "FIQ";
      break;
    case 2:
      v4 = "SWI";
      break;
    case 3:
      v4 = "ABORT";
      break;
    case 4:
      v4 = "UNDEF";
      break;
    case 5:
      v4 = &byte_22CD811;
      break;
    default:
      LOBYTE(dword_0) = 0;
      BUG();
  }
  v5 = sub_971800(v3, v4);
  sub_971800(v5, "\"");
  sub_971800(a2, ")");
  return sub_971800(a2, "))");
}

