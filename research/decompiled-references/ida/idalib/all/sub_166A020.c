void __fastcall sub_166A020(__int64 a1, __int64 a2, unsigned __int32 a3)
{
  unsigned __int16 v4; // cx
  int v5; // edx
  int v6; // r9d
  bool v7; // al
  _BYTE v8[152]; // [rsp+0h] [rbp-98h] BYREF

  switch ( a2 )
  {
    case 0LL:
    case 3LL:
      v4 = 0;
      v5 = 3;
      v6 = 255;
      v7 = (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 156LL) & 2) != 0;
      goto LABEL_4;
    case 1LL:
      v4 = 256;
      v5 = 3;
      v6 = 255;
      v7 = (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 156LL) & 2) != 0;
      goto LABEL_4;
    case 2LL:
      v4 = 512;
      v5 = 3;
      v6 = 1;
      v7 = (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 156LL) & 2) != 0;
      goto LABEL_4;
    case 4LL:
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL) + 392LL) & 1) != 0 )
      {
        v4 = 768;
        v5 = 3;
        v6 = 255;
        v7 = (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 156LL) & 2) != 0;
        goto LABEL_4;
      }
      sub_168B9F0(v8, a1 + 8, a3, 4829, 0);
      sub_15F7200(v8);
      return;
    case 5LL:
      v5 = *(_DWORD *)(a1 + 1160);
      if ( v5 )
      {
        v4 = 0;
        v5 = 4;
        v6 = 255;
        v7 = (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 156LL) & 2) != 0;
        goto LABEL_4;
      }
      if ( *(_BYTE *)(a1 + 1237) || *(_BYTE *)(a1 + 1236) )
      {
        v4 = 0;
        v6 = 255;
        v7 = (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 156LL) & 2) != 0;
LABEL_4:
        sub_1665BB0(a1 + 1152, a3, v5, nullptr, 0, (v7 << 24) | (v6 << 16) | v4);
        return;
      }
      sub_168B9F0(v8, a1 + 8, a3, 7260, 0);
      sub_1669FD0((__int64)v8, (__int64)"stack empty");
      sub_15F7200(v8);
      return;
    default:
      v4 = 0;
      v5 = 0;
      v6 = 255;
      v7 = (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 156LL) & 2) != 0;
      goto LABEL_4;
  }
}
