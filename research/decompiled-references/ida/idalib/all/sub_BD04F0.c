__int64 __fastcall sub_BD04F0(_BYTE *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned __int8 (*v5)(void); // rcx
  __int64 (*v6)(); // rcx
  __int64 (*v7)(); // rax
  __int64 v9; // rax
  __int64 (*v10)(); // rdx
  __int64 (*v11)(); // rdx
  __int64 (*v12)(); // rax

  v4 = *(_QWORD *)a1;
  v5 = *(unsigned __int8 (**)(void))(*(_QWORD *)a1 + 240LL);
  if ( (char *)v5 != (char *)sub_BC5910 )
  {
    if ( !v5() )
      return 0;
    v4 = *(_QWORD *)a1;
  }
  v6 = *(__int64 (**)())(v4 + 7968);
  if ( v6 != sub_BC7820 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_BYTE *, __int64, __int64))v6)(a1, a2, a3) )
      return 0;
    v4 = *(_QWORD *)a1;
  }
  v7 = *(__int64 (**)())(v4 + 7976);
  if ( v7 == sub_BC7830 || ((unsigned __int8 (__fastcall *)(_BYTE *, __int64, __int64))v7)(a1, a2, a3) )
  {
    if ( !a1[9] )
      return 1;
    v9 = *(_QWORD *)a1;
    v10 = *(__int64 (**)())(*(_QWORD *)a1 + 232LL);
    if ( v10 != sub_BC5900 )
    {
      if ( !((unsigned __int8 (__fastcall *)(_BYTE *, __int64))v10)(a1, a2) )
        return 0;
      v9 = *(_QWORD *)a1;
    }
    v11 = *(__int64 (**)())(v9 + 6952);
    if ( v11 == sub_BC73F0 )
      goto LABEL_8;
    if ( ((unsigned __int8 (__fastcall *)(_BYTE *, __int64))v11)(a1, a2) )
    {
      v9 = *(_QWORD *)a1;
LABEL_8:
      v12 = *(__int64 (**)())(v9 + 6960);
      if ( v12 != sub_BC7400 )
        return ((__int64 (__fastcall *)(_BYTE *, __int64))v12)(a1, a2);
      return 1;
    }
    return 0;
  }
  return 0;
}
