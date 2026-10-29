__int64 __fastcall sub_D41890(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  int v10; // r15d
  unsigned int v11; // r14d
  bool v12; // al
  __int64 v13; // rax
  __int64 v14; // r12
  bool v15; // r12
  unsigned __int64 v16; // r12
  __int64 *v17; // rax
  __int64 v18; // rax
  unsigned int v19; // r14d
  __int64 v20; // r13
  bool v21; // r12
  __int64 v22; // rax
  __int64 *v23; // rdx
  bool v24; // r14
  bool v25; // r14
  bool v26; // al
  unsigned __int8 **v27; // rax
  unsigned __int8 **v28; // r13
  __int64 v29; // [rsp+0h] [rbp-E8h]
  __int64 v30; // [rsp+8h] [rbp-E0h]
  bool v31; // [rsp+17h] [rbp-D1h]
  __int64 v32; // [rsp+18h] [rbp-D0h] BYREF
  char v33; // [rsp+2Fh] [rbp-B9h] BYREF
  __int64 v34; // [rsp+30h] [rbp-B8h] BYREF
  unsigned __int64 v35; // [rsp+38h] [rbp-B0h] BYREF
  void *v36; // [rsp+40h] [rbp-A8h] BYREF
  unsigned int v37; // [rsp+48h] [rbp-A0h]
  char v38; // [rsp+4Ch] [rbp-9Ch]
  unsigned __int64 *v39; // [rsp+70h] [rbp-78h] BYREF
  __int128 v40; // [rsp+78h] [rbp-70h]
  __int64 v41; // [rsp+88h] [rbp-60h]
  __int64 *v42; // [rsp+90h] [rbp-58h]
  char *v43; // [rsp+98h] [rbp-50h]
  __int64 v44; // [rsp+A0h] [rbp-48h]

  v32 = a3;
  if ( (unsigned __int8)sub_CFE940(a4) )
  {
    sub_E231E0(a1, a5);
    *(_BYTE *)(a1 + 48) = 1;
    return a1;
  }
  if ( a6 && !(unsigned __int8)sub_DC8930(a2, v32, a5, 4) && (*(_BYTE *)(sub_E32240(a2) + 1) & 8) != 0
    || !(unsigned __int8)sub_DC8350(a2, v32, a5) )
  {
    goto LABEL_5;
  }
  v10 = *(_DWORD *)(a5 + 24);
  if ( v10 == 1 )
  {
    v18 = sub_CFE3F0(a5);
    v19 = *(_DWORD *)(a4 + 8);
    v20 = v18;
    if ( v19 <= 0x40 )
      v21 = *(_QWORD *)a4 == 0;
    else
      v21 = (unsigned int)sub_2206780(a4) == v19;
    v22 = sub_CFE390(a5);
    v23 = *(__int64 **)(a5 + 32);
    v39 = nullptr;
    v40 = 0;
    LODWORD(v41) = 1;
    v42 = v23;
    v43 = (char *)(v20 - v22 * !v21);
    sub_E23260(a1);
    *(_BYTE *)(a1 + 48) = 1;
    sub_E232A0(&v39);
  }
  else
  {
    v11 = *(_DWORD *)(a4 + 8);
    if ( v10 != 2 )
    {
      v30 = (unsigned int)sub_CFE5F0(a5);
      v34 = v30;
      v29 = v30;
      if ( !(unsigned __int8)sub_CFE6D0(a5) )
        v29 = sub_CFE630((unsigned int *)a5);
      v33 = 0;
      *(_QWORD *)&v40 = a2;
      v35 = v29;
      v39 = &v35;
      *((_QWORD *)&v40 + 1) = &v32;
      v42 = &v34;
      v41 = a5;
      v43 = &v33;
      v44 = a4;
      if ( v10 )
      {
LABEL_12:
        if ( v11 <= 0x40 )
          v12 = *(_QWORD *)a4 == 0;
        else
          v12 = (unsigned int)sub_2206780(a4) == v11;
        v13 = !v12;
        v14 = v29 - v13;
        if ( v29 == v13 && (unsigned __int8)sub_CFE6D0(a5) )
        {
          if ( *(_BYTE *)(sub_CFDF60(a5) + 60) )
            sub_CFE430((__int64)&v36, a5, 0);
          else
            sub_E231A0(&v36, *(_QWORD *)(a5 + 32), *(unsigned int *)(a5 + 40));
        }
        else
        {
          sub_CFE430((__int64)&v36, a5, v14);
        }
        sub_E23260(a1);
        *(_BYTE *)(a1 + 48) = 1;
        sub_E232A0(&v36);
        return a1;
      }
      if ( v11 <= 0x40 )
        v24 = *(_QWORD *)a4 == 0;
      else
        v24 = (unsigned int)sub_2206780(a4) == v11;
      v25 = !v24;
      sub_CF8960((__int64)&v36, (__int64 *)a4);
      if ( v38 )
      {
        if ( v37 > 0x40 && v36 )
          operator delete[](v36);
      }
      else
      {
        v26 = sub_CF0820((__int64 *)&v36);
        if ( v37 > 0x40 && v36 )
        {
          v31 = v26;
          operator delete[](v36);
          v26 = v31;
        }
        if ( v26 )
          goto LABEL_37;
      }
      if ( v35 < v25 )
        sub_D416C0((__int64)&v39);
LABEL_37:
      if ( (unsigned __int8)sub_CFE9D0(a4)
        && ((unsigned __int8)sub_CFEA80(a4) || -(__int64)v25 > (unsigned __int64)(v30 - v29)) )
      {
        sub_D416C0((__int64)&v39);
      }
      if ( v33 && (*(_BYTE *)(sub_E32240(a2) + 1) & 8) != 0 )
      {
LABEL_5:
        *(_BYTE *)(a1 + 48) = 0;
        return a1;
      }
      v11 = *(_DWORD *)(a4 + 8);
      v29 = v35;
      goto LABEL_12;
    }
    if ( v11 <= 0x40 )
      v15 = *(_QWORD *)a4 == 0;
    else
      v15 = (unsigned int)sub_2206780(a4) == v11;
    v16 = sub_CFE750(a5) - !v15;
    if ( v16 > 1 )
    {
      v39 = (unsigned __int64 *)sub_E1EEA0(*(_QWORD *)(a2 + 400), v32);
      v27 = (unsigned __int8 **)sub_E33D20(a2, &v39, 2381, 0);
      v28 = v27;
      if ( v27 )
      {
        sub_AE9DF0(v27, v16, 3u);
        sub_AE9DF0(v28, 1, 2u);
        sub_AE9DF0(v28, 0, 2u);
      }
    }
    v17 = *(__int64 **)(a5 + 32);
    v39 = (unsigned __int64 *)v16;
    v40 = 0;
    LODWORD(v41) = 2;
    v42 = v17;
    sub_E23260(a1);
    *(_BYTE *)(a1 + 48) = 1;
    sub_E232A0(&v39);
  }
  return a1;
}
