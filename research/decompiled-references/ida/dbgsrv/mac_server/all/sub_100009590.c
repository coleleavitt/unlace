/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100009590
// Address: 0x0000000100009590

//----- (0000000100009590) ----------------------------------------------------
__int64 __fastcall sub_100009590(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 (__fastcall **v6)(); // [rsp+0h] [rbp-D0h] BYREF
  int v7; // [rsp+8h] [rbp-C8h]
  __int128 v8; // [rsp+Ch] [rbp-C4h]
  __int64 v9; // [rsp+1Ch] [rbp-B4h]
  __int128 v10; // [rsp+28h] [rbp-A8h]
  __int128 v11; // [rsp+38h] [rbp-98h]
  __int128 v12; // [rsp+48h] [rbp-88h]
  __int64 *v13; // [rsp+58h] [rbp-78h]
  __int64 v14; // [rsp+60h] [rbp-70h]
  __int64 v15; // [rsp+68h] [rbp-68h] BYREF
  unsigned __int64 v16[2]; // [rsp+70h] [rbp-60h] BYREF
  __int128 v17; // [rsp+80h] [rbp-50h]
  __int128 v18; // [rsp+90h] [rbp-40h]
  __int128 v19; // [rsp+A0h] [rbp-30h]

  v19 = 0;
  v18 = 0;
  v17 = 0;
  v16[0] = -1;
  v16[1] = 0;
  v4 = -1;
  if ( sub_100009250(a1, (__int64)v16, a2) )
  {
    v15 = -1;
    v7 = 8;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v6 = off_1000A7688;
    v13 = &v15;
    v14 = a3;
    sub_100005930(a1, &v6, v16);
    v4 = v15;
    v6 = off_1000A7540;
    if ( *((_QWORD *)&v10 + 1) )
    {
      *(_QWORD *)&v11 = 0;
      qfree(*((void **)&v10 + 1));
    }
  }
  if ( *((_QWORD *)&v18 + 1) )
  {
    *(_QWORD *)&v19 = 0;
    qfree(*((void **)&v18 + 1));
    *((_QWORD *)&v18 + 1) = 0;
    *((_QWORD *)&v19 + 1) = 0;
  }
  if ( (_QWORD)v17 )
  {
    *((_QWORD *)&v17 + 1) = 0;
    qfree((void *)v17);
  }
  return v4;
}
// 1000A7540: using guessed type __int64 (__fastcall *off_1000A7540[7])();
// 1000A7688: using guessed type __int64 (__fastcall *off_1000A7688[7])();
