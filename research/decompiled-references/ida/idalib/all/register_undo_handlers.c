unsigned __int64 __fastcall register_undo_handlers(int *a1, int a2, char a3, __int64 a4)
{
  int *v4; // rbx
  _QWORD *v6; // rbp
  int *v7; // r15
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  _QWORD *v14; // rdx
  __int64 v15; // r12
  char *v16; // rdi
  char *v17; // rdx
  int *v19; // r8
  unsigned __int64 v20; // r12
  unsigned __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // r15
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  _QWORD *v27; // rdi
  __int64 v28; // rcx
  _QWORD *v29; // rcx
  __int64 v30; // r12
  _QWORD *v31; // rsi
  __int64 v32; // rdx
  _QWORD *v33; // rcx
  _QWORD *v34; // rax
  unsigned __int64 v35; // rdx
  __int64 v36; // r10
  __int64 v37; // r11
  __int64 v38; // rcx
  __int64 v39; // r10
  __int64 v40; // r11
  unsigned __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rax
  int *v48; // [rsp+8h] [rbp-60h]
  int *v49; // [rsp+8h] [rbp-60h]
  __int64 v50; // [rsp+10h] [rbp-58h] BYREF
  __int64 v51; // [rsp+18h] [rbp-50h]
  unsigned __int64 v52; // [rsp+28h] [rbp-40h]

  v4 = a1;
  v52 = __readfsqword(0x28u);
  v6 = *(_QWORD **)(qword_2CCB598 + 1848);
  if ( a3 )
  {
    if ( a2 > 0 )
    {
      v19 = &a1[6 * a2];
      do
      {
        v20 = *v4;
        v21 = v6[6];
        v22 = *((_QWORD *)v4 + 2);
        v23 = *((_QWORD *)v4 + 1);
        v24 = v6[5];
        if ( v20 >= v21 )
        {
          v25 = (int)v20 + 1;
          if ( v21 != v25 )
          {
            v50 = 0;
            v51 = 0;
            if ( v25 >= v21 )
            {
              v26 = v6[7];
              v27 = v6 + 5;
              if ( (unsigned __int64)&v50 < v24 || (unsigned __int64)&v50 >= v24 + 16 * v26 )
              {
                if ( v26 < v25 )
                {
                  v48 = v19;
                  v42 = qvector_reserve(v27, v24, v25, 16);
                  v19 = v48;
                  v25 = (int)v20 + 1;
                  v6[5] = v42;
                  v24 = v42;
                  v21 = v6[6];
                }
                if ( v21 < v25 )
                {
                  v36 = v50;
                  v37 = v51;
                  do
                  {
                    v38 = v21++;
                    v38 *= 16;
                    *(_QWORD *)(v24 + v38) = v36;
                    *(_QWORD *)(v24 + v38 + 8) = v37;
                    v24 = v6[5];
                  }
                  while ( v25 != v21 );
                }
              }
              else
              {
                if ( v26 < v25 )
                {
                  v49 = v19;
                  v46 = qvector_reserve(v27, v24, v25, 16);
                  v19 = v49;
                  v25 = (int)v20 + 1;
                  v6[5] = v46;
                  v24 = v46;
                  v21 = v6[6];
                }
                if ( v21 < v25 )
                {
                  do
                  {
                    v28 = v21++;
                    v29 = (_QWORD *)(v24 + 16 * v28);
                    *v29 = 0;
                    v29[1] = 0;
                    v24 = v6[5];
                  }
                  while ( v25 != v21 );
                }
              }
            }
            v6[6] = v25;
          }
        }
        v30 = 16 * v20;
        v4 += 6;
        *(_QWORD *)(v24 + v30) = v23;
        *(_QWORD *)(v6[5] + v30 + 8) = v22;
      }
      while ( v4 != v19 );
    }
    if ( a4 )
    {
      v31 = (_QWORD *)v6[8];
      v32 = v6[9];
      v33 = &v31[v32];
      if ( v31 == v33 )
        goto LABEL_42;
      v34 = (_QWORD *)v6[8];
      while ( a4 != *v34 )
      {
        if ( v33 == ++v34 )
          goto LABEL_42;
      }
      if ( v33 == v34 )
      {
LABEL_42:
        v35 = v32 + 1;
        if ( v6[10] < v35 )
        {
          v44 = qvector_reserve(v6 + 8, v31, v35, 8);
          v45 = v6[9];
          v6[8] = v44;
          v33 = (_QWORD *)(v44 + 8 * v45);
        }
        *v33 = a4;
        ++v6[9];
      }
    }
  }
  else
  {
    if ( a2 > 0 )
    {
      v7 = &a1[6 * a2];
      do
      {
        v8 = *v4;
        v9 = v6[6];
        v10 = v6[5];
        if ( v8 >= v9 )
        {
          v11 = (int)v8 + 1;
          if ( v9 != v11 )
          {
            v50 = 0;
            v51 = 0;
            if ( (int)v8 + 1 >= v9 )
            {
              v12 = v6[7];
              if ( (unsigned __int64)&v50 < v10 || (unsigned __int64)&v50 >= v10 + 16 * v12 )
              {
                if ( v12 < v11 )
                {
                  v43 = qvector_reserve(v6 + 5, v10, v11, 16);
                  v6[5] = v43;
                  v10 = v43;
                  v9 = v6[6];
                }
                if ( v9 < v11 )
                {
                  v39 = v50;
                  v40 = v51;
                  do
                  {
                    v41 = v9++;
                    v41 *= 16LL;
                    *(_QWORD *)(v10 + v41) = v39;
                    *(_QWORD *)(v10 + v41 + 8) = v40;
                    v10 = v6[5];
                  }
                  while ( v11 != v9 );
                }
              }
              else
              {
                if ( v12 < v11 )
                {
                  v47 = qvector_reserve(v6 + 5, v10, v11, 16);
                  v6[5] = v47;
                  v10 = v47;
                  v9 = v6[6];
                }
                if ( v9 < v11 )
                {
                  do
                  {
                    v13 = v9++;
                    v14 = (_QWORD *)(v10 + 16 * v13);
                    *v14 = 0;
                    v14[1] = 0;
                    v10 = v6[5];
                  }
                  while ( v11 != v9 );
                }
              }
            }
            v6[6] = v11;
          }
        }
        v15 = 16 * v8;
        v4 += 6;
        *(_QWORD *)(v10 + v15) = 0;
        *(_QWORD *)(v6[5] + v15 + 8) = 0;
      }
      while ( v4 != v7 );
    }
    if ( a4 )
    {
      v16 = (char *)v6[8];
      v17 = &v16[8 * v6[9]];
      if ( v16 != v17 )
      {
        while ( a4 != *(_QWORD *)v16 )
        {
          v16 += 8;
          if ( v17 == v16 )
            return v52 - __readfsqword(0x28u);
        }
        if ( v16 != v17 )
        {
          memmove(v16, v16 + 8, v17 - v16 - 8);
          --v6[9];
        }
      }
    }
  }
  return v52 - __readfsqword(0x28u);
}
