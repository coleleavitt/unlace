__int64 __fastcall sub_1AA9B90(__int64 a1, unsigned __int16 *a2, __int64 a3, unsigned int a4, __int64 a5, double a6)
{
  unsigned __int16 *v7; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned __int16 *v12; // rax
  _WORD *v13; // rax
  __int64 v14; // rbx
  __int64 **v15; // [rsp+0h] [rbp-B8h] BYREF
  char v16; // [rsp+8h] [rbp-B0h]
  unsigned __int16 *v17; // [rsp+10h] [rbp-A8h]

  if ( a2 )
  {
    v16 = a4;
    v9 = *a2;
    v7 = a2;
    v15 = (__int64 **)a1;
    LOWORD(v9) = v9 & 0x1FF;
    v17 = a2;
    if ( (_WORD)v9 == 60 )
    {
      v7 = *((unsigned __int16 **)a2 + 2);
      v9 = *v7;
      LOWORD(v9) = v9 & 0x1FF;
    }
    if ( (((_WORD)v9 + 509) & 0x1FFu) <= 0x7E
      && (v12 = (unsigned __int16 *)sub_BFBAE0((unsigned __int64)v7),
          v9 = *v12,
          v7 = v12,
          LOWORD(v9) = v9 & 0x1FF,
          (_WORD)v9 == 4) )
    {
      if ( *((_BYTE *)v12 + 2) <= 0x1Fu )
        goto LABEL_20;
    }
    else if ( (((_WORD)v9 + 394) & 0x1FFu) <= 1 )
    {
      if ( ((v7[1] >> 3) & 0x3F) == 0x15 )
      {
        a2 = *((unsigned __int16 **)v7 + 3);
        if ( !sub_1AA1670(a3, (__int64)a2, a3, v9, a5) )
          goto LABEL_11;
        goto LABEL_20;
      }
      if ( ((v7[1] >> 3) & 0x3Fu) >= 0x15 && ((((v7[1] >> 3) & 0x3F) + 39) & 0x3Fu) <= 1 )
      {
LABEL_20:
        v13 = sub_1AA0870(*((_QWORD *)v7 + 2));
LABEL_21:
        if ( v13 )
        {
          if ( !a3 )
            return 0;
          v14 = (*(__int64 (__fastcall **)(_WORD *))(*(_QWORD *)v13 + 32LL))(v13);
          if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 32LL))(a3) == v14 )
            return 0;
        }
LABEL_11:
        if ( !v16 )
          return 1;
LABEL_12:
        sub_1AA99F0(&v15, (__int64)a2, a6);
        return 1;
      }
    }
    else if ( (_WORD)v9 == 91 )
    {
      v10 = (*((_BYTE *)v7 + 3) >> 1) & 0x3F;
      if ( (unsigned __int8)v10 <= 0x26u )
      {
        if ( ((1LL << v10) & 0x60000C0000LL) == 0 )
        {
          if ( (((unsigned __int16)(1LL << v10) >> 8) & 0x80u) == 0 )
            goto LABEL_16;
          a2 = *(unsigned __int16 **)&v7[4 * ((v7[1] & 8) != 0) + 24];
          if ( !sub_1AA1670(a3, (__int64)a2, 0x60000C0000LL, v10, a5) )
            goto LABEL_11;
        }
        v13 = sub_1AA0870(*(_QWORD *)&v7[4 * ((v7[1] & 8) != 0) + 20]);
        goto LABEL_21;
      }
    }
LABEL_16:
    if ( !(_BYTE)a4 )
      return 1;
    goto LABEL_12;
  }
  if ( !(_BYTE)a4 )
    return 1;
  sub_168B9F0((__int64)&v15, *(__int64 **)a1, *(_DWORD *)(a1 + 8), 0xB61u, 0);
  sub_1AA3B30((__int64)&v15, (char *)(*(_QWORD *)a1 + 288LL));
  sub_15F7200(&v15);
  sub_168B9F0((__int64)&v15, *(__int64 **)a1, *(_DWORD *)(*(_QWORD *)a1 + 292LL), 0x1672u, 0);
  sub_1AA3B30((__int64)&v15, (char *)(*(_QWORD *)a1 + 288LL));
  sub_15F7200(&v15);
  return a4;
}
