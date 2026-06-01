unsigned __int64 __fastcall sub_1860170(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7)
{
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int8 v11; // si
  unsigned int v12; // r13d
  char v13; // r12
  char v14; // dl
  char v15; // al
  __int64 v16; // rax
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rbp
  unsigned int v21; // eax
  unsigned __int8 v22; // al
  __int64 v23; // rdi
  unsigned int v24; // eax
  __int64 v25; // r9
  int v26; // eax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // [rsp+8h] [rbp-100h]
  __int16 v33; // [rsp+1Ah] [rbp-EEh] BYREF
  unsigned __int8 v34; // [rsp+1Ch] [rbp-ECh]
  _QWORD v35[2]; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v36; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v37; // [rsp+38h] [rbp-D0h]
  __int64 v38; // [rsp+40h] [rbp-C8h]
  _QWORD v39[23]; // [rsp+50h] [rbp-B8h] BYREF

  if ( (unsigned __int8)(*(_BYTE *)(a1 + 24) - 1) > 1u
    || (v20 = *(_QWORD *)(a1 + 8),
        a2 = *(_QWORD *)(v20 + 104),
        sub_7052B0((__int64 *)(a2 + 96), a2, a3, a4, a5, a6),
        (*(_BYTE *)(*(_QWORD *)(v20 + 128) + 2LL) & 0x10) == 0) )
  {
    v39[0] = *(_QWORD *)(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 120LL) + 48LL);
    v8 = sub_C1BEF0((__int64)v39, a2, a3, a4);
    v11 = *(_BYTE *)(a1 + 24);
    v34 = 2;
    v33 = 256;
    if ( v11 )
    {
      if ( v11 <= 2u )
      {
        v18 = 0;
        v19 = *(_QWORD *)&byte_8[v8 & 0xFFFFFFFFFFFFFFF0LL];
        if ( (v19 & 8) != 0 )
          v18 = *(__int64 *)((char *)&qword_18 + (v19 & 0xFFFFFFFFFFFFFFF0LL));
        sub_185F560(
          (__int64 *)a1,
          (char *)&v33,
          *(_QWORD *)(a1 + 8),
          v18 | ((unsigned __int8)v19 | (unsigned __int8)v8) & 7,
          v9,
          v10,
          a7);
        v15 = v33;
        v14 = HIBYTE(v33);
        v13 = v34;
        goto LABEL_9;
      }
      if ( v11 <= 4u )
      {
        v12 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL);
        v37 = *(_QWORD *)(a1 + 8);
        LODWORD(v36) = 0;
        LODWORD(v38) = v12;
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 16LL)
           - 43 > 1 )
        {
          LOWORD(v39[0]) = v39[0] & 0xFE00 | 0x1A;
          if ( unk_2CD7484 )
          {
            v32 = v8;
            sub_EE9B50(26);
            v8 = v32;
          }
          v39[1] = v8;
          v39[2] = 0;
          v21 = v39[0] & 0xFFF001FF;
          BYTE1(v21) = ((unsigned __int16)(v39[0] & 0x1FF) >> 8) | 2;
          v39[0] = __PAIR64__(v12, v21);
          v22 = sub_B62360((__int64)v39);
          v23 = *(_QWORD *)(a1 + 16);
          v35[0] = v39;
          v35[1] = v39;
          BYTE1(v39[0]) = (v22 << 6) | BYTE1(v39[0]) & 0x3F;
          BYTE2(v39[0]) = BYTE2(v39[0]) & 0xF8 | (v22 >> 2) & 7;
          v24 = sub_B77890(v23);
          v26 = sub_185E0A0((__int64 *)a1, v24, (__int64)v35, 2, 0, v25, v36, v37, v38);
          v27 = v26;
          v14 = HIBYTE(v33) & BYTE1(v26);
          v15 = v33 | v26;
          v13 = v34;
          v28 = v27 >> 16;
          if ( v34 > (unsigned __int8)v28 )
            v13 = v28;
        }
        else
        {
          v13 = 2;
          v14 = 1;
          if ( *(_DWORD *)(a1 + 176) == 1 )
          {
            sub_168B9F0((__int64)v39, (__int64 *)(*(_QWORD *)a1 + 8LL), v12, 0x1708u, 0);
            v29 = sub_1795A40((__int64)v39, (__int64 *)(a1 + 16));
            sub_185AB80(v29, (__int64 *)(a1 + 8));
            sub_15F7200(v39);
            v14 = HIBYTE(v33);
            v13 = v34;
          }
          v15 = 1;
        }
LABEL_9:
        LOBYTE(v39[0]) = v15;
        BYTE1(v39[0]) = v14;
        BYTE2(v39[0]) = v13;
        goto LABEL_10;
      }
    }
    BUG();
  }
  if ( *(_DWORD *)(a1 + 176) == 1 )
  {
    sub_168B9F0((__int64)v39, (__int64 *)(*(_QWORD *)a1 + 8LL), *(_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL), 0x1709u, 0);
    v30 = sub_1795A40((__int64)v39, (__int64 *)(a1 + 16));
    LOBYTE(v36) = *(_BYTE *)(*(_QWORD *)(a1 + 8) + 73LL) >> 5 == 2;
    v31 = sub_1588420(v30, (unsigned __int8 *)&v36);
    sub_185AB80(v31, (__int64 *)(a1 + 8));
    sub_15F7200(v39);
  }
  BYTE2(v39[0]) = 2;
  LOWORD(v39[0]) = 257;
LABEL_10:
  v16 = LOBYTE(v39[0]);
  BYTE1(v16) = BYTE1(v39[0]);
  return ((unsigned __int64)BYTE2(v39[0]) << 16) | v16;
}
