void __fastcall sub_140280(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rbp
  __int64 v4; // rdx
  bool v5; // zf
  _QWORD *v6; // r14
  __int64 v7; // rdx
  __int64 v8; // r15
  __int64 i; // r13
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r13
  _QWORD *v13; // rax
  __int64 v14; // rbp
  __int64 v15; // rbp
  __int64 v16; // rdx
  _QWORD *v17; // r13
  __int64 v18; // rdx
  __int64 v19; // r14
  __int64 j; // r12
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r12
  _QWORD *v24; // rax

  v2 = a1[1];
  v3 = *(_QWORD *)v2 & 2LL;
  if ( (*(_QWORD *)v2 & 2) != 0 )
    goto LABEL_31;
  if ( (**(_BYTE **)(v2 + 8) & 2) != 0 )
  {
    if ( (**(_BYTE **)(v2 + 16) & 2) != 0 )
    {
LABEL_4:
      if ( *(_QWORD *)(v2 + 56) )
      {
        *(_QWORD *)(v2 + 64) = 0;
        qfree();
      }
      v4 = *(_QWORD *)(v2 + 32);
      if ( v4 )
      {
        v5 = (*(_DWORD *)(v4 + 104))-- == 1;
        if ( v5 )
        {
          v6 = *(_QWORD **)(v2 + 32);
          if ( v6 )
          {
            sub_258970(*(_QWORD *)(v2 + 32), a2);
            v7 = v6[23];
            if ( v7 )
            {
              v8 = v6[24];
              if ( v8 )
              {
                for ( i = 0; i != v8; ++i )
                {
                  v10 = (_QWORD *)(v7 + 24 * i);
                  if ( *v10 )
                  {
                    v10[1] = 0;
                    qfree();
                    v7 = v6[23];
                  }
                }
              }
              v6[24] = 0;
              qfree();
            }
            if ( v6[20] )
            {
              v6[21] = 0;
              qfree();
            }
            v11 = v6[16];
            if ( v11 )
            {
              v12 = v6[17];
              if ( v12 )
              {
                do
                {
                  v13 = (_QWORD *)(v11 + 32 * v3);
                  if ( *v13 )
                  {
                    v13[1] = 0;
                    qfree();
                    v11 = v6[16];
                  }
                  ++v3;
                }
                while ( v12 != v3 );
              }
              v6[17] = 0;
              qfree();
            }
            sub_255050(v6 + 2);
            j__qfree();
          }
        }
      }
      *(_QWORD *)v2 |= 2uLL;
      goto LABEL_29;
    }
  }
  else
  {
    sub_140280();
    if ( (**(_BYTE **)(v2 + 16) & 2) != 0 )
      goto LABEL_28;
  }
  sub_140280();
LABEL_28:
  if ( (*(_BYTE *)v2 & 2) == 0 )
    goto LABEL_4;
LABEL_29:
  if ( v2 )
    qfree();
LABEL_31:
  v14 = a1[2];
  if ( (*(_BYTE *)v14 & 2) != 0 )
    goto LABEL_39;
  if ( (**(_BYTE **)(v14 + 8) & 2) != 0 )
  {
    if ( (**(_BYTE **)(v14 + 16) & 2) != 0 )
    {
LABEL_34:
      if ( *(_QWORD *)(v14 + 56) )
      {
        *(_QWORD *)(v14 + 64) = 0;
        qfree();
      }
      sub_140140((_QWORD *)(v14 + 32), a2);
      *(_QWORD *)v14 |= 2uLL;
      goto LABEL_37;
    }
  }
  else
  {
    sub_140280();
    if ( (**(_BYTE **)(v14 + 16) & 2) != 0 )
      goto LABEL_67;
  }
  sub_140280();
LABEL_67:
  if ( (*(_BYTE *)v14 & 2) == 0 )
    goto LABEL_34;
LABEL_37:
  if ( v14 )
    qfree();
LABEL_39:
  v15 = *a1 & 2LL;
  if ( (*a1 & 2) == 0 )
  {
    if ( a1[7] )
    {
      a1[8] = 0;
      qfree();
    }
    v16 = a1[4];
    if ( v16 )
    {
      v5 = (*(_DWORD *)(v16 + 104))-- == 1;
      if ( v5 )
      {
        v17 = (_QWORD *)a1[4];
        if ( v17 )
        {
          sub_258970(a1[4], a2);
          v18 = v17[23];
          if ( v18 )
          {
            v19 = v17[24];
            if ( v19 )
            {
              for ( j = 0; j != v19; ++j )
              {
                v21 = (_QWORD *)(v18 + 24 * j);
                if ( *v21 )
                {
                  v21[1] = 0;
                  qfree();
                  v18 = v17[23];
                }
              }
            }
            v17[24] = 0;
            qfree();
          }
          if ( v17[20] )
          {
            v17[21] = 0;
            qfree();
          }
          v22 = v17[16];
          if ( v22 )
          {
            v23 = v17[17];
            if ( v23 )
            {
              do
              {
                v24 = (_QWORD *)(v22 + 32 * v15);
                if ( *v24 )
                {
                  v24[1] = 0;
                  qfree();
                  v22 = v17[16];
                }
                ++v15;
              }
              while ( v23 != v15 );
            }
            v17[17] = 0;
            qfree();
          }
          sub_255050(v17 + 2);
          j__qfree();
        }
      }
    }
    *a1 |= 2uLL;
  }
  if ( a1 )
    qfree();
}
