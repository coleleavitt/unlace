__int64 __fastcall sub_97700(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r13
  __int64 v5; // rax
  __int64 v6; // r14
  unsigned __int8 v7; // r13
  int v8; // eax
  unsigned __int8 v9; // [rsp+1Fh] [rbp-E1h]
  int v10; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v11; // [rsp+28h] [rbp-D8h]
  _QWORD v12[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v13[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v14[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v15[4]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v16[2]; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v17; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v18; // [rsp+A8h] [rbp-58h]
  __int64 v19; // [rsp+B8h] [rbp-48h]
  int v20; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v21; // [rsp+C8h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 480);
  v21 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(v2 + 112);
  v9 = sub_11C3A0(a2, v3, 0);
  if ( v9 )
  {
    return 0;
  }
  else
  {
    v15[1] = a1;
    v16[0] = 0xFFFFFFFF00000000LL;
    v17 = 0xFFFFFFFF00000000LL;
    v15[0] = &off_4BC5C8;
    v19 = 0xFFFFFFFFLL;
    v15[2] = 0;
    v15[3] = 0;
    v16[1] = 0;
    v20 = 10;
    v18 = 0;
    v5 = sub_912F0((__int64)v15, a2, 0);
    v6 = v5;
    if ( v5 )
    {
      v7 = sub_12A880(v3, a1, a2, (int)a2 + 32, v5, (int)v5 + 32, 0);
      if ( v7 )
      {
        if ( *(_DWORD *)(a2 + 36) == 2 * *(_DWORD *)(a2 + 68) )
        {
          v12[1] = 0;
          v12[0] = 0xFFFFFFFF00000000LL;
          v13[0] = 0xFFFFFFFF00000000LL;
          v14[0] = 0xFFFFFFFF00000000LL;
          v13[1] = 0;
          v14[1] = 0;
          v11 = 0;
          sub_1211A0(&v10, v6);
          sub_152FF0(a1, *(_QWORD *)(v6 + 8), v14, *(_QWORD *)(a2 + 8), a2 + 64, 1);
          v10 = 4;
          if ( (unsigned int)sub_902B0(a1, a2, v6, (__int64)&v10, 0) )
          {
            sub_1211A0(v6, &v10);
            sub_1193A0(a2);
            v8 = *(_DWORD *)(a1 + 24);
            BYTE1(v8) &= ~2u;
            LOBYTE(v8) = v8 | 0x80;
            *(_DWORD *)(a1 + 24) = v8;
            sub_1193D0(v6, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL));
            sub_950D0(a1, v6);
            if ( (*(_BYTE *)(v6 + 33) & 2) != 0 )
              *(_BYTE *)(v6 + 65) |= 2u;
            v9 = v7;
          }
          sub_118BA0(v14);
          sub_118BA0(v13);
          sub_118BA0(v12);
        }
      }
    }
    v15[0] = &off_4BC570;
    sub_118BA0(&v17);
    sub_118BA0(v16);
  }
  return v9;
}
