__int64 __fastcall sub_BC9A30(_BYTE *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r12
  __int64 v5; // rax
  unsigned __int8 (*v6)(void); // r8
  __int64 (*v7)(); // rax
  int v8; // r13d
  __int64 v9; // rbx
  __int64 v11; // rax
  __int64 (*v12)(); // rdx
  __int64 (*v13)(); // rax

  v5 = *(_QWORD *)a1;
  v6 = *(unsigned __int8 (**)(void))(*(_QWORD *)a1 + 240LL);
  if ( (char *)v6 != (char *)sub_BC5910 )
  {
    if ( !v6() )
      return 0;
    v5 = *(_QWORD *)a1;
  }
  v7 = *(__int64 (**)())(v5 + 7880);
  if ( v7 != sub_BC7770 && !((unsigned __int8 (__fastcall *)(_BYTE *, __int64, __int64))v7)(a1, a2, a3) )
    return 0;
  if ( !a1[9] )
    goto LABEL_4;
  v11 = *(_QWORD *)a1;
  v12 = *(__int64 (**)())(*(_QWORD *)a1 + 232LL);
  if ( v12 != sub_BC5900 )
  {
    if ( ((unsigned __int8 (__fastcall *)(_BYTE *, __int64))v12)(a1, a2) )
    {
      v11 = *(_QWORD *)a1;
      goto LABEL_10;
    }
    return 0;
  }
LABEL_10:
  v13 = *(__int64 (**)())(v11 + 6864);
  if ( v13 != sub_BC7340 && !((unsigned __int8 (__fastcall *)(_BYTE *, __int64))v13)(a1, a2) )
    return 0;
LABEL_4:
  v8 = *(_BYTE *)(a2 + 32) & 0x3F;
  if ( (*(_BYTE *)(a2 + 32) & 0x3F) != 0 )
  {
    v9 = 0;
    while ( 1 )
    {
      v3 = *(unsigned int *)(a3 + 4 * v9 + 12) | v3 & 0xFFFFFFFF00000000LL;
      if ( !(*(unsigned __int8 (__fastcall **)(_BYTE *, _QWORD, unsigned __int64))(*(_QWORD *)a1 + 144LL))(
              a1,
              *(_QWORD *)(a2 + 8 * v9 + 48),
              v3) )
        break;
      if ( v8 == (_DWORD)++v9 )
        return 1;
    }
    return 0;
  }
  return 1;
}
