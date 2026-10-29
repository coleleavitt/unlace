unsigned __int64 __fastcall register_undo_handler(int a1, __int64 a2, __int64 a3, char a4)
{
  _QWORD *v5; // r12
  unsigned __int64 v6; // rdx
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  _QWORD *v16; // rax
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // [rsp+0h] [rbp-48h] BYREF
  __int64 v32; // [rsp+8h] [rbp-40h]
  unsigned __int64 v33; // [rsp+18h] [rbp-30h]

  v33 = __readfsqword(0x28u);
  v5 = *(_QWORD **)(qword_2CA1698 + 1656);
  v6 = v5[6];
  if ( a4 )
  {
    if ( a1 < v6 || (v13 = a1 + 1, v13 == v6) )
    {
      v8 = v5[5];
    }
    else
    {
      v31 = 0;
      v32 = 0;
      if ( a1 + 1 < v6 )
      {
        v8 = v5[5];
      }
      else
      {
        v8 = v5[5];
        v14 = v5[7];
        if ( (unsigned __int64)&v31 < v8 || (unsigned __int64)&v31 >= v8 + 16 * v14 )
        {
          if ( v14 < v13 )
          {
            v28 = qvector_reserve(v5 + 5, v8, v13, 16);
            v6 = v5[6];
            v5[5] = v28;
            v8 = v28;
          }
          if ( v6 < v13 )
          {
            v21 = v31;
            v22 = v32;
            do
            {
              v23 = v6++;
              v23 *= 16LL;
              *(_QWORD *)(v8 + v23) = v21;
              *(_QWORD *)(v8 + v23 + 8) = v22;
              v8 = v5[5];
            }
            while ( v13 != v6 );
          }
        }
        else
        {
          if ( v14 < v13 )
          {
            v30 = qvector_reserve(v5 + 5, v8, v13, 16);
            v6 = v5[6];
            v5[5] = v30;
            v8 = v30;
          }
          if ( v6 < v13 )
          {
            do
            {
              v15 = v6++;
              v16 = (_QWORD *)(v8 + 16 * v15);
              *v16 = 0;
              v16[1] = 0;
              v8 = v5[5];
            }
            while ( v13 != v6 );
          }
        }
      }
      v5[6] = v13;
    }
    v9 = 16LL * a1;
    *(_QWORD *)(v8 + v9) = a2;
    *(_QWORD *)(v5[5] + v9 + 8) = a3;
  }
  else
  {
    v10 = v5[5];
    if ( a1 >= v6 )
    {
      v17 = a1 + 1;
      if ( v17 != v6 )
      {
        v31 = 0;
        v32 = 0;
        if ( v17 >= v6 )
        {
          v18 = v5[7];
          if ( (unsigned __int64)&v31 < v10 || (unsigned __int64)&v31 >= v10 + 16 * v18 )
          {
            if ( v18 < v17 )
            {
              v27 = qvector_reserve(v5 + 5, v10, a1 + 1, 16);
              v6 = v5[6];
              v5[5] = v27;
              v10 = v27;
            }
            if ( v6 < v17 )
            {
              v24 = v31;
              v25 = v32;
              do
              {
                v26 = v6++;
                v26 *= 16LL;
                *(_QWORD *)(v10 + v26) = v24;
                *(_QWORD *)(v10 + v26 + 8) = v25;
                v10 = v5[5];
              }
              while ( v17 != v6 );
            }
          }
          else
          {
            if ( v18 < v17 )
            {
              v29 = qvector_reserve(v5 + 5, v10, a1 + 1, 16);
              v6 = v5[6];
              v5[5] = v29;
              v10 = v29;
            }
            if ( v6 < v17 )
            {
              do
              {
                v19 = v6++;
                v20 = (_QWORD *)(v10 + 16 * v19);
                *v20 = 0;
                v20[1] = 0;
                v10 = v5[5];
              }
              while ( v17 != v6 );
            }
          }
        }
        v5[6] = v17;
      }
    }
    v11 = 16LL * a1;
    *(_QWORD *)(v10 + v11) = 0;
    *(_QWORD *)(v5[5] + v11 + 8) = 0;
  }
  return v33 - __readfsqword(0x28u);
}

