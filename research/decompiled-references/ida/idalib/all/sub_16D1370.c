void __fastcall sub_16D1370(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r12
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  signed __int64 v19; // r12
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  signed __int64 v24; // r13
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rbp
  __int64 v30; // r13
  __int64 v31; // rax
  __int64 v32; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v33; // [rsp+8h] [rbp-E0h] BYREF
  unsigned int v34; // [rsp+18h] [rbp-D0h] BYREF
  unsigned int v35; // [rsp+1Ch] [rbp-CCh] BYREF
  __int64 v36; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v37; // [rsp+28h] [rbp-C0h] BYREF
  __int64 v38; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v39; // [rsp+38h] [rbp-B0h]
  char v40; // [rsp+40h] [rbp-A8h]

  v33 = a3;
  v32 = a4;
  if ( (unsigned __int8)sub_FD3830(
                          *(_QWORD *)(*(_QWORD *)(a1 + 264) + 32LL),
                          0x19FEu,
                          (unsigned int)a4,
                          *(_QWORD *)(a1 + 264),
                          a5,
                          a6) != 1 )
  {
    v11 = *(_QWORD *)(v33 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(v11 + 17) & 4) == 0 )
    {
      v12 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v12 + 17) & 4) == 0
        && (*(_BYTE *)(v11 + 16) == 42
         || (v11 = sub_16B68B0(*(_QWORD *)(v33 & 0xFFFFFFFFFFFFFFF0LL), 6654, v12, v8)) != 0) )
      {
        v13 = *(_QWORD *)(v11 + 32);
        if ( !sub_F62670(*(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL), nullptr, v12, v8, v9, v10) )
        {
          v14 = v13;
          v19 = sub_A980A0(*(_QWORD *)(a1 + 248), v13);
          if ( v19 != 1 )
          {
            v20 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
            if ( (*(_BYTE *)(v20 + 16) == 42
               || (v20 = sub_16B68B0(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL), v14, v15, v16)) != 0)
              && !sub_F62670(*(_QWORD *)(*(_QWORD *)(v20 + 32) & 0xFFFFFFFFFFFFFFF0LL), nullptr, v15, v16, v17, v18) )
            {
              sub_16CB850((__int64)&v38, a2, *(_QWORD **)(a1 + 248));
              if ( v40 )
              {
                v24 = -(v39 | v38) & (v39 | v38);
              }
              else
              {
                v30 = *(_QWORD *)(a1 + 248);
                v31 = sub_F68450(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, v21, v22, v23);
                v24 = sub_A980A0(v30, v31);
              }
              if ( v19 > v24 )
              {
                sub_168B9F0((__int64)&v38, (__int64 *)(a1 + 8), v32, 0x19FEu, 0);
                v36 = *(_QWORD *)(a2 + 8);
                v25 = sub_162B6D0((__int64)&v38, &v36);
                v26 = sub_1605D30(v25, &v33);
                v34 = v24;
                v27 = sub_16CF160(v26, &v34);
                v35 = v19;
                v28 = sub_16CF160(v27, &v35);
                v29 = sub_15884C0(v28, &v32);
                v37 = sub_EEC8C0(a2, (__int64)&v32, a7);
                sub_1587DB0(v29, &v37);
                sub_15F7200(&v38);
              }
            }
          }
        }
      }
    }
  }
}
