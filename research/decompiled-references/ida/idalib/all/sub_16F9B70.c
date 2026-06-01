__int64 __fastcall sub_16F9B70(__int64 a1, unsigned __int64 a2, unsigned int a3, double a4)
{
  __int64 v4; // r13
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v11; // eax
  __int64 v12; // rsi
  __int64 v13; // r13
  __int64 v14; // rax
  unsigned __int64 v15; // rsi
  __int64 v16; // rax
  unsigned __int64 v17; // r13
  unsigned int v18; // eax
  __int64 v19; // r15
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // [rsp+0h] [rbp-F8h]
  unsigned int v25; // [rsp+Ch] [rbp-ECh]
  __int64 v26; // [rsp+10h] [rbp-E8h] BYREF
  __int64 v27; // [rsp+18h] [rbp-E0h] BYREF
  unsigned __int64 v28; // [rsp+20h] [rbp-D8h]
  __int64 v29; // [rsp+28h] [rbp-D0h]
  _BYTE v30[200]; // [rsp+30h] [rbp-C8h] BYREF

  if ( !(unsigned __int8)sub_16EC930(a1, a2, 2u, a4) )
  {
    v11 = sub_C00A40(a2, a2, v7, v8, v9);
    v12 = 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL);
    if ( !(unsigned __int8)sub_16CF790(a1, *(_QWORD *)(a2 + v12 + 32), *(_QWORD *)(a2 + v12 + 40), v11, a4) )
    {
      v13 = 0;
      while ( 1 )
      {
        v14 = sub_19179A0(a1, *(_QWORD *)(v13 + a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32), 1);
        if ( v14 == 1 )
          break;
        v15 = v14 & 0xFFFFFFFFFFFFFFFELL;
        v16 = sub_18C0DF0(a1, v14 & 0xFFFFFFFFFFFFFFFELL);
        if ( v16 == 1 )
          break;
        *(unsigned __int64 *)((char *)&v28 + v13) = v16 & 0xFFFFFFFFFFFFFFFELL;
        v13 += 8;
        if ( v13 == 16 )
        {
          v17 = v28;
          v18 = sub_EEB7E0(v28, v15, a4);
          v19 = v29;
          v20 = v18;
          v25 = v18;
          v21 = *(_QWORD *)(v29 + 8);
          v26 = *(_QWORD *)(v17 + 8);
          v27 = v21;
          if ( !(unsigned __int8)sub_16F9610(a1, v20, v26, a3, 1, v22) )
          {
            if ( *(_QWORD *)(*(_QWORD *)&byte_8[v26 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) == *(_QWORD *)(*(_QWORD *)&byte_8[v27 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) )
            {
              v24 = v26;
              *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32) = v17;
              *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 40) = v19;
            }
            else
            {
              sub_168B9F0((__int64)v30, (__int64 *)(a1 + 8), v25, 0x1463u, 0);
              v23 = sub_1605D30((__int64)v30, &v26);
              sub_1605D30(v23, &v27);
              sub_15F7200(v30);
            }
          }
          return v24;
        }
      }
      return v24;
    }
  }
  return v4;
}
