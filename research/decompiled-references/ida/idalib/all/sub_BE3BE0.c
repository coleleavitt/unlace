__int64 __fastcall sub_BE3BE0(_BYTE *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned __int8 (*v5)(void); // rcx
  __int64 (*v6)(); // rcx
  __int64 (*v7)(); // rax
  __int64 v8; // rax
  __int64 (*v9)(); // rdx
  __int64 (*v10)(); // rdx
  __int64 (*v11)(); // rax
  char v12; // al
  int v13; // eax
  __int64 v14; // rbp
  unsigned int v15; // eax
  unsigned int v16; // r14d
  int v17; // r15d
  __int64 i; // rbp
  __int64 result; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  _QWORD *v22; // r13
  _QWORD *v23; // rbp

  v4 = *(_QWORD *)a1;
  v5 = *(unsigned __int8 (**)(void))(*(_QWORD *)a1 + 240LL);
  if ( (char *)v5 != (char *)sub_BC5910 )
  {
    if ( !v5() )
      return 0;
    v4 = *(_QWORD *)a1;
  }
  v6 = *(__int64 (**)())(v4 + 7768);
  if ( v6 != sub_BC7690 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_BYTE *, __int64, __int64))v6)(a1, a2, a3) )
      return 0;
    v4 = *(_QWORD *)a1;
  }
  v7 = *(__int64 (**)())(v4 + 7784);
  if ( v7 != sub_BC76B0 && !((unsigned __int8 (__fastcall *)(_BYTE *, __int64, __int64))v7)(a1, a2, a3) )
    return 0;
  if ( a1[9] )
  {
    v8 = *(_QWORD *)a1;
    v9 = *(__int64 (**)())(*(_QWORD *)a1 + 232LL);
    if ( v9 != sub_BC5900 )
    {
      if ( !((unsigned __int8 (__fastcall *)(_BYTE *, __int64))v9)(a1, a2) )
        return 0;
      v8 = *(_QWORD *)a1;
    }
    v10 = *(__int64 (**)())(v8 + 6752);
    if ( v10 != sub_BC7260 )
    {
      if ( !((unsigned __int8 (__fastcall *)(_BYTE *, __int64))v10)(a1, a2) )
        return 0;
      v8 = *(_QWORD *)a1;
    }
    v11 = *(__int64 (**)())(v8 + 6768);
    if ( v11 != sub_BC7280 && !((unsigned __int8 (__fastcall *)(_BYTE *, __int64))v11)(a1, a2) )
      return 0;
  }
  v12 = *(_BYTE *)(a2 + 16);
  if ( v12 == 26 )
  {
    v13 = ((*(_BYTE *)(a2 + 19) >> 1) & 0xF) == 0 ? 15 : 23;
LABEL_10:
    v14 = 8 * ((v13 + 8 * (unsigned int)*(unsigned __int16 *)(a2 + 22)) >> 3) + 8;
    goto LABEL_11;
  }
  v14 = 16;
  if ( v12 != 25 )
  {
    v13 = 15;
    goto LABEL_10;
  }
LABEL_11:
  v15 = sub_F6C520(*(_QWORD *)(a2 + 24));
  v16 = (*(__int64 (__fastcall **)(_BYTE *, _QWORD, unsigned __int64))(*(_QWORD *)a1 + 136LL))(
          a1,
          *(_QWORD *)(a2 + 24),
          v15 * ((a3 + v14 - (unsigned __int64)(a3 + v14 != 0)) / v15 + (a3 + v14 != 0)));
  if ( !(_BYTE)v16 )
    return 0;
  if ( *(_BYTE *)(a2 + 16) != 25 )
  {
    v17 = *(unsigned __int16 *)(a2 + 22);
    if ( *(_WORD *)(a2 + 22) )
    {
      for ( i = 0; v17 != (_DWORD)i; ++i )
      {
        if ( *(_QWORD *)(a3 + 8 * i + 16) )
        {
          if ( !(*(unsigned __int8 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 56LL))(a1) )
            return 0;
        }
        else if ( *(unsigned __int16 *)(a2 + 22) > (unsigned int)i
               && !(*(unsigned __int8 (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)a1 + 128LL))(
                     a1,
                     *(_QWORD *)(a2 + 8 * i + 48)) )
        {
          return 0;
        }
      }
    }
  }
  v20 = sub_6F33F0(a2);
  v22 = (_QWORD *)(v20 + 8 * v21);
  v23 = (_QWORD *)v20;
  if ( (_QWORD *)v20 == v22 )
  {
LABEL_29:
    if ( ((*(_BYTE *)(a2 + 19) >> 1) & 0xFu) - 6 <= 2 && *(_QWORD *)sub_BD3360(a2) )
      return (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 96LL))(a1);
    else
      return v16;
  }
  else
  {
    while ( 1 )
    {
      result = (*(__int64 (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)a1 + 128LL))(a1, *v23);
      if ( !(_BYTE)result )
        break;
      if ( v22 == ++v23 )
        goto LABEL_29;
    }
  }
  return result;
}
