__int64 __fastcall sub_F490(__int64 *a1, __int64 *a2, __int64 a3)
{
  unsigned int v3; // ebp
  _BYTE v5[409]; // [rsp+0h] [rbp-1E8h] BYREF
  __int128 v6; // [rsp+199h] [rbp-4Fh]
  __int64 v7; // [rsp+1A9h] [rbp-3Fh]
  int v8; // [rsp+1B1h] [rbp-37h]
  __int64 v9; // [rsp+1B9h] [rbp-2Fh]
  int v10; // [rsp+1C1h] [rbp-27h]
  char v11; // [rsp+1C5h] [rbp-23h]
  unsigned __int64 v12; // [rsp+1C8h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  sub_60B0((__int64)v5, a3, 0);
  *(_QWORD *)v5 = &off_22350;
  *(_QWORD *)&v5[385] = get_eah(v5);
  *(_QWORD *)&v5[393] = 0;
  *(_QWORD *)&v5[401] = 0;
  v7 = 0;
  v8 = -1;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v6 = 0;
  v3 = sub_F260((__int64)v5, a1, a2);
  sub_4D70(v5);
  return v3;
}

