void __fastcall sub_1F6B9D0(__int64 a1, int *a2, int *a3)
{
  __int64 v3; // r14
  int *v4; // r12
  int *v6; // rbx
  int *v7; // r11
  int *v8; // r11
  __int64 v9; // r15
  __int64 v10; // r14
  __int64 v11; // r13
  int *v12; // rcx
  __int64 v13; // r8
  int *v14; // rax
  int *v15; // rdi
  int *v16; // rdx
  __int64 v17; // rsi
  int v18; // esi
  int v19; // r9d
  __int64 v20; // r9
  __int64 v21; // rsi
  int v22; // r9d
  __int64 v23; // rax
  int v24; // esi
  __int64 v25; // rsi
  __int64 v26; // r10
  int *v27; // r9
  __int64 v28; // r8
  int *v29; // rax
  int *v30; // rdi
  int *v31; // rdx
  __int64 v32; // rcx
  int v33; // ecx
  int v34; // esi
  __int64 v35; // rsi
  __int64 v36; // rcx
  int v37; // esi
  __int64 v38; // rax
  int v39; // ecx
  __int64 v40; // rsi
  __int64 v41; // [rsp+0h] [rbp-48h]
  __int64 v42; // [rsp+8h] [rbp-40h]

  v3 = (__int64)a2 - a1;
  v4 = (int *)((char *)a2 + (_QWORD)a3 - a1);
  v41 = ((__int64)a2 - a1) >> 4;
  if ( (__int64)a2 - a1 <= 96 )
  {
    sub_1F6B1D0(a1, a2);
    return;
  }
  v6 = (int *)a1;
  do
  {
    sub_1F6B1D0(a1, (int *)(a1 + 112));
    a1 += 112;
  }
  while ( (__int64)v7 - a1 > 96 );
  sub_1F6B1D0(a1, v7);
  if ( v3 > 112 )
  {
    v9 = 7;
    v42 = v3 >> 4;
    do
    {
      v10 = 2 * v9;
      v11 = 8 * v9;
      if ( v41 < 2 * v9 )
      {
        v13 = (__int64)a3;
        v25 = v41;
        v15 = v6;
        goto LABEL_21;
      }
      v12 = &v6[4 * v9];
      v13 = (__int64)a3;
      v14 = v6;
      do
      {
        v15 = &v14[v11];
        v16 = v12;
        if ( &v14[v11] == v12 )
        {
          v21 = ((char *)v12 - (char *)v14) >> 4;
          if ( (char *)v12 - (char *)v14 > 0 )
          {
            v16 = v12;
            goto LABEL_17;
          }
          goto LABEL_20;
        }
        do
        {
          v18 = *v16;
          v19 = *v14;
          if ( *v16 >= (unsigned int)*v14 && (v18 != v19 || *((_QWORD *)v16 + 1) >= *((_QWORD *)v14 + 1)) )
          {
            v17 = *((_QWORD *)v14 + 1);
            v14 += 4;
            v13 += 16;
            *(_QWORD *)(v13 - 8) = v17;
            *(_DWORD *)(v13 - 16) = v19;
            if ( v14 == v12 )
              break;
            continue;
          }
          v20 = *((_QWORD *)v16 + 1);
          v13 += 16;
          *(_DWORD *)(v13 - 16) = v18;
          v16 += 4;
          *(_QWORD *)(v13 - 8) = v20;
          if ( v14 == v12 )
            break;
        }
        while ( v15 != v16 );
        v21 = ((char *)v12 - (char *)v14) >> 4;
        if ( (char *)v12 - (char *)v14 > 0 )
        {
          do
          {
LABEL_17:
            v22 = *v14;
            v13 += 16;
            v14 += 4;
            *(_DWORD *)(v13 - 16) = v22;
            *(_QWORD *)(v13 - 8) = *((_QWORD *)v14 - 1);
            --v21;
          }
          while ( v21 );
        }
        v23 = ((char *)v15 - (char *)v16) >> 4;
        if ( (char *)v15 - (char *)v16 > 0 )
        {
          do
          {
            v24 = *v16;
            v13 += 16;
            v16 += 4;
            *(_DWORD *)(v13 - 16) = v24;
            *(_QWORD *)(v13 - 8) = *((_QWORD *)v16 - 1);
            --v23;
          }
          while ( v23 );
        }
LABEL_20:
        v12 = (int *)((char *)v12 + v11 * 4);
        v14 = v15;
        v25 = ((char *)v8 - (char *)v15) >> 4;
      }
      while ( v10 <= v25 );
LABEL_21:
      if ( v9 <= v25 )
        v25 = v9;
      v9 *= 4;
      sub_1F6B2A0(v15, &v15[4 * v25], &v15[4 * v25], v8, v13);
      v26 = 4 * v9;
      if ( v9 > v42 )
      {
        v28 = (__int64)v6;
        v40 = v42;
        v30 = a3;
        goto LABEL_38;
      }
      v27 = &a3[v11];
      v28 = (__int64)v6;
      v29 = a3;
      while ( 2 )
      {
        v30 = &v29[v26];
        v31 = v27;
        if ( &v29[v26] == v27 )
        {
          v36 = ((char *)v27 - (char *)v29) >> 4;
          if ( (char *)v27 - (char *)v29 > 0 )
          {
            v31 = v27;
            goto LABEL_34;
          }
          goto LABEL_37;
        }
        while ( 2 )
        {
          v33 = *v31;
          v34 = *v29;
          if ( *v31 >= (unsigned int)*v29 && (v33 != v34 || *((_QWORD *)v31 + 1) >= *((_QWORD *)v29 + 1)) )
          {
            v32 = *((_QWORD *)v29 + 1);
            v29 += 4;
            v28 += 16;
            *(_QWORD *)(v28 - 8) = v32;
            *(_DWORD *)(v28 - 16) = v34;
            if ( v29 == v27 )
              goto LABEL_33;
LABEL_30:
            if ( v30 == v31 )
              goto LABEL_33;
            continue;
          }
          break;
        }
        v35 = *((_QWORD *)v31 + 1);
        v28 += 16;
        *(_DWORD *)(v28 - 16) = v33;
        v31 += 4;
        *(_QWORD *)(v28 - 8) = v35;
        if ( v29 != v27 )
          goto LABEL_30;
LABEL_33:
        v36 = ((char *)v27 - (char *)v29) >> 4;
        if ( (char *)v27 - (char *)v29 > 0 )
        {
          do
          {
LABEL_34:
            v37 = *v29;
            v28 += 16;
            v29 += 4;
            *(_DWORD *)(v28 - 16) = v37;
            *(_QWORD *)(v28 - 8) = *((_QWORD *)v29 - 1);
            --v36;
          }
          while ( v36 );
        }
        v38 = ((char *)v30 - (char *)v31) >> 4;
        if ( (char *)v30 - (char *)v31 > 0 )
        {
          do
          {
            v39 = *v31;
            v28 += 16;
            v31 += 4;
            *(_DWORD *)(v28 - 16) = v39;
            *(_QWORD *)(v28 - 8) = *((_QWORD *)v31 - 1);
            --v38;
          }
          while ( v38 );
        }
LABEL_37:
        v27 = (int *)((char *)v27 + v26 * 4);
        v29 = v30;
        v40 = ((char *)v4 - (char *)v30) >> 4;
        if ( v9 <= v40 )
          continue;
        break;
      }
LABEL_38:
      if ( v10 <= v40 )
        v40 = v10;
      sub_1F6B2A0(v30, &v30[4 * v40], &v30[4 * v40], v4, v28);
    }
    while ( v41 > v9 );
  }
}
