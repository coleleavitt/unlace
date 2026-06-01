__int64 __fastcall sub_103560(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  __int64 v6; // rsi
  int v9; // r13d
  _DWORD *v10; // rdi
  unsigned __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rcx
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rdx
  __int64 v16; // r15
  int v17; // r8d
  int v18; // r9d
  int v19; // r12d
  __int64 v20; // rdi
  unsigned int v21; // ecx
  __int64 v22; // rax
  __int64 v23; // r14
  __int64 v24; // rdi
  char v25; // r13
  __int64 v26; // rax
  int v27; // r15d
  __int64 v28; // r12
  __int64 v29; // rsi
  _QWORD *v30; // rbp
  unsigned __int64 v31; // rdi
  _BYTE *v32; // rax
  __int64 v33; // r12
  __int64 v34; // rbp
  __int64 v35; // r12
  int v36; // r14d
  __int64 v37; // r13
  __int64 v38; // rdx
  unsigned __int64 v39; // rcx
  __int64 v40; // rdx
  unsigned __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // [rsp+18h] [rbp-70h]
  __int64 v47; // [rsp+28h] [rbp-60h] BYREF
  _QWORD *v48; // [rsp+30h] [rbp-58h] BYREF
  __int128 v49; // [rsp+38h] [rbp-50h]
  unsigned __int64 v50; // [rsp+48h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 32);
  v50 = __readfsqword(0x28u);
  if ( *(char *)(v6 + 4) < 0 && *(char *)(a1 + 160) >= 0 )
    return 0;
  if ( *(_BYTE *)a2 == 4 )
  {
    v10 = *(_DWORD **)(a2 + 8);
    if ( *v10 != 2 || (*(_BYTE *)(a1 + 160) & 0x20) == 0 )
    {
LABEL_5:
      if ( *(_DWORD *)(a2 + 4) != -1 )
      {
        v9 = sub_207610(a2, v6);
        if ( (unsigned __int8)sub_32F330(a2, &v48) )
          sub_1029D0(a1, (unsigned __int64)v48, v9, a4);
      }
      return 0;
    }
    v11 = sub_11E7F0(v10 + 8, v10 + 12);
    v12 = *(_QWORD *)(a1 + 8);
    if ( v11 == -1 )
    {
      v44 = sub_18D270(v12, 0);
      sub_1029D0(
        a1,
        (v44 - *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1440LL))
      & *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL) + 24LL) + 16LL),
        v45,
        0);
      sub_1029D0(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 168LL),
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 128LL) - *(_QWORD *)(*(_QWORD *)(a1 + 8) + 168LL),
        0);
    }
    else
    {
      v13 = *(_QWORD *)(v12 + 576);
      v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 1496) + 24LL) + 16LL) & (v11 - *(_QWORD *)(v12 + 1440));
      v15 = *(_QWORD *)(v12 + 568);
      if ( v11 >= v15 && v13 && v13 + v15 - 1 >= v11 )
      {
        sub_1029D0(a1, v14, *(_QWORD *)(v12 + 136) - v14, 0);
      }
      else
      {
        v38 = *(_QWORD *)(v12 + 640);
        v39 = *(_QWORD *)(v12 + 632);
        if ( v38 && v11 >= v39 && v38 + v39 - 1 >= v11 )
        {
          sub_1029D0(a1, v14, *(int *)(v12 + 120) - v14, 0);
        }
        else
        {
          v40 = *(_QWORD *)(v12 + 672);
          v41 = *(_QWORD *)(v12 + 664);
          if ( v40 && v11 >= v41 && v40 + v41 - 1 >= v11 )
            sub_1029D0(a1, v14, *(_QWORD *)(v12 + 128) - v14, 0);
        }
      }
    }
    return 0;
  }
  if ( *(_BYTE *)a2 != 8 )
    goto LABEL_5;
  v16 = *(_QWORD *)(a2 + 8);
  v19 = sub_32FB00(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL), *(unsigned int *)(v16 + 284));
  if ( v19 == -1 )
    goto LABEL_29;
  v20 = *(_QWORD *)(a2 + 8);
  v21 = *(_DWORD *)(v20 + 284);
  if ( v21 > 0x26 )
    goto LABEL_45;
  v22 = 1LL << v21;
  if ( ((1LL << v21) & 0x80000001CLL) != 0 )
  {
    v34 = *(_QWORD *)(v16 + 24);
    if ( *(_BYTE *)v34 == 10 )
    {
      if ( (unsigned __int8)sub_11FD80(v34 + 160, &v47, 0) )
      {
        v35 = v47 * v19;
        v36 = 1;
        v37 = v35;
      }
      else
      {
        v36 = 2;
        v37 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 128LL);
        v35 = v37;
      }
      v47 = v35;
      if ( (unsigned __int8)sub_32F330(*(_QWORD *)(v34 + 8), &v48) )
        sub_1029D0(a1, (unsigned __int64)v48, v37, v36);
    }
    return 0;
  }
  if ( (v22 & 0x5000000140LL) != 0 )
  {
    v32 = *(_BYTE **)(v16 + 24);
    if ( *v32 == 10 )
    {
      v33 = sub_32F220(v32 + 80, v19);
      if ( v33 >= 0 )
      {
        if ( (unsigned __int8)sub_32F330(*(_QWORD *)(*(_QWORD *)(v16 + 24) + 8LL), &v48) )
          sub_1029D0(a1, (unsigned __int64)v48, v33, 1);
        if ( (unsigned __int8)sub_32F330(*(_QWORD *)(v16 + 24) + 80LL, &v48) )
        {
          sub_1029D0(a1, (unsigned __int64)v48, v33, 0);
          return 0;
        }
      }
    }
    goto LABEL_29;
  }
  if ( (v22 & 0x400000020LL) == 0 )
  {
LABEL_45:
    sub_11E5D0(v20, a1 + 120, *(_QWORD *)(a1 + 8), v21, v17, v18);
    goto LABEL_29;
  }
  v23 = *(_QWORD *)(v16 + 24);
  v24 = v23 + 160;
  if ( *(_BYTE *)(v23 + 80) != 10 )
  {
    if ( *(_BYTE *)v23 == 10 )
    {
      v25 = 0;
      goto LABEL_24;
    }
LABEL_29:
    if ( (*(_BYTE *)(a1 + 160) & 0x20) != 0 )
    {
      v29 = *(_QWORD *)(a2 + 8);
      v48 = nullptr;
      v49 = 0;
      sub_101E10(&v48, v29 + 216);
      sub_3180C0(&v48, a1 + 48);
      v30 = v48;
      if ( 16LL * (_QWORD)v49 )
      {
        do
        {
          sub_1029D0(
            a1,
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL) + 24LL) + 16LL)
          & (*v30 - *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1440LL)),
            v30[1],
            0);
          v31 = (unsigned __int64)v48;
          v30 += 2;
        }
        while ( v30 != &v48[2 * (_QWORD)v49] );
      }
      else
      {
        v31 = (unsigned __int64)v48;
      }
      if ( v31 )
      {
        *(_QWORD *)&v49 = 0;
        qfree();
      }
    }
    return 0;
  }
  if ( (unsigned __int8)sub_11FD80(v24, &v47, 0) )
  {
    v42 = v47 * v19;
    v43 = v42;
  }
  else
  {
    v43 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 128LL);
    v42 = v43;
  }
  v47 = v42;
  v46 = v43;
  v25 = sub_32F330(*(_QWORD *)(v23 + 88), &v48);
  if ( v25 )
  {
    sub_1029D0(a1, (unsigned __int64)v48, v46, 0);
    v23 = *(_QWORD *)(v16 + 24);
    if ( *(_BYTE *)v23 != 10 )
      return 0;
  }
  else
  {
    v23 = *(_QWORD *)(v16 + 24);
    if ( *(_BYTE *)v23 != 10 )
      goto LABEL_29;
  }
  v24 = v23 + 160;
LABEL_24:
  if ( (unsigned __int8)sub_11FD80(v24, &v47, 0) )
  {
    v26 = v47 * v19;
    v27 = 1;
    v28 = v26;
  }
  else
  {
    v27 = 2;
    v28 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 128LL);
    v26 = v28;
  }
  v47 = v26;
  if ( (unsigned __int8)sub_32F330(*(_QWORD *)(v23 + 8), &v48) )
    sub_1029D0(a1, (unsigned __int64)v48, v28, v27);
  if ( !v25 )
    goto LABEL_29;
  return 0;
}
