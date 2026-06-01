_QWORD *__fastcall sub_7A5FF0(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  int v4; // r12d
  __int64 v5; // rdx
  int v6; // ebx
  _QWORD *v7; // rbp
  __int64 v9; // [rsp+0h] [rbp-48h] BYREF
  int v10; // [rsp+8h] [rbp-40h]
  __int64 v11; // [rsp+10h] [rbp-38h]

  v3 = (a3 >> 1) & 1;
  v4 = ((a3 & 2) != 0) << 30;
  v5 = a3 & 1;
  v6 = v4 | ((_DWORD)v5 << 29);
  v10 = 0;
  v7 = sub_7943D0(176, a1, a2, 16 * v5 + 8 * v3);
  v9 = 0;
  v11 = 0;
  sub_77D6F0((__int64)v7, 0x24u, (__int64)a1, 0, 0, &v9, 0, 0, 0, 0, 0, 0, 0);
  *((_BYTE *)v7 + 29) &= ~2u;
  v7[21] = 0;
  *v7 = &off_49F54A0;
  *((_DWORD *)v7 + 21) = *((_DWORD *)v7 + 21) & 0x1FFF | v6;
  return v7;
}

