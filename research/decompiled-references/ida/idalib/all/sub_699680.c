unsigned __int64 __fastcall sub_699680(__int64 *a1, char a2, __int64 a3, __int64 a4)
{
  char v4; // si
  __int64 v6; // rbp
  size_t v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbp
  size_t v12; // rax
  size_t v13; // rax
  size_t v14; // rax
  __int64 v15; // [rsp+8h] [rbp-60h]
  _BYTE v16[3]; // [rsp+1Eh] [rbp-4Ah] BYREF
  _BYTE v17[7]; // [rsp+21h] [rbp-47h] BYREF
  _QWORD v18[8]; // [rsp+28h] [rbp-40h] BYREF

  v4 = a2 & 3;
  v6 = *(_QWORD *)(a3 + 8);
  v18[0] = __readfsqword(0x28u);
  if ( v4 != 2 )
  {
    if ( v4 != 3 )
    {
      if ( v4 == 1 )
      {
        v14 = pack_dq(v16, v18, **(_QWORD **)a3 - a4) - (_QWORD)v16;
        if ( v14 )
          sub_698900(a1, v16, v14);
      }
      return v18[0] - __readfsqword(0x28u);
    }
    v9 = pack_dw(v16, v17, (unsigned __int16)v6) - (_QWORD)v16;
    if ( v9 )
      sub_698900(a1, v16, v9);
  }
  if ( (int)v6 > 0 )
  {
    v10 = (unsigned int)(v6 - 1);
    v11 = 0;
    v15 = 16 * (v10 + 1);
    do
    {
      v12 = pack_dq(v16, v18, *(_QWORD *)(*(_QWORD *)a3 + v11) - a4) - (_QWORD)v16;
      if ( v12 )
        sub_698900(a1, v16, v12);
      v13 = pack_dq(v16, v18, *(_QWORD *)(v11 + *(_QWORD *)a3 + 8) - *(_QWORD *)(v11 + *(_QWORD *)a3)) - (_QWORD)v16;
      if ( v13 )
        sub_698900(a1, v16, v13);
      v11 += 16;
    }
    while ( v15 != v11 );
  }
  return v18[0] - __readfsqword(0x28u);
}
