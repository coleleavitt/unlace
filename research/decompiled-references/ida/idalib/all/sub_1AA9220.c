__int64 __fastcall sub_1AA9220(__int64 a1, unsigned __int64 a2, __int64 *a3, unsigned int a4, double a5)
{
  char v7; // r13
  __int16 v8; // cx
  unsigned __int16 v10; // cx
  unsigned __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  char v19; // dl
  __int64 result; // rax
  __int64 *v21; // r14
  unsigned int v22; // eax
  __int64 v23; // rax
  unsigned __int64 v24; // r14
  __int16 v25; // ax
  __int64 v26; // rdx
  __int64 v27; // [rsp+8h] [rbp-E0h] BYREF
  __int64 **v28; // [rsp+10h] [rbp-D8h] BYREF
  char v29; // [rsp+18h] [rbp-D0h]
  unsigned __int64 v30; // [rsp+20h] [rbp-C8h]
  _QWORD v31[23]; // [rsp+30h] [rbp-B8h] BYREF

  if ( !a2 )
  {
    if ( (_BYTE)a4 )
    {
      sub_168B9F0((__int64)v31, *(__int64 **)a1, *(_DWORD *)(a1 + 8), 0xB63u, 0);
      sub_1AA3B30((__int64)v31, (char *)(*(_QWORD *)a1 + 288LL));
      sub_15F7200(v31);
      sub_168B9F0((__int64)v31, *(__int64 **)a1, *(_DWORD *)(*(_QWORD *)a1 + 292LL), 0x1672u, 0);
      sub_1AA3B30((__int64)v31, (char *)(*(_QWORD *)a1 + 288LL));
      sub_15F7200(v31);
      return a4;
    }
    return 1;
  }
  v7 = a4;
  v29 = a4;
  v8 = *(_WORD *)a2;
  v28 = (__int64 **)a1;
  v10 = v8 & 0x1FF;
  v30 = a2;
  if ( v10 == 60 )
  {
    a2 = *(_QWORD *)(a2 + 16);
    v10 = *(_WORD *)a2 & 0x1FF;
  }
  if ( ((v10 + 509) & 0x1FFu) <= 0x7E )
  {
    a2 = sub_BFBAE0(a2);
    v10 = *(_WORD *)a2 & 0x1FF;
  }
  *a3 = 0;
  if ( v10 > 0x75u )
  {
    if ( v10 > 0x77u )
    {
      if ( v10 != 245 )
        goto LABEL_31;
      v12 = *(_QWORD *)(a2 + 8);
      if ( (v12 & 1) == 0 )
      {
        if ( (*(_BYTE *)(v12 + 28) & 0x7Fu) - 26 > 0x1A )
          goto LABEL_31;
        *a3 = v12;
        if ( (*(_BYTE *)(v12 + 28) & 0x7Fu) - 40 <= 6 )
        {
          v26 = *(_QWORD *)(*(_QWORD *)(v12 + 48) & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v26 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 48
            || (*(_BYTE *)(v26 + 17) & 4) != 0 )
          {
            goto LABEL_12;
          }
          if ( !sub_B735C0(v12) )
          {
            if ( !v29 )
              return 1;
            goto LABEL_32;
          }
          v12 = *a3;
          goto LABEL_11;
        }
      }
    }
    else if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x3Fu) - 21 <= 0xA )
    {
      v11 = sub_BFBAE0(*(_QWORD *)(a2 + 16));
      if ( (*(_WORD *)v11 & 0x1FF) != 0x47 )
        goto LABEL_31;
      v12 = *(_QWORD *)(v11 + 16);
      *a3 = v12;
      goto LABEL_11;
    }
LABEL_21:
    if ( !(_BYTE)a4 )
      return 1;
LABEL_32:
    sub_1AA9080(&v28, a2, a5);
    return 1;
  }
  if ( v10 != 91 )
    goto LABEL_31;
  if ( ((*(_BYTE *)(a2 + 3) >> 1) & 0x3F) != 0xF )
    goto LABEL_21;
  v24 = sub_BFBAE0(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32));
  v25 = *(_WORD *)v24 & 0x1FF;
  if ( v25 == 71 )
  {
    v12 = *(_QWORD *)(v24 + 16);
    *a3 = v12;
  }
  else
  {
    if ( v25 != 46 || (*(_WORD *)sub_BFBAE0(*(_QWORD *)(v24 + 16)) & 0x1FF) != 0x62 )
    {
LABEL_31:
      if ( !v7 )
        return 1;
      goto LABEL_32;
    }
    v12 = *(_QWORD *)(v24 + 24);
    *a3 = v12;
  }
LABEL_11:
  if ( !v12 )
  {
    v7 = v29;
    goto LABEL_31;
  }
LABEL_12:
  v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 32LL))(v12);
  *a3 = v13;
  v31[0] = *(_QWORD *)(v13 + 48);
  v27 = sub_C1BEF0((__int64)v31, a2, v14, v15);
  v19 = sub_1AA36B0(v27, a2, v16, v17, v18);
  result = 0;
  if ( v19 )
    return result;
  if ( (_BYTE)a4 )
  {
    v21 = *(__int64 **)a1;
    v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a3 + 16LL))(*a3);
    sub_168B9F0((__int64)v31, v21, v22, 0xB64u, 0);
    v23 = sub_1AA3B30((__int64)v31, (char *)(*(_QWORD *)a1 + 288LL));
    sub_1605D30(v23, &v27);
    sub_15F7200(v31);
    sub_168B9F0((__int64)v31, *(__int64 **)a1, *(_DWORD *)(*(_QWORD *)a1 + 292LL), 0x1672u, 0);
    sub_1AA3B30((__int64)v31, (char *)(*(_QWORD *)a1 + 288LL));
    sub_15F7200(v31);
    return a4;
  }
  return 1;
}
