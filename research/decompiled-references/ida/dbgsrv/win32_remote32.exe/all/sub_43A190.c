/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43A190
// Address: 0x0043A190

//----- (0043A190) --------------------------------------------------------
char *__thiscall sub_43A190(char *this)
{
  _DWORD *v2; // esi
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  void **v8; // esi
  int v9; // eax
  int v10; // edx
  int v11; // eax
  _DWORD *v12; // esi
  void *v13; // ecx
  void *v14; // ecx
  void *v16; // [esp-4h] [ebp-28h]
  int v17; // [esp+10h] [ebp-14h]
  int v18; // [esp+14h] [ebp-10h]

  *(_DWORD *)this = &off_48A254;
  *((_DWORD *)this + 2) = -1;
  *((_DWORD *)this + 3) = -1;
  *((_DWORD *)this + 4) = 4;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  v2 = this + 60;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 0;
  v3 = sub_4627C2(8u);
  v3[1] = 0;
  *v2 = v3;
  *v3 = v2;
  *((_DWORD *)this + 20) = -1;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 22) = -1;
  *(this + 92) = 0;
  *((_DWORD *)this + 24) = 0;
  *(_OWORD *)(this + 100) = 0;
  *(_QWORD *)(this + 116) = 0;
  *((_DWORD *)this + 31) = 24;
  *((_DWORD *)this + 32) = 4;
  *((_DWORD *)this + 33) = 0;
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 35) = 0;
  *((_DWORD *)this + 36) = -1;
  *((_DWORD *)this + 37) = 0;
  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 39) = 0;
  *((_DWORD *)this + 40) = 0;
  *((_DWORD *)this + 41) = 0;
  v4 = sub_4627C2(0x20u);
  *v4 = v4;
  v4[1] = v4;
  v4[2] = v4;
  *((_WORD *)v4 + 6) = 257;
  *((_DWORD *)this + 40) = v4;
  *((_DWORD *)this + 42) = 0;
  *((_DWORD *)this + 43) = 0;
  v5 = sub_4627C2(0x114u);
  *v5 = v5;
  v5[1] = v5;
  v5[2] = v5;
  *((_WORD *)v5 + 6) = 257;
  *((_DWORD *)this + 42) = v5;
  *((_DWORD *)this + 44) = 0;
  *((_DWORD *)this + 45) = 0;
  *((_DWORD *)this + 46) = 0;
  *((_DWORD *)this + 47) = 0;
  *((_DWORD *)this + 48) = 0;
  *((_DWORD *)this + 49) = 0;
  *((_DWORD *)this + 50) = 0;
  *((_DWORD *)this + 51) = 0;
  *((_DWORD *)this + 52) = 0;
  *((_DWORD *)this + 53) = 0;
  *((_DWORD *)this + 54) = 0;
  *((_DWORD *)this + 55) = 0;
  v6 = sub_4627C2(0x28u);
  *v6 = v6;
  v6[1] = v6;
  v6[2] = v6;
  *((_WORD *)v6 + 6) = 257;
  *((_DWORD *)this + 54) = v6;
  *((_DWORD *)this + 56) = 0;
  *((_DWORD *)this + 57) = 0;
  *((_DWORD *)this + 58) = 0;
  *((_DWORD *)this + 59) = 0;
  *((_DWORD *)this + 60) = 0;
  *((_DWORD *)this + 61) = 0;
  *((_DWORD *)this + 62) = 0;
  *((_DWORD *)this + 63) = 0;
  v7 = sub_4627C2(0x34u);
  *v7 = v7;
  v7[1] = v7;
  v7[2] = v7;
  *((_WORD *)v7 + 6) = 257;
  *((_DWORD *)this + 62) = v7;
  *((_DWORD *)this + 64) = -1;
  *((_DWORD *)this + 65) = 0;
  *((_DWORD *)this + 66) = 0;
  *((_DWORD *)this + 67) = 0;
  *((_DWORD *)this + 68) = 0;
  *((_DWORD *)this + 69) = 0;
  *((_DWORD *)this + 70) = 0;
  *((_DWORD *)this + 71) = 0;
  *((_DWORD *)this + 72) = 0;
  *((_DWORD *)this + 73) = 0;
  *((_DWORD *)this + 74) = 0;
  *((_DWORD *)this + 75) = 0;
  *((_DWORD *)this + 76) = 0;
  *((_DWORD *)this + 77) = 0;
  *((_DWORD *)this + 78) = 1;
  *((_DWORD *)this + 79) = 0;
  *((_DWORD *)this + 80) = -1;
  *((_DWORD *)this + 81) = -1;
  *((_DWORD *)this + 82) = -1;
  *(this + 332) = 0;
  *((_DWORD *)this + 84) = 0;
  *((_DWORD *)this + 85) = 0;
  *((_DWORD *)this + 86) = 0;
  *((_DWORD *)this + 87) = 0;
  *((_DWORD *)this + 88) = 0;
  *((_DWORD *)this + 89) = 0;
  *((_DWORD *)this + 90) = 0;
  *((_DWORD *)this + 91) = 0;
  v8 = (void **)(this + 132);
  *((_DWORD *)this + 92) = -1;
  *((_WORD *)this + 186) = 0;
  if ( *((_DWORD *)this + 35) < 0xAu )
    *v8 = sub_453B00((int)(this + 132), *v8, 0xAu, 1u);
  *((_DWORD *)this + 34) = 10;
  sub_464310((unsigned int)*v8, (unsigned int)"UNDEFINED", 9u);
  *((_BYTE *)*v8 + 9) = 0;
  v9 = sub_439DA0();
  if ( v9 >= 8 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(2777);
  }
  *((_DWORD *)this + 32) = v9;
  if ( *((_DWORD *)this + 37) )
  {
    v10 = *((_DWORD *)this + 38);
    v17 = v10;
    if ( v10 )
    {
      v11 = 0;
      v18 = 0;
      do
      {
        v12 = (_DWORD *)(v11 + *((_DWORD *)this + 37));
        v13 = (void *)v12[5];
        if ( v13 )
        {
          v12[6] = 0;
          sub_453A20(v13);
          v11 = v18;
          v10 = v17;
          v12[5] = 0;
          v12[7] = 0;
        }
        v14 = (void *)v12[1];
        if ( v14 )
        {
          v12[2] = 0;
          sub_453A20(v14);
          v11 = v18;
          v10 = v17;
          v12[1] = 0;
          v12[3] = 0;
        }
        v11 += 32;
        --v10;
        v18 = v11;
        v17 = v10;
      }
      while ( v10 );
    }
    v16 = *((void **)this + 37);
    *((_DWORD *)this + 38) = 0;
    sub_453A20(v16);
    *((_DWORD *)this + 37) = 0;
    *((_DWORD *)this + 39) = 0;
  }
  return this;
}
// 48A254: using guessed type int (__stdcall *off_48A254)(int, int);
// 4B70F0: using guessed type char byte_4B70F0;
