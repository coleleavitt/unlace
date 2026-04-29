_BOOL8 __fastcall sub_13B6E0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  __int64 v8; // rax
  __int64 v9; // r12
  char v11; // al
  __int64 v12; // r15
  __int64 v13; // rbp
  __int64 v14; // rdi
  bool v15; // al
  char v16; // al
  char v17; // al
  char v18; // al
  __int64 v19; // rdi
  __int64 v20; // rdi
  char v21; // al
  char v22; // al
  unsigned __int8 v23; // al
  char v24; // al
  __int64 v25; // [rsp+0h] [rbp-C8h]
  bool v26; // [rsp+0h] [rbp-C8h]
  unsigned __int8 v27; // [rsp+0h] [rbp-C8h]
  __int64 v28; // [rsp+10h] [rbp-B8h]
  int v29; // [rsp+1Ch] [rbp-ACh]
  __int64 v30; // [rsp+20h] [rbp-A8h]
  __int64 v31[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v32; // [rsp+40h] [rbp-88h] BYREF
  __int64 v33; // [rsp+48h] [rbp-80h]
  __int64 v34; // [rsp+50h] [rbp-78h]
  __int64 v35; // [rsp+60h] [rbp-68h] BYREF
  __int64 v36; // [rsp+68h] [rbp-60h]
  __int64 v37; // [rsp+70h] [rbp-58h] BYREF
  __int128 v38; // [rsp+78h] [rbp-50h]
  unsigned __int64 v39; // [rsp+88h] [rbp-40h]

  v6 = a1[7];
  v39 = __readfsqword(0x28u);
  v8 = sub_13B260(a1, v6, a3, a4, a5, a6);
  if ( !v8 )
    return 0;
  v9 = v8;
  if ( *(_DWORD *)(v8 + 76) == 6 || *(_DWORD *)(v8 + 352) != 1 || *(_BYTE *)(v6 + 48) != 2 )
    return 0;
  v11 = *(_BYTE *)(v6 + 32);
  if ( (unsigned __int8)(v11 - 5) <= 1u || v11 == 1 )
  {
    v12 = 0;
    v25 = v6 + 32;
    v30 = v6 + 48;
    v29 = (unsigned __int8)sub_13B3C0(v9, v6 + 48, v6 + 32);
    sub_127A20((__int64)v31, (__int64)a1, v6, 1u);
    goto LABEL_9;
  }
  if ( v11 != 4 )
    return 0;
  v28 = *(_QWORD *)(a1[60] + 112LL);
  sub_124680((__int64)v31, (__int64)a1, v6, 1u);
  v12 = *(_QWORD *)(v6 + 16);
  if ( !v12 )
  {
LABEL_46:
    sub_93B40(v31);
    return 0;
  }
  while ( 1 )
  {
    sub_127A20((__int64)&v35, (__int64)a1, v12, 1u);
    if ( (unsigned __int8)sub_64780(v31, &v35) || (unsigned __int8)sub_318470(&v32, &v37) )
      goto LABEL_45;
    if ( sub_125B90((unsigned __int8 *)v12, v28, *(unsigned int **)(v6 + 40), 0) )
      break;
    sub_64280(v31, &v35);
    sub_316CB0(&v32, &v37);
    if ( v37 )
    {
      *(_QWORD *)&v38 = 0;
      qfree(v37);
    }
    qfree(v35);
    v12 = *(_QWORD *)(v12 + 16);
    if ( !v12 )
      goto LABEL_46;
  }
  v25 = v12 + 64;
  v24 = *(_BYTE *)(v12 + 64);
  if ( (unsigned __int8)(v24 - 5) > 1u && v24 != 1 || *(_DWORD *)(v12 + 68) != *(_DWORD *)(v6 + 52) )
  {
LABEL_45:
    sub_93B40(&v35);
    goto LABEL_46;
  }
  sub_93B40(&v35);
  sub_93B40(v31);
  v30 = v6 + 48;
  v29 = (unsigned __int8)sub_13B3C0(v9, v6 + 48, v25);
  sub_127A20((__int64)v31, (__int64)a1, v6, 1u);
  if ( v6 == v12 )
    v12 = 0;
LABEL_9:
  v13 = *(_QWORD *)(v6 + 16);
  if ( v12 == v13 )
    goto LABEL_14;
  while ( 1 )
  {
    v38 = 0;
    v35 = 0;
    v36 = 0;
    v37 = 0;
    sub_127FE0((__int64)a1, &v35, v25, 1u);
    if ( (unsigned __int8)sub_64780(v31, &v35) )
    {
      v14 = v37;
      if ( !v37 )
        goto LABEL_13;
      goto LABEL_12;
    }
    v16 = sub_318470(&v32, &v37);
    v14 = v37;
    if ( v16 )
      break;
    if ( v37 )
    {
      *(_QWORD *)&v38 = 0;
      qfree(v37);
    }
    qfree(v35);
    if ( *(_DWORD *)v13 != 4 )
      goto LABEL_29;
    v17 = *(_BYTE *)(v13 + 32);
    if ( ((unsigned __int8)(v17 - 5) <= 1u || v17 == 1) && sub_125B60((unsigned __int8 *)(v13 + 64), v25, 0) )
    {
      v35 = 0;
      v36 = 0;
      v37 = 0;
      v38 = 0;
      sub_127FE0((__int64)a1, &v35, v13 + 32, 1u);
      if ( (unsigned __int8)sub_64780(v31, &v35) )
      {
        v19 = v37;
        if ( v37 )
          goto LABEL_36;
      }
      else
      {
        v21 = sub_318470(&v32, &v37);
        v19 = v37;
        if ( !v21 )
        {
          if ( v37 )
          {
            *(_QWORD *)&v38 = 0;
            qfree(v37);
          }
          qfree(v35);
          v23 = sub_13B3C0(v9, v30, v13 + 32);
          v31[1] = 0;
          if ( v32 )
          {
            v27 = v23;
            v33 = 0;
            qfree(v32);
            v32 = 0;
            v23 = v27;
            v34 = 0;
          }
          v29 += v23;
          v25 = v13 + 32;
          goto LABEL_32;
        }
        if ( v37 )
        {
LABEL_36:
          *(_QWORD *)&v38 = 0;
          qfree(v19);
        }
      }
      qfree(v35);
    }
    v18 = *(_BYTE *)(v13 + 64);
    if ( (unsigned __int8)(v18 - 5) > 1u && v18 != 1 || !sub_125B60((unsigned __int8 *)(v13 + 32), v25, 0) )
      goto LABEL_29;
    v35 = 0;
    v36 = 0;
    v37 = 0;
    v38 = 0;
    sub_127FE0((__int64)a1, &v35, v13 + 64, 1u);
    if ( !(unsigned __int8)sub_64780(v31, &v35) )
    {
      v22 = sub_318470(&v32, &v37);
      v20 = v37;
      if ( !v22 )
      {
        if ( v37 )
        {
          *(_QWORD *)&v38 = 0;
          qfree(v37);
        }
        qfree(v35);
        v29 += (unsigned __int8)sub_13B3C0(v9, v30, v13 + 64);
        goto LABEL_32;
      }
      if ( !v37 )
        goto LABEL_41;
LABEL_40:
      *(_QWORD *)&v38 = 0;
      qfree(v20);
      goto LABEL_41;
    }
    v20 = v37;
    if ( v37 )
      goto LABEL_40;
LABEL_41:
    qfree(v35);
LABEL_29:
    sub_127A20((__int64)&v35, (__int64)a1, v13, 1u);
    sub_64280(v31, &v35);
    sub_316CB0(&v32, &v37);
    if ( v37 )
    {
      *(_QWORD *)&v38 = 0;
      qfree(v37);
    }
    qfree(v35);
LABEL_32:
    v13 = *(_QWORD *)(v13 + 16);
    if ( v12 == v13 )
      goto LABEL_14;
  }
  if ( v37 )
  {
LABEL_12:
    *(_QWORD *)&v38 = 0;
    qfree(v14);
  }
LABEL_13:
  qfree(v35);
LABEL_14:
  v15 = v29 != 0;
  if ( v32 )
  {
    v33 = 0;
    qfree(v32);
    v15 = v29 != 0;
  }
  v26 = v15;
  qfree(v31[0]);
  return v26;
}
