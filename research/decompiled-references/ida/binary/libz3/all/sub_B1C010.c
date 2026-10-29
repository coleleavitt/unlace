void __fastcall sub_B1C010(__int64 a1, unsigned int a2, unsigned int *a3, unsigned int a4, int *a5, unsigned int **a6)
{
  unsigned int *v6; // r15
  unsigned int *v7; // r14
  unsigned int v8; // r13d
  unsigned int v9; // ebp
  unsigned int v10; // r12d
  unsigned __int64 v11; // rax
  unsigned int v12; // esi
  int v13; // ecx
  unsigned __int64 v14; // rdx
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // esi
  unsigned int *v18; // rsi
  unsigned int *v19; // rax
  unsigned int *v20; // rbx
  unsigned int *v21; // rsi
  unsigned int v22; // r12d
  unsigned int *v23; // rcx
  unsigned int *v24; // r12
  __int64 v25; // rbp
  unsigned int *v26; // rbp
  unsigned int i; // r15d
  unsigned int *v28; // r15
  __int64 v29; // r13
  unsigned int *v30; // r14
  int v31; // ecx
  int v32; // esi
  int v33; // edx
  __int64 v34; // r13
  int v35; // ecx
  int v36; // esi
  __int64 v37; // r15
  int v38; // eax
  int v39; // edx
  unsigned int v40; // esi
  unsigned int *v41; // [rsp+0h] [rbp-88h]
  int v42; // [rsp+0h] [rbp-88h]
  __int64 v43; // [rsp+0h] [rbp-88h]
  int v45; // [rsp+8h] [rbp-80h]
  unsigned int **v46; // [rsp+8h] [rbp-80h]
  unsigned int *v47; // [rsp+10h] [rbp-78h]
  int v48; // [rsp+10h] [rbp-78h]
  unsigned int **v49; // [rsp+10h] [rbp-78h]
  unsigned int *v50; // [rsp+20h] [rbp-68h] BYREF
  unsigned int *v51; // [rsp+28h] [rbp-60h] BYREF
  unsigned int *v52; // [rsp+30h] [rbp-58h] BYREF
  unsigned int *v53; // [rsp+38h] [rbp-50h] BYREF
  __int64 v54; // [rsp+40h] [rbp-48h] BYREF
  __int64 v55[8]; // [rsp+48h] [rbp-40h] BYREF

  v6 = a3;
  v7 = (unsigned int *)a5;
  v8 = a4;
  v9 = a2;
  if ( a2 == 1 && a4 == 1 )
  {
    v38 = sub_B16F10(a1, *a3, *a5);
    v39 = *v7;
    v40 = *v6;
    LODWORD(v54) = v38;
    LODWORD(v55[0]) = sub_B19BA0(a1, v40, v39);
    sub_B0E5E0(a6, (unsigned int *)&v54);
    sub_B0E5E0(a6, (unsigned int *)v55);
    sub_B1AF70(a1, *v6, *v7, v54, v55[0]);
  }
  else if ( a2 )
  {
    while ( 1 )
    {
      if ( !v8 )
      {
        do
        {
          v18 = v6;
          ++v8;
          ++v6;
          sub_B0E5E0(a6, v18);
        }
        while ( v8 < v9 );
        return;
      }
      if ( v9 <= 9 && v8 <= 9 )
      {
        v10 = v8 + v9;
        v11 = sub_B1BE80(a1, v9, v8, v8 + v9);
        v12 = v8;
        v13 = *(_DWORD *)(a1 + 16);
        v14 = v11;
        v15 = v9;
        if ( v8 + v9 <= v9 )
          v15 = v8 + v9;
        if ( v10 <= v8 )
          v12 = v8 + v9;
        v16 = (v12 * v15) >> 1;
        if ( v13 != 1 )
        {
          v17 = v10 + v16;
          v16 += v10 + v16;
          if ( !v13 )
            v16 = v17;
        }
        if ( v16 + 5 * v10 < HIDWORD(v14) + 5 * (int)v14 )
        {
          sub_B18A00(a1, v10, v9, (__int64)v6, v8, (__int64)v7, a6);
          return;
        }
      }
      if ( (v9 & 1) != 0 || (v8 & 1) == 0 )
        break;
      v19 = v6;
      v6 = v7;
      v7 = v19;
      LODWORD(v19) = v9;
      v9 = v8;
      v8 = (unsigned int)v19;
    }
    v41 = nullptr;
    v22 = 0;
    do
    {
      v50 = v41;
      sub_B0E5E0(&v50, &v6[v22]);
      v22 += 2;
      v41 = v50;
    }
    while ( v22 < v9 );
    if ( v9 == 1 )
    {
      v24 = nullptr;
    }
    else
    {
      v23 = v6 + 1;
      v24 = nullptr;
      v25 = (__int64)&v6[2 * ((v9 - 2) >> 1) + 3];
      do
      {
        v51 = v24;
        v47 = v23;
        sub_B0E5E0(&v51, v23);
        v24 = v51;
        v23 = v47 + 2;
      }
      while ( v47 + 2 != (unsigned int *)v25 );
    }
    v26 = nullptr;
    for ( i = 0; i < v8; i += 2 )
    {
      v52 = v26;
      sub_B0E5E0(&v52, &v7[i]);
      v26 = v52;
    }
    if ( v8 == 1 )
    {
      v30 = nullptr;
    }
    else
    {
      v28 = v7 + 1;
      v29 = (__int64)&v7[2 * ((v8 - 2) >> 1) + 3];
      v30 = nullptr;
      do
      {
        v53 = v30;
        sub_B0E5E0(&v53, v28);
        v28 += 2;
        v30 = v53;
      }
      while ( v28 != (unsigned int *)v29 );
    }
    if ( v26 )
      v31 = *(v26 - 1);
    else
      v31 = 0;
    if ( v41 )
    {
      v32 = *(v41 - 1);
      v33 = (int)v41;
    }
    else
    {
      v32 = 0;
      v33 = 0;
    }
    v54 = 0;
    sub_B1C010(a1, v32, v33, v31, (_DWORD)v26, (unsigned int)&v54, (_DWORD)v41, (_DWORD)a6, (unsigned int)&v54);
    v34 = v54;
    if ( v30 )
      v35 = *(v30 - 1);
    else
      v35 = 0;
    if ( v24 )
      v36 = *(v24 - 1);
    else
      v36 = 0;
    v55[0] = 0;
    sub_B1C010(a1, v36, (_DWORD)v24, v35, (_DWORD)v30, (unsigned int)v55, v42, v45, v48);
    v37 = v55[0];
    sub_B171C0(a1, v49, v55, v46);
    if ( v37 )
      sub_186B220((void *)(v37 - 8));
    if ( v34 )
      sub_186B220((void *)(v34 - 8));
    if ( v30 )
      sub_186B220(v30 - 2);
    if ( v26 )
      sub_186B220(v26 - 2);
    if ( v24 )
      sub_186B220(v24 - 2);
    if ( v43 )
      sub_186B220((void *)(v43 - 8));
  }
  else if ( a4 )
  {
    v20 = (unsigned int *)&a5[a4];
    do
    {
      v21 = v7++;
      sub_B0E5E0(a6, v21);
    }
    while ( v20 != v7 );
  }
}

