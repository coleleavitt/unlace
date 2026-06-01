void __fastcall sub_1C4FDE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 *v12; // r9
  __int64 *v13; // r11
  __int64 v14; // r12
  __int64 v15; // rax
  unsigned int v16; // eax
  __int64 v17; // rax
  unsigned int v18; // eax
  __int64 v19; // [rsp+0h] [rbp-58h]
  __int64 *v20; // [rsp+8h] [rbp-50h]
  __int64 v21; // [rsp+8h] [rbp-50h]
  __int64 v22; // [rsp+10h] [rbp-48h]
  __int64 *v23; // [rsp+10h] [rbp-48h]
  __int64 v24; // [rsp+18h] [rbp-40h]
  __int64 v25; // [rsp+38h] [rbp-20h]
  __int64 v26; // [rsp+40h] [rbp-18h]

  while ( a4 && a5 )
  {
    v7 = a5;
    v26 = v6;
    v25 = v5;
    v8 = a4;
    v19 = a3;
    if ( a4 + a5 == 2 )
    {
      if ( *(_BYTE *)(a2 + 12) )
        v16 = (unsigned int)sub_2205DB0(a2, a1) >> 31;
      else
        v16 = (unsigned int)sub_2205E20(a2, a1) >> 31;
      if ( (_BYTE)v16
        || (*(_BYTE *)(a1 + 12)
          ? (v18 = (unsigned int)sub_2205DB0(a1, a2) >> 31)
          : (v18 = (unsigned int)sub_2205E20(a1, a2) >> 31),
            !(_BYTE)v18 && *(_QWORD *)(a2 + 16) < *(_QWORD *)(a1 + 16)) )
      {
        sub_1C4DC60((__int64 *)a1, (__int64 *)a2);
        v17 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
        *(_QWORD *)(a2 + 16) = v17;
      }
      return;
    }
    if ( a4 > a5 )
    {
      v14 = a4 / 2;
      v21 = a1 + 24 * (a4 / 2);
      v15 = sub_1C30090(a2, a3, v21);
      v13 = (__int64 *)v21;
      v12 = (__int64 *)v15;
      v11 = v15 - a2;
      v9 = 0xAAAAAAAAAAAAAAABLL * ((v15 - a2) >> 3);
    }
    else
    {
      v9 = a5 / 2;
      v22 = 24 * (a5 / 2);
      v10 = sub_1C30160(a1, a2, a2 + v22);
      v11 = v22;
      v12 = (__int64 *)(a2 + v22);
      v13 = (__int64 *)v10;
      v14 = 0xAAAAAAAAAAAAAAABLL * ((v10 - a1) >> 3);
    }
    v23 = v12;
    v24 = v11;
    v20 = v13;
    sub_1C34E40(v13, (__int64 *)a2, v12);
    sub_1C4FDE0(a1, v20, (char *)v20 + v24, v14, v9);
    a4 = v8 - v14;
    a5 = v7 - v9;
    a3 = v19;
    a1 = (__int64)v20 + v24;
    a2 = (__int64)v23;
    v5 = v25;
    v6 = v26;
  }
}
