__int64 __fastcall sub_BAF6C0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  unsigned __int8 (*v5)(void); // rdx
  __int64 (*v6)(); // rdx
  __int64 (*v7)(); // rax
  __int64 v8; // rax
  __int64 v9; // rsi
  unsigned __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rax

  v4 = *a1;
  v5 = *(unsigned __int8 (**)(void))(*a1 + 232);
  if ( (char *)v5 != (char *)sub_BA1BC0 )
  {
    if ( !v5() )
      return 0;
    v4 = *a1;
  }
  v6 = *(__int64 (**)())(v4 + 6912);
  if ( v6 != sub_BA3660 )
  {
    if ( ((unsigned __int8 (__fastcall *)(__int64 *, __int64))v6)(a1, a2) )
    {
      v4 = *a1;
      goto LABEL_3;
    }
    return 0;
  }
LABEL_3:
  v7 = *(__int64 (**)())(v4 + 6920);
  if ( v7 != sub_BA3670 && !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v7)(a1, a2) )
    return 0;
  v8 = a2;
  while ( 1 )
  {
    v9 = *(_QWORD *)(v8 + 32);
    if ( (*(_BYTE *)(v8 + 18) & 0x10) == 0 )
      break;
    while ( 1 )
    {
      v10 = v9 & 0xFFFFFFFFFFFFFFF0LL;
      v8 = *(_QWORD *)v10;
      v11 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v10 + 16LL) - 43;
      if ( (unsigned int)v11 <= 1 )
        break;
      v12 = sub_F3F310(v8, v10, v11, a4);
      v9 = *(_QWORD *)(v12 + 32);
      if ( (*(_BYTE *)(v12 + 18) & 0x10) == 0 )
        return (*(__int64 (__fastcall **)(__int64 *, __int64))(*a1 + 128))(a1, v9);
    }
  }
  return (*(__int64 (__fastcall **)(__int64 *, __int64))(*a1 + 128))(a1, v9);
}

