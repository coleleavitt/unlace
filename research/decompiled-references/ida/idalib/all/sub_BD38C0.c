__int64 __fastcall sub_BD38C0(_BYTE *a1, __int64 a2, __int64 a3)
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
  if ( (char *)v5 != (char *)sub_BC5910 )
  {
    if ( !v5() )
      return 0;
    v3 = *(_QWORD *)a1;
  }
  v6 = *(__int64 (**)())(v3 + 7624);
  if ( v6 != sub_BC7570 && !((unsigned __int8 (__fastcall *)(_BYTE *, __int64, __int64))v6)(a1, a2, a3) )
    return 0;
  if ( !a1[9] )
  {
LABEL_6:
    v10 = (unsigned int)sub_F6C520(*(_QWORD *)(a2 + 32));
    return (*(__int64 (__fastcall **)(_BYTE *, _QWORD, unsigned __int64))(*(_QWORD *)a1 + 136LL))(
             a1,
             *(_QWORD *)(a2 + 32),
             v10 * ((a3 + 1 - (unsigned __int64)(a3 != -1)) / v10 + (a3 != -1)));
  }
  v7 = *(_QWORD *)a1;
  v8 = *(__int64 (**)())(*(_QWORD *)a1 + 232LL);
  if ( v8 != sub_BC5900 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_BYTE *, __int64))v8)(a1, a2) )
      return 0;
    v7 = *(_QWORD *)a1;
  }
  v9 = *(__int64 (**)())(v7 + 6608);
  if ( v9 == sub_BC7140 || ((unsigned __int8 (__fastcall *)(_BYTE *, __int64))v9)(a1, a2) )
    goto LABEL_6;
  return 0;
}
