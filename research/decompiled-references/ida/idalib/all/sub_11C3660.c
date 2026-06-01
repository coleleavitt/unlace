void __fastcall sub_11C3660(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v7; // r14
  __int64 v8; // rbp
  int v9; // eax
  __int64 v10; // r12
  __int64 v11; // rax
  _BYTE *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rax
  const char *v16; // rbp
  size_t v17; // rax
  size_t v18; // r12
  size_t v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 *v29; // [rsp+18h] [rbp-C0h]
  void *v30[2]; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v31[16]; // [rsp+40h] [rbp-98h] BYREF
  unsigned __int8 *v32[4]; // [rsp+50h] [rbp-88h] BYREF
  __int16 v33; // [rsp+70h] [rbp-68h]

  v29 = *(__int64 **)(a1 + 8);
  sub_21B6F20(a3, a4, 3556, 0, 0);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL))(a1) )
    sub_11C1900(a3, a4, "-L", "LIBRARY_PATH");
  v7 = *(_QWORD **)a2;
  v8 = *(_QWORD *)a2 + 40LL * *(unsigned int *)(a2 + 8);
  if ( v8 != *(_QWORD *)a2 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v11 = v7[2];
        if ( !v11 || (*(_BYTE *)(a5 + 60) & 4) == 0 || *(_DWORD *)(v11 + 64) != 4 )
          break;
LABEL_9:
        v7 += 5;
        if ( (_QWORD *)v8 == v7 )
          goto LABEL_19;
      }
      if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 128LL))(a1)
        && (unsigned __int8)sub_12CCCB0(*((unsigned int *)v7 + 6)) )
      {
        break;
      }
      v9 = *((_DWORD *)v7 + 2);
      if ( v9 != 1 )
        goto LABEL_6;
LABEL_18:
      v14 = *v7;
      v7 += 5;
      sub_10DC5D0(a4, v14);
      if ( (_QWORD *)v8 == v7 )
        goto LABEL_19;
    }
    sub_FC70B0((__int64)v32, *v29, 0, 439);
    v12 = *(_BYTE **)(a1 + 16);
    v13 = (__int64)&v12[*(_QWORD *)(a1 + 24)];
    v30[0] = v31;
    sub_11BA820(v30, v12, v13);
    sub_AEC220(v32, (_BYTE *)v30[0], (signed __int64)v30[1]);
    if ( v30[0] != v31 )
      operator delete(v30[0]);
    sub_AEA040((__int64)v32);
    v9 = *((_DWORD *)v7 + 2);
    if ( v9 == 1 )
      goto LABEL_18;
LABEL_6:
    if ( v9 )
    {
      v10 = *v7;
      if ( (unsigned __int8)sub_21B9810(*v7, 3518) )
      {
        (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 640LL))(a1, a3, a4);
      }
      else if ( (unsigned __int8)sub_21B9810(v10, 3517) )
      {
        (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 648LL))(a1, a3, a4);
      }
      else if ( !(unsigned __int8)sub_21B9810(v10, 3230) || *(_DWORD *)(a1 + 60) != 20 )
      {
        sub_21B5F60(v10, a3, a4);
      }
    }
    goto LABEL_9;
  }
LABEL_19:
  v15 = sub_10DCD30(a3, 0x784u);
  if ( v15 )
  {
    v16 = **(const char ***)(v15 + 48);
    v17 = j__strlen("ArmPL");
    v18 = v17;
    if ( v16 )
    {
      v19 = j__strlen(v16);
      if ( v19 != v18 || v19 && memcmp(v16, "ArmPL", v19) )
        return;
    }
    else if ( v17 )
    {
      return;
    }
    v20 = *(unsigned int *)(a1 + 60);
    if ( (_DWORD)v20 == 7 )
    {
      v33 = 259;
      v32[0] = "--push-state";
      v23 = sub_10DA6C0(a3, (__int64)v32);
      sub_10DC5D0(a4, v23);
      v33 = 259;
      v32[0] = "--as-needed";
      v24 = sub_10DA6C0(a3, (__int64)v32);
      sub_10DC5D0(a4, v24);
    }
    else
    {
      if ( (unsigned int)v20 > 0x1F )
        return;
      v21 = 4160750114LL;
      if ( !_bittest64(&v21, v20) )
        return;
    }
    if ( !sub_10DCD30(a3, 0xBF0u) )
    {
      v33 = 259;
      v32[0] = "-lm";
      v27 = sub_10DA6C0(a3, (__int64)v32);
      sub_10DC5D0(a4, v27);
    }
    v33 = 259;
    v32[0] = "-lamath";
    v22 = sub_10DA6C0(a3, (__int64)v32);
    sub_10DC5D0(a4, v22);
    if ( !sub_10DCD30(a3, 0xBF0u) )
    {
      v33 = 259;
      v32[0] = "-lm";
      v26 = sub_10DA6C0(a3, (__int64)v32);
      sub_10DC5D0(a4, v26);
    }
    if ( *(_DWORD *)(a1 + 60) == 7 )
    {
      v32[0] = "--pop-state";
      v33 = 259;
      v25 = sub_10DA6C0(a3, (__int64)v32);
      sub_10DC5D0(a4, v25);
    }
    sub_11C3610(a1, a3, a4);
  }
}
