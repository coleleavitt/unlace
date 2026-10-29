__int64 __fastcall sub_6D3AC0(_QWORD *a1, __int64 *a2, __int64 a3, int *a4, __int64 *a5)
{
  __int64 v8; // r15
  _QWORD *v9; // rax
  unsigned int *v10; // rbx
  __int64 *v11; // rbp
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned int v15; // eax
  bool v16; // zf
  unsigned int v17; // r12d
  _DWORD *v19; // rdx
  int j; // eax
  int v21; // ecx
  __int64 v22; // r15
  int v23; // ecx
  __int64 v24; // rsi
  unsigned int i; // ecx
  __int64 v26; // rdx
  _DWORD *v27; // rax
  __int64 *v28; // rdx
  char v29; // cl
  int v30; // eax
  __int64 v31; // rax
  char v32; // dl
  char v33; // si
  char v34; // dl
  char v35; // si
  __int64 v36; // rax
  __int64 v38; // [rsp+10h] [rbp-98h]
  __int64 v39; // [rsp+10h] [rbp-98h]
  unsigned int v40; // [rsp+1Ch] [rbp-8Ch]
  char v41; // [rsp+37h] [rbp-71h] BYREF
  __int64 *v42; // [rsp+38h] [rbp-70h] BYREF
  unsigned int *v43; // [rsp+40h] [rbp-68h] BYREF
  __int64 v44; // [rsp+48h] [rbp-60h] BYREF
  __int64 v45; // [rsp+50h] [rbp-58h] BYREF
  __int64 v46; // [rsp+58h] [rbp-50h]
  __int64 v47; // [rsp+60h] [rbp-48h] BYREF
  __int64 v48; // [rsp+68h] [rbp-40h]

  v8 = *a2;
  v9 = (_QWORD *)sub_186B270(0x18u);
  v9[1] = a3;
  v10 = (unsigned int *)(v9 + 1);
  v11 = nullptr;
  *v9 = 0x100000002LL;
  v12 = 1;
  while ( 1 )
  {
    v13 = (unsigned int)(v12 - 1);
    v14 = *(_QWORD *)&v10[2 * v13];
    *(v10 - 1) = v13;
    v15 = v12 - 1;
    v16 = *(_WORD *)(v14 + 4) == 0;
    v44 = v14;
    if ( !v16 || (v19 = *(_DWORD **)(*(_QWORD *)(v14 + 16) + 24LL)) == nullptr )
    {
      if ( v14 == v8 )
        break;
      goto LABEL_4;
    }
    if ( *v19 != 5 )
    {
      if ( v14 == v8 )
        break;
LABEL_13:
      if ( *v19 == 5 )
        goto LABEL_14;
      goto LABEL_4;
    }
    v23 = v19[1];
    if ( v23 == 6 )
    {
      if ( *(_DWORD *)(v14 + 24) )
      {
        v24 = *(_QWORD *)(v14 + 32);
        for ( i = 0; ; v24 = *(_QWORD *)(v14 + 8LL * i + 32) )
        {
          if ( v15 == *(v10 - 2) )
          {
            v40 = i;
            v39 = v14;
            v43 = v10;
            sub_23A6F0(&v43);
            v10 = v43;
            i = v40;
            v14 = v39;
            v15 = *(v43 - 1);
          }
          v26 = v15++;
          ++i;
          *(_QWORD *)&v10[2 * v26] = v24;
          *(v10 - 1) = v15;
          if ( i >= *(_DWORD *)(v14 + 24) )
            break;
        }
      }
      goto LABEL_5;
    }
    if ( v14 == v8 )
      break;
    if ( v23 != 9 || *(_DWORD *)(v14 + 24) != 2 || v8 != *(_QWORD *)(v14 + 32) )
    {
LABEL_14:
      if ( v19[1] == 9
        && *(_DWORD *)(v14 + 24) == 2
        && v8 == *(_QWORD *)(v14 + 40)
        && (unsigned __int8)sub_1666AE0(a1 + 2, *(_QWORD *)(v14 + 32), a4, &v45) )
      {
        goto LABEL_18;
      }
      goto LABEL_4;
    }
    v38 = v14;
    if ( (unsigned __int8)sub_1666AE0(a1 + 2, *(_QWORD *)(v14 + 40), a4, &v41) )
      goto LABEL_18;
    v14 = v38;
    if ( !*(_WORD *)(v38 + 4) )
    {
      v19 = *(_DWORD **)(*(_QWORD *)(v38 + 16) + 24LL);
      if ( v19 )
        goto LABEL_13;
    }
LABEL_4:
    v42 = v11;
    sub_6C01B0(&v42, &v44);
    v11 = v42;
LABEL_5:
    v12 = *(v10 - 1);
    if ( !v12 )
    {
      v17 = 0;
      goto LABEL_7;
    }
  }
  v45 = 1;
  v46 = 0;
  v47 = 1;
  v48 = 0;
  sub_182CBA0(qword_1C7F2C0, &v47);
  v29 = BYTE4(v45);
  v30 = *a4;
  *a4 = v45;
  LODWORD(v45) = v30;
  v31 = *((_QWORD *)a4 + 1);
  *((_QWORD *)a4 + 1) = v46;
  v32 = v29;
  v29 &= ~2u;
  v46 = v31;
  v33 = *((_BYTE *)a4 + 4);
  LOBYTE(v31) = v33 & 2;
  v33 &= ~2u;
  LOBYTE(v31) = v33 & 1 | (v29 | v31) & 0xFE;
  v34 = v33 & 0xFE | v32 & 2;
  v35 = *((_BYTE *)a4 + 20);
  BYTE4(v45) = v31;
  LODWORD(v31) = a4[4];
  *((_BYTE *)a4 + 4) = v29 & 1 | v34;
  LODWORD(v47) = v31;
  v36 = *((_QWORD *)a4 + 3);
  *((_QWORD *)a4 + 3) = v48;
  v48 = v36;
  LOBYTE(v36) = BYTE4(v47);
  a4[4] = 1;
  *((_BYTE *)a4 + 20) = v35 & 0xFC | v36 & 2;
  BYTE4(v47) = v35 & 1 | v35 & 2 | v36 & 0xFC;
  sub_25A130((char *)&v45);
LABEL_18:
  for ( j = *(v10 - 1); j; *(v10 - 1) = j )
  {
    v42 = v11;
    sub_6C01B0(&v42, &v10[2 * (j - 1)]);
    v11 = v42;
    j = *(v10 - 1) - 1;
  }
  if ( v11 && (v21 = *((_DWORD *)v11 - 1)) != 0 )
  {
    if ( v21 == 1 )
    {
      v22 = *v11;
      if ( !*(_WORD *)(*v11 + 4) )
        goto LABEL_25;
    }
    v22 = sub_15E1AF0(a1[2]);
    if ( v22 )
      goto LABEL_25;
  }
  else
  {
    v27 = *(_DWORD **)(sub_15D1F10(v8) + 24);
    if ( !v27 || *v27 != 5 || (v28 = a1 + 27, v27[1] != 1) )
      v28 = a1 + 33;
    v22 = *v28;
    if ( *v28 )
LABEL_25:
      ++*(_DWORD *)(v22 + 8);
  }
  sub_6BFE30(*a5, a5[1]);
  *a5 = v22;
  v17 = sub_168D740(a2 + 4, v22) ^ 1;
LABEL_7:
  sub_186B220(v10 - 2);
  if ( v11 )
    sub_186B220(v11 - 1);
  return v17;
}

