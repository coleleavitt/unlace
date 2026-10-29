__int64 __fastcall sub_BACFE0(_BYTE *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned __int8 (*v5)(void); // rcx
  __int64 (*v6)(); // rax
  __int64 v8; // rax
  __int64 (*v9)(); // rdx
  __int64 (*v10)(); // rax

  v4 = *(_QWORD *)a1;
  v5 = *(unsigned __int8 (**)(void))(*(_QWORD *)a1 + 240LL);
  if ( (char *)v5 != (char *)sub_BA1BD0 )
  {
    if ( !v5() )
      return 0;
    v4 = *(_QWORD *)a1;
  }
  v6 = *(__int64 (**)())(v4 + 8024);
  if ( v6 == sub_BA3B50 || ((unsigned __int8 (__fastcall *)(_BYTE *, __int64, __int64))v6)(a1, a2, a3) )
  {
    if ( !a1[9] )
      return 1;
    v8 = *(_QWORD *)a1;
    v9 = *(__int64 (**)())(*(_QWORD *)a1 + 232LL);
    if ( v9 == sub_BA1BC0 )
    {
LABEL_6:
      v10 = *(__int64 (**)())(v8 + 7008);
      if ( v10 != sub_BA3720 )
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

