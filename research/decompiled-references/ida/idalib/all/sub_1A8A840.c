__int64 __fastcall sub_1A8A840(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v5; // bl
  __int64 v6; // r12
  unsigned int v7; // r13d
  __int64 v8; // rdx
  int v9; // eax
  unsigned __int64 v11; // rax
  unsigned int v12; // eax
  unsigned int v13; // eax
  int v14; // [rsp+1Ch] [rbp-CCh] BYREF
  _BYTE v15[200]; // [rsp+20h] [rbp-C8h] BYREF

  v5 = a3;
  v6 = *(_QWORD *)(a2 + 48);
  v7 = sub_F6AE00(*(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5);
  if ( (_BYTE)v7 )
  {
    v8 = v6 & 7;
    if ( (*(_QWORD *)&byte_8[v6 & 0xFFFFFFFFFFFFFFF0LL] & 8) != 0
      && (v11 = ((*(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[v6 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
                | *(_QWORD *)&byte_8[v6 & 0xFFFFFFFFFFFFFFF0LL] & 7uLL) >> 6)
              & 7,
          (_DWORD)v11) )
    {
      if ( (_DWORD)v11 == 2 )
        goto LABEL_10;
    }
    else
    {
      v9 = sub_F68130(*(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL));
      v8 = v6 & 7;
      if ( v9 == 2 )
      {
LABEL_10:
        *(_BYTE *)(a2 + 96) |= 0x80u;
        *(_QWORD *)(a2 + 48) = v8 | 1 | v6 & 0xFFFFFFFFFFFFFFF8LL;
        return v7;
      }
    }
    if ( v5 )
    {
      v13 = sub_B73090(a2);
      sub_168B9F0((__int64)v15, (__int64 *)(a1 + 8), v13, 0x1B45u, 0);
      v14 = 1;
      sub_1587D10((__int64)v15, &v14);
      sub_15F7200(v15);
    }
  }
  else if ( v5 )
  {
    v12 = sub_B73090(a2);
    sub_168B9F0((__int64)v15, (__int64 *)(a1 + 8), v12, 0x1B45u, 0);
    v14 = 0;
    sub_1587D10((__int64)v15, &v14);
    sub_15F7200(v15);
    return v7;
  }
  return 0;
}
