__int64 __fastcall sub_BCAF50(_BYTE *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned __int8 (*v5)(void); // rcx
  __int64 (*v6)(); // rax
  __int64 v8; // rax
  __int64 (*v9)(); // rdx
  __int64 (*v10)(); // rax

  v4 = *(_QWORD *)a1;
  v5 = *(unsigned __int8 (**)(void))(*(_QWORD *)a1 + 240LL);
  if ( (char *)v5 != (char *)sub_BC5910 )
  {
    if ( !v5() )
      return 0;
    v4 = *(_QWORD *)a1;
  }
  v6 = *(__int64 (**)())(v4 + 7632);
  if ( v6 == sub_BC7580 || ((unsigned __int8 (__fastcall *)(_BYTE *, __int64, __int64))v6)(a1, a2, a3) )
  {
    if ( !a1[9] )
      return 1;
    v8 = *(_QWORD *)a1;
    v9 = *(__int64 (**)())(*(_QWORD *)a1 + 232LL);
    if ( v9 == sub_BC5900 )
    {
LABEL_6:
      v10 = *(__int64 (**)())(v8 + 6616);
      if ( v10 != sub_BC7150 )
        return ((__int64 (__fastcall *)(_BYTE *, __int64))v10)(a1, a2);
      return 1;
    }
    if ( ((unsigned __int8 (__fastcall *)(_BYTE *, __int64))v9)(a1, a2) )
    {
      v8 = *(_QWORD *)a1;
      goto LABEL_6;
    }
    return 0;
  }
  return 0;
}
