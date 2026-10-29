__int64 __fastcall sub_BA66A0(_BYTE *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned __int8 (*v5)(void); // rcx
  __int64 (*v6)(); // rax
  __int64 v7; // rax
  __int64 (*v8)(); // rdx
  __int64 (*v9)(); // rax
  __int64 v10; // rax

  v4 = *(_QWORD *)a1;
  v5 = *(unsigned __int8 (**)(void))(*(_QWORD *)a1 + 240LL);
  if ( (char *)v5 != (char *)sub_BA1BD0 )
  {
    if ( !v5() )
      return 0;
    v4 = *(_QWORD *)a1;
  }
  v6 = *(__int64 (**)())(v4 + 7720);
  if ( v6 != sub_BA38F0 && !((unsigned __int8 (__fastcall *)(_BYTE *, __int64, __int64))v6)(a1, a2, a3) )
    return 0;
  if ( !a1[9] )
  {
LABEL_6:
    v10 = sub_F33E10(a2);
    return (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 96LL))(a1, v10);
  }
  v7 = *(_QWORD *)a1;
  v8 = *(__int64 (**)())(*(_QWORD *)a1 + 232LL);
  if ( v8 != sub_BA1BC0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_BYTE *, __int64))v8)(a1, a2) )
      return 0;
    v7 = *(_QWORD *)a1;
  }
  v9 = *(__int64 (**)())(v7 + 6704);
  if ( v9 == sub_BA34C0 || ((unsigned __int8 (__fastcall *)(_BYTE *, __int64))v9)(a1, a2) )
    goto LABEL_6;
  return 0;
}

