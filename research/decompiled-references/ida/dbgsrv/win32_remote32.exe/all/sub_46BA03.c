/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46BA03
// Address: 0x0046BA03

//----- (0046BA03) --------------------------------------------------------
void __thiscall sub_46BA03(int **this)
{
  int v2; // eax
  void (__thiscall *v3)(_DWORD, _DWORD, _DWORD, _DWORD); // ecx

  if ( !byte_4B78DC )
  {
    _InterlockedExchange(&dword_4B78D4, 1);
    v2 = **this;
    if ( v2 )
    {
      if ( v2 == 1 )
        sub_477286((char)dword_4B7A1C);
    }
    else
    {
      if ( dword_4B78D8 != __security_cookie )
      {
        v3 = (void (__thiscall *)(_DWORD, _DWORD, _DWORD, _DWORD))__ROR4__(
                                                                    dword_4B78D8 ^ __security_cookie,
                                                                    __security_cookie & 0x1F);
        v3(v3, 0, 0, 0);
      }
      sub_477286((char)dword_4B7A10);
    }
    if ( !**this )
      sub_477BE0(&dword_489360, (unsigned int)&dword_489370);
    sub_477BE0(&dword_489374, (unsigned int)dword_489378);
    if ( !**(this + 1) )
    {
      byte_4B78DC = 1;
      *(_BYTE *)*(this + 2) = 1;
    }
  }
}
// 4892D8: using guessed type int (__cdecl *__guard_check_icall_fptr)(_DWORD);
// 489360: using guessed type int dword_489360;
// 489370: using guessed type int dword_489370;
// 489374: using guessed type int dword_489374;
// 489378: using guessed type int dword_489378[2];
// 4B78D4: using guessed type int dword_4B78D4;
// 4B78D8: using guessed type int dword_4B78D8;
// 4B78DC: using guessed type char byte_4B78DC;
// 4B7A10: using guessed type int dword_4B7A10[3];
// 4B7A1C: using guessed type int dword_4B7A1C[3];
