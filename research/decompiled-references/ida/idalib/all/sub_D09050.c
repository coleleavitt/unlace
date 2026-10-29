__int64 __fastcall sub_D09050(__int64 a1, __int64 a2, __int64 (__fastcall *a3)(__int64, __int64), __int64 a4)
{
  unsigned __int8 **v4; // r13
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned int v7; // r13d
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int8 **v12; // rax
  __int64 v13; // r9
  unsigned __int8 **v14; // r14
  unsigned __int64 v15; // rax
  char v16; // dl
  __int64 v17; // rsi
  __int64 v18; // rax
  unsigned int v19; // r14d
  unsigned int v20; // eax
  __int64 v21; // rbx
  __int64 v22; // rsi
  char v23; // r14
  unsigned __int8 **v24; // r15
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v30; // [rsp+18h] [rbp-150h]
  __int64 v31; // [rsp+20h] [rbp-148h]
  __int64 v32; // [rsp+38h] [rbp-130h] BYREF
  void *v33; // [rsp+40h] [rbp-128h] BYREF
  signed __int64 v34; // [rsp+48h] [rbp-120h]
  _BYTE v35[16]; // [rsp+50h] [rbp-118h] BYREF
  _BYTE v36[24]; // [rsp+60h] [rbp-108h] BYREF
  int v37; // [rsp+78h] [rbp-F0h]
  _BYTE v38[24]; // [rsp+90h] [rbp-D8h] BYREF
  int v39; // [rsp+A8h] [rbp-C0h]
  void *v40; // [rsp+C0h] [rbp-A8h] BYREF
  signed __int64 v41; // [rsp+C8h] [rbp-A0h]
  _BYTE v42[32]; // [rsp+D0h] [rbp-98h] BYREF
  _BYTE v43[48]; // [rsp+F0h] [rbp-78h] BYREF
  char v44; // [rsp+120h] [rbp-48h]

  sub_D09010((__int64)v36, *(_QWORD *)(a1 + 176));
  sub_D09010((__int64)v38, *(_QWORD *)(a1 + 176));
  if ( (unsigned int)(v39 - 2) > 1 && (unsigned int)(v37 - 2) > 1 )
  {
    v7 = sub_E24160(v38, v36);
    if ( (_BYTE)v7 )
    {
      sub_E24420(&v40, v38, v36);
      if ( v44 )
      {
        v30 = sub_CFE5B0((__int64)&v40);
        v10 = sub_CFE5B0((__int64)v43);
        if ( !v30 || !v10 )
          goto LABEL_33;
        v11 = *(_QWORD *)(v30 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v30 + 16) & 4) != 0 )
          v11 = *(_QWORD *)v11;
        if ( (*(_BYTE *)(v11 + 8) & 0x7Fu) - 58 > 3 )
          BUG();
        if ( *(_BYTE *)(v11 + 9) >> 5 == 2 )
          goto LABEL_33;
        v31 = v10;
        if ( ((*(_BYTE *)(v10 + 29) >> 5) & 3) == ((*(_BYTE *)(v30 + 29) >> 5) & 3) )
          goto LABEL_33;
        v33 = (void *)sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
        v12 = (unsigned __int8 **)sub_E33D20(a1, &v33, 2471, 0);
        v13 = v30;
        v14 = v12;
        if ( v12 )
        {
          sub_AE9DF0(v12, v30, 0xAu);
          sub_B9B310(v14, (*(_BYTE *)(v30 + 29) >> 5) & 3);
          sub_AE9DF0(v14, v31, 0xAu);
          sub_B9B310(v14, (*(_BYTE *)(v31 + 29) >> 5) & 3);
          v13 = v30;
        }
        v15 = *(_QWORD *)(v13 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v13 + 16) & 4) != 0 )
          v15 = *(_QWORD *)v15;
        v16 = *(_BYTE *)(v15 + 8);
        v17 = 0;
        v18 = v15 - 64;
        if ( (v16 & 0x7Fu) - 58 < 4 )
          v17 = v18;
        if ( v14 )
          sub_AE9DF0(v14, v17, 0xAu);
        if ( v44 )
        {
LABEL_33:
          sub_E232A0(v43);
          sub_E232A0(&v40);
        }
      }
      v19 = sub_CFE750((__int64)v38);
      v20 = sub_CFE750((__int64)v36);
      v21 = *(_QWORD *)(a1 + 176);
      v22 = 2;
      if ( v19 >= v20 )
        v22 = v20 < v19 ? 3 : 0;
      v23 = a3(a4, v22);
      *(_BYTE *)sub_E216C0(v21, 8) = v23;
    }
    else
    {
      v32 = sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
      v24 = (unsigned __int8 **)sub_E33BA0(a1, &v32, 2473, 0);
      v25 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
      sub_E29020(&v33, v38, v25);
      if ( v24 )
      {
        sub_AEC220(v24, v33, v34);
        v26 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
        sub_E29020(&v40, v36, v26);
        sub_AEC220(v24, v40, v41);
      }
      else
      {
        v27 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
        sub_E29020(&v40, v36, v27);
      }
      if ( v40 != v42 )
        operator delete(v40);
      if ( v33 != v35 )
        operator delete(v33);
    }
  }
  else
  {
    v32 = sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
    v4 = (unsigned __int8 **)sub_E33BA0(a1, &v32, 2473, 0);
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
    sub_E29020(&v33, v38, v5);
    if ( v4 )
    {
      sub_AEC220(v4, v33, v34);
      v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
      sub_E29020(&v40, v36, v6);
      sub_AEC220(v4, v40, v41);
    }
    else
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
      sub_E29020(&v40, v36, v9);
    }
    if ( v40 != v42 )
      operator delete(v40);
    if ( v33 != v35 )
      operator delete(v33);
    v7 = 0;
  }
  sub_E232A0(v38);
  sub_E232A0(v36);
  return v7;
}
