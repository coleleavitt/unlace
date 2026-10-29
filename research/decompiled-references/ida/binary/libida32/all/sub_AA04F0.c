__int64 __fastcall sub_AA04F0(__int64 a1, __int64 a2, char a3, _WORD *a4, char a5)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  bool v9; // zf
  __int64 v10; // [rsp-10h] [rbp-68h]
  unsigned __int64 v11; // [rsp+8h] [rbp-50h] BYREF
  _BYTE v12[32]; // [rsp+10h] [rbp-48h] BYREF
  __int16 v13; // [rsp+30h] [rbp-28h]

  if ( a2 )
  {
    if ( a3 )
    {
      sub_971800(*(_QWORD *)(a1 + 48), "&");
    }
    else if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x1E )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_QWORD *)(v6 + 8) & 7LL | (*(__int64 *)(v6 + 8) >> 3) & 1 )
        v6 = sub_F411C0(*(_QWORD *)(a2 + 48));
      v7 = *(_QWORD *)(a1 + 48);
      v13 = 257;
      v11 = v6 & 0xFFFFFFFFFFFFFFF0LL;
      sub_F50AF0(&v11, v7, a1 + 8, v12, 0);
      return sub_B9C3E0(a2, *(_QWORD *)(a1 + 48), a1 + 8);
    }
    return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a2 + 88LL))(
             a2,
             *(_QWORD *)(a1 + 48),
             a1 + 8);
  }
  if ( a5 )
  {
    if ( a4 && (*a4 & 0x1FF) != 0x68 )
    {
      sub_A9C880(a1, (__int64)a4);
      if ( *(_BYTE *)(a1 + 56) )
      {
        v9 = *(_BYTE *)(a1 + 26) == 0;
        *(_BYTE *)(a1 + 56) = 0;
        if ( !v9 )
          sub_A9C3F0(a1);
        sub_971800(*(_QWORD *)(a1 + 48), " aka ");
        v9 = *(_BYTE *)(a1 + 26) == 0;
        *(_BYTE *)(a1 + 56) = 1;
        if ( !v9 )
          sub_A9C3F0(a1);
      }
      else
      {
        sub_971800(*(_QWORD *)(a1 + 48), " aka ");
      }
    }
    return sub_971800(*(_QWORD *)(a1 + 48), "nullptr");
  }
  else if ( a4 )
  {
    sub_EE3EC0((_DWORD)a4, *(_QWORD *)(a1 + 48), 0, a1 + 8, 0, 0, (__int64)"\n", 1);
    return v10;
  }
  else
  {
    return sub_971800(*(_QWORD *)(a1 + 48), "(no argument)");
  }
}

