__int64 __fastcall sub_7A4B20(__int64 a1)
{
  char v1; // al
  __int64 v3; // rax
  unsigned __int8 v4; // dl
  __int64 (*v5)(void); // rax
  __int64 v6; // rax

  v1 = *(_BYTE *)(a1 + 80) & 0x7F;
  switch ( v1 )
  {
    case '$':
      v3 = sub_777D70(a1);
      v4 = *(_BYTE *)(v3 + 87);
      if ( (v4 & 0x40) != 0 )
        return *(_QWORD *)(v3 + 16LL * ((v4 & 0x20) != 0) + 176);
      else
        return v4 >> 7;
    case '%':
      return *(_QWORD *)(a1 + 176);
    case '#':
      v5 = *(__int64 (**)(void))(*(_QWORD *)a1 + 32LL);
      if ( v5 == sub_6287A0 )
        v6 = sub_777D70(a1);
      else
        v6 = v5();
      return *(_QWORD *)(v6 + 168);
    default:
      return 0;
  }
}

