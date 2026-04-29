__int64 __fastcall sub_AF430(__int64 a1, __int64 a2, __int64 a3, char a4, __int64 a5, unsigned int a6)
{
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r11
  __int64 v14; // r14
  __int64 v15; // rsi
  __int64 v16; // r13
  int v17; // ecx
  __int64 v18; // rax
  _DWORD *v19; // rax
  unsigned int v20; // eax
  int v21; // eax
  __int64 v22; // r8
  int v23; // eax
  int v24; // eax
  __int64 v25; // r8
  __int64 v26; // [rsp+0h] [rbp-B0h]
  __int64 v27; // [rsp+0h] [rbp-B0h]
  unsigned int v28; // [rsp+Ch] [rbp-A4h]
  int v29; // [rsp+10h] [rbp-A0h]
  int v30; // [rsp+10h] [rbp-A0h]
  int v31; // [rsp+10h] [rbp-A0h]
  __int64 v32; // [rsp+18h] [rbp-98h]
  unsigned __int64 v33; // [rsp+18h] [rbp-98h]
  __int64 v34; // [rsp+18h] [rbp-98h]
  __int64 v35; // [rsp+28h] [rbp-88h]
  _DWORD *v36; // [rsp+28h] [rbp-88h]
  __int64 v37; // [rsp+30h] [rbp-80h]
  _QWORD v39[2]; // [rsp+40h] [rbp-70h] BYREF
  _QWORD v40[2]; // [rsp+50h] [rbp-60h] BYREF
  _QWORD v41[10]; // [rsp+60h] [rbp-50h] BYREF

  v41[3] = __readfsqword(0x28u);
  if ( !(_BYTE)a6 || *(_DWORD *)(a3 + 68) >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL) + 88LL) )
    return 0;
  if ( a2 )
  {
    if ( (unsigned __int8)sub_122240(a3, *(_QWORD *)(a2 + 8), 0) )
    {
      v10 = a3 + 64;
      if ( (unsigned __int8)sub_1301F0(a1, *(_QWORD *)(a3 + 8), a3 + 64, *(_QWORD *)(a2 + 8), a2 + 64) )
      {
        if ( *(_BYTE *)(a2 + 32) == 4 )
        {
          v19 = *(_DWORD **)(a2 + 40);
          if ( *v19 == 9 )
          {
            if ( v19 )
            {
              v36 = v19 + 8;
              if ( (unsigned __int8)sub_130BC0(a1, a2, v19 + 8, a3, a3 + 32, 0) )
              {
                v34 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
                if ( (unsigned __int8)sub_12EA80(v34, a1, a3, (int)a3 + 48, *(_QWORD *)(a3 + 8), v10, 0)
                  || (unsigned __int8)sub_1301F0(a1, a3, a3 + 48, a2, a2 + 48) )
                {
                  if ( (unsigned __int8)sub_132E20(a1, a2, (_DWORD)v36, a3, (int)a3 + 32, 8) )
                  {
                    v41[1] = 0;
                    v41[0] = 0xFFFFFFFF00000000LL;
                    sub_11CA10(v41, v36);
                    sub_125180(a2 + 32);
                    sub_A1280(v34, a2, *(_DWORD *)(a3 + 4));
                    if ( (unsigned __int8)sub_A9F90(a1, a3, a2) )
                      sub_11D5A0(a3);
                    sub_11CDA0(v41);
                    return a6;
                  }
                }
              }
            }
          }
        }
        if ( (unsigned __int64)*(int *)(a2 + 68) <= 8 )
        {
          v13 = sub_11C8A0(a3, v41);
          if ( v13 )
          {
            if ( *(_BYTE *)v41[0] == 4 )
            {
              v35 = v13;
              if ( (unsigned __int8)sub_131FD0(a1, a3, *(_QWORD *)(v41[0] + 8LL), a2, a2) )
              {
                if ( (*(_DWORD *)(a3 + 4) & 0x40010) == 0
                  && (*(_BYTE *)(a3 + 65) & 2) == 0
                  && !sub_A2650(*(_QWORD *)(a1 + 64), a3) )
                {
                  v14 = 0;
                  v15 = *(unsigned int *)(v35 + 4);
                  v16 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
                  v17 = 8 * (*(_DWORD *)(a2 + 68) - v15);
                  if ( *(_DWORD *)a3 == 20 )
                  {
                    v25 = 0;
                    if ( (unsigned __int64)v17 <= 0x3F )
                      v25 = 1LL << v17;
                    v14 = v25 - 1;
                  }
                  v33 = v17;
                  v18 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v35 + 8) + 16LL), v15, 0) << v17;
                  if ( v33 >= 0x40 )
                    v18 = 0;
                  sub_120A10(v35, v16, v18 | v14, *(unsigned int *)(a2 + 68), -1, 0);
                  sub_125180(v10);
                  sub_125180(v41[0]);
                  sub_11D5D0(a3, v16);
                  return a6;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( !(unsigned __int8)sub_11E8C0(a2)
    || !(unsigned __int8)sub_11E8C0(a3)
    || !(unsigned __int8)sub_130BC0(a1, *(_QWORD *)(a2 + 8), a2 + 64, *(_QWORD *)(a3 + 8), a3 + 64, 0) )
  {
    goto LABEL_10;
  }
  v11 = *(_QWORD *)(a1 + 480);
  v39[1] = 0;
  v40[1] = 0;
  v12 = *(_QWORD *)(v11 + 112);
  v39[0] = 0xFFFFFFFF00000000LL;
  v40[0] = 0xFFFFFFFF00000000LL;
  v32 = v12;
  if ( *(_DWORD *)a3 != 4 )
    goto LABEL_76;
  if ( ((*(_DWORD *)a2 - 19) & 0xFFFFFFFD) == 0 )
  {
    sub_125180(v39);
    if ( (unsigned __int8)sub_132E20(a1, a2, (unsigned int)v39, a3, (int)a3 + 32, 4) )
    {
      sub_125180(v40);
      v20 = sub_207610(a2 + 32, a2);
      v29 = HIDWORD(v39[0]);
      v37 = *(_QWORD *)(a2 + 24);
      v21 = round_up_power2(v20);
      v22 = (unsigned int)v29;
      if ( LOBYTE(v40[0]) != 2 && v29 > 8 && v21 < SHIDWORD(v40[0]) )
      {
        sub_1272B0(v40, v32, (unsigned int)v21, 0);
        v22 = (unsigned int)v29;
      }
      sub_1207E0(v40, v32, 9, v37, v22);
      goto LABEL_18;
    }
    goto LABEL_46;
  }
  if ( *(_DWORD *)a2 == 20 )
  {
    if ( (unsigned __int8)sub_11FD80(a3 + 32, v41, 0) && !v41[0] )
    {
      sub_125180(v39);
      sub_125180(v40);
      v28 = sub_207610(a2 + 32, a2);
      v26 = *(_QWORD *)(a2 + 24);
      v30 = 2 * HIDWORD(v39[0]);
      v23 = round_up_power2(v28);
      if ( LOBYTE(v39[0]) != 2 && v30 > 8 && v23 < SHIDWORD(v39[0]) )
        sub_1272B0(v39, v32, (unsigned int)v23, 0);
      sub_1207E0(v39, v32, 9, v26, (unsigned int)v30);
      v31 = HIDWORD(v39[0]);
      v27 = *(_QWORD *)(a2 + 24);
      v24 = round_up_power2(v28);
      if ( LOBYTE(v40[0]) != 2 && v31 > 8 && v24 < SHIDWORD(v40[0]) )
        sub_1272B0(v40, v32, (unsigned int)v24, 0);
      sub_1207E0(v40, v32, 9, v27, (unsigned int)v31);
      goto LABEL_18;
    }
  }
  else
  {
LABEL_76:
    if ( (unsigned __int8)sub_A9580(a1, a2, (int *)a2, a3, a3, (__int64)v39, (__int64)v40, a4) )
    {
LABEL_18:
      sub_123A40(v41, a2 + 64);
      if ( (unsigned __int8)sub_132E20(
                              a1,
                              *(_QWORD *)(a2 + 8),
                              (unsigned int)v41,
                              *(_QWORD *)(a3 + 8),
                              (int)a3 + 64,
                              13)
        && (*(_DWORD *)(a2 + 4) & 0x40010) == 0
        && (*(_BYTE *)(a2 + 65) & 2) == 0
        && !sub_A2650(*(_QWORD *)(a1 + 64), a2) )
      {
        sub_12AB50(v39, v32, HIDWORD(v39[0]), 2);
        sub_12AB50(v40, v32, HIDWORD(v40[0]), 2);
        sub_12AB50(v41, v32, HIDWORD(v41[0]), 2);
        sub_125180(a2 + 32);
        sub_125180(a2 + 48);
        sub_125180(a2 + 64);
        sub_A1280(v32, a2, *(_DWORD *)(a3 + 4));
        if ( *(_DWORD *)a3 != 4
          || a2 && (unsigned __int8)sub_122240(a3, *(_QWORD *)(a2 + 8), 0)
          || !(unsigned __int8)sub_A9BE0(a1, a2, a3, *(_QWORD *)(a3 + 8)) )
        {
          sub_11D5A0(a3);
        }
        sub_11CDA0(v41);
        sub_11CDA0(v40);
        sub_11CDA0(v39);
        return a6;
      }
      sub_11CDA0(v41);
    }
  }
LABEL_46:
  sub_11CDA0(v40);
  sub_11CDA0(v39);
LABEL_10:
  if ( *(_DWORD *)a2 == 7 || *(_DWORD *)a3 == 7 )
    return 0;
  if ( (unsigned __int8)sub_AEC00(a1, a2, a3) )
    return a6;
  else
    return sub_AEC00(a1, a3, a2);
}
