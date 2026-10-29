__int64 __fastcall sub_1AA9750(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4, double a5)
{
  __int16 v6; // cx
  unsigned __int16 v8; // cx
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rbp
  _WORD *v13; // rax
  _WORD *v14; // rbx
  __int64 v15; // rbp
  _WORD *v16; // rax
  __int64 v17; // rbp
  __int64 v18; // rbx
  __int64 **v19; // [rsp+10h] [rbp-A8h] BYREF
  char v20; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v21; // [rsp+20h] [rbp-98h]

  if ( a2 )
  {
    v20 = a4;
    v6 = *(_WORD *)a2;
    v19 = (__int64 **)a1;
    v8 = v6 & 0x1FF;
    v21 = a2;
    if ( v8 == 60 )
    {
      a2 = *(_QWORD *)(a2 + 16);
      v8 = *(_WORD *)a2 & 0x1FF;
    }
    if ( ((v8 + 509) & 0x1FFu) <= 0x7E )
    {
      a2 = sub_BFBAE0(a2);
      v8 = *(_WORD *)a2 & 0x1FF;
    }
    if ( v8 > 0x75u )
    {
      if ( v8 > 0x77u || ((*(_WORD *)(a2 + 2) >> 3) & 0x3Fu) - 10 > 5 )
        goto LABEL_9;
      v16 = sub_1AA0870(*(_QWORD *)(a2 + 16));
      v14 = v16;
      if ( !v16 )
        goto LABEL_23;
      if ( a3 )
      {
        v17 = (*(__int64 (__fastcall **)(_WORD *))(*(_QWORD *)v16 + 32LL))(v16);
        if ( v17 != (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a3 + 32LL))(a3, a2) )
        {
LABEL_23:
          v14 = sub_1AA0870(*(_QWORD *)(a2 + 24));
LABEL_24:
          if ( !v14 )
            goto LABEL_27;
          if ( !a3 )
            return 0;
        }
LABEL_26:
        v18 = (*(__int64 (__fastcall **)(_WORD *))(*(_QWORD *)v14 + 32LL))(v14);
        if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 32LL))(a3) != v18 )
        {
LABEL_27:
          if ( !v20 )
            return 1;
          goto LABEL_28;
        }
      }
      return 0;
    }
    if ( v8 != 91
      || (v10 = (*(_BYTE *)(a2 + 3) >> 1) & 0x3F, (unsigned __int8)v10 > 0x21u)
      || (v11 = 0x7C0030000LL, !_bittest64(&v11, v10)) )
    {
LABEL_9:
      if ( !(_BYTE)a4 )
        return 1;
LABEL_28:
      sub_1AA95B0(&v19, a2, a5);
      return 1;
    }
    v12 = 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL);
    v13 = sub_1AA0870(*(_QWORD *)(a2 + v12 + 32));
    v14 = v13;
    if ( v13 )
    {
      if ( !a3 )
        return 0;
      v15 = (*(__int64 (__fastcall **)(_WORD *, unsigned __int64))(*(_QWORD *)v13 + 32LL))(v13, a2);
      if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 32LL))(a3) == v15 || *(_DWORD *)(a2 + 16) <= 1u )
        goto LABEL_26;
      v12 = 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL);
    }
    v14 = sub_1AA0870(*(_QWORD *)(a2 + v12 + 40));
    goto LABEL_24;
  }
  if ( !(_BYTE)a4 )
    return 1;
  sub_168B9F0((__int64)&v19, *(__int64 **)a1, *(_DWORD *)(a1 + 8), 0xB62u, 0);
  sub_1AA3B30((__int64)&v19, (char *)(*(_QWORD *)a1 + 288LL));
  sub_15F7200(&v19);
  sub_168B9F0((__int64)&v19, *(__int64 **)a1, *(_DWORD *)(*(_QWORD *)a1 + 292LL), 0x1672u, 0);
  sub_1AA3B30((__int64)&v19, (char *)(*(_QWORD *)a1 + 288LL));
  sub_15F7200(&v19);
  return a4;
}
