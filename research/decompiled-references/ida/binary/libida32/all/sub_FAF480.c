__int64 __fastcall sub_FAF480(unsigned int a1)
{
  unsigned int v1; // eax
  int v2; // ecx
  int v3; // edx
  __int64 v4; // rax
  unsigned __int16 *v5; // rdx
  __int64 result; // rax

  v1 = a1 - 1;
  if ( a1 - 1 > 0x233A )
    return 0;
  if ( a1 > 0x12C )
  {
    v1 = a1 - 301;
    v2 = 493;
    v3 = 160;
  }
  else
  {
    v2 = 333;
    v3 = 0;
  }
  if ( a1 > 0x2BC )
  {
    v1 -= 400;
    v3 = v2;
  }
  if ( a1 > 0x384 )
  {
    v3 += 154;
    v1 -= 200;
  }
  if ( a1 > 0x3FC )
  {
    v3 += 53;
    v1 -= 120;
  }
  if ( a1 > 0x5F0 )
  {
    v3 += 406;
    v1 -= 500;
  }
  if ( a1 > 0x910 )
  {
    v3 += 709;
    v1 -= 800;
  }
  if ( a1 > 0xA3C )
  {
    v3 += 270;
    v1 -= 300;
  }
  if ( a1 > 0xAA0 )
  {
    v3 += 35;
    v1 -= 100;
  }
  if ( a1 > 0xB04 )
  {
    v3 += 4;
    v1 -= 100;
  }
  if ( a1 > 0x1E8C )
  {
    v3 += 4755;
    v1 -= 5000;
  }
  if ( a1 > 0x1EF0 )
    v1 -= 100;
  if ( a1 > 0x22D8 )
  {
    v3 += 6;
    v1 -= 1000;
  }
  v4 = v3 + v1;
  if ( (unsigned int)v4 > 0x1B14 )
    return 0;
  v5 = (unsigned __int16 *)((char *)&unk_23F5940 + 10 * v4);
  result = 0;
  if ( a1 == *v5 )
    return *((_BYTE *)v5 + 3) & 0x3F;
  return result;
}

