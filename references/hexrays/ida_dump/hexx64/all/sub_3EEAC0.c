_BOOL8 __fastcall sub_3EEAC0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  char *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v9; // edx
  __int128 v10; // [rsp+0h] [rbp-188h] BYREF
  __int64 v11; // [rsp+10h] [rbp-178h]
  __int64 v12; // [rsp+18h] [rbp-170h]
  __int64 v13; // [rsp+20h] [rbp-168h]
  char v14; // [rsp+28h] [rbp-160h] BYREF
  unsigned __int8 v15; // [rsp+29h] [rbp-15Fh]
  __int16 v16; // [rsp+2Eh] [rbp-15Ah]
  unsigned __int8 v17; // [rsp+51h] [rbp-137h]
  _QWORD v18[4]; // [rsp+168h] [rbp-20h] BYREF

  v18[0] = __readfsqword(0x28u);
  if ( a2 != -1 )
  {
    v11 = -1;
    v2 = a2;
    v3 = &v14;
    v10 = -1;
    v12 = 0;
    v13 = 0;
    do
    {
      *(_WORD *)v3 = 0;
      v3 += 40;
      *((_WORD *)v3 - 19) = 0;
      *((_WORD *)v3 - 18) = 0;
      *((_DWORD *)v3 - 2) = 0;
      *((_WORD *)v3 - 17) = 0;
      *((_OWORD *)v3 - 2) = 0;
      *((_QWORD *)v3 - 2) = 0;
    }
    while ( v18 != (_QWORD *)v3 );
    if ( ((__int64 (__fastcall *)(__int128 *, __int64, _QWORD *, double))decode_prev_insn)(&v10, a2, v18, 0.0) != -1
      && (_WORD)v12 != 143 )
    {
      while ( (unsigned int)decode_insn(&v10, v2, v4, v5, v6, v7, 0.0) )
      {
        LOBYTE(v9) = (_WORD)v12 != 210;
        LOBYTE(v5) = (_WORD)v12 != 27;
        v4 = (unsigned int)v5 & v9;
        LOBYTE(v5) = (_WORD)v12 != 131;
        if ( (((_WORD)v12 != 131) & (unsigned __int8)v4) != 0 && (_WORD)v12 != 122 )
        {
          if ( (_WORD)v12 == 134 && v15 == 1 )
            return v16 == 1;
          return 0;
        }
        if ( (unsigned int)v15 - 3 <= 1 || (unsigned int)v17 - 3 <= 1 )
          return 0;
        v2 += WORD1(v12);
      }
    }
  }
  return 0;
}
