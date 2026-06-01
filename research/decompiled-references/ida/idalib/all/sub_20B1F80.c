void __fastcall sub_20B1F80(__int64 a1, int *a2, int *a3)
{
  __int64 v3; // r14
  int *v4; // r12
  __int64 v5; // r13
  int *v7; // rbx
  int *v8; // r11
  int *v9; // r11
  __int64 v10; // r14
  __int64 v11; // r15
  int *v12; // rcx
  int *v13; // r8
  int *v14; // rax
  int *v15; // rdi
  int *v16; // rdx
  int v17; // r9d
  int v18; // esi
  __int64 v19; // rsi
  __int64 v20; // rsi
  int v21; // r9d
  __int64 v22; // rax
  int v23; // esi
  __int64 v24; // rsi
  __int64 v25; // r10
  __int64 v26; // r9
  int *v27; // r15
  int *v28; // r8
  int *v29; // rax
  int *v30; // rdi
  int *v31; // rdx
  int v32; // esi
  int v33; // ecx
  __int64 v34; // rcx
  __int64 v35; // rcx
  int v36; // esi
  __int64 v37; // rax
  int v38; // ecx
  __int64 v39; // rsi
  __int64 v40; // rsi
  __int64 v41; // r9
  __int64 v42; // [rsp+0h] [rbp-38h]

  v3 = (__int64)a2 - a1;
  v4 = (int *)((char *)a2 + (_QWORD)a3 - a1);
  v5 = ((__int64)a2 - a1) >> 4;
  if ( (__int64)a2 - a1 <= 96 )
  {
    sub_209EB90(a1, a2);
  }
  else
  {
    v7 = (int *)a1;
    do
    {
      sub_209EB90(a1, (int *)(a1 + 112));
      a1 += 112;
    }
    while ( (__int64)v8 - a1 > 96 );
    sub_209EB90(a1, v8);
    if ( v3 > 112 )
    {
      v42 = v3 >> 4;
      v10 = 7;
      while ( 1 )
      {
        v11 = 8 * v10;
        if ( v5 >= 2 * v10 )
        {
          v12 = &v7[4 * v10];
          v13 = a3;
          v14 = v7;
          while ( 1 )
          {
            v15 = &v14[v11];
            v16 = v12;
            if ( &v14[v11] != v12 )
              break;
            v20 = ((char *)v12 - (char *)v14) >> 4;
            if ( (char *)v12 - (char *)v14 > 0 )
            {
              v16 = v12;
              goto LABEL_13;
            }
LABEL_16:
            v12 = (int *)((char *)v12 + v11 * 4);
            v14 = v15;
            v24 = ((char *)v9 - (char *)v15) >> 4;
            if ( 2 * v10 > v24 )
              goto LABEL_17;
          }
          do
          {
            while ( 1 )
            {
              v17 = *v16;
              v18 = *v14;
              if ( *v16 >= (unsigned int)*v14 )
                break;
              v19 = *((_QWORD *)v16 + 1);
              v16 += 4;
              *v13 = v17;
              v13 += 4;
              *((_QWORD *)v13 - 1) = v19;
              if ( v15 == v16 || v14 == v12 )
                goto LABEL_12;
            }
            v41 = *((_QWORD *)v14 + 1);
            v14 += 4;
            *v13 = v18;
            v13 += 4;
            *((_QWORD *)v13 - 1) = v41;
          }
          while ( v14 != v12 && v15 != v16 );
LABEL_12:
          v20 = ((char *)v12 - (char *)v14) >> 4;
          if ( (char *)v12 - (char *)v14 > 0 )
          {
            do
            {
LABEL_13:
              v21 = *v14;
              v13 += 4;
              v14 += 4;
              *(v13 - 4) = v21;
              *((_QWORD *)v13 - 1) = *((_QWORD *)v14 - 1);
              --v20;
            }
            while ( v20 );
          }
          v22 = ((char *)v15 - (char *)v16) >> 4;
          if ( (char *)v15 - (char *)v16 > 0 )
          {
            do
            {
              v23 = *v16;
              v13 += 4;
              v16 += 4;
              *(v13 - 4) = v23;
              *((_QWORD *)v13 - 1) = *((_QWORD *)v16 - 1);
              --v22;
            }
            while ( v22 );
          }
          goto LABEL_16;
        }
        v13 = a3;
        v24 = v5;
        v15 = v7;
LABEL_17:
        if ( v10 <= v24 )
          v24 = v10;
        v10 *= 4;
        sub_209EC40(v15, &v15[4 * v24], &v15[4 * v24], v9, v13);
        v26 = 4 * v10;
        if ( v10 <= v42 )
          break;
        v28 = v7;
        v39 = v42;
        v30 = a3;
LABEL_30:
        if ( v25 <= v39 )
          v39 = v25;
        sub_209EC40(v30, &v30[4 * v39], &v30[4 * v39], v4, v28);
        if ( v5 <= v10 )
          return;
      }
      v27 = &a3[v11];
      v28 = v7;
      v29 = a3;
      while ( 1 )
      {
        v30 = &v29[v26];
        v31 = v27;
        if ( &v29[v26] != v27 )
          break;
        v35 = ((char *)v27 - (char *)v29) >> 4;
        if ( (char *)v27 - (char *)v29 > 0 )
        {
          v31 = v27;
          goto LABEL_26;
        }
LABEL_29:
        v27 = (int *)((char *)v27 + v26 * 4);
        v29 = v30;
        v39 = ((char *)v4 - (char *)v30) >> 4;
        if ( v10 > v39 )
          goto LABEL_30;
      }
      do
      {
        while ( 1 )
        {
          v32 = *v31;
          v33 = *v29;
          if ( *v31 >= (unsigned int)*v29 )
            break;
          v34 = *((_QWORD *)v31 + 1);
          v31 += 4;
          *v28 = v32;
          v28 += 4;
          *((_QWORD *)v28 - 1) = v34;
          if ( v30 == v31 || v29 == v27 )
            goto LABEL_25;
        }
        v40 = *((_QWORD *)v29 + 1);
        v29 += 4;
        *v28 = v33;
        v28 += 4;
        *((_QWORD *)v28 - 1) = v40;
      }
      while ( v29 != v27 && v31 != v30 );
LABEL_25:
      v35 = ((char *)v27 - (char *)v29) >> 4;
      if ( (char *)v27 - (char *)v29 > 0 )
      {
        do
        {
LABEL_26:
          v36 = *v29;
          v28 += 4;
          v29 += 4;
          *(v28 - 4) = v36;
          *((_QWORD *)v28 - 1) = *((_QWORD *)v29 - 1);
          --v35;
        }
        while ( v35 );
      }
      v37 = ((char *)v30 - (char *)v31) >> 4;
      if ( (char *)v30 - (char *)v31 > 0 )
      {
        do
        {
          v38 = *v31;
          v28 += 4;
          v31 += 4;
          *(v28 - 4) = v38;
          *((_QWORD *)v28 - 1) = *((_QWORD *)v31 - 1);
          --v37;
        }
        while ( v37 );
      }
      goto LABEL_29;
    }
  }
}
