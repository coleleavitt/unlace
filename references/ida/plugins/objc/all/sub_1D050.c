__int64 __fastcall sub_1D050(__int64 a1, _BYTE *a2)
{
  __int64 v2; // rax
  __int64 v3; // r13
  unsigned int v4; // r14d
  __int64 v6; // r15
  unsigned int _32bit; // eax
  __int64 v8; // r12
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r12
  unsigned int v11; // eax
  __int64 (*v12)(); // rdx
  int v13; // eax
  unsigned int v14; // eax
  unsigned __int64 v15; // [rsp+8h] [rbp-60h] BYREF
  __int64 v16; // [rsp+10h] [rbp-58h] BYREF
  __int128 v17; // [rsp+18h] [rbp-50h]
  unsigned __int64 v18; // [rsp+28h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  v2 = sub_15060(a1, 3);
  if ( v2 == -1 )
    return (unsigned int)-1;
  v3 = v2;
  v4 = sub_1C480(a1, v2, a2);
  if ( v4 )
    return v4;
  v6 = getseg();
  if ( !v6 )
    return (unsigned int)-1;
  _32bit = get_32bit();
  if ( _32bit == -1 )
    return (unsigned int)-1;
  v8 = 4 * _32bit;
  if ( *(_QWORD *)(v6 + 8) < v8 + v3 + (unsigned __int64)_32bit )
    return (unsigned int)-1;
  v15 = 0;
  if ( !(unsigned __int8)sub_14F10(a1, &v15, v3) )
    return (unsigned int)-1;
  if ( (a2[8] & 2) != 0 )
  {
    v16 = 0;
    v17 = 0;
    sub_D6A0(&v16);
    v9 = v15;
    set_name();
    if ( v16 )
    {
      *(_QWORD *)&v17 = 0;
      qfree();
    }
  }
  else
  {
    v9 = v15;
  }
  v10 = v9 + v8;
  if ( v9 < v10 )
  {
    while ( 1 )
    {
      v13 = *((_DWORD *)a2 + 2);
      if ( (v13 & 1) != 0 )
      {
        if ( (unsigned __int8)callui(27) )
          return (unsigned int)-1;
        v13 = *((_DWORD *)a2 + 2);
      }
      if ( (v13 & 2) != 0 )
        create_data();
      v11 = get_32bit();
      if ( v11 - 1 <= 0xFFFFFFFD )
      {
        v12 = *(__int64 (**)())(*(_QWORD *)a2 + 24LL);
        if ( v12 != sub_F090 )
        {
          v14 = ((__int64 (__fastcall *)(_BYTE *, __int64))v12)(a2, v11 + v3);
          if ( v14 )
            break;
        }
      }
      v9 += 4LL;
      v15 = v9;
      if ( v9 >= v10 )
        return v4;
    }
    return v14;
  }
  return v4;
}
