char __fastcall sub_4CBCA0(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int64 v4; // rax
  int v6; // eax
  int v7; // eax
  _BYTE *v8; // rbp
  const char *v9; // rsi
  __int64 (__fastcall *v10)(); // rsi
  int v11; // eax
  int v12; // eax

  if ( a2 )
  {
    v4 = a2[1];
    if ( v4 <= 1 )
      goto LABEL_18;
    if ( v4 - 1 > 0x7FFE )
    {
      v6 = *(_DWORD *)(a3 + 12);
      if ( v6 == 8 || v6 == 2 )
        goto LABEL_18;
    }
    if ( (*(_BYTE *)(a3 + 10) & 8) != 0 || (v7 = getinf(99), v7 == 176) || v7 == 256 )
    {
      sub_4C9730((__int64)a2, "[]", "_slice_");
      sub_4C9730((__int64)a2, ",", "_comma_");
      sub_4C9730((__int64)a2, "<-", "_chan_left_");
      sub_4C9730((__int64)a2, "*", "_ptr_");
      sub_4C9730((__int64)a2, "/", "_");
      sub_4C9730((__int64)a2, " ", "_");
      sub_4C9730((__int64)a2, "-", "_");
      sub_4C9730((__int64)a2, "[", "_");
      sub_4C9730((__int64)a2, "]", "_");
      sub_4C9730((__int64)a2, byte_22D5040, ".");
      sub_4C9730((__int64)a2, byte_22D5043, "_");
      v8 = &off_2B2CF00;
      do
      {
        v9 = *(const char **)v8;
        v8 += 8;
        sub_4C9730((__int64)a2, v9, &byte_22F0C30);
      }
      while ( v8 != algn_2B2CF38 );
      if ( a2[1] <= 1u )
        goto LABEL_18;
    }
    v10 = (__int64 (__fastcall *)())sub_4C7FE0;
    if ( *(_DWORD *)(a3 + 12) != 8 )
      v10 = sub_4CD440;
    if ( (unsigned int)sub_4CB3C0(
                         (__int64)a2,
                         (__int64 (__fastcall *)(__int64, _QWORD, _QWORD, char *, char *, const char *))v10,
                         a3,
                         (*(int *)(a3 + 8) >> 10) & 1) )
    {
LABEL_18:
      LOBYTE(v12) = 0;
    }
    else
    {
      v11 = *(_DWORD *)(a3 + 12);
      if ( v11 == 6 )
      {
        LOBYTE(v12) = 1;
        if ( (*(_BYTE *)(a1 + 8) & 8) == 0 )
          return (unsigned int)str2reg(*a2) >> 31;
      }
      else if ( v11 == 8 )
      {
        LOBYTE(v12) = *(_DWORD *)(a3 + 16) == 0;
        if ( *(_DWORD *)(a3 + 28) )
          LOBYTE(v12) = (*(_DWORD *)(a3 + 24) == 2) & v12;
      }
      else
      {
        LOBYTE(v12) = 1;
      }
    }
  }
  else
  {
    LOBYTE(v12) = 0;
  }
  return v12;
}
