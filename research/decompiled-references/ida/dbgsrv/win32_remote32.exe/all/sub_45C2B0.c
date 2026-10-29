/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45C2B0
// Address: 0x0045C2B0

//----- (0045C2B0) --------------------------------------------------------
void __thiscall sub_45C2B0(_DWORD *this)
{
  _DWORD *v2; // eax
  signed int v3; // edi
  int v4; // edx
  unsigned int v5; // ebx
  unsigned int v6; // ebx
  __m128i *v7; // eax
  void *v8; // ecx
  void *v9; // [esp-4h] [ebp-10h]

  v2 = (_DWORD *)*(this + 2);
  *(this + 6) = 0;
  *(this + 7) = 0;
  v3 = v2[2];
  v4 = v2[3];
  *(this + 4) = v3;
  *(this + 5) = v4;
  *(this + 9) = 0;
  *(this + 8) = 0;
  v5 = v2[4];
  *(this + 10) = v5;
  if ( v5 )
  {
    if ( !v4 && v3 )
    {
      v6 = (unsigned int)(sub_462A90((unsigned int)v3 + (unsigned __int64)v5 - 1, v5) + 7) >> 3;
      *(this + 9) = sub_453990(v3);
      v7 = (__m128i *)sub_453990(v6);
      v8 = (void *)*(this + 9);
      *(this + 8) = v7;
      if ( v8 && v7 )
      {
        sub_464890(v7, 0, v6);
        return;
      }
      sub_453A20(v8);
      v9 = (void *)*(this + 8);
      *(this + 9) = 0;
      sub_453A20(v9);
      *(this + 8) = 0;
    }
    *(this + 10) = 0;
  }
}
// 45C2F6: conditional instruction was optimized away because edx.4==0
