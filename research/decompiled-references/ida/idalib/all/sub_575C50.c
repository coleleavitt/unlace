__int64 __fastcall sub_575C50(__int64 a1, __int64 a2, unsigned __int8 *a3, __int64 a4, char a5, char a6, char a7)
{
  __int128 v9; // rax
  bool v10; // cf
  __int64 v11; // r13
  unsigned int v12; // r14d
  int v13; // eax
  unsigned int radix; // eax
  __int64 (__fastcall *v16)(_QWORD *, char); // rax
  __int64 v17; // rdx
  __int128 v18; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  if ( a5 < 0 )
    v9 = *((_OWORD *)a3 + 1);
  else
    v9 = *(_OWORD *)(a3 + 8);
  v18 = v9;
  if ( (a5 & 4) != 0 )
  {
    if ( v9 >= 0 )
    {
      if ( v9 != 0 && a6 )
        goto LABEL_7;
LABEL_15:
      if ( (a5 & 3) == 2 )
      {
        v16 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 32LL);
        if ( v16 == sub_572080 )
        {
          sub_571E30((_QWORD *)a1, 43);
          if ( !a7 )
            goto LABEL_17;
          goto LABEL_31;
        }
        v16((_QWORD *)a1, 43);
      }
      if ( !a7 )
        goto LABEL_17;
LABEL_31:
      v18 = ~v18;
      sub_575B10((_QWORD *)a1, a2);
      goto LABEL_17;
    }
    if ( a6 )
      goto LABEL_15;
  }
  else if ( v9 == 0 || !a6 )
  {
    goto LABEL_15;
  }
  if ( v9 == __PAIR128__(0x8000000000000000LL, 0) )
    goto LABEL_15;
LABEL_7:
  *(_QWORD *)&v9 = -(__int64)v9;
  v10 = (_QWORD)v9 != 0;
  *(_QWORD *)&v18 = v9;
  *(_QWORD *)&v9 = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
  *((_QWORD *)&v18 + 1) = -(v10 + *((_QWORD *)&v9 + 1));
  if ( (__int64 (__fastcall *)(_QWORD *, char))v9 == sub_572080 )
  {
    sub_571E30((_QWORD *)a1, 45);
    if ( (*(_BYTE *)(a1 + 146) & 1) == 0 )
      goto LABEL_9;
    goto LABEL_18;
  }
  ((void (__fastcall *)(__int64, __int64))v9)(a1, 45);
LABEL_17:
  if ( (*(_BYTE *)(a1 + 146) & 1) == 0 )
  {
LABEL_9:
    v11 = *(unsigned int *)(a1 + 60);
    if ( (unsigned __int8)is_char(v11, *a3) )
      goto LABEL_10;
LABEL_19:
    v13 = *(_DWORD *)(a1 + 56);
    if ( !v13 )
    {
      v12 = 31;
      if ( (~BYTE1(v11) & 6) == 0 )
        v12 = 12;
      goto LABEL_22;
    }
    if ( v13 != 2 )
    {
      v12 = 13;
      goto LABEL_22;
    }
LABEL_12:
    v12 = 18;
LABEL_22:
    radix = get_radix(v11, *a3);
    btoa128(a4, 1024, v18, *((_QWORD *)&v18 + 1), radix);
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 56LL))(a1, a4, v12);
    return (unsigned int)-(*(_DWORD *)(a1 + 56) == 2);
  }
LABEL_18:
  v11 = *(_QWORD *)(a1 + 720);
  if ( !(unsigned __int8)is_char(v11, *a3) )
    goto LABEL_19;
LABEL_10:
  if ( !(unsigned __int8)sub_575A50(a4, &v18, 16) )
  {
    *(_DWORD *)(a1 + 56) = 2;
    goto LABEL_12;
  }
  v17 = 30;
  if ( (~(_DWORD)v11 & 0x600) == 0 )
    v17 = 10;
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 56LL))(a1, a4, v17);
  return 0;
}
