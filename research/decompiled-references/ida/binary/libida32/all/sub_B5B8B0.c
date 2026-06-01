__int64 __fastcall sub_B5B8B0(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rax
  char v7; // r12

  v6 = a1;
  v7 = 0;
  do
  {
    if ( (*((_BYTE *)v6 + 83) & 8) == 0 && ((v6[16] & 1) != 0 || v6[16]) || (*((_BYTE *)v6 + 83) & 0x40) != 0 )
    {
      *a2 = v6;
      return 1;
    }
    if ( (v6[13] & 3) != 0 )
    {
      if ( v7 )
        return 0;
      v7 = 1;
    }
    v6 = sub_6E4ED0(v6 + 13, (__int64)v6, *((_BYTE *)v6 + 83) & 0x40, a4, a5, a6);
  }
  while ( a1 != v6 && v6 );
  return 0;
}

