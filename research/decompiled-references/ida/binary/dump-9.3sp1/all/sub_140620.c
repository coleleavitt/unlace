void __fastcall sub_140620(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r12
  _QWORD *v5; // rdi
  _QWORD *v6; // rdi
  __int64 v7; // r12
  _QWORD *v8; // rdi
  _QWORD *v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdx
  _QWORD *v13; // r13
  __int64 v14; // rdx
  __int64 v15; // r14
  __int64 i; // r12
  __int64 *v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // r12
  __int64 *v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rdi

  v2 = *a1 & 2LL;
  if ( (*a1 & 2) == 0 )
  {
    v3 = a1[1];
    if ( (*(_BYTE *)v3 & 2) != 0 )
    {
      v7 = a1[2];
      if ( (*(_BYTE *)v7 & 2) != 0 )
      {
        v10 = a1[7];
        if ( v10 )
        {
LABEL_16:
          a1[8] = 0;
          qfree(v10);
        }
LABEL_17:
        v11 = a1[4];
        if ( v11 )
        {
          if ( (*(_DWORD *)(v11 + 104))-- == 1 )
          {
            v13 = (_QWORD *)a1[4];
            if ( v13 )
            {
              sub_258970(a1[4], a2);
              v14 = v13[23];
              if ( v14 )
              {
                v15 = v13[24];
                if ( v15 )
                {
                  for ( i = 0; i != v15; ++i )
                  {
                    v17 = (__int64 *)(v14 + 24 * i);
                    v18 = *v17;
                    if ( *v17 )
                    {
                      v17[1] = 0;
                      qfree(v18);
                      v14 = v13[23];
                    }
                  }
                }
                v13[24] = 0;
                qfree(v14);
              }
              v19 = v13[20];
              if ( v19 )
              {
                v13[21] = 0;
                qfree(v19);
              }
              v20 = v13[16];
              if ( v20 )
              {
                v21 = v13[17];
                if ( v21 )
                {
                  do
                  {
                    v22 = (__int64 *)(v20 + 32 * v2);
                    v23 = *v22;
                    if ( *v22 )
                    {
                      v22[1] = 0;
                      qfree(v23);
                      v20 = v13[16];
                    }
                    ++v2;
                  }
                  while ( v21 != v2 );
                }
                v13[17] = 0;
                qfree(v20);
              }
              sub_255050(v13 + 2);
              j__qfree((__int64)v13);
            }
          }
        }
        *a1 |= 2uLL;
        goto LABEL_37;
      }
      goto LABEL_9;
    }
    v5 = *(_QWORD **)(v3 + 8);
    if ( (*(_BYTE *)v5 & 2) != 0 )
    {
      v6 = *(_QWORD **)(v3 + 16);
      if ( (*(_BYTE *)v6 & 2) != 0 )
      {
LABEL_47:
        v24 = *(_QWORD *)(v3 + 56);
        if ( v24 )
        {
          *(_QWORD *)(v3 + 64) = 0;
          qfree(v24);
        }
        sub_140140((_QWORD *)(v3 + 32), a2);
        *(_QWORD *)v3 |= 2uLL;
LABEL_6:
        if ( v3 )
          qfree(v3);
        v7 = a1[2];
        if ( (*(_BYTE *)v7 & 2) != 0 )
        {
LABEL_14:
          if ( (*(_BYTE *)a1 & 2) != 0 )
          {
LABEL_37:
            if ( a1 )
              qfree((__int64)a1);
            return;
          }
          v10 = a1[7];
          if ( v10 )
            goto LABEL_16;
          goto LABEL_17;
        }
LABEL_9:
        v8 = *(_QWORD **)(v7 + 8);
        if ( (*(_BYTE *)v8 & 2) != 0 )
        {
          v9 = *(_QWORD **)(v7 + 16);
          if ( (*(_BYTE *)v9 & 2) != 0 )
            goto LABEL_50;
        }
        else
        {
          sub_140280(v8, a2);
          v9 = *(_QWORD **)(v7 + 16);
          if ( (*(_BYTE *)v9 & 2) != 0 )
            goto LABEL_11;
        }
        sub_140280(v9, a2);
LABEL_11:
        if ( (*(_BYTE *)v7 & 2) != 0 )
        {
LABEL_12:
          if ( v7 )
            qfree(v7);
          goto LABEL_14;
        }
LABEL_50:
        v25 = *(_QWORD *)(v7 + 56);
        if ( v25 )
        {
          *(_QWORD *)(v7 + 64) = 0;
          qfree(v25);
        }
        sub_140140((_QWORD *)(v7 + 32), a2);
        *(_QWORD *)v7 |= 2uLL;
        goto LABEL_12;
      }
    }
    else
    {
      sub_140280(v5, a2);
      v6 = *(_QWORD **)(v3 + 16);
      if ( (*(_BYTE *)v6 & 2) != 0 )
        goto LABEL_5;
    }
    sub_140280(v6, a2);
LABEL_5:
    if ( (*(_BYTE *)v3 & 2) != 0 )
      goto LABEL_6;
    goto LABEL_47;
  }
}
