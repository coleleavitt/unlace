unsigned __int64 __fastcall sub_185F1F0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v10; // rax
  int v12; // ebp
  __int16 v13; // ax
  unsigned __int8 v14; // al
  __int64 v15; // rdi
  unsigned int v16; // eax
  __int64 v17; // r9
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  __int16 v20; // [rsp+1Dh] [rbp-BBh]
  unsigned __int8 v21; // [rsp+1Fh] [rbp-B9h]
  _QWORD v22[2]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v23[3]; // [rsp+30h] [rbp-A8h] BYREF
  int v24; // [rsp+34h] [rbp-A4h]
  __int64 v25; // [rsp+38h] [rbp-A0h]
  __int64 v26; // [rsp+40h] [rbp-98h]

  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 43 > 1 )
  {
    v12 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL);
    *(_WORD *)v23 = *(_WORD *)v23 & 0xFE00 | 0x1A;
    if ( unk_2CD7484 )
      sub_EE9B50(26);
    v24 = v12;
    v25 = a2;
    v26 = 0;
    v13 = *(_WORD *)&v23[1] & 0xF801 | 2;
    v23[1] = v23[1] & 1 | 2;
    v23[2] = HIBYTE(v13) & 0xF7;
    v14 = sub_B62360((__int64)v23);
    v15 = *(_QWORD *)(a1 + 16);
    v22[0] = v23;
    v22[1] = v23;
    v23[1] = (v14 << 6) | v23[1] & 0x3F;
    v23[2] = v23[2] & 0xF8 | (v14 >> 2) & 7;
    v16 = sub_B77890(v15);
    v18 = sub_185E0A0((__int64 *)a1, v16, (__int64)v22, 2, 0, v17, a7, a8, a9);
    v20 = v18;
    v21 = BYTE2(v18);
  }
  else
  {
    if ( *(_DWORD *)(a1 + 176) == 1 )
    {
      sub_168B9F0((__int64)v23, (__int64 *)(*(_QWORD *)a1 + 8LL), a9, 0x1708u, 0);
      v19 = sub_1795A40((__int64)v23, (__int64 *)(a1 + 16));
      sub_185AB80(v19, (__int64 *)(a1 + 8));
      sub_15F7200(v23);
    }
    v21 = 2;
    v20 = 257;
  }
  v10 = (unsigned __int8)v20;
  BYTE1(v10) = HIBYTE(v20);
  return ((unsigned __int64)v21 << 16) | v10;
}
