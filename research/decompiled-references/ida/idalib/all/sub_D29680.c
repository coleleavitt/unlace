__int64 __fastcall sub_D29680(__int64 a1, __int64 a2, __int64 a3, __int16 *a4, __int64 a5, char a6)
{
  bool v7; // zf
  int v10; // ecx
  __int64 v11; // r14
  unsigned __int64 v12; // r15
  char v13; // al
  unsigned __int64 v14; // rdx
  int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // r15
  __int64 v19; // r12
  __int64 *v20; // r12
  unsigned __int64 *v21; // rax
  __int64 v22; // r13
  __int64 v23; // rax
  __int64 v24; // rdx
  unsigned __int64 *v25; // rcx
  __int64 **v26; // rbx
  unsigned __int8 **v27; // rax
  unsigned __int8 **v28; // r13
  __int64 v29; // rdx
  __int64 v30; // rsi
  int v31; // [rsp+0h] [rbp-D8h]
  __int64 v32; // [rsp+8h] [rbp-D0h] BYREF
  char v33; // [rsp+1Fh] [rbp-B9h] BYREF
  unsigned __int64 v34; // [rsp+20h] [rbp-B8h] BYREF
  unsigned __int64 v35; // [rsp+28h] [rbp-B0h] BYREF
  _BYTE v36[48]; // [rsp+30h] [rbp-A8h] BYREF
  __int64 *v37; // [rsp+60h] [rbp-78h] BYREF
  __int128 v38; // [rsp+68h] [rbp-70h]
  __int64 v39; // [rsp+78h] [rbp-60h]
  unsigned __int64 *v40; // [rsp+80h] [rbp-58h]
  char *v41; // [rsp+88h] [rbp-50h]
  __int16 *v42; // [rsp+90h] [rbp-48h]

  v7 = *a4 == 0;
  v32 = a3;
  if ( v7 )
  {
    sub_E231E0(a1, a5);
    *(_BYTE *)(a1 + 48) = 1;
    return a1;
  }
  if ( a6 && !(unsigned __int8)sub_DC8930(a2, a3, a5, 4) && (*(_BYTE *)(sub_E32240(a2) + 1) & 8) != 0
    || !(unsigned __int8)sub_DC8350(a2, v32, a5) )
  {
    goto LABEL_5;
  }
  v10 = *(_DWORD *)(a5 + 24);
  if ( v10 == 1 )
  {
    v22 = sub_CFE3F0(a5);
    v23 = sub_CFE390(a5);
    v24 = *a4;
    v25 = *(unsigned __int64 **)(a5 + 32);
    v37 = nullptr;
    LODWORD(v39) = 1;
    v26 = &v37;
    v40 = v25;
    v38 = 0;
    v41 = (char *)(v23 * v24 + v22);
    goto LABEL_29;
  }
  v11 = *a4;
  if ( v10 != 2 )
  {
    v31 = *(_DWORD *)(a5 + 24);
    v12 = (unsigned int)sub_CFE5F0(a5);
    v34 = v12;
    v13 = sub_CFE6D0(a5);
    v14 = v12;
    v15 = v31;
    if ( !v13 )
    {
      v16 = sub_CFE630((unsigned int *)a5);
      v15 = v31;
      v14 = v16;
    }
    v7 = v15 == 0;
    v35 = v14;
    v17 = (__int16)v11;
    v37 = (__int64 *)&v35;
    *((_QWORD *)&v38 + 1) = &v32;
    v40 = &v34;
    v33 = 0;
    *(_QWORD *)&v38 = a2;
    v39 = a5;
    v41 = &v33;
    v42 = a4;
    if ( !v7 )
      goto LABEL_18;
    v18 = v12 - v14;
    if ( (v11 & 0x8000u) != 0LL )
    {
      if ( (_WORD)v11 != 0x8000 && -(__int64)(__int16)v11 <= v14 )
      {
LABEL_34:
        v14 = v35;
        v17 = (__int16)v11;
LABEL_18:
        v19 = v17 + v14;
        if ( v17 + v14 || !(unsigned __int8)sub_CFE6D0(a5) )
        {
          sub_CFE430((__int64)v36, a5, v19);
          sub_E23260(a1);
          *(_BYTE *)(a1 + 48) = 1;
          sub_E232A0(v36);
          return a1;
        }
        if ( *(_BYTE *)(sub_CFDF60(a5) + 60) )
        {
          sub_CFE430((__int64)v36, a5, 0);
          sub_E23260(a1);
          *(_BYTE *)(a1 + 48) = 1;
          sub_E232A0(v36);
          return a1;
        }
        v29 = *(unsigned int *)(a5 + 40);
        v30 = *(_QWORD *)(a5 + 32);
        v26 = (__int64 **)v36;
        sub_E231A0(v36, v30, v29);
LABEL_29:
        sub_E23260(a1);
        *(_BYTE *)(a1 + 48) = 1;
        sub_E232A0(v26);
        return a1;
      }
      sub_D294D0(&v37);
      if ( *a4 < 0 || v18 >= (__int16)v11 )
      {
LABEL_15:
        if ( v33 )
        {
          if ( (*(_BYTE *)(sub_E32240(a2) + 1) & 8) != 0 )
          {
LABEL_5:
            *(_BYTE *)(a1 + 48) = 0;
            return a1;
          }
          v14 = v35;
          v17 = *a4;
          goto LABEL_18;
        }
        LOWORD(v11) = *a4;
        goto LABEL_34;
      }
    }
    else if ( v18 >= (__int16)v11 )
    {
      goto LABEL_18;
    }
    sub_D294D0(&v37);
    goto LABEL_15;
  }
  v20 = (__int64 *)(v11 + sub_CFE750(a5));
  if ( (unsigned __int64)v20 > 1 )
  {
    v37 = (__int64 *)sub_E1EEA0(*(_QWORD *)(a2 + 400), v32);
    v27 = (unsigned __int8 **)sub_E33D20(a2, &v37, 2381, 0);
    v28 = v27;
    if ( v27 )
    {
      sub_AE9DF0(v27, (__int64)v20, 3u);
      sub_AE9DF0(v28, 1, 2u);
      sub_AE9DF0(v28, 0, 2u);
    }
  }
  v21 = *(unsigned __int64 **)(a5 + 32);
  v37 = v20;
  v38 = 0;
  LODWORD(v39) = 2;
  v40 = v21;
  sub_E23260(a1);
  *(_BYTE *)(a1 + 48) = 1;
  sub_E232A0(&v37);
  return a1;
}
