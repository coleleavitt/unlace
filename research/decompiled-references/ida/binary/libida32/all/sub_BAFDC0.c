__int64 __fastcall sub_BAFDC0(_BYTE *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned __int8 (*v5)(void); // rcx
  __int64 (*v6)(); // rax
  __int64 v7; // rax
  __int64 (*v8)(); // rdx
  __int64 (*v9)(); // rax
  unsigned __int64 v10; // rcx

  v3 = *(_QWORD *)a1;
  v5 = *(unsigned __int8 (**)(void))(*(_QWORD *)a1 + 240LL);
  if ( (char *)v5 != (char *)sub_BA1BD0 )
  {
    if ( !v5() )
      return 0;
    v3 = *(_QWORD *)a1;
  }
  v6 = *(__int64 (**)())(v3 + 7616);
  if ( v6 != sub_BA3820 && !((unsigned __int8 (__fastcall *)(_BYTE *, __int64, __int64))v6)(a1, a2, a3) )
    return 0;
  if ( !a1[9] )
  {
LABEL_6:
    v10 = (unsigned int)sub_F487E0(*(_QWORD *)(a2 + 40));
    return (*(__int64 (__fastcall **)(_BYTE *, _QWORD, unsigned __int64))(*(_QWORD *)a1 + 136LL))(
             a1,
             *(_QWORD *)(a2 + 40),
             v10 * ((a3 + 8 - (unsigned __int64)(a3 != -8)) / v10 + (a3 != -8)));
  }
  v7 = *(_QWORD *)a1;
  v8 = *(__int64 (**)())(*(_QWORD *)a1 + 232LL);
  if ( v8 != sub_BA1BC0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_BYTE *, __int64))v8)(a1, a2) )
      return 0;
    v7 = *(_QWORD *)a1;
  }
  v9 = *(__int64 (**)())(v7 + 6600);
  if ( v9 == sub_BA33F0 || ((unsigned __int8 (__fastcall *)(_BYTE *, __int64))v9)(a1, a2) )
    goto LABEL_6;
  return 0;
}

