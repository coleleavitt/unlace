__int64 __fastcall sub_AE660(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v7; // r10
  __int64 v8; // r13
  __int64 v9; // r12
  __int64 v10; // rsi
  int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // rax
  bool v15; // zf
  _DWORD *v16; // rax
  int v17; // eax
  __int64 v18; // r8
  int v19; // eax
  int v20; // eax
  __int64 v21; // [rsp+8h] [rbp-A8h]
  __int64 v22; // [rsp+8h] [rbp-A8h]
  __int64 v23; // [rsp+18h] [rbp-98h]
  int v24; // [rsp+18h] [rbp-98h]
  int v25; // [rsp+18h] [rbp-98h]
  int v26; // [rsp+18h] [rbp-98h]
  unsigned __int64 v27; // [rsp+20h] [rbp-90h]
  __int64 v28; // [rsp+20h] [rbp-90h]
  _DWORD *v29; // [rsp+28h] [rbp-88h]
  __int64 v30; // [rsp+30h] [rbp-80h]
  __int64 v31; // [rsp+30h] [rbp-80h]
  _QWORD v33[2]; // [rsp+40h] [rbp-70h] BYREF
  _QWORD v34[2]; // [rsp+50h] [rbp-60h] BYREF
  _QWORD v35[10]; // [rsp+60h] [rbp-50h] BYREF

  v35[3] = __readfsqword(0x28u);
  if ( *(_DWORD *)(a3 + 68) >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL) + 88LL) )
    return 0;
  if ( a2
    && (unsigned __int8)sub_11FD40(a3, *(_QWORD *)(a2 + 8), 0)
    && (unsigned __int8)sub_12DCD0(a1, *(_QWORD *)(a3 + 8), a3 + 64, *(_QWORD *)(a2 + 8), a2 + 64) )
  {
    if ( *(_BYTE *)(a2 + 32) == 4 )
    {
      v16 = *(_DWORD **)(a2 + 40);
      if ( *v16 == 9 )
      {
        if ( v16 )
        {
          v29 = v16 + 8;
          if ( (unsigned __int8)sub_12E6A0(a1, a2, v16 + 8, a3, a3 + 32, 0) )
          {
            v23 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
            if ( (unsigned __int8)sub_12C560(v23, a1, a3, (int)a3 + 48, *(_QWORD *)(a3 + 8), (int)a3 + 64, 0)
              || (unsigned __int8)sub_12DCD0(a1, a3, a3 + 48, a2, a2 + 48) )
            {
              if ( (unsigned __int8)sub_130900(a1, a2, (_DWORD)v29, a3, (int)a3 + 32, 8) )
              {
                v35[1] = 0;
                v35[0] = 0xFFFFFFFF00000000LL;
                sub_11A5D0(v35, v29);
                sub_122C80(a2 + 32);
                if ( *(char *)(a3 + 4) >= 0 )
                  *(_DWORD *)(a2 + 4) &= ~0x80u;
                sub_11B190(a2, v23);
                if ( (unsigned __int8)sub_A9210(a1, a3, a2) )
                  sub_11B160(a3);
                sub_11A960(v35);
                return 1;
              }
            }
          }
        }
      }
    }
    if ( (unsigned __int64)*(int *)(a2 + 68) <= 8 )
    {
      v7 = sub_11A460(a3, v35);
      if ( v7 )
      {
        if ( *(_BYTE *)v35[0] == 4 )
        {
          v30 = v7;
          if ( (unsigned __int8)sub_12FAB0(a1, a3, *(_QWORD *)(v35[0] + 8LL), a2) )
          {
            if ( (*(_DWORD *)(a3 + 4) & 0x40010) == 0
              && (*(_BYTE *)(a3 + 65) & 2) == 0
              && !sub_A18D0(*(_QWORD *)(a1 + 64), a3) )
            {
              v8 = 0;
              v9 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
              v10 = *(unsigned int *)(v30 + 4);
              v11 = 8 * (*(_DWORD *)(a2 + 68) - v10);
              if ( *(_DWORD *)a3 == 20 )
              {
                if ( (unsigned __int64)v11 <= 0x3F )
                  v8 = 1LL << v11;
                --v8;
              }
              v27 = v11;
              v12 = sub_327770(*(_QWORD *)(*(_QWORD *)(v30 + 8) + 16LL), v10, 0) << v11;
              if ( v27 >= 0x40 )
                v12 = 0;
              sub_11E5D0(v30, v9, v12 | v8, *(unsigned int *)(a2 + 68), -1, 0);
              sub_122C80(a3 + 64);
              sub_122C80(v35[0]);
              sub_11B190(a3, v9);
              return 1;
            }
          }
        }
      }
    }
  }
  if ( (unsigned __int8)sub_11C480(a2) )
  {
    if ( (unsigned __int8)sub_11C480(a3) )
    {
      v13 = a2 + 64;
      if ( (unsigned __int8)sub_12E6A0(a1, *(_QWORD *)(a2 + 8), a2 + 64, *(_QWORD *)(a3 + 8), a3 + 64, 0) )
      {
        v14 = *(_QWORD *)(a1 + 480);
        v15 = *(_DWORD *)a3 == 4;
        v33[1] = 0;
        v34[1] = 0;
        v28 = *(_QWORD *)(v14 + 112);
        v33[0] = 0xFFFFFFFF00000000LL;
        v34[0] = 0xFFFFFFFF00000000LL;
        if ( !v15 )
          goto LABEL_79;
        if ( ((*(_DWORD *)a2 - 19) & 0xFFFFFFFD) == 0 )
        {
          sub_122C80(v33);
          if ( (unsigned __int8)sub_130900(a1, a2, (unsigned int)v33, a3, (int)a3 + 32, 4) )
          {
            sub_122C80(v34);
            sub_2042B0(a2 + 32, a2);
            v24 = HIDWORD(v33[0]);
            v31 = *(_QWORD *)(a2 + 24);
            v17 = round_up_power2();
            v18 = (unsigned int)v24;
            if ( LOBYTE(v34[0]) != 2 && v24 > 8 && v17 < SHIDWORD(v34[0]) )
            {
              sub_124DA0(v34, v28, (unsigned int)v17, 0);
              v18 = (unsigned int)v24;
            }
            sub_11E3A0(v34, v28, 9, v31, v18);
            goto LABEL_27;
          }
          goto LABEL_35;
        }
        if ( *(_DWORD *)a2 == 20 )
        {
          if ( (unsigned __int8)sub_11D940(a3 + 32, v35, 0) && !v35[0] )
          {
            sub_122C80(v33);
            sub_122C80(v34);
            sub_2042B0(a2 + 32, a2);
            v25 = 2 * HIDWORD(v33[0]);
            v21 = *(_QWORD *)(a2 + 24);
            v19 = round_up_power2();
            if ( LOBYTE(v33[0]) != 2 && v25 > 8 && v19 < SHIDWORD(v33[0]) )
              sub_124DA0(v33, v28, (unsigned int)v19, 0);
            sub_11E3A0(v33, v28, 9, v21, (unsigned int)v25);
            v26 = HIDWORD(v33[0]);
            v22 = *(_QWORD *)(a2 + 24);
            v20 = round_up_power2();
            if ( LOBYTE(v34[0]) != 2 && v26 > 8 && v20 < SHIDWORD(v34[0]) )
              sub_124DA0(v34, v28, (unsigned int)v20, 0);
            sub_11E3A0(v34, v28, 9, v22, (unsigned int)v26);
            goto LABEL_27;
          }
        }
        else
        {
LABEL_79:
          if ( (unsigned __int8)sub_A8800(a1, a2, (int *)a2, a3, a3, (__int64)v33, (__int64)v34, a4) )
          {
LABEL_27:
            sub_121540(v35, v13);
            if ( (unsigned __int8)sub_130900(
                                    a1,
                                    *(_QWORD *)(a2 + 8),
                                    (unsigned int)v35,
                                    *(_QWORD *)(a3 + 8),
                                    (int)a3 + 64,
                                    13)
              && (*(_DWORD *)(a2 + 4) & 0x40010) == 0
              && (*(_BYTE *)(a2 + 65) & 2) == 0
              && !sub_A18D0(*(_QWORD *)(a1 + 64), a2) )
            {
              sub_128630(v33, v28, HIDWORD(v33[0]), 2);
              sub_128630(v34, v28, HIDWORD(v34[0]), 2);
              sub_128630(v35, v28, HIDWORD(v35[0]), 2);
              sub_122C80(a2 + 32);
              sub_122C80(a2 + 48);
              sub_122C80(v13);
              if ( *(char *)(a3 + 4) >= 0 )
                *(_DWORD *)(a2 + 4) &= ~0x80u;
              sub_11B190(a2, v28);
              if ( *(_DWORD *)a3 != 4
                || a2 && (unsigned __int8)sub_11FD40(a3, *(_QWORD *)(a2 + 8), 0)
                || !(unsigned __int8)sub_A8E60(a1, a2, a3, *(_QWORD *)(a3 + 8)) )
              {
                sub_11B160(a3);
              }
              sub_11A960(v35);
              sub_11A960(v34);
              sub_11A960(v33);
              return 1;
            }
            sub_11A960(v35);
          }
        }
LABEL_35:
        sub_11A960(v34);
        sub_11A960(v33);
      }
    }
  }
  if ( *(_DWORD *)a2 == 7 || *(_DWORD *)a3 == 7 )
    return 0;
  if ( (unsigned __int8)sub_ADE30(a1, a2, a3) )
    return 1;
  return sub_ADE30(a1, a3, a2);
}
