char *__fastcall sub_FAF990(__int64 a1, unsigned int a2)
{
  unsigned int v2; // eax
  int v3; // ecx
  int v4; // edx
  __int64 v5; // rax
  char *v6; // rax

  v2 = a2 - 1;
  if ( a2 - 1 > 0x233A )
    return *(char **)(**(_QWORD **)(a1 + 8) + 40LL * (a2 - 9020) + 8);
  if ( a2 > 0x12C )
  {
    v2 = a2 - 301;
    v3 = 493;
    v4 = 160;
  }
  else
  {
    v3 = 333;
    v4 = 0;
  }
  if ( a2 > 0x2BC )
  {
    v2 -= 400;
    v4 = v3;
  }
  if ( a2 > 0x384 )
  {
    v4 += 154;
    v2 -= 200;
  }
  if ( a2 > 0x3FC )
  {
    v4 += 53;
    v2 -= 120;
  }
  if ( a2 > 0x5F0 )
  {
    v4 += 406;
    v2 -= 500;
  }
  if ( a2 > 0x910 )
  {
    v4 += 709;
    v2 -= 800;
  }
  if ( a2 > 0xA3C )
  {
    v4 += 270;
    v2 -= 300;
  }
  if ( a2 > 0xAA0 )
  {
    v4 += 35;
    v2 -= 100;
  }
  if ( a2 > 0xB04 )
  {
    v4 += 4;
    v2 -= 100;
  }
  if ( a2 > 0x1E8C )
  {
    v4 += 4755;
    v2 -= 5000;
  }
  if ( a2 > 0x1EF0 )
    v2 -= 100;
  if ( a2 > 0x22D8 )
  {
    v4 += 6;
    v2 -= 1000;
  }
  v5 = v4 + v2;
  if ( (unsigned int)v5 <= 0x1B14 && (v6 = (char *)&unk_23F5940 + 10 * v5, a2 == *(unsigned __int16 *)v6) )
    return &aMusttailAttrib[*((unsigned int *)&unk_2406820 + 0xCCCCCCCCCCCCCCDLL * ((v6 - (char *)&unk_23F5940) >> 1))];
  else
    return *(char **)(**(_QWORD **)(a1 + 8) + 40LL * (a2 - 9020) + 8);
}

