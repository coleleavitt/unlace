__int64 __fastcall sub_979C0(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9)
{
  int v9; // eax
  __int64 v13; // r11
  int v14; // edx
  int v15; // edx
  __int64 v16; // rax
  __int64 v17; // rax
  char v18; // al
  char v19; // al
  __int64 v20; // rsi
  __int64 v21; // rax
  int v22; // eax
  int v24; // eax
  __int64 v25; // [rsp+8h] [rbp-148h]
  int v26; // [rsp+18h] [rbp-138h]
  __int64 v28; // [rsp+28h] [rbp-128h]
  __int64 v29; // [rsp+38h] [rbp-118h]
  __int64 v30; // [rsp+38h] [rbp-118h]
  unsigned __int8 v31; // [rsp+47h] [rbp-109h]
  _BYTE v33[16]; // [rsp+50h] [rbp-100h] BYREF
  __int64 v34; // [rsp+60h] [rbp-F0h] BYREF
  __int128 v35; // [rsp+68h] [rbp-E8h]
  __int128 v36; // [rsp+78h] [rbp-D8h]
  _QWORD v37[2]; // [rsp+90h] [rbp-C0h] BYREF
  __int64 v38; // [rsp+A0h] [rbp-B0h]
  __int128 v39; // [rsp+A8h] [rbp-A8h]
  _DWORD v40[8]; // [rsp+C0h] [rbp-90h] BYREF
  _QWORD v41[2]; // [rsp+E0h] [rbp-70h] BYREF
  _QWORD v42[2]; // [rsp+F0h] [rbp-60h] BYREF
  _QWORD v43[10]; // [rsp+100h] [rbp-50h] BYREF

  v9 = *(_DWORD *)(a5 + 4);
  v43[3] = __readfsqword(0x28u);
  if ( *(_DWORD *)(a4 + 4) < v9 )
    return 0;
  v31 = v9 > 7 && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL) + 80LL) <= 7;
  if ( v31 )
    return 0;
  v13 = a6;
  if ( a8 )
  {
    v14 = *(_DWORD *)(a7 + 4);
    if ( v14 != *(_DWORD *)(a8 + 4) )
      return v31;
    v15 = 2 * v14;
  }
  else
  {
    if ( (a9 & 4) == 0 )
    {
LABEL_8:
      v16 = *(_QWORD *)(a1 + 480);
      v34 = 0;
      v35 = 0;
      v17 = *(_QWORD *)(v16 + 112);
      v36 = 0;
      v28 = v17;
      if ( a3 )
      {
        v29 = a3;
        v18 = sub_11E040(a2, *(_QWORD *)(a3 + 8), 0);
        v13 = a6;
        if ( v18 )
        {
          v19 = sub_151B40(a1, v29, a4, v29, a2, &v34);
          v13 = a6;
          if ( !v19 )
            goto LABEL_28;
        }
      }
      if ( v13 )
      {
        v30 = v13;
        if ( (unsigned __int8)sub_11E040(a2, *(_QWORD *)(v13 + 8), 0) )
        {
          if ( !(unsigned __int8)sub_151B40(a1, v30, a7, v30, a2, 0) )
            goto LABEL_28;
        }
      }
      sub_1516B0(&v34);
      v41[1] = 0;
      v42[1] = 0;
      v20 = a2[3];
      v43[1] = 0;
      v41[0] = 0xFFFFFFFF00000000LL;
      v42[0] = 0xFFFFFFFF00000000LL;
      v43[0] = 0xFFFFFFFF00000000LL;
      sub_32B920(v40, v20);
      v40[0] = 14;
      sub_120F80(v41);
      sub_127120(v41, v28, a2[3], *(unsigned int *)(a5 + 4));
      sub_120F80(v42);
      v31 = sub_153040(a1, v41, a5);
      if ( !v31 )
      {
LABEL_27:
        sub_118BA0(v43);
        sub_118BA0(v42);
        sub_118BA0(v41);
LABEL_28:
        sub_151600(&v34);
        return v31;
      }
      sub_152FF0(a1, a2, v41, a2, a5, 0);
      if ( a8 )
      {
        if ( a9 )
        {
          if ( !under_debugger )
            sub_37E160(51276);
          goto LABEL_47;
        }
        sub_152FF0(a1, a2, v42, a2, a8, 0);
      }
      else if ( (a9 & 4) == 0 )
      {
        sub_11C5E0(v42, v28, (unsigned int)((a9 & 2) == 0) + 8, a2[3], HIDWORD(v41[0]));
        if ( (a9 & 1) != 0 )
          sub_11C5E0(v42, v28, 5, a2[3], HIDWORD(v42[0]));
      }
      sub_174F40(a1, a2);
      sub_120F80(v43);
      if ( !(unsigned __int8)sub_12D530(v28, a1, v40, v43, (unsigned int)(2 * HIDWORD(v43[0])), 1, 1) )
      {
        v26 = HIDWORD(v43[0]);
        sub_118BA0(v43);
        HIDWORD(v43[0]) = 2 * v26;
        goto LABEL_25;
      }
      sub_11F840(v33, v43);
      if ( (unsigned __int8)sub_126950(v33, v28, *(unsigned int *)(a5 + 4), 1) )
      {
        v37[0] = 0;
        v37[1] = 0;
        v38 = 0;
        v39 = 0;
        sub_123DE0(a1, v37, v33, 1);
        v21 = sub_124F50(a1, (unsigned int)v37, a2[2], 0, (unsigned int)v37, 0, 257);
        if ( v21 )
        {
          if ( *(_DWORD *)v21 == 14 )
          {
            v25 = v21;
            if ( (unsigned __int8)sub_12C9C0(a1, *(_QWORD *)(v21 + 8), v21 + 64, a2[1], a2 + 8, 0) )
            {
              if ( !sub_A5B90(a1, v37, *(_QWORD *)(v25 + 8), a2, 1) )
              {
                sub_1193A0(v25);
                if ( v38 )
                {
                  *(_QWORD *)&v39 = 0;
                  qfree(v38);
                }
                qfree(v37[0]);
                sub_118BA0(v33);
                sub_119690(a2, v40);
                v24 = *(_DWORD *)(a1 + 24);
                BYTE1(v24) &= ~2u;
                LOBYTE(v24) = v24 | 0x80;
                *(_DWORD *)(a1 + 24) = v24;
                sub_1193D0(a2, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL));
                sub_950D0(a1, (__int64)a2);
                goto LABEL_26;
              }
            }
          }
        }
        if ( v38 )
        {
          *(_QWORD *)&v39 = 0;
          qfree(v38);
        }
        qfree(v37[0]);
        sub_118BA0(v33);
LABEL_25:
        sub_1274F0(v40, v28, 11, *(unsigned int *)(a5 + 4), 1);
        sub_120F80(v43);
        sub_119690(a2, v40);
LABEL_26:
        v22 = *(_DWORD *)(a1 + 24);
        BYTE1(v22) &= ~2u;
        LOBYTE(v22) = v22 | 0x80;
        *(_DWORD *)(a1 + 24) = v22;
        goto LABEL_27;
      }
      if ( !under_debugger )
        sub_37E160(51277);
LABEL_47:
      BUG();
    }
    v15 = *(_DWORD *)(a7 + 4);
  }
  if ( !v15 || 2 * v9 == v15 )
    goto LABEL_8;
  return v31;
}
