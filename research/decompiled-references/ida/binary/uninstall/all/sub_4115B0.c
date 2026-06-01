__int64 __fastcall sub_4115B0(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  __int64 v6; // r13
  unsigned int v7; // edx
  int *v9; // r12
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rsi
  int v13; // r14d
  int v14; // ebx
  __int64 v15; // rsi
  int *v16; // rbx
  time_t v17; // rax
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rax
  unsigned int v21; // ebx
  int v22; // eax
  bool v23; // zf
  __int64 v24; // rdx
  _QWORD *v25; // rax
  __int64 v26; // rax
  int v27; // r14d
  __int64 v28; // rax
  __int64 v29; // rcx
  int v30; // ecx
  int v31; // r8d
  int v32; // r9d
  int v33; // ebx
  __int64 v34; // rdx
  __int64 v35; // rax
  int *v36; // rax
  int v37; // [rsp+0h] [rbp-128h]
  int v38; // [rsp+4h] [rbp-124h]
  _QWORD *v39; // [rsp+8h] [rbp-120h]
  int v40; // [rsp+10h] [rbp-118h]
  int v41; // [rsp+14h] [rbp-114h] BYREF
  __int64 v42; // [rsp+18h] [rbp-110h] BYREF
  int v43; // [rsp+24h] [rbp-104h] BYREF
  _QWORD *v44; // [rsp+28h] [rbp-100h] BYREF
  int v45; // [rsp+34h] [rbp-F4h] BYREF
  _QWORD v46[5]; // [rsp+38h] [rbp-F0h] BYREF
  struct tm tp; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v48; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v49; // [rsp+A8h] [rbp-80h] BYREF
  int v50[4]; // [rsp+B0h] [rbp-78h] BYREF
  int v51; // [rsp+C0h] [rbp-68h]
  int v52; // [rsp+CCh] [rbp-5Ch]
  int v53; // [rsp+D4h] [rbp-54h]
  int v54; // [rsp+D8h] [rbp-50h]

  v6 = *(_QWORD *)(a1 + 8);
  v40 = 0;
  if ( a3 != 4 )
  {
    sub_458930(a2, 1, a4, "dict tzdata changeover");
    return 1;
  }
  v9 = (int *)a4[1];
  v10 = sub_4406D0(a2, v9, *(_QWORD *)(v6 + 128), v46);
  v7 = 1;
  if ( v10 )
    return v7;
  if ( !v46[0] )
  {
    v11 = sub_48DF10("key \"localseconds\" not found in dictionary", 0xFFFFFFFF);
    sub_48AFD0(a2, v11);
    return 1;
  }
  if ( (unsigned int)sub_47C250(a2, v46[0], &v49) || (unsigned int)sub_47C180(a2, a4[3], &v45) )
    return 1;
  v12 = a4[2];
  v13 = v45;
  if ( *(_UNKNOWN ***)(v12 + 24) == &off_655E20 )
  {
    v24 = *(_QWORD *)(v12 + 32);
    v25 = (_QWORD *)(v24 + 16);
    LODWORD(v24) = *(_DWORD *)(v24 + 8);
    v44 = v25;
    v37 = v24;
    v43 = v24;
  }
  else
  {
    if ( (unsigned int)sub_46FD90(a2, v12, &v43, &v44) )
      return 1;
    v37 = v43;
  }
  if ( v37 )
  {
    v26 = v49;
    v27 = 0;
    v50[0] = 0;
    v39 = v44;
    while ( 1 )
    {
      v48 = v26;
      v15 = v26;
      v28 = sub_40FFF0(a2, v26, v37, v39);
      if ( !v28 )
        break;
      if ( *(_UNKNOWN ***)(v28 + 24) == &off_655E20 )
      {
        v35 = *(_QWORD *)(v28 + 32);
        v29 = v35 + 16;
        LODWORD(v35) = *(_DWORD *)(v35 + 8);
        v42 = v29;
        v41 = v35;
      }
      else
      {
        v15 = v28;
        if ( (unsigned int)sub_46FD90(a2, v28, &v41, &v42) )
          break;
        v29 = v42;
      }
      v15 = *(_QWORD *)(v29 + 8);
      if ( (unsigned int)sub_47C180(a2, v15, v50) )
        break;
      v33 = 0;
      v38 = 0;
      if ( v27 <= 0 )
      {
LABEL_42:
        if ( v27 == 8 )
          sub_47D740((unsigned int)"loop in ConvertLocalToUTCUsingTable", v15, v18, v30, v31, v32);
        v34 = v27++;
        *((_DWORD *)&v46[1] + v34) = v50[0];
      }
      else
      {
        LODWORD(v18) = v50[0];
        while ( *((_DWORD *)&v46[1] + v33) != v50[0] )
        {
          if ( ++v33 >= v27 )
            goto LABEL_42;
        }
        v38 = 1;
      }
      v26 = v49 - v50[0];
      if ( v38 )
      {
        v18 = v49 - *((int *)&v46[1] + v33);
        v50[0] = *((_DWORD *)&v46[1] + v33);
        v48 = v18;
        goto LABEL_18;
      }
    }
  }
  else
  {
    v14 = (v49 + 0x3118A41200LL) % 86400;
    if ( v14 < 0 )
    {
      v14 += 86400;
      v51 = (v49 + 0x3118A41200LL) / 86400 - 1;
    }
    else
    {
      v51 = (v49 + 0x3118A41200LL) / 86400;
    }
    sub_40FE80(&v48, v13);
    sub_4105B0(&v48);
    tp.tm_year = v52 - 1900;
    tp.tm_mon = v53 - 1;
    tp.tm_isdst = -1;
    tp.tm_wday = -1;
    tp.tm_mday = v54;
    tp.tm_yday = -1;
    tp.tm_hour = v14 / 3600 % 24;
    v15 = (unsigned int)(v14 / 60 / 60);
    tp.tm_min = v14 / 60 % 60;
    tp.tm_sec = v14 % 60;
    sub_410E30();
    sub_4AE1A0(qword_65A470);
    v16 = __errno_location();
    *v16 = 0;
    v17 = mktime(&tp);
    LODWORD(v16) = *v16;
    v48 = v17;
    sub_4AE230(qword_65A470);
    if ( !(_DWORD)v16 && (v48 != -1 || tp.tm_yday != -1) )
    {
LABEL_18:
      v19 = 0;
      goto LABEL_19;
    }
    v15 = (__int64)"time value too large/small to represent";
    sub_48B860(a2, "time value too large/small to represent", 0);
  }
  v19 = 1;
LABEL_19:
  if ( v19 )
    return 1;
  if ( *v9 > 1 )
  {
    v36 = (int *)sub_47B2A0(v9);
    ++*v36;
    v9 = v36;
    v40 = 1;
  }
  v20 = sub_47CDC0(v48, v15, v18);
  v21 = sub_440560(a2, v9, *(_QWORD *)(v6 + 144), v20);
  if ( !v21 )
    sub_48AFD0(a2, v9);
  if ( v40 && (v22 = *v9 - 1, v23 = *v9 == 1, *v9 = v22, v22 < 0 || v23) )
  {
    sub_47B120(v9);
    return v21;
  }
  else
  {
    return v21;
  }
}

