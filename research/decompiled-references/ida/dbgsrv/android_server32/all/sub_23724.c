/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_23724
// Address: 0x00023724

//----- (00023724) --------------------------------------------------------
int __fastcall sub_23724(int a1, void **a2, int a3, int a4, signed int a5)
{
  signed int v6; // r6
  int result; // r0
  int v8; // r7
  int v9; // r0
  int v10; // r1
  char *v11; // r7
  bool v12; // zf
  int v13; // r7
  unsigned int v14; // r1
  int **v15; // r4
  int **v16; // r7
  _DWORD **v17; // r3
  int *v18; // r0
  int *v19; // r0
  int *v20; // r6
  unsigned int v21; // r5
  _DWORD **v22; // r6
  int *v23; // r0
  _DWORD **v24; // r2
  _DWORD *v25; // r0
  int *v26; // r1
  int *v27; // r6
  int v28; // r2
  int v29; // r2
  int v30; // r3
  int **v31; // r1
  int *v32; // r0
  int *v33; // r6
  int *v34; // r3
  unsigned int v35; // r4
  int **v36; // r7
  int *v37; // r3
  int **v38; // r2
  _DWORD *v39; // r3
  int v40; // r4
  int v41; // [sp+4h] [bp-28h]
  int v42; // [sp+8h] [bp-24h]
  char *v43; // [sp+10h] [bp-1Ch]
  int v44; // [sp+14h] [bp-18h] BYREF
  _DWORD v45[2]; // [sp+18h] [bp-14h] BYREF
  int v46; // [sp+20h] [bp-Ch]
  int v47; // [sp+24h] [bp-8h]

  v6 = 4;
  if ( a5 != 130 )
    v6 = a5;
  result = 0;
  if ( a3 != 4 )
    return result;
  if ( a2 )
  {
    v8 = a4;
    v9 = sub_66764((_BYTE *)a1, a2, a4, v6);
    a4 = v8;
    v10 = v9;
    result = -2;
    if ( v10 < 0 )
      return result;
  }
  v11 = *(char **)(a1 + 212);
  if ( v6 >= 0 )
  {
    if ( v6 != 2 )
      goto LABEL_8;
LABEL_21:
    v11 = byte_B3CC1;
    goto LABEL_22;
  }
  v41 = a4;
  v6 = 4;
  if ( (*(int (__fastcall **)(int, int, int *, int, _DWORD))(*(_DWORD *)a1 + 144))(a1, a4, &v44, 2, 0) == 2 )
  {
    if ( (_BYTE)v44 )
    {
      if ( (unsigned __int8)v44 != 112 )
      {
LABEL_19:
        v6 = 4;
        goto LABEL_20;
      }
      v12 = BYTE1(v44) == 71;
    }
    else
    {
      v12 = (BYTE1(v44) | 8) == 189;
    }
    v6 = 2;
    if ( v12 )
      goto LABEL_20;
    goto LABEL_19;
  }
LABEL_20:
  a4 = v41;
  if ( v6 == 2 )
    goto LABEL_21;
LABEL_8:
  if ( v6 == 4 )
  {
    if ( a5 == 130 )
      v11 = &byte_B3CC3;
  }
  else if ( v6 < 1 )
  {
LABEL_61:
    if ( !under_debugger )
      interr(30066);
LABEL_65:
    __debugbreak();
  }
LABEL_22:
  if ( (unsigned int)v6 > *(_DWORD *)(a1 + 216) )
    goto LABEL_61;
  v43 = v11;
  LOBYTE(v46) = v6;
  v44 = a4;
  v47 = 0;
  if ( (unsigned __int8)v6 >= 8u )
  {
    if ( !under_debugger )
      interr(1796);
    goto LABEL_65;
  }
  v13 = a4;
  if ( !(*(int (__fastcall **)(int, int, _DWORD *, signed int, _DWORD))(*(_DWORD *)a1 + 144))(a1, a4, v45, v6, 0)
    || (*(int (__fastcall **)(int, int, char *, signed int, _DWORD))(*(_DWORD *)a1 + 148))(a1, v13, v43, v6, 0) != v6 )
  {
    return 0;
  }
  v14 = v13;
  v15 = *(int ***)(a1 + 228);
  v16 = (int **)(a1 + 228);
  v17 = (_DWORD **)(a1 + 224);
  if ( v15 )
  {
    v16 = (int **)(a1 + 228);
    while ( 1 )
    {
      v18 = v15[4];
      if ( (unsigned int)v18 <= v14 )
      {
        if ( (unsigned int)v18 >= v14 )
          goto LABEL_37;
        v19 = v15[1];
        v16 = v15 + 1;
        if ( !v19 )
          goto LABEL_37;
        ++v15;
      }
      else
      {
        v19 = *v15;
        if ( !*v15 )
        {
          v16 = v15;
          goto LABEL_37;
        }
      }
      v16 = v15;
      v15 = (int **)v19;
    }
  }
  v15 = (int **)(a1 + 228);
LABEL_37:
  v42 = a1;
  v20 = *v16;
  v21 = v14;
  if ( !*v16 )
  {
    v22 = v17;
    v23 = (int *)operator new(0x28u);
    v24 = v22;
    v20 = v23;
    *((_BYTE *)v23 + 32) = 0;
    v23[9] = 0;
    *v23 = 0;
    v23[1] = 0;
    v23[2] = (int)v15;
    v23[4] = v21;
    v23[5] = -1;
    *v16 = v23;
    v25 = (_DWORD *)**v24;
    if ( v25 )
    {
      *v24 = v25;
      v26 = *v16;
    }
    else
    {
      v26 = v20;
    }
    sub_261FA(*(int **)(v42 + 228), v26);
    ++*(_DWORD *)(v42 + 232);
  }
  v27 = v20 + 5;
  v28 = v45[0];
  *v27 = v44;
  v27[1] = v28;
  v27 += 2;
  v29 = v46;
  v30 = v47;
  *v27 = v45[1];
  v27[1] = v29;
  v27[2] = v30;
  v31 = (int **)(v42 + 1000);
  v32 = *(int **)(v42 + 1004);
  if ( v32 )
  {
    v33 = (int *)(v42 + 1004);
    v34 = *(int **)(v42 + 1004);
    do
    {
      v35 = v34[4];
      if ( v35 >= v21 )
        v33 = v34;
      v36 = (int **)(v34 + 1);
      if ( v35 >= v21 )
        v36 = (int **)v34;
      v34 = *v36;
    }
    while ( *v36 );
    if ( v33 != (int *)(v42 + 1004) && v33[4] <= v21 )
    {
      v37 = (int *)v33[1];
      if ( v37 )
      {
        do
        {
          v38 = (int **)v37;
          v37 = (int *)*v37;
        }
        while ( v37 );
      }
      else
      {
        v39 = v33 + 2;
        v38 = (int **)v33[2];
        if ( *v38 != v33 )
        {
          do
          {
            v40 = *v39;
            v39 = (_DWORD *)(*v39 + 8);
            v38 = *(int ***)(v40 + 8);
          }
          while ( *v38 != (int *)v40 );
        }
      }
      if ( *v31 == v33 )
        *v31 = (int *)v38;
      --*(_DWORD *)(v42 + 1008);
      sub_27512(v32, v33);
      operator delete(v33);
    }
  }
  return 1;
}
// B3CC3: using guessed type char byte_B3CC3;
// E0550: using guessed type char under_debugger;
