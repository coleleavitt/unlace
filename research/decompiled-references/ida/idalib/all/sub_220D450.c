_QWORD *__fastcall sub_220D450(_QWORD *a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v4; // rax
  char *v5; // rcx
  __int64 v6; // r8

  v4 = sub_2219FE0(a2 + 160, a2 + 184, a2 + 192);
  if ( v4 == 77 )
  {
    v5 = "Microcontroller";
    v6 = 15;
    goto LABEL_5;
  }
  if ( v4 > 0x4D )
  {
    if ( v4 == 82 )
    {
      v5 = "Real-time";
      v6 = 9;
      goto LABEL_5;
    }
    v5 = "Classic";
    v6 = 7;
    if ( v4 == 83 )
      goto LABEL_5;
LABEL_8:
    v5 = "Unknown";
    v6 = 7;
    goto LABEL_5;
  }
  if ( !v4 )
  {
    v5 = "None";
    v6 = 4;
    goto LABEL_5;
  }
  v5 = "Application";
  v6 = 11;
  if ( v4 != 65 )
    goto LABEL_8;
LABEL_5:
  sub_221F830(a2, a3, (unsigned int)v4, v5, v6);
  *a1 = 0;
  return a1;
}
