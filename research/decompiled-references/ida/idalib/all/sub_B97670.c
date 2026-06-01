unsigned __int64 __fastcall sub_B97670(__int64 a1)
{
  char v1; // al
  __int64 v3; // rax
  char v4; // dl
  __int64 (*v5)(void); // rax
  __int64 v6; // rax

  v1 = *(_BYTE *)(a1 + 80) & 0x7F;
  switch ( v1 )
  {
    case '&':
      v3 = sub_B709C0(a1);
      v4 = *(_BYTE *)(v3 + 87);
      if ( (v4 & 0x40) != 0 )
        return *(_QWORD *)(v3 + 16LL * ((v4 & 0x20) != 0) + 176);
      else
        return (unsigned __int64)v4 >> 63;
    case '\'':
      return *(_QWORD *)(a1 + 176);
    case '%':
      v5 = *(__int64 (**)(void))(*(_QWORD *)a1 + 32LL);
      if ( (char *)v5 == (char *)sub_B94CE0 )
        v6 = sub_B709C0(a1);
      else
        v6 = v5();
      return *(_QWORD *)(v6 + 168);
    default:
      return 0;
  }
}
