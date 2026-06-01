__int64 __fastcall sub_D2AB40(__int64 a1, __int64 a2, __int64 a3, int *a4, __int64 a5, char a6)
{
  int v8; // edi
  int v11; // ecx
  __int64 v12; // r14
  unsigned __int64 v13; // r15
  char v14; // al
  unsigned __int64 v15; // rdx
  int v16; // ecx
  __int64 v17; // rax
  bool v18; // zf
  __int64 v19; // rcx
  unsigned __int64 v20; // r15
  __int64 v21; // r12
  unsigned __int64 v22; // r12
  unsigned __int64 *v23; // rax
  __int64 v24; // r13
  __int64 v25; // rax
  __int64 v26; // rdx
  unsigned __int64 *v27; // rcx
  unsigned __int64 **v28; // rbx
  unsigned __int8 **v29; // rax
  unsigned __int8 **v30; // r13
  __int64 v31; // rdx
  __int64 v32; // rsi
  int v33; // [rsp+0h] [rbp-D8h]
  __int64 v34; // [rsp+8h] [rbp-D0h] BYREF
  char v35; // [rsp+1Fh] [rbp-B9h] BYREF
  unsigned __int64 v36; // [rsp+20h] [rbp-B8h] BYREF
  unsigned __int64 v37; // [rsp+28h] [rbp-B0h] BYREF
  _BYTE v38[48]; // [rsp+30h] [rbp-A8h] BYREF
  unsigned __int64 *v39; // [rsp+60h] [rbp-78h] BYREF
  __int128 v40; // [rsp+68h] [rbp-70h]
  __int64 v41; // [rsp+78h] [rbp-60h]
  unsigned __int64 *v42; // [rsp+80h] [rbp-58h]
  char *v43; // [rsp+88h] [rbp-50h]
  int *v44; // [rsp+90h] [rbp-48h]

  v8 = *a4;
  v34 = a3;
  if ( !v8 )
  {
    sub_E231E0(a1, a5);
    *(_BYTE *)(a1 + 48) = 1;
    return a1;
  }
  if ( a6 && !(unsigned __int8)sub_DC8930(a2, a3, a5, 4) && (*(_BYTE *)(sub_E32240(a2) + 1) & 8) != 0
    || !(unsigned __int8)sub_DC8350(a2, v34, a5) )
  {
    goto LABEL_5;
  }
  v11 = *(_DWORD *)(a5 + 24);
  if ( v11 == 1 )
  {
    v24 = sub_CFE3F0(a5);
    v25 = sub_CFE390(a5);
    v26 = *a4;
    v27 = *(unsigned __int64 **)(a5 + 32);
    v39 = nullptr;
    LODWORD(v41) = 1;
    v28 = &v39;
    v42 = v27;
    v40 = 0;
    v43 = (char *)(v25 * v26 + v24);
    goto LABEL_29;
  }
  v12 = *a4;
  if ( v11 != 2 )
  {
    v33 = *(_DWORD *)(a5 + 24);
    v13 = (unsigned int)sub_CFE5F0(a5);
    v36 = v13;
    v14 = sub_CFE6D0(a5);
    v15 = v13;
    v16 = v33;
    if ( !v14 )
    {
      v17 = sub_CFE630((unsigned int *)a5);
      v16 = v33;
      v15 = v17;
    }
    v18 = v16 == 0;
    v37 = v15;
    v19 = (int)v12;
    v39 = &v37;
    *((_QWORD *)&v40 + 1) = &v34;
    v42 = &v36;
    v35 = 0;
    *(_QWORD *)&v40 = a2;
    v41 = a5;
    v43 = &v35;
    v44 = a4;
    if ( !v18 )
      goto LABEL_18;
    v20 = v13 - v15;
    if ( (int)v12 < 0 )
    {
      if ( (_DWORD)v12 != 0x80000000 && -(__int64)(int)v12 <= v15 )
      {
LABEL_34:
        v15 = v37;
        v19 = (int)v12;
LABEL_18:
        v21 = v19 + v15;
        if ( v19 + v15 || !(unsigned __int8)sub_CFE6D0(a5) )
        {
          sub_CFE430((__int64)v38, a5, v21);
          sub_E23260(a1);
          *(_BYTE *)(a1 + 48) = 1;
          sub_E232A0(v38);
          return a1;
        }
        if ( *(_BYTE *)(sub_CFDF60(a5) + 60) )
        {
          sub_CFE430((__int64)v38, a5, 0);
          sub_E23260(a1);
          *(_BYTE *)(a1 + 48) = 1;
          sub_E232A0(v38);
          return a1;
        }
        v31 = *(unsigned int *)(a5 + 40);
        v32 = *(_QWORD *)(a5 + 32);
        v28 = (unsigned __int64 **)v38;
        sub_E231A0(v38, v32, v31);
LABEL_29:
        sub_E23260(a1);
        *(_BYTE *)(a1 + 48) = 1;
        sub_E232A0(v28);
        return a1;
      }
      sub_D2A990((__int64)&v39);
      if ( *a4 < 0 || v20 >= (int)v12 )
      {
LABEL_15:
        if ( v35 )
        {
          if ( (*(_BYTE *)(sub_E32240(a2) + 1) & 8) != 0 )
          {
LABEL_5:
            *(_BYTE *)(a1 + 48) = 0;
            return a1;
          }
          v15 = v37;
          v19 = *a4;
          goto LABEL_18;
        }
        LODWORD(v12) = *a4;
        goto LABEL_34;
      }
    }
    else if ( v20 >= (int)v12 )
    {
      goto LABEL_18;
    }
    sub_D2A990((__int64)&v39);
    goto LABEL_15;
  }
  v22 = v12 + sub_CFE750(a5);
  if ( v22 > 1 )
  {
    v39 = (unsigned __int64 *)sub_E1EEA0(*(_QWORD *)(a2 + 400), v34);
    v29 = (unsigned __int8 **)sub_E33D20(a2, &v39, 2381, 0);
    v30 = v29;
    if ( v29 )
    {
      sub_AE9DF0(v29, v22, 3u);
      sub_AE9DF0(v30, 1, 2u);
      sub_AE9DF0(v30, 0, 2u);
    }
  }
  v23 = *(unsigned __int64 **)(a5 + 32);
  v39 = (unsigned __int64 *)v22;
  v40 = 0;
  LODWORD(v41) = 2;
  v42 = v23;
  sub_E23260(a1);
  *(_BYTE *)(a1 + 48) = 1;
  sub_E232A0(&v39);
  return a1;
}
