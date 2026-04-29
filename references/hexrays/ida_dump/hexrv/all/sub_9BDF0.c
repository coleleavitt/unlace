__int64 __fastcall sub_9BDF0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  unsigned int v3; // r15d
  __int64 v5; // rax
  __int64 v6; // rbp
  unsigned int v7; // r13d
  int v8; // eax
  __int64 v9; // [rsp+8h] [rbp-120h]
  int v10; // [rsp+18h] [rbp-110h]
  int v11; // [rsp+3Ch] [rbp-ECh] BYREF
  __int64 v12; // [rsp+40h] [rbp-E8h] BYREF
  __int128 v13; // [rsp+48h] [rbp-E0h]
  _QWORD v14[2]; // [rsp+60h] [rbp-C8h] BYREF
  _QWORD v15[2]; // [rsp+70h] [rbp-B8h] BYREF
  _QWORD v16[2]; // [rsp+80h] [rbp-A8h] BYREF
  _QWORD v17[4]; // [rsp+90h] [rbp-98h] BYREF
  _QWORD v18[2]; // [rsp+B0h] [rbp-78h] BYREF
  unsigned __int64 v19; // [rsp+C0h] [rbp-68h] BYREF
  __int128 v20; // [rsp+C8h] [rbp-60h]
  __int64 v21; // [rsp+D8h] [rbp-50h]
  int v22; // [rsp+E0h] [rbp-48h]
  unsigned __int64 v23; // [rsp+E8h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  if ( *(_DWORD *)a2 == 10
    && *(_BYTE *)(a2 + 32) == 4
    && (v2 = *(_QWORD *)(a2 + 40)) != 0
    && *(_DWORD *)v2 == 23
    && (unsigned __int8)sub_14E170(v2, &v11)
    && (v9 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), v3 = sub_122F60(a2 + 64, v9, v2 + 32), !(_BYTE)v3) )
  {
    v17[0] = &off_4AE8C8;
    v18[0] = 0xFFFFFFFF00000000LL;
    v19 = 0xFFFFFFFF00000000LL;
    v17[1] = a1;
    v21 = 0xFFFFFFFFLL;
    v17[2] = 0;
    v17[3] = 0;
    v18[1] = 0;
    v22 = 24;
    v20 = 0;
    v5 = sub_91030((__int64)v17, a2, 1u);
    v6 = v5;
    if ( v5 )
    {
      v10 = v11;
      if ( (unsigned __int8)sub_11B8C0(v5 + 48, &v12, 0) )
      {
        if ( v10 == v12 && (unsigned __int8)sub_12BD30(a1, v6, v6 + 32, a2, v2 + 32) )
        {
          v14[0] = 0xFFFFFFFF00000000LL;
          v14[1] = 0;
          v15[0] = 0xFFFFFFFF00000000LL;
          v15[1] = 0;
          v16[0] = 0xFFFFFFFF00000000LL;
          v16[1] = 0;
          v13 = 0;
          sub_120EE0(&v12, a2);
          LODWORD(v12) = 24;
          sub_120CC0(v14);
          sub_118E30(v15, *(_QWORD *)(v2 + 56), 1);
          sub_120CC0(v16);
          v7 = sub_12E960(a1, *(_QWORD *)(a2 + 8), (unsigned int)v16, *(_QWORD *)(v6 + 8), (int)v6 + 64, 1);
          if ( (_BYTE)v7 )
          {
            sub_119110(&v12, v9);
            if ( (unsigned int)sub_8FFF0(a1, v6, a2, (__int64)&v12, 0) )
            {
              sub_174C80(a1, a2);
              sub_174C80(a1, v6);
              sub_1190E0(v6);
              sub_120EE0(a2, &v12);
              v8 = *(_DWORD *)(a1 + 24);
              BYTE1(v8) &= ~2u;
              LOBYTE(v8) = v8 | 0x80;
              *(_DWORD *)(a1 + 24) = v8;
              sub_119110(a2, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL));
              sub_94E10(a1, a2);
              v3 = v7;
            }
          }
          sub_1188E0(v16);
          sub_1188E0(v15);
          sub_1188E0(v14);
        }
      }
    }
    v17[0] = &off_4AE870;
    sub_1188E0(&v19);
    sub_1188E0(v18);
  }
  else
  {
    return 0;
  }
  return v3;
}
