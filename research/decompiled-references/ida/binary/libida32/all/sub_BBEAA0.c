__int64 __fastcall sub_BBEAA0(_BYTE *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned __int8 (*v5)(void); // rcx
  __int64 (*v6)(); // rcx
  __int64 (*v7)(); // rax
  __int64 v8; // rax
  __int64 (*v9)(); // rdx
  __int64 (*v10)(); // rdx
  __int64 (*v11)(); // rax
  char v12; // dl
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rbx
  unsigned __int64 v16; // rcx

  v3 = *(_QWORD *)a1;
  v5 = *(unsigned __int8 (**)(void))(*(_QWORD *)a1 + 240LL);
  if ( (char *)v5 != (char *)sub_BA1BD0 )
  {
    if ( !v5() )
      return 0;
    v3 = *(_QWORD *)a1;
  }
  v6 = *(__int64 (**)())(v3 + 7768);
  if ( v6 != sub_BA3950 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_BYTE *, __int64, __int64))v6)(a1, a2, a3) )
      return 0;
    v3 = *(_QWORD *)a1;
  }
  v7 = *(__int64 (**)())(v3 + 7776);
  if ( v7 != sub_BA3960 && !((unsigned __int8 (__fastcall *)(_BYTE *, __int64, __int64))v7)(a1, a2, a3) )
    return 0;
  if ( !a1[9] )
    goto LABEL_8;
  v8 = *(_QWORD *)a1;
  v9 = *(__int64 (**)())(*(_QWORD *)a1 + 232LL);
  if ( v9 != sub_BA1BC0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_BYTE *, __int64))v9)(a1, a2) )
      return 0;
    v8 = *(_QWORD *)a1;
  }
  v10 = *(__int64 (**)())(v8 + 6752);
  if ( v10 != sub_BA3520 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_BYTE *, __int64))v10)(a1, a2) )
      return 0;
    v8 = *(_QWORD *)a1;
  }
  v11 = *(__int64 (**)())(v8 + 6760);
  if ( v11 == sub_BA3530 || ((unsigned __int8 (__fastcall *)(_BYTE *, __int64))v11)(a1, a2) )
  {
LABEL_8:
    v12 = *(_BYTE *)(a2 + 16);
    if ( v12 == 26 )
    {
      v13 = ((*(_BYTE *)(a2 + 19) >> 1) & 0xF) == 0 ? 15 : 23;
    }
    else
    {
      v14 = 16;
      if ( v12 == 25 )
        goto LABEL_11;
      v13 = 15;
    }
    v14 = 8 * ((v13 + 8 * (unsigned int)*(unsigned __int16 *)(a2 + 22)) >> 3) + 8;
LABEL_11:
    v15 = v14 + a3;
    v16 = (unsigned int)sub_F487E0(*(_QWORD *)(a2 + 24));
    return (*(__int64 (__fastcall **)(_BYTE *, _QWORD, unsigned __int64))(*(_QWORD *)a1 + 136LL))(
             a1,
             *(_QWORD *)(a2 + 24),
             v16 * ((v15 - (unsigned __int64)(v15 != 0)) / v16 + (v15 != 0)));
  }
  return 0;
}

