__int64 __fastcall sub_15282C0(__int64 a1, _BYTE *a2, signed __int64 a3, int a4)
{
  unsigned int v8; // r13d
  unsigned int v9; // eax
  unsigned int v10; // r15d
  int v11; // ecx
  __int64 v12; // rsi
  __int64 v14; // rax
  unsigned int v15; // r10d
  unsigned __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rax
  unsigned __int64 v19; // r11
  bool v20; // al
  unsigned __int64 v21; // [rsp+8h] [rbp-C0h]
  unsigned __int64 v22; // [rsp+8h] [rbp-C0h]
  __int64 *v23; // [rsp+10h] [rbp-B8h]
  unsigned int v24; // [rsp+1Ch] [rbp-ACh]
  void *v25[2]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+30h] [rbp-98h] BYREF
  unsigned __int8 *v27[17]; // [rsp+40h] [rbp-88h] BYREF

  v8 = *(_DWORD *)(a1 + 16);
  v9 = sub_1569A00(a1, 22, 2192, a2, a3);
  if ( (_BYTE)v9 )
    return 0;
  v10 = v9;
  if ( *(_WORD *)(a1 + 32) == 14 )
  {
    v14 = sub_14B6F80(a1, 0);
    if ( v14 == 1 )
      return 0;
    if ( ((*(_WORD *)((v14 & 0xFFFFFFFFFFFFFFFELL) + 2) >> 6) & 7) != 1 )
    {
      v11 = 2193;
      v12 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL);
      goto LABEL_4;
    }
    v21 = v14 & 0xFFFFFFFFFFFFFFFELL;
    if ( (unsigned __int8)sub_1569A00(a1, 66, 2188, a2, a3) )
      return 0;
    v16 = *(unsigned __int16 *)(a1 + 32);
    v23 = *(__int64 **)(a1 + 8);
    LOBYTE(v15) = (_WORD)v16 == 1 || (_WORD)v16 == 23;
    v10 = v15;
    if ( (_BYTE)v15 )
    {
      sub_FC70B0((__int64)v27, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL), a4, 2210);
      sub_AEC220(v27, a2, a3);
      sub_1520C80(v27, 1);
      sub_1520A40(v27, (__int64)"'on' or 'off'");
      sub_AEA040((__int64)v27);
      return 0;
    }
    if ( !sub_141A630(v16) )
    {
      v17 = *(_QWORD *)(a1 + 24);
      if ( v17 )
      {
        v18 = *(_QWORD *)(v17 + 16);
        v19 = v21;
        if ( *(_DWORD *)v18 == 2 && *(_WORD *)(v18 + 16) == 28271 )
        {
          v24 = 1;
LABEL_15:
          v22 = v19;
          sub_14634E0(v23, (int *)(a1 + 16));
          v10 = sub_1569A00(a1, 23, 2196, a2, a3);
          if ( !(_BYTE)v10 )
          {
            if ( *(_DWORD *)(v22 + 16) * ((*(_WORD *)(v22 + 2) >> 6) & 7) )
            {
              sub_FC70B0((__int64)v27, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL), a4, 2208);
              sub_AEC220(
                v27,
                (_BYTE *)(v22 + 4LL * *(unsigned int *)(v22 + 4) + 20),
                *(_DWORD *)(v22 + 16) * ((*(_WORD *)(v22 + 2) >> 6) & 7u));
              sub_AEC220(v27, a2, a3);
              sub_1520C80(v27, 1);
              sub_1520A40(v27, (__int64)"\"\"");
              goto LABEL_5;
            }
            if ( !(unsigned __int8)sub_1569A00(a1, 1, 2202, a2, a3) )
            {
              v10 = 1;
              sub_1669F10(*(_QWORD *)(a1 + 96), v8, v24);
              return v10;
            }
          }
          return 0;
        }
        v20 = sub_1528280(v17, (__int64)"off");
        v24 = 0;
        v19 = v21;
        if ( v20 )
          goto LABEL_15;
      }
    }
    sub_FC70B0((__int64)v27, v23[6], a4, 2208);
    sub_13D35F0(
      (__int64)v25,
      a1 + 16,
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL),
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL),
      nullptr);
    sub_AEC220(v27, (_BYTE *)v25[0], (signed __int64)v25[1]);
    sub_AEC220(v27, a2, a3);
    sub_1520C80(v27, 1);
    sub_1520A40(v27, (__int64)"'on' or 'off'");
    if ( v25[0] != &v26 )
      operator delete(v25[0]);
    goto LABEL_5;
  }
  v11 = 2200;
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL);
LABEL_4:
  sub_FC70B0((__int64)v27, v12, a4, v11);
  sub_AEC220(v27, a2, a3);
LABEL_5:
  sub_AEA040((__int64)v27);
  return v10;
}
