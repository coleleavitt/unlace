__int64 __fastcall sub_BAF7A0(_BYTE *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  unsigned __int8 (*v6)(void); // rcx
  __int64 (*v7)(); // rax
  __int64 v8; // rsi
  __int64 v9; // rbx
  unsigned int v10; // eax
  __int64 v12; // rax
  __int64 (*v13)(); // rdx
  __int64 (*v14)(); // rax

  v5 = *(_QWORD *)a1;
  v6 = *(unsigned __int8 (**)(void))(*(_QWORD *)a1 + 240LL);
  if ( (char *)v6 != (char *)sub_BA1BD0 )
  {
    if ( !v6() )
      return 0;
    v5 = *(_QWORD *)a1;
  }
  v7 = *(__int64 (**)())(v5 + 7760);
  if ( v7 != sub_BA3940 && !((unsigned __int8 (__fastcall *)(_BYTE *, __int64, __int64))v7)(a1, a2, a3) )
    return 0;
  if ( a1[9] )
  {
    v12 = *(_QWORD *)a1;
    v13 = *(__int64 (**)())(*(_QWORD *)a1 + 232LL);
    if ( v13 != sub_BA1BC0 )
    {
      if ( !((unsigned __int8 (__fastcall *)(_BYTE *, __int64))v13)(a1, a2) )
        return 0;
      v12 = *(_QWORD *)a1;
    }
    v14 = *(__int64 (**)())(v12 + 6744);
    if ( v14 != sub_BA3510 && !((unsigned __int8 (__fastcall *)(_BYTE *, __int64))v14)(a1, a2) )
      return 0;
  }
  v8 = *(_QWORD *)(a2 + 32);
  if ( (unsigned __int8)(*(_WORD *)(a2 + 18) >> 3) == 6 )
  {
    if ( !v8 )
    {
      v9 = a3;
      goto LABEL_9;
    }
  }
  else if ( !v8 )
  {
LABEL_8:
    v9 = a3 + 16;
LABEL_9:
    v10 = sub_F487E0(*(_QWORD *)(a2 + 40));
    return (*(__int64 (__fastcall **)(_BYTE *, _QWORD, unsigned __int64))(*(_QWORD *)a1 + 136LL))(
             a1,
             *(_QWORD *)(a2 + 40),
             v10 * ((v9 - (unsigned __int64)(v9 != 0)) / v10 + (v9 != 0)));
  }
  if ( (*(unsigned __int8 (__fastcall **)(_BYTE *, __int64, _QWORD))(*(_QWORD *)a1 + 88LL))(a1, v8, *(_QWORD *)(a3 + 8)) )
  {
    v9 = a3;
    if ( (unsigned __int8)(*(_WORD *)(a2 + 18) >> 3) == 6 && !*(_QWORD *)(a2 + 32) )
      goto LABEL_9;
    goto LABEL_8;
  }
  return 0;
}

