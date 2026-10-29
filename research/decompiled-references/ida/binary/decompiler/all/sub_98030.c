__int64 __fastcall sub_98030(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // r15
  __int64 v6; // rax
  unsigned __int8 v7; // al
  int v8; // r8d
  int v9; // r9d
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v13; // [rsp+8h] [rbp-A8h]
  unsigned int v14; // [rsp+8h] [rbp-A8h]
  unsigned int v15; // [rsp+8h] [rbp-A8h]
  _BYTE v16[16]; // [rsp+10h] [rbp-A0h] BYREF
  _QWORD v17[2]; // [rsp+20h] [rbp-90h] BYREF
  __int64 v18; // [rsp+30h] [rbp-80h]
  __int128 v19; // [rsp+38h] [rbp-78h]
  _QWORD v20[2]; // [rsp+50h] [rbp-60h] BYREF
  __int64 v21; // [rsp+60h] [rbp-50h]
  __int128 v22; // [rsp+68h] [rbp-48h]
  unsigned __int64 v23; // [rsp+78h] [rbp-38h]

  v23 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a2 + 16) || !*(_BYTE *)a3 )
    return 0;
  v19 = 0;
  v18 = 0;
  v17[0] = 0;
  v17[1] = 0;
  sub_1219A0(a1, v17, a3, 0, 4294901760LL);
  v4 = *(_QWORD *)(a2 + 16);
  v20[0] = 0;
  v20[1] = 0;
  v21 = 0;
  v22 = 0;
  v5 = sub_126C30(a1, (unsigned int)v17, v4, 0, (unsigned int)v20, 0, 0);
  if ( !v5
    || 2 * *(_DWORD *)(v5 + 68) != *(_DWORD *)(a3 + 4)
    || *(_BYTE *)(v5 + 64) != *(_BYTE *)a3
    && (*(_BYTE *)a3 != 14
     || !(unsigned __int8)sub_123660(v5 + 64, *(_QWORD *)(a3 + 8), 0)
     || *(_DWORD *)v5 != 2
     || (v6 = *(_QWORD *)(a3 + 8), *(_BYTE *)(v6 + 16) != 4)
     || **(_DWORD **)(v6 + 24) != 2) )
  {
LABEL_8:
    if ( v21 )
    {
      *(_QWORD *)&v22 = 0;
      qfree();
    }
    qfree();
    if ( v18 )
    {
      *(_QWORD *)&v19 = 0;
      qfree();
    }
    qfree();
    return 0;
  }
  sub_121540(v16, a3);
  if ( !(unsigned __int8)sub_124DA0(
                           v16,
                           *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL),
                           (unsigned int)(*(_DWORD *)(a3 + 4) / 2),
                           0) )
  {
    sub_11A960(v16);
    goto LABEL_8;
  }
  v7 = sub_123660(v5 + 64, v16, 0);
  v13 = (unsigned __int8)sub_AA8F0(a1, v5, (int)v5 + 64, 7 - (unsigned int)v7, v8, v9);
  sub_11A960(v16);
  v10 = v13;
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree();
    v10 = v13;
  }
  v14 = v10;
  qfree();
  v11 = v14;
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree();
    v11 = v14;
  }
  v15 = v11;
  qfree();
  return v15;
}
