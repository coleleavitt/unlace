__int64 __fastcall sub_720900(int **a1, int a2)
{
  int v3; // ebp
  int v5; // r15d
  int *v6; // rax
  int v7; // edx
  unsigned int v8; // r15d
  int *v9; // rax
  int **v10; // rdi
  unsigned int *v11; // r15
  int v12; // r14d
  __int64 v13; // rdx
  unsigned int *v14; // rsi
  int v16; // ecx
  __int64 v17; // rcx
  __int16 v18; // r13
  __int64 v19; // rcx
  unsigned __int16 *v20; // rsi
  int *v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  __int16 v24; // r12
  int *v25; // rax
  __int64 v26; // rdx
  unsigned __int16 *v27; // rsi
  unsigned int v28; // r10d
  char *v29; // r8
  unsigned __int64 v30; // rdx
  __int64 v31; // r9
  char *v32; // r11
  int v33; // r8d
  int v34; // r8d
  int v35; // r11d
  unsigned __int16 *v36; // r9
  int v37; // r12d
  unsigned __int16 *v38; // r9
  int v39; // r8d
  unsigned __int16 *v40; // r12
  int v41; // r14d
  __int64 v42; // rdx
  unsigned int *v43; // r12
  int v44; // r14d
  __int64 v45; // rdx
  unsigned int *v46; // rsi
  unsigned __int16 *v47; // r13
  int v48; // r14d
  __int64 v49; // rdx
  unsigned int *v50; // r13
  int v51; // r14d
  __int64 v52; // rdx
  unsigned int *v53; // rsi
  __int16 v54; // [rsp+Eh] [rbp-3Ah]

  v3 = a2;
  v54 = *((_WORD *)a1 + 817);
  if ( !*((_BYTE *)a1 + 4220) )
    v3 = -(a2 == -1);
  do
  {
    v9 = a1[333];
    v10 = *((int ***)v9 + 1);
    if ( !v10 && *((__int16 *)a1 + 817) > 0 )
    {
      v11 = (unsigned int *)(a1 + 205);
      v12 = 0;
      do
      {
        v13 = *v11;
        v14 = v11;
        ++v12;
        v11 += 8;
        sub_724B00(a1, v14, v13);
      }
      while ( v12 < *((__int16 *)a1 + 817) );
      v9 = a1[333];
      v10 = *((int ***)v9 + 1);
    }
    v5 = v9[6] + v3;
    if ( v5 >= 0 )
    {
      v6 = *v10;
      v7 = *((__int16 *)*v10 + 2);
      if ( v7 > v5 )
      {
        v16 = *v6;
        if ( *((_WORD *)a1 + 816) == 0xFFFF )
        {
          v24 = 0;
          if ( !v16 )
            v24 = *((unsigned __int8 *)v6 + 6 * v5 + 6);
          if ( !v10 && *((__int16 *)a1 + 817) > 0 )
          {
            v50 = (unsigned int *)(a1 + 205);
            v51 = 0;
            do
            {
              v52 = *v50;
              v53 = v50;
              ++v51;
              v50 += 8;
              sub_724B00(a1, v53, v52);
            }
            while ( v51 < *((__int16 *)a1 + 817) );
            v10 = *((int ***)a1[333] + 1);
          }
          v20 = (unsigned __int16 *)(a1 + 334);
          sub_723D20(v10, a1 + 334, v5);
          v25 = a1[333];
          v26 = *((_QWORD *)v25 + 1);
          if ( !v26 && *((__int16 *)a1 + 817) > 0 )
          {
            v47 = (unsigned __int16 *)(a1 + 205);
            v48 = 0;
            do
            {
              v49 = *(unsigned int *)v47;
              v20 = v47;
              v10 = a1;
              ++v48;
              v47 += 16;
              sub_724B00(a1, v20, v49);
            }
            while ( v48 < *((__int16 *)a1 + 817) );
            v25 = a1[333];
            v26 = *((_QWORD *)v25 + 1);
          }
          v23 = *(__int16 *)(*(_QWORD *)v26 + 4LL);
          if ( v5 < v23 )
          {
            v25[6] = v5;
            *((_BYTE *)v25 + 28) = 1;
            *((_WORD *)v25 + 15) = v24;
            return 1;
          }
        }
        else
        {
          if ( v16 )
          {
            v18 = 0;
          }
          else
          {
            v17 = 6LL * v5;
            if ( a2 == -1 && v7 > v5 + 1 )
            {
              v27 = (unsigned __int16 *)((char *)v6 + v17 + 6);
              v28 = *(v6 - 2);
              v29 = (char *)*(unsigned __int16 *)((char *)v6 + v17 + 16);
              v30 = (unsigned __int64)v29;
              if ( (unsigned int)v29 >= v28
                || (v30 = (unsigned __int64)&v29[(_QWORD)v6],
                    v31 = *(unsigned __int16 *)&v29[(_QWORD)v6],
                    v32 = &v29[(_QWORD)v6 + 2 + v31],
                    v33 = *(unsigned __int16 *)&v29[(_QWORD)v6],
                    (int)v30 + (int)v31 + 3 - (int)v6 >= v28)
                || (unsigned int)v30 + *(unsigned __int16 *)v32 + v33 + 4 - 1 - (unsigned int)v6 >= v28
                || (v34 = *(unsigned __int16 *)((char *)v6 + v17 + 12), v35 = *v27, v34 >= v35)
                && ((v36 = (unsigned __int16 *)*(unsigned __int16 *)((char *)v6 + v17 + 10),
                     v27 = v36,
                     (unsigned int)v36 >= v28)
                 || (v27 = (unsigned __int16 *)((char *)v36 + (_QWORD)v6),
                     v37 = *(unsigned __int16 *)((char *)v36 + (_QWORD)v6),
                     v38 = (unsigned __int16 *)((char *)v36 + (_QWORD)v6 + v37 + 2),
                     (int)v38 + 1 - (int)v6 >= v28)
                 || (unsigned int)v27 + v37 + 2 + *v38 + 2 - 1 - (unsigned int)v6 >= v28
                 || (v39 = v34 - v35, v39 > v37)
                 || v39 < v37
                 && (v30 = *(unsigned __int8 *)(v30 + 2), *((_BYTE *)v27 + v39 + 2) >= (unsigned __int8)v30)) )
              {
                sub_722BF0(v10, v27, v30);
              }
            }
            v18 = *(_WORD *)((char *)v6 + v17 + 6);
          }
          if ( !v10 && *((__int16 *)a1 + 817) > 0 )
          {
            v43 = (unsigned int *)(a1 + 205);
            v44 = 0;
            do
            {
              v45 = *v43;
              v46 = v43;
              ++v44;
              v43 += 8;
              sub_724B00(a1, v46, v45);
            }
            while ( v44 < *((__int16 *)a1 + 817) );
            v10 = *((int ***)a1[333] + 1);
          }
          v20 = (unsigned __int16 *)sub_721F30(v10, a1 + 334, v5, 0);
          if ( a1 + 334 != (int **)v20 )
          {
            v10 = a1 + 334;
            sub_71D140(a1 + 334, v20);
          }
          v21 = a1[333];
          v22 = *((_QWORD *)v21 + 1);
          if ( !v22 && *((__int16 *)a1 + 817) > 0 )
          {
            v40 = (unsigned __int16 *)(a1 + 205);
            v41 = 0;
            do
            {
              v42 = *(unsigned int *)v40;
              v20 = v40;
              v10 = a1;
              ++v41;
              v40 += 16;
              sub_724B00(a1, v20, v42);
            }
            while ( v41 < *((__int16 *)a1 + 817) );
            v21 = a1[333];
            v22 = *((_QWORD *)v21 + 1);
          }
          v23 = *(__int16 *)(*(_QWORD *)v22 + 4LL);
          if ( v5 < v23 )
          {
            v21[6] = v5;
            *((_BYTE *)v21 + 28) = 1;
            *((_WORD *)v21 + 15) = v18;
            return 1;
          }
        }
        sub_720640(v10, v20, v23, v19);
      }
    }
    if ( a2 == 1 )
      v3 = 0;
    v8 = sub_724BA0(a1, (unsigned int)(__int16)(*((_WORD *)a1 + 817) - 1));
  }
  while ( (_BYTE)v8 );
  sub_724BA0(a1, (unsigned int)v54);
  return v8;
}

