__int64 __fastcall sub_ADE30(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  unsigned int v4; // r15d
  __int64 v7; // r14
  unsigned int v8; // eax
  __int64 v9; // rsi
  int v10; // eax
  __int64 v11; // rsi
  char v12; // al
  __int64 v13; // r13
  int v14; // r9d
  __int64 v15; // rdx
  __int64 v16; // rax
  int v17; // [rsp+0h] [rbp-150h]
  int v18; // [rsp+8h] [rbp-148h]
  __int64 v19; // [rsp+10h] [rbp-140h]
  __int64 v20; // [rsp+10h] [rbp-140h]
  __int64 v21; // [rsp+18h] [rbp-138h]
  __int64 v22; // [rsp+18h] [rbp-138h]
  __int64 v23; // [rsp+20h] [rbp-130h]
  __int64 v24; // [rsp+20h] [rbp-130h]
  __int64 v25; // [rsp+28h] [rbp-128h]
  int v26; // [rsp+30h] [rbp-120h]
  __int64 v27; // [rsp+38h] [rbp-118h]
  __int64 v28; // [rsp+40h] [rbp-110h]
  char v29; // [rsp+4Fh] [rbp-101h]
  __int64 v31; // [rsp+68h] [rbp-E8h] BYREF
  _BYTE v32[4]; // [rsp+70h] [rbp-E0h] BYREF
  unsigned int v33; // [rsp+74h] [rbp-DCh]
  _QWORD v34[2]; // [rsp+80h] [rbp-D0h] BYREF
  _QWORD v35[2]; // [rsp+90h] [rbp-C0h] BYREF
  _QWORD v36[4]; // [rsp+A0h] [rbp-B0h] BYREF
  _QWORD v37[2]; // [rsp+C0h] [rbp-90h] BYREF
  _QWORD v38[4]; // [rsp+D0h] [rbp-80h] BYREF
  _QWORD v39[12]; // [rsp+F0h] [rbp-60h] BYREF

  v39[5] = __readfsqword(0x28u);
  v3 = *(_DWORD *)(a2 + 68);
  if ( *(_DWORD *)(a3 + 68) == v3 && v3 <= 7 && (*(_DWORD *)a2 == 4 || *(_DWORD *)a2 == *(_DWORD *)a3) )
  {
    v7 = sub_11A460(a3, &v31);
    if ( v7 )
    {
      if ( (*(_DWORD *)(a3 + 4) & 0x40010) == 0 && (*(_BYTE *)(a3 + 65) & 2) == 0 )
      {
        LOBYTE(v8) = sub_A18D0(*(_QWORD *)(a1 + 64), a3);
        v4 = v8;
        if ( !(_BYTE)v8 )
        {
          v9 = *(unsigned int *)(v7 + 4);
          v26 = 8 * v9;
          v21 = sub_327770(*(_QWORD *)(*(_QWORD *)(v7 + 8) + 16LL), v9, 0);
          v10 = *(_DWORD *)a3;
          if ( *(_DWORD *)a2 != 4 || *(_BYTE *)(a2 + 32) != 2 )
          {
            v29 = 0;
            v27 = 0;
            if ( v10 == 20 )
            {
              v27 = -1;
              if ( (unsigned __int64)v26 <= 0x3F )
                v27 = (1LL << v26) - 1;
              v29 = 0;
            }
LABEL_13:
            v28 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
            sub_121540(v32, v31);
            v11 = *(_QWORD *)(a3 + 8);
            v34[1] = 0;
            v34[0] = 0xFFFFFFFF00000000LL;
            v25 = a3 + 64;
            v23 = a2 + 64;
            if ( (unsigned __int8)sub_12E6A0(a1, v11, a3 + 64, *(_QWORD *)(a2 + 8), a2 + 64, 1) )
            {
              if ( v29 )
                v12 = sub_12F210(v28, a1, a3, v32, 2 * v33, 0, 0);
              else
                v12 = sub_131000(a1, a3, v32, a2, a2);
              if ( !v12 )
                goto LABEL_18;
              if ( !(unsigned __int8)sub_ADD20(a1, (__int64)v32, a2, v28) )
                goto LABEL_18;
              sub_122C80(v34);
              if ( !(unsigned __int8)sub_130900(
                                       a1,
                                       *(_QWORD *)(a3 + 8),
                                       (unsigned int)v34,
                                       *(_QWORD *)(a2 + 8),
                                       v23,
                                       13) )
                goto LABEL_18;
              v29 = 0;
              v16 = v21 | (v27 << v26);
              if ( (unsigned __int64)v26 >= 0x40 )
                v16 = v21;
              v22 = v16;
            }
            else
            {
              if ( !(unsigned __int8)sub_12E6A0(a1, *(_QWORD *)(a2 + 8), v23, *(_QWORD *)(a3 + 8), v25, 1) )
                goto LABEL_18;
              if ( v29 )
              {
                v29 = sub_12F210(v28, a1, a3, v32, 2 * v33, 1, 1);
                if ( !v29 )
                  goto LABEL_18;
              }
              else if ( *(_DWORD *)a2 == 4 )
              {
                v20 = a2 + 32;
                if ( (unsigned __int8)sub_11CBA0(a2 + 32, v32, 2)
                  || !(unsigned __int8)sub_12E6A0(a1, a2, v20, a3, v32, 1) )
                {
                  goto LABEL_18;
                }
                sub_154E90(a1, a2, v20, a3, v32, 0);
              }
              else if ( !(unsigned __int8)sub_130D00(a1, a3, (unsigned int)v32, a2, a2, v14, v17, v18) )
              {
                goto LABEL_18;
              }
              if ( !(unsigned __int8)sub_ADD20(a1, (__int64)v32, a3, v28) )
                goto LABEL_18;
              sub_122C80(v34);
              if ( !(unsigned __int8)sub_130900(
                                       a1,
                                       *(_QWORD *)(a2 + 8),
                                       (unsigned int)v34,
                                       *(_QWORD *)(a3 + 8),
                                       v25,
                                       13) )
                goto LABEL_18;
              v15 = 0;
              if ( (unsigned __int64)v26 <= 0x3F )
                v15 = v21 << v26;
              v22 = v15 | v27;
            }
            if ( a3 )
            {
              if ( (unsigned __int8)sub_11FD40(a2, *(_QWORD *)(a3 + 8), 0) )
              {
                v19 = a3;
                v24 = a2;
              }
              else
              {
                v24 = a3;
                v19 = a2;
              }
            }
            else
            {
              v24 = 0;
              v19 = a2;
            }
            sub_125510(v35, a1, v19, 0);
            sub_122180(v37, a1, v24, 0);
            if ( !(unsigned __int8)sub_63E80(v37, v35) && !(unsigned __int8)sub_314F20(v38, v36) )
            {
              sub_122180(v39, a1, v24, 1);
              if ( !sub_126C30(a1, (unsigned int)v39, *(_QWORD *)(v24 + 16), v19, 0, 0, 257) )
              {
                sub_A00F0((__int64)v34, v28);
                sub_11E5D0(v7, v28, v22, v33, **(_QWORD **)(v7 + 8), 0);
                sub_11A5D0(v31, v32);
                sub_A00F0(v31, v28);
                sub_11A5D0(v25, v34);
                sub_A00D0(v28, a3, *(_DWORD *)(a2 + 4));
                if ( v29 )
                  *(_DWORD *)(a3 + 4) |= 0x2000u;
                sub_11B160(a2);
                if ( a2 && (unsigned __int8)sub_11FD40(a3, *(_QWORD *)(a2 + 8), 0) )
                  sub_11B450(a2, a3);
                v4 = 1;
                sub_92DA0((__int64)v39);
                sub_92DA0((__int64)v37);
                sub_92DA0((__int64)v35);
                goto LABEL_18;
              }
              if ( v39[2] )
              {
                v39[3] = 0;
                qfree();
              }
              qfree();
            }
            if ( v38[0] )
            {
              v38[1] = 0;
              qfree();
            }
            qfree();
            if ( v36[0] )
            {
              v36[1] = 0;
              qfree();
            }
            qfree();
LABEL_18:
            sub_11A960(v34);
            sub_11A960(v32);
            return v4;
          }
          if ( v10 != 21 )
          {
            v13 = 0;
            if ( v10 == 19 )
            {
              v13 = -1;
              if ( (unsigned __int64)v26 <= 0x3F )
                v13 = (1LL << v26) - 1;
            }
            v27 = sub_327770(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 16LL), *(unsigned int *)(a2 + 36), 0);
            if ( v13 == v27 )
            {
              v29 = 1;
              goto LABEL_13;
            }
          }
        }
      }
    }
  }
  return 0;
}
