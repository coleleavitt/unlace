__int64 __fastcall sub_BD23E0(_BYTE *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  __int64 v5; // rax
  unsigned __int8 (*v6)(void); // rcx
  __int64 (*v7)(); // rax
  __int16 v8; // ax
  __int64 v9; // r14
  unsigned int v10; // eax
  _QWORD **v11; // r15
  __int64 v12; // r14
  __int64 v14; // rax
  __int64 (*v15)(); // rdx
  __int64 (*v16)(); // rax
  __int64 v17; // r14
  __int64 v18; // r15
  __int64 v19; // rax

  v5 = *(_QWORD *)a1;
  v6 = *(unsigned __int8 (**)(void))(*(_QWORD *)a1 + 240LL);
  if ( (char *)v6 != (char *)sub_BC5910 )
  {
    if ( !v6() )
      return 0;
    v5 = *(_QWORD *)a1;
  }
  v7 = *(__int64 (**)())(v5 + 7864);
  if ( v7 != sub_BC7750 && !((unsigned __int8 (__fastcall *)(_BYTE *, __int64, __int64))v7)(a1, a2, a3) )
    return 0;
  if ( a1[9] )
  {
    v14 = *(_QWORD *)a1;
    v15 = *(__int64 (**)())(*(_QWORD *)a1 + 232LL);
    if ( v15 != sub_BC5900 )
    {
      if ( !((unsigned __int8 (__fastcall *)(_BYTE *, __int64))v15)(a1, a2) )
        return 0;
      v14 = *(_QWORD *)a1;
    }
    v16 = *(__int64 (**)())(v14 + 6848);
    if ( v16 != sub_BC7320 && !((unsigned __int8 (__fastcall *)(_BYTE *, __int64))v16)(a1, a2) )
      return 0;
  }
  v8 = (*(_WORD *)(a2 + 18) >> 3) & 0x7F;
  if ( *(_QWORD *)(*(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFF0LL) == a2 )
    goto LABEL_7;
  v9 = 8 * ((4 * ((*(_BYTE *)(a2 + 19) >> 2) + 2 * (unsigned int)(unsigned __int8)v8) + 23) >> 3) + 8;
  v10 = sub_F6C520(*(_QWORD *)(a2 + 24));
  if ( !(*(unsigned __int8 (__fastcall **)(_BYTE *, _QWORD, unsigned __int64))(*(_QWORD *)a1 + 136LL))(
          a1,
          *(_QWORD *)(a2 + 24),
          v10 * ((a3 + v9 - (unsigned __int64)(a3 + v9 != 0)) / v10 + (a3 + v9 != 0))) )
    return 0;
  v8 = (*(_WORD *)(a2 + 18) >> 3) & 0x7F;
LABEL_7:
  if ( (_BYTE)v8 )
  {
    v11 = (_QWORD **)(a3 + 24);
    v12 = a3 + 8LL * ((unsigned int)(unsigned __int8)v8 - 1) + 32;
    while ( (*(unsigned __int8 (__fastcall **)(_BYTE *, _QWORD, _QWORD *))(*(_QWORD *)a1 + 136LL))(a1, **v11, *v11 + 1) )
    {
      if ( (_QWORD **)v12 == ++v11 )
        goto LABEL_16;
    }
    return 0;
  }
LABEL_16:
  if ( *(_BYTE *)(a2 + 19) >> 2 )
  {
    v17 = 0;
    v18 = 4LL * ((unsigned int)(*(_BYTE *)(a2 + 19) >> 2) - 1) + 4;
    while ( 1 )
    {
      v19 = *(_WORD *)(a2 + 18) & 0x3F8;
      v3 = *(unsigned int *)(v17 + a3 + v19 + 24) | v3 & 0xFFFFFFFF00000000LL;
      if ( !(*(unsigned __int8 (__fastcall **)(_BYTE *, _QWORD, unsigned __int64))(*(_QWORD *)a1 + 144LL))(
              a1,
              *(_QWORD *)(v19 + a2 + 2 * v17 + 48),
              v3) )
        break;
      v17 += 4;
      if ( v17 == v18 )
        return 1;
    }
    return 0;
  }
  return 1;
}
