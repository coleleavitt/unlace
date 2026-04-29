__int64 __fastcall sub_AE640(__int64 a1, __int64 a2, __int64 a3)
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
  int v19; // [rsp+10h] [rbp-140h]
  __int64 v20; // [rsp+10h] [rbp-140h]
  __int64 v21; // [rsp+10h] [rbp-140h]
  __int64 v22; // [rsp+18h] [rbp-138h]
  __int64 v23; // [rsp+18h] [rbp-138h]
  __int64 v24; // [rsp+20h] [rbp-130h]
  __int64 v25; // [rsp+20h] [rbp-130h]
  __int64 v26; // [rsp+28h] [rbp-128h]
  int v27; // [rsp+30h] [rbp-120h]
  __int64 v28; // [rsp+38h] [rbp-118h]
  __int64 v29; // [rsp+40h] [rbp-110h]
  char v30; // [rsp+4Fh] [rbp-101h]
  __int64 v32; // [rsp+68h] [rbp-E8h] BYREF
  _BYTE v33[4]; // [rsp+70h] [rbp-E0h] BYREF
  unsigned int v34; // [rsp+74h] [rbp-DCh]
  _QWORD v35[2]; // [rsp+80h] [rbp-D0h] BYREF
  _QWORD v36[2]; // [rsp+90h] [rbp-C0h] BYREF
  _QWORD v37[4]; // [rsp+A0h] [rbp-B0h] BYREF
  _QWORD v38[2]; // [rsp+C0h] [rbp-90h] BYREF
  _QWORD v39[4]; // [rsp+D0h] [rbp-80h] BYREF
  _QWORD v40[2]; // [rsp+F0h] [rbp-60h] BYREF
  __int64 v41; // [rsp+100h] [rbp-50h]
  __int64 v42; // [rsp+108h] [rbp-48h]
  unsigned __int64 v43; // [rsp+118h] [rbp-38h]

  v43 = __readfsqword(0x28u);
  v3 = *(_DWORD *)(a2 + 68);
  if ( *(_DWORD *)(a3 + 68) == v3 && v3 <= 7 && (*(_DWORD *)a2 == 4 || *(_DWORD *)a2 == *(_DWORD *)a3) )
  {
    v7 = sub_11C2E0(a3, &v32);
    if ( v7 )
    {
      if ( (*(_DWORD *)(a3 + 4) & 0x40010) == 0 && (*(_BYTE *)(a3 + 65) & 2) == 0 )
      {
        LOBYTE(v8) = sub_A2090(*(_QWORD *)(a1 + 64), a3);
        v4 = v8;
        if ( !(_BYTE)v8 )
        {
          v9 = *(unsigned int *)(v7 + 4);
          v27 = 8 * v9;
          v22 = sub_32AEF0(*(_QWORD *)(*(_QWORD *)(v7 + 8) + 16LL), v9, 0);
          v10 = *(_DWORD *)a3;
          if ( *(_DWORD *)a2 != 4 || *(_BYTE *)(a2 + 32) != 2 )
          {
            v30 = 0;
            v28 = 0;
            if ( v10 == 20 )
            {
              v28 = -1;
              if ( (unsigned __int64)v27 <= 0x3F )
                v28 = (1LL << v27) - 1;
              v30 = 0;
            }
LABEL_13:
            v29 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
            sub_123480(v33, v32);
            v11 = *(_QWORD *)(a3 + 8);
            v35[1] = 0;
            v35[0] = 0xFFFFFFFF00000000LL;
            v26 = a3 + 64;
            v24 = a2 + 64;
            if ( (unsigned __int8)sub_130600(a1, v11, a3 + 64, *(_QWORD *)(a2 + 8), a2 + 64, 1) )
            {
              if ( v30 )
                v12 = sub_131170(v29, a1, a3, v33, 2 * v34, 0, 0);
              else
                v12 = sub_132F60(a1, a3, v33, a2, a2);
              if ( !v12 )
                goto LABEL_18;
              if ( !(unsigned __int8)sub_AE530(a1, (__int64)v33, a2, v29) )
                goto LABEL_18;
              sub_124BC0(v35);
              if ( !(unsigned __int8)sub_132860(
                                       a1,
                                       *(_QWORD *)(a3 + 8),
                                       (unsigned int)v35,
                                       *(_QWORD *)(a2 + 8),
                                       v24,
                                       13) )
                goto LABEL_18;
              v30 = 0;
              v16 = v22 | (v28 << v27);
              if ( (unsigned __int64)v27 >= 0x40 )
                v16 = v22;
              v23 = v16;
            }
            else
            {
              if ( !(unsigned __int8)sub_130600(a1, *(_QWORD *)(a2 + 8), v24, *(_QWORD *)(a3 + 8), v26, 1) )
                goto LABEL_18;
              if ( v30 )
              {
                v30 = sub_131170(v29, a1, a3, v33, 2 * v34, 1, 1);
                if ( !v30 )
                  goto LABEL_18;
              }
              else if ( *(_DWORD *)a2 == 4 )
              {
                v21 = a2 + 32;
                if ( (unsigned __int8)sub_11EA20(a2 + 32, v33, 2)
                  || !(unsigned __int8)sub_130600(a1, a2, v21, a3, v33, 1) )
                {
                  goto LABEL_18;
                }
                sub_156C50(a1, a2, v21, a3, v33, 0);
              }
              else if ( !(unsigned __int8)sub_132C60(a1, a3, (unsigned int)v33, a2, a2, v14, v17, v18, v19) )
              {
                goto LABEL_18;
              }
              if ( !(unsigned __int8)sub_AE530(a1, (__int64)v33, a3, v29) )
                goto LABEL_18;
              sub_124BC0(v35);
              if ( !(unsigned __int8)sub_132860(
                                       a1,
                                       *(_QWORD *)(a2 + 8),
                                       (unsigned int)v35,
                                       *(_QWORD *)(a3 + 8),
                                       v26,
                                       13) )
                goto LABEL_18;
              v15 = 0;
              if ( (unsigned __int64)v27 <= 0x3F )
                v15 = v22 << v27;
              v23 = v15 | v28;
            }
            if ( a3 )
            {
              if ( (unsigned __int8)sub_121C80(a2, *(_QWORD *)(a3 + 8), 0) )
              {
                v20 = a3;
                v25 = a2;
              }
              else
              {
                v25 = a3;
                v20 = a2;
              }
            }
            else
            {
              v25 = 0;
              v20 = a2;
            }
            sub_127460(v36, a1, v20, 0);
            sub_1240C0(v38, a1, v25, 0);
            if ( !(unsigned __int8)sub_64180(v38, v36) && !(unsigned __int8)sub_318830(v39, v37) )
            {
              sub_1240C0(v40, a1, v25, 1);
              if ( !sub_128B90(a1, (unsigned int)v40, *(_QWORD *)(v25 + 16), v20, 0, 0, 257) )
              {
                sub_A0850((__int64)v35, v29);
                sub_120450(v7, v29, v23, v34, **(_QWORD **)(v7 + 8), 0);
                sub_11C450(v32, v33);
                sub_A0850(v32, v29);
                sub_11C450(v26, v35);
                sub_A0CC0(v29, a3, *(_DWORD *)(a2 + 4));
                if ( v30 )
                  *(_DWORD *)(a3 + 4) |= 0x2000u;
                sub_11CFE0(a2);
                if ( a2 && (unsigned __int8)sub_121C80(a3, *(_QWORD *)(a2 + 8), 0) )
                  sub_11D2D0(a2, a3);
                v4 = 1;
                sub_93580(v40);
                sub_93580(v38);
                sub_93580(v36);
                goto LABEL_18;
              }
              if ( v41 )
              {
                v42 = 0;
                qfree(v41);
              }
              qfree(v40[0]);
            }
            if ( v39[0] )
            {
              v39[1] = 0;
              qfree(v39[0]);
            }
            qfree(v38[0]);
            if ( v37[0] )
            {
              v37[1] = 0;
              qfree(v37[0]);
            }
            qfree(v36[0]);
LABEL_18:
            sub_11C7E0(v35);
            sub_11C7E0(v33);
            return v4;
          }
          if ( v10 != 21 )
          {
            v13 = 0;
            if ( v10 == 19 )
            {
              v13 = -1;
              if ( (unsigned __int64)v27 <= 0x3F )
                v13 = (1LL << v27) - 1;
            }
            v28 = sub_32AEF0(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 16LL), *(unsigned int *)(a2 + 36), 0);
            if ( v13 == v28 )
            {
              v30 = 1;
              goto LABEL_13;
            }
          }
        }
      }
    }
  }
  return 0;
}
