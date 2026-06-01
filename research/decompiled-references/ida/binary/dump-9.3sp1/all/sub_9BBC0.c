__int64 __fastcall sub_9BBC0(
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
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // rax
  int v24; // eax
  int v26; // eax
  int v27; // [rsp+0h] [rbp-150h]
  int v28; // [rsp+8h] [rbp-148h]
  __int64 v29; // [rsp+8h] [rbp-148h]
  __int64 v30; // [rsp+10h] [rbp-140h]
  __int64 v31; // [rsp+18h] [rbp-138h]
  int v32; // [rsp+18h] [rbp-138h]
  _DWORD *v34; // [rsp+20h] [rbp-130h]
  __int64 v35; // [rsp+28h] [rbp-128h]
  __int64 v36; // [rsp+38h] [rbp-118h]
  __int64 v37; // [rsp+38h] [rbp-118h]
  unsigned __int8 v38; // [rsp+47h] [rbp-109h]
  _BYTE v40[16]; // [rsp+50h] [rbp-100h] BYREF
  __int64 v41; // [rsp+60h] [rbp-F0h] BYREF
  __int128 v42; // [rsp+68h] [rbp-E8h]
  __int128 v43; // [rsp+78h] [rbp-D8h]
  __int64 v44[2]; // [rsp+90h] [rbp-C0h] BYREF
  __int64 v45; // [rsp+A0h] [rbp-B0h]
  __int128 v46; // [rsp+A8h] [rbp-A8h]
  _DWORD v47[8]; // [rsp+C0h] [rbp-90h] BYREF
  _QWORD v48[2]; // [rsp+E0h] [rbp-70h] BYREF
  _QWORD v49[2]; // [rsp+F0h] [rbp-60h] BYREF
  _QWORD v50[10]; // [rsp+100h] [rbp-50h] BYREF

  v9 = *(_DWORD *)(a5 + 4);
  v50[3] = __readfsqword(0x28u);
  if ( *(_DWORD *)(a4 + 4) < v9 )
    return 0;
  v38 = v9 > 7 && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL) + 80LL) <= 7;
  if ( v38 )
    return 0;
  v13 = a6;
  if ( a8 )
  {
    v14 = *(_DWORD *)(a7 + 4);
    if ( v14 != *(_DWORD *)(a8 + 4) )
      return v38;
    v15 = 2 * v14;
  }
  else
  {
    if ( (a9 & 4) == 0 )
    {
LABEL_8:
      v16 = *(_QWORD *)(a1 + 480);
      v41 = 0;
      v42 = 0;
      v17 = *(_QWORD *)(v16 + 112);
      v43 = 0;
      v35 = v17;
      if ( a3 )
      {
        v36 = a3;
        v18 = sub_122240(a2, *(_QWORD *)(a3 + 8), 0);
        v13 = a6;
        if ( v18 )
        {
          v19 = sub_155D40(a1, v36, a4, v36, a2, &v41);
          v13 = a6;
          if ( !v19 )
            goto LABEL_28;
        }
      }
      if ( v13 )
      {
        v37 = v13;
        if ( (unsigned __int8)sub_122240(a2, *(_QWORD *)(v13 + 8), 0) )
        {
          if ( !(unsigned __int8)sub_155D40(a1, v37, a7, v37, a2, 0) )
            goto LABEL_28;
        }
      }
      sub_1558B0(&v41);
      v48[1] = 0;
      v49[1] = 0;
      v20 = a2[3];
      v50[1] = 0;
      v48[0] = 0xFFFFFFFF00000000LL;
      v49[0] = 0xFFFFFFFF00000000LL;
      v50[0] = 0xFFFFFFFF00000000LL;
      v34 = v47;
      sub_330970(v47, v20);
      v47[0] = 14;
      sub_125180(v48);
      sub_12B320(v48, v35, a2[3], *(unsigned int *)(a5 + 4));
      sub_125180(v49);
      v38 = sub_157240(a1, v48, a5);
      if ( !v38 )
      {
LABEL_27:
        sub_11CDA0(v50);
        sub_11CDA0(v49);
        sub_11CDA0(v48);
LABEL_28:
        sub_155800(&v41);
        return v38;
      }
      sub_1571F0(a1, a2, v48, a2, a5, 0);
      if ( a8 )
      {
        if ( a9 )
        {
          if ( !under_debugger )
            sub_383060(51276);
          goto LABEL_47;
        }
        sub_1571F0(a1, a2, v49, a2, a8, 0);
      }
      else if ( (a9 & 4) == 0 )
      {
        sub_1207E0(v49, v35, (unsigned int)((a9 & 2) == 0) + 8, a2[3], HIDWORD(v48[0]));
        if ( (a9 & 1) != 0 )
          sub_1207E0(v49, v35, 5, a2[3], HIDWORD(v49[0]));
      }
      sub_179140(a1, a2);
      sub_125180(v50);
      if ( !(unsigned __int8)sub_131730(v35, a1, v47, v50, (unsigned int)(2 * HIDWORD(v50[0])), 1, 1) )
      {
        v32 = HIDWORD(v50[0]);
        sub_11CDA0(v50);
        HIDWORD(v50[0]) = 2 * v32;
        goto LABEL_25;
      }
      sub_123A40(v40);
      if ( (unsigned __int8)sub_12AB50(v40, v35, *(unsigned int *)(a5 + 4), 1) )
      {
        v44[0] = 0;
        v44[1] = 0;
        v45 = 0;
        v46 = 0;
        sub_127FE0(a1, (__int64)v44, (__int64)v40, 1u, v21, v22, v27, v28, (int)v44, (int)v40, (__int64)v47);
        v23 = sub_129150(a1, v30, a2[2], 0, v30, 0, 257);
        if ( v23 )
        {
          if ( *(_DWORD *)v23 == 14 )
          {
            v29 = v23;
            if ( (unsigned __int8)sub_130BC0(a1, *(_QWORD *)(v23 + 8), v23 + 64, a2[1], a2 + 8, 0) )
            {
              if ( !sub_A9D90(a1, v30, *(_QWORD *)(v29 + 8), a2, 1) )
              {
                sub_11D5A0(v29);
                if ( v45 )
                {
                  *(_QWORD *)&v46 = 0;
                  qfree(v45);
                }
                qfree(v44[0]);
                sub_11CDA0(v31);
                sub_11D890(a2, v34);
                v26 = *(_DWORD *)(a1 + 24);
                BYTE1(v26) &= ~2u;
                LOBYTE(v26) = v26 | 0x80;
                *(_DWORD *)(a1 + 24) = v26;
                sub_11D5D0(a2, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL));
                sub_992D0(a1, (__int64)a2);
                goto LABEL_26;
              }
            }
          }
        }
        if ( v45 )
        {
          *(_QWORD *)&v46 = 0;
          qfree(v45);
        }
        qfree(v44[0]);
        sub_11CDA0(v31);
LABEL_25:
        sub_12B6F0(v34, v35, 11, *(unsigned int *)(a5 + 4), 1);
        sub_125180(v50);
        sub_11D890(a2, v34);
LABEL_26:
        v24 = *(_DWORD *)(a1 + 24);
        BYTE1(v24) &= ~2u;
        LOBYTE(v24) = v24 | 0x80;
        *(_DWORD *)(a1 + 24) = v24;
        goto LABEL_27;
      }
      if ( !under_debugger )
        sub_383060(51277);
LABEL_47:
      BUG();
    }
    v15 = *(_DWORD *)(a7 + 4);
  }
  if ( !v15 || 2 * v9 == v15 )
    goto LABEL_8;
  return v38;
}
