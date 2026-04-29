__int64 *__fastcall sub_327500(__int64 *a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v6; // rax
  __int64 (*v7)(); // rax
  char v9; // dl

  LOBYTE(v6) = get_scalar_bt(a3);
  if ( (v6 & 0xF) == 9 )
  {
    v6 = (unsigned __int8)v6;
    goto LABEL_10;
  }
  if ( (_BYTE)v6 )
  {
    if ( a4 == 1 )
    {
      v9 = v6;
      v6 = (unsigned __int8)v6 & 0xCF;
      if ( (v9 & 0xCF) == 2 )
        v6 = 50;
    }
    else
    {
      if ( a4 != 2 )
        goto LABEL_3;
      v6 = (unsigned __int8)v6 & 0xCF | 0x20LL;
    }
LABEL_10:
    *a1 = v6;
    return a1;
  }
LABEL_3:
  *a1 = 0;
  v7 = *(__int64 (**)())(*(_QWORD *)a2 + 304LL);
  if ( v7 == sub_3238A0 || !((unsigned __int8 (__fastcall *)(__int64, __int64 *, _QWORD, _QWORD))v7)(a2, a1, a3, 0) )
  {
    clear_tinfo_t(a1);
    sub_324C30(a1, a2, a3);
  }
  return a1;
}
