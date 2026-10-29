__int64 __fastcall sub_736510(__int64 a1, int a2)
{
  int v3; // ebp
  int v5; // r15d
  _WORD *v6; // rax
  int v7; // edx
  unsigned int v8; // r15d
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned __int16 *v11; // r15
  int v12; // r14d
  __int64 v13; // rdx
  unsigned __int16 *v14; // rsi
  __int16 v16; // cx
  __int64 v17; // rcx
  char v18; // r13
  __int64 v19; // rcx
  unsigned __int16 *v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  char v24; // r12
  __int64 v25; // rax
  __int64 v26; // rdx
  unsigned __int8 *v27; // rsi
  unsigned int v28; // r10d
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // rdx
  __int64 v31; // r9
  char *v32; // r11
  int v33; // r8d
  int v34; // r8d
  int v35; // r11d
  unsigned __int64 v36; // r9
  int v37; // r12d
  unsigned __int8 *v38; // r9
  int v39; // r8d
  unsigned __int16 *v40; // r12
  int v41; // r14d
  __int64 v42; // rdx
  unsigned __int16 *v43; // r12
  int v44; // r14d
  __int64 v45; // rdx
  unsigned __int16 *v46; // rsi
  unsigned __int16 *v47; // r13
  int v48; // r14d
  __int64 v49; // rdx
  unsigned __int16 *v50; // r13
  int v51; // r14d
  __int64 v52; // rdx
  unsigned __int16 *v53; // rsi
  __int16 v54; // [rsp+Eh] [rbp-3Ah]

  v3 = a2;
  v54 = *(_WORD *)(a1 + 1634);
  if ( !*(_BYTE *)(a1 + 4220) )
    v3 = -(a2 == -1);
  do
  {
    v9 = *(_QWORD *)(a1 + 2664);
    v10 = *(_QWORD *)(v9 + 8);
    if ( !v10 && *(__int16 *)(a1 + 1634) > 0 )
    {
      v11 = (unsigned __int16 *)(a1 + 1640);
      v12 = 0;
      do
      {
        v13 = *v11;
        v14 = v11;
        ++v12;
        v11 += 16;
        sub_737D90(a1, v14, v13);
      }
      while ( v12 < *(__int16 *)(a1 + 1634) );
      v9 = *(_QWORD *)(a1 + 2664);
      v10 = *(_QWORD *)(v9 + 8);
    }
    v5 = *(_DWORD *)(v9 + 24) + v3;
    if ( v5 >= 0 )
    {
      v6 = *(_WORD **)v10;
      v7 = *(__int16 *)(*(_QWORD *)v10 + 2LL);
      if ( v7 > v5 )
      {
        v16 = *v6;
        if ( *(_WORD *)(a1 + 1632) == 0xFFFF )
        {
          v24 = 0;
          if ( !v16 )
            v24 = v6[2 * v5 + 2];
          if ( !v10 && *(__int16 *)(a1 + 1634) > 0 )
          {
            v50 = (unsigned __int16 *)(a1 + 1640);
            v51 = 0;
            do
            {
              v52 = *v50;
              v53 = v50;
              ++v51;
              v50 += 16;
              sub_737D90(a1, v53, v52);
            }
            while ( v51 < *(__int16 *)(a1 + 1634) );
            v10 = *(_QWORD *)(*(_QWORD *)(a1 + 2664) + 8LL);
          }
          v20 = (unsigned __int16 *)(a1 + 2672);
          sub_737AF0(v10, a1 + 2672, v5);
          v25 = *(_QWORD *)(a1 + 2664);
          v26 = *(_QWORD *)(v25 + 8);
          if ( !v26 && *(__int16 *)(a1 + 1634) > 0 )
          {
            v47 = (unsigned __int16 *)(a1 + 1640);
            v48 = 0;
            do
            {
              v49 = *v47;
              v20 = v47;
              v10 = a1;
              ++v48;
              v47 += 16;
              sub_737D90(a1, v20, v49);
            }
            while ( v48 < *(__int16 *)(a1 + 1634) );
            v25 = *(_QWORD *)(a1 + 2664);
            v26 = *(_QWORD *)(v25 + 8);
          }
          v23 = *(__int16 *)(*(_QWORD *)v26 + 2LL);
          if ( v5 < v23 )
          {
            *(_DWORD *)(v25 + 24) = v5;
            *(_BYTE *)(v25 + 28) = 1;
            *(_BYTE *)(v25 + 29) = v24;
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
            v17 = 2LL * v5;
            if ( a2 == -1 && v7 > v5 + 1 )
            {
              v27 = (unsigned __int8 *)&v6[v17 + 2];
              v28 = *((_DWORD *)v6 - 2);
              v29 = (unsigned __int16)v6[v17 + 5];
              v30 = v29;
              if ( (unsigned int)v29 >= v28
                || (v30 = (unsigned __int64)v6 + v29,
                    v31 = *(unsigned __int16 *)((char *)v6 + v29),
                    v32 = (char *)v6 + v29 + v31 + 2,
                    v33 = *(unsigned __int16 *)((char *)v6 + v29),
                    (int)v30 + (int)v31 + 3 - (int)v6 >= v28)
                || (unsigned int)v30 + *(unsigned __int16 *)v32 + v33 + 4 - 1 - (unsigned int)v6 >= v28
                || (v34 = LOBYTE(v6[v17 + 4]), v35 = *v27, v34 >= v35)
                && ((v36 = (unsigned __int16)v6[v17 + 3], v27 = (unsigned __int8 *)v36, (unsigned int)v36 >= v28)
                 || (v27 = (unsigned __int8 *)v6 + v36,
                     v37 = *(unsigned __int16 *)((char *)v6 + v36),
                     v38 = (unsigned __int8 *)v6 + v36 + v37 + 2,
                     (int)v38 + 1 - (int)v6 >= v28)
                 || (unsigned int)v27 + v37 + 2 + *(unsigned __int16 *)v38 + 2 - 1 - (unsigned int)v6 >= v28
                 || (v39 = v34 - v35, v39 > v37)
                 || v39 < v37 && (v30 = *(unsigned __int8 *)(v30 + 2), v27[v39 + 2] >= (unsigned __int8)v30)) )
              {
                sub_737820(v10, v27, v30);
              }
            }
            v18 = v6[v17 + 2];
          }
          if ( !v10 && *(__int16 *)(a1 + 1634) > 0 )
          {
            v43 = (unsigned __int16 *)(a1 + 1640);
            v44 = 0;
            do
            {
              v45 = *v43;
              v46 = v43;
              ++v44;
              v43 += 16;
              sub_737D90(a1, v46, v45);
            }
            while ( v44 < *(__int16 *)(a1 + 1634) );
            v10 = *(_QWORD *)(*(_QWORD *)(a1 + 2664) + 8LL);
          }
          v20 = (unsigned __int16 *)sub_737370(v10, a1 + 2672, v5, 0);
          if ( (unsigned __int16 *)(a1 + 2672) != v20 )
          {
            v10 = a1 + 2672;
            sub_7360C0((void *)(a1 + 2672), v20);
          }
          v21 = *(_QWORD *)(a1 + 2664);
          v22 = *(_QWORD *)(v21 + 8);
          if ( !v22 && *(__int16 *)(a1 + 1634) > 0 )
          {
            v40 = (unsigned __int16 *)(a1 + 1640);
            v41 = 0;
            do
            {
              v42 = *v40;
              v20 = v40;
              v10 = a1;
              ++v41;
              v40 += 16;
              sub_737D90(a1, v20, v42);
            }
            while ( v41 < *(__int16 *)(a1 + 1634) );
            v21 = *(_QWORD *)(a1 + 2664);
            v22 = *(_QWORD *)(v21 + 8);
          }
          v23 = *(__int16 *)(*(_QWORD *)v22 + 2LL);
          if ( v5 < v23 )
          {
            *(_DWORD *)(v21 + 24) = v5;
            *(_BYTE *)(v21 + 28) = 1;
            *(_BYTE *)(v21 + 29) = v18;
            return 1;
          }
        }
        sub_736270(v10, v20, v23, v19);
      }
    }
    if ( a2 == 1 )
      v3 = 0;
    v8 = sub_737E40(a1, (unsigned int)(__int16)(*(_WORD *)(a1 + 1634) - 1));
  }
  while ( (_BYTE)v8 );
  sub_737E40(a1, (unsigned int)v54);
  return v8;
}
