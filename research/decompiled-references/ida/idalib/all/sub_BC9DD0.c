__int64 __fastcall sub_BC9DD0(_BYTE *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned __int8 (*v6)(void); // rcx
  __int64 (*v7)(); // rcx
  __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  __int64 (*v11)(); // rdx
  __int64 (*v12)(); // rdx

  v4 = *(_QWORD *)a1;
  v6 = *(unsigned __int8 (**)(void))(*(_QWORD *)a1 + 240LL);
  if ( (char *)v6 != (char *)sub_BC5910 )
  {
    if ( !v6() )
      return 0;
    v4 = *(_QWORD *)a1;
  }
  v7 = *(__int64 (**)())(v4 + 7848);
  if ( v7 != sub_BC7730 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_BYTE *, __int64, __int64))v7)(a1, a2, a3) )
      return 0;
    v4 = *(_QWORD *)a1;
  }
  if ( a1[9] )
  {
    v11 = *(__int64 (**)())(v4 + 232);
    if ( v11 != sub_BC5900 )
    {
      if ( !((unsigned __int8 (__fastcall *)(_BYTE *, __int64))v11)(a1, a2) )
        return 0;
      v4 = *(_QWORD *)a1;
    }
    v12 = *(__int64 (**)())(v4 + 6832);
    if ( v12 != sub_BC7300 )
    {
      if ( !((unsigned __int8 (__fastcall *)(_BYTE *, __int64))v12)(a1, a2) )
        return 0;
      v4 = *(_QWORD *)a1;
    }
  }
  v8 = *(_QWORD *)(a2 + 40);
  if ( v8 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_BYTE *, __int64, _QWORD))(v4 + 88))(a1, v8, *(_QWORD *)(a3 + 8)) )
    {
LABEL_6:
      v9 = (unsigned int)sub_F6C520(*(_QWORD *)(a2 + 32));
      return (*(__int64 (__fastcall **)(_BYTE *, _QWORD, unsigned __int64))(*(_QWORD *)a1 + 136LL))(
               a1,
               *(_QWORD *)(a2 + 32),
               v9 * ((a3 + 16 - (unsigned __int64)(a3 != -16)) / v9 + (a3 != -16)));
    }
  }
  else if ( (*(unsigned __int8 (__fastcall **)(_BYTE *, _QWORD))(v4 + 80))(a1, 0) )
  {
    goto LABEL_6;
  }
  return 0;
}
