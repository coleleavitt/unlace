__int64 __fastcall sub_19BA80(__int16 a1, _BYTE *a2, _BYTE *a3)
{
  unsigned __int64 v3; // rbp
  _BYTE *v5; // rdi
  __int64 v6; // rax
  _WORD *v7; // rdx
  __int32_t v9; // edx
  _BYTE *v10; // rax
  __int64 v11; // rdx

  v3 = (unsigned __int64)&a3[(_QWORD)a2];
  v5 = a2;
  if ( !a1 )
    goto LABEL_6;
  a2 = a3;
  v6 = 0;
  v7 = &unk_2350A0;
  do
  {
    if ( *v7 == a1 )
      return qstrncpy();
    ++v6;
    v7 += 8;
  }
  while ( v6 != 83 );
  if ( !(_BYTE)a1 )
  {
    if ( (unsigned __int16)(a1 - 4096) <= 0x2200u
      || (unsigned __int16)(a1 - 15104) <= 0x900u
      || (unsigned __int16)(a1 - 21504) <= 0x900u
      || (unsigned __int16)(a1 - 24064) <= 0x900u
      || (unsigned __int16)(a1 - 26624) <= 0x900u
      || (unsigned __int16)(a1 - 30720) <= 0x900u )
    {
LABEL_16:
      qsnprintf();
      return (__int64)v5;
    }
LABEL_6:
    if ( (unsigned __int64)v5 < v3 )
    {
      *v5 = 0;
      return (__int64)v5;
    }
LABEL_30:
    if ( !under_debugger )
    {
      interr();
      return sub_19BCD0(519, a2, v11);
    }
LABEL_32:
    BUG();
  }
  if ( (a1 & 0xE0) == 0 )
    goto LABEL_16;
  v9 = (*__ctype_toupper_loc())[(unsigned __int8)a1];
  if ( (unsigned __int64)v5 >= v3 )
  {
    if ( !under_debugger )
    {
      interr();
      goto LABEL_30;
    }
    goto LABEL_32;
  }
  v10 = v5 + 1;
  *v5 = v9;
  if ( (unsigned __int64)(v5 + 1) >= v3 )
  {
    *(_BYTE *)(v3 - 1) = 0;
    v10 = (_BYTE *)(v3 - 1);
  }
  *v10 = 0;
  return (__int64)v5;
}

