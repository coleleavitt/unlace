__int64 __fastcall sub_BD3C20(_BYTE *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned __int8 (*v5)(void); // rcx
  __int64 (*v6)(); // rcx
  __int64 (*v7)(); // rcx
  __int64 (*v9)(); // rdx
  __int64 (*v10)(); // rdx
  __int64 (*v11)(); // rdx

  v4 = *(_QWORD *)a1;
  v5 = *(unsigned __int8 (**)(void))(*(_QWORD *)a1 + 240LL);
  if ( (char *)v5 != (char *)sub_BC5910 )
  {
    if ( !v5() )
      return 0;
    v4 = *(_QWORD *)a1;
  }
  v6 = *(__int64 (**)())(v4 + 8056);
  if ( v6 != sub_BC78D0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_BYTE *, __int64, __int64))v6)(a1, a2, a3) )
      return 0;
    v4 = *(_QWORD *)a1;
  }
  v7 = *(__int64 (**)())(v4 + 8064);
  if ( v7 != sub_BC78E0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_BYTE *, __int64, __int64))v7)(a1, a2, a3) )
      return 0;
    v4 = *(_QWORD *)a1;
  }
  if ( !a1[9] )
    return (*(__int64 (__fastcall **)(_BYTE *, _QWORD))(v4 + 128))(a1, *(_QWORD *)(a2 + 32));
  v9 = *(__int64 (**)())(v4 + 232);
  if ( v9 != sub_BC5900 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_BYTE *, __int64))v9)(a1, a2) )
      return 0;
    v4 = *(_QWORD *)a1;
  }
  v10 = *(__int64 (**)())(v4 + 7040);
  if ( v10 != sub_BC74A0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_BYTE *, __int64))v10)(a1, a2) )
      return 0;
    v4 = *(_QWORD *)a1;
  }
  v11 = *(__int64 (**)())(v4 + 7048);
  if ( v11 == sub_BC74B0 )
    return (*(__int64 (__fastcall **)(_BYTE *, _QWORD))(v4 + 128))(a1, *(_QWORD *)(a2 + 32));
  if ( ((unsigned __int8 (__fastcall *)(_BYTE *, __int64))v11)(a1, a2) )
  {
    v4 = *(_QWORD *)a1;
    return (*(__int64 (__fastcall **)(_BYTE *, _QWORD))(v4 + 128))(a1, *(_QWORD *)(a2 + 32));
  }
  return 0;
}
