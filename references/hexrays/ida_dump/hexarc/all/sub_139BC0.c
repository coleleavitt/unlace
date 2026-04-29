void __fastcall sub_139BC0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 v4; // rbp
  __int64 v5; // rdi
  __int64 v6; // rdx
  bool v7; // zf
  _QWORD *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r15
  __int64 i; // r13
  __int64 *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r13
  __int64 *v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rbp
  __int64 v20; // rdi
  __int64 v21; // rbp
  __int64 v22; // rdi
  __int64 v23; // rdx
  _QWORD *v24; // r13
  __int64 v25; // rdx
  __int64 v26; // r14
  __int64 j; // r12
  __int64 *v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // r12
  __int64 *v33; // rax
  __int64 v34; // rdi

  v3 = a1[1];
  v4 = *(_QWORD *)v3 & 2LL;
  if ( (*(_QWORD *)v3 & 2) != 0 )
    goto LABEL_31;
  if ( (**(_BYTE **)(v3 + 8) & 2) != 0 )
  {
    if ( (**(_BYTE **)(v3 + 16) & 2) != 0 )
    {
LABEL_4:
      v5 = *(_QWORD *)(v3 + 56);
      if ( v5 )
      {
        *(_QWORD *)(v3 + 64) = 0;
        qfree(v5);
      }
      v6 = *(_QWORD *)(v3 + 32);
      if ( v6 )
      {
        v7 = (*(_DWORD *)(v6 + 104))-- == 1;
        if ( v7 )
        {
          v8 = *(_QWORD **)(v3 + 32);
          if ( v8 )
          {
            sub_2515F0(*(_QWORD *)(v3 + 32), a2);
            v9 = v8[23];
            if ( v9 )
            {
              v10 = v8[24];
              if ( v10 )
              {
                for ( i = 0; i != v10; ++i )
                {
                  v12 = (__int64 *)(v9 + 24 * i);
                  v13 = *v12;
                  if ( *v12 )
                  {
                    v12[1] = 0;
                    qfree(v13);
                    v9 = v8[23];
                  }
                }
              }
              v8[24] = 0;
              qfree(v9);
            }
            v14 = v8[20];
            if ( v14 )
            {
              v8[21] = 0;
              qfree(v14);
            }
            v15 = v8[16];
            if ( v15 )
            {
              v16 = v8[17];
              if ( v16 )
              {
                do
                {
                  v17 = (__int64 *)(v15 + 32 * v4);
                  v18 = *v17;
                  if ( *v17 )
                  {
                    v17[1] = 0;
                    qfree(v18);
                    v15 = v8[16];
                  }
                  ++v4;
                }
                while ( v16 != v4 );
              }
              v8[17] = 0;
              qfree(v15);
            }
            sub_24DCD0(v8 + 2);
            j__qfree(v8);
          }
        }
      }
      *(_QWORD *)v3 |= 2uLL;
      goto LABEL_29;
    }
  }
  else
  {
    sub_139BC0();
    if ( (**(_BYTE **)(v3 + 16) & 2) != 0 )
      goto LABEL_28;
  }
  sub_139BC0();
LABEL_28:
  if ( (*(_BYTE *)v3 & 2) == 0 )
    goto LABEL_4;
LABEL_29:
  if ( v3 )
    qfree(v3);
LABEL_31:
  v19 = a1[2];
  if ( (*(_BYTE *)v19 & 2) != 0 )
    goto LABEL_39;
  if ( (**(_BYTE **)(v19 + 8) & 2) != 0 )
  {
    if ( (**(_BYTE **)(v19 + 16) & 2) != 0 )
    {
LABEL_34:
      v20 = *(_QWORD *)(v19 + 56);
      if ( v20 )
      {
        *(_QWORD *)(v19 + 64) = 0;
        qfree(v20);
      }
      sub_139A80((_QWORD *)(v19 + 32), a2);
      *(_QWORD *)v19 |= 2uLL;
      goto LABEL_37;
    }
  }
  else
  {
    sub_139BC0();
    if ( (**(_BYTE **)(v19 + 16) & 2) != 0 )
      goto LABEL_67;
  }
  sub_139BC0();
LABEL_67:
  if ( (*(_BYTE *)v19 & 2) == 0 )
    goto LABEL_34;
LABEL_37:
  if ( v19 )
    qfree(v19);
LABEL_39:
  v21 = *a1 & 2LL;
  if ( (*a1 & 2) == 0 )
  {
    v22 = a1[7];
    if ( v22 )
    {
      a1[8] = 0;
      qfree(v22);
    }
    v23 = a1[4];
    if ( v23 )
    {
      v7 = (*(_DWORD *)(v23 + 104))-- == 1;
      if ( v7 )
      {
        v24 = (_QWORD *)a1[4];
        if ( v24 )
        {
          sub_2515F0(a1[4], a2);
          v25 = v24[23];
          if ( v25 )
          {
            v26 = v24[24];
            if ( v26 )
            {
              for ( j = 0; j != v26; ++j )
              {
                v28 = (__int64 *)(v25 + 24 * j);
                v29 = *v28;
                if ( *v28 )
                {
                  v28[1] = 0;
                  qfree(v29);
                  v25 = v24[23];
                }
              }
            }
            v24[24] = 0;
            qfree(v25);
          }
          v30 = v24[20];
          if ( v30 )
          {
            v24[21] = 0;
            qfree(v30);
          }
          v31 = v24[16];
          if ( v31 )
          {
            v32 = v24[17];
            if ( v32 )
            {
              do
              {
                v33 = (__int64 *)(v31 + 32 * v21);
                v34 = *v33;
                if ( *v33 )
                {
                  v33[1] = 0;
                  qfree(v34);
                  v31 = v24[16];
                }
                ++v21;
              }
              while ( v32 != v21 );
            }
            v24[17] = 0;
            qfree(v31);
          }
          sub_24DCD0(v24 + 2);
          j__qfree(v24);
        }
      }
    }
    *a1 |= 2uLL;
  }
  if ( a1 )
    qfree(a1);
}
