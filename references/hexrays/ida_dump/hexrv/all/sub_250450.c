__int64 __fastcall sub_250450(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbp
  __int64 v4; // rdi
  _QWORD *v5; // r13
  __int64 v6; // rdi
  _QWORD *v7; // r14
  __int64 v8; // rdi
  __int64 v9; // r12
  __int64 v10; // rbp
  __int64 v11; // r15
  __int64 v12; // rdi
  _QWORD *k; // rbp
  _QWORD *v14; // r12
  _QWORD *m; // rbp
  _QWORD *v16; // r12
  _QWORD *i; // rbp
  _QWORD *v18; // r12
  __int64 v19; // rbp
  __int64 v20; // rbp
  __int64 v21; // r12
  __int64 v22; // r12
  __int64 v23; // r12
  __int64 v24; // r12
  __int64 v25; // r12
  _QWORD *v26; // r12
  __int64 v27; // rdi
  __int64 v28; // r15
  __int64 v29; // r14
  __int64 v30; // r13
  __int64 v31; // rbp
  __int64 v32; // rdi
  __int64 v33; // rdi
  __int64 *v34; // rbp
  __int64 v35; // rdi
  __int64 v36; // [rsp+8h] [rbp-50h]
  __int64 j; // [rsp+10h] [rbp-48h]
  __int64 v38; // [rsp+18h] [rbp-40h]

  result = (unsigned int)(*(_DWORD *)(a1 + 8) - 70);
  switch ( *(_DWORD *)(a1 + 8) )
  {
    case 'F':
    case 'N':
    case 'O':
      goto LABEL_5;
    case 'G':
      v5 = *(_QWORD **)(a1 + 24);
      if ( !v5 )
        goto LABEL_5;
      for ( i = (_QWORD *)*v5; v5 != i; --v5[2] )
      {
        v18 = i;
        i = (_QWORD *)*i;
        *(_QWORD *)v18[1] = i;
        i[1] = v18[1];
        sub_250450(v18 + 2);
        qfree(v18);
      }
      goto LABEL_23;
    case 'H':
      v19 = *(_QWORD *)(a1 + 24);
      if ( v19 )
        goto LABEL_29;
      goto LABEL_5;
    case 'I':
      v20 = *(_QWORD *)(a1 + 24);
      if ( !v20 )
        goto LABEL_5;
      v21 = *(_QWORD *)(v20 + 64);
      if ( v21 )
      {
        sub_250450(*(_QWORD *)(v20 + 64));
        j__qfree(v21);
      }
      v22 = *(_QWORD *)(v20 + 72);
      if ( v22 )
      {
        sub_250450(*(_QWORD *)(v20 + 72));
        j__qfree(v22);
      }
      goto LABEL_47;
    case 'J':
      v20 = *(_QWORD *)(a1 + 24);
      if ( !v20 )
        goto LABEL_5;
      sub_250A30(v20 + 136);
      clear_tinfo_t(v20 + 184);
      sub_250A30(v20 + 72);
      clear_tinfo_t(v20 + 120);
      v23 = *(_QWORD *)(v20 + 64);
      if ( v23 )
      {
        sub_250450(*(_QWORD *)(v20 + 64));
        j__qfree(v23);
      }
      goto LABEL_47;
    case 'K':
      v20 = *(_QWORD *)(a1 + 24);
      if ( !v20 )
        goto LABEL_5;
      v24 = *(_QWORD *)(v20 + 64);
      if ( v24 )
      {
        sub_250450(*(_QWORD *)(v20 + 64));
        j__qfree(v24);
      }
      goto LABEL_47;
    case 'L':
      v20 = *(_QWORD *)(a1 + 24);
      if ( !v20 )
        goto LABEL_5;
      v25 = *(_QWORD *)(v20 + 64);
      if ( v25 )
      {
        sub_250450(*(_QWORD *)(v20 + 64));
        j__qfree(v25);
      }
LABEL_47:
      sub_250A30(v20);
      clear_tinfo_t(v20 + 48);
      result = j__qfree(v20);
      goto LABEL_5;
    case 'M':
      v26 = *(_QWORD **)(a1 + 24);
      if ( v26 )
      {
        v27 = v26[14];
        if ( v27 )
        {
          v28 = v26[15];
          if ( v28 )
          {
            v29 = 0;
            v30 = 0;
            do
            {
              v31 = v27 + v29;
              v32 = *(_QWORD *)(v27 + v29 + 32);
              if ( v32 )
              {
                *(_QWORD *)(v31 + 40) = 0;
                qfree(v32);
              }
              ++v30;
              v29 += 56;
              sub_250450(v31);
              v27 = v26[14];
            }
            while ( v28 != v30 );
          }
          v26[15] = 0;
          qfree(v27);
        }
        v33 = v26[10];
        if ( v33 )
        {
          v26[11] = 0;
          qfree(v33);
        }
        sub_250A30(v26);
        clear_tinfo_t(v26 + 6);
        result = j__qfree(v26);
      }
      goto LABEL_5;
    case 'P':
      v19 = *(_QWORD *)(a1 + 24);
      if ( v19 )
      {
LABEL_29:
        sub_250A30(*(_QWORD *)(a1 + 24));
        clear_tinfo_t(v19 + 48);
        result = j__qfree(v19);
      }
      goto LABEL_5;
    case 'Q':
      v4 = *(_QWORD *)(a1 + 24);
      if ( !v4 )
        goto LABEL_5;
      goto LABEL_4;
    case 'R':
      v34 = *(__int64 **)(a1 + 24);
      if ( v34 )
      {
        v35 = *v34;
        if ( *v34 )
        {
          v34[1] = 0;
          qfree(v35);
        }
        result = qfree(v34);
      }
      goto LABEL_5;
    case 'S':
      v5 = *(_QWORD **)(a1 + 24);
      if ( v5 )
      {
        v6 = v5[3];
        if ( v6 )
        {
          v38 = v5[4];
          if ( v38 )
          {
            for ( j = 0; j != v38; ++j )
            {
              v7 = (_QWORD *)(v6 + 48 * j);
              v8 = v7[3];
              if ( v8 )
              {
                v36 = v7[4];
                if ( v36 )
                {
                  v9 = 0;
                  v10 = 0;
                  do
                  {
                    v11 = v8 + v9;
                    v12 = *(_QWORD *)(v8 + v9 + 64);
                    if ( v12 )
                    {
                      *(_QWORD *)(v11 + 72) = 0;
                      qfree(v12);
                    }
                    ++v10;
                    v9 += 88;
                    sub_250A30(v11);
                    clear_tinfo_t(v11 + 48);
                    v8 = v7[3];
                  }
                  while ( v36 != v10 );
                }
                v7[4] = 0;
                qfree(v8);
              }
              for ( k = (_QWORD *)*v7; v7 != k; --v7[2] )
              {
                v14 = k;
                k = (_QWORD *)*k;
                *(_QWORD *)v14[1] = k;
                k[1] = v14[1];
                sub_250450(v14 + 2);
                qfree(v14);
              }
              v6 = v5[3];
            }
          }
          v5[4] = 0;
          qfree(v6);
        }
        for ( m = (_QWORD *)*v5; v5 != m; --v5[2] )
        {
          v16 = m;
          m = (_QWORD *)*m;
          *(_QWORD *)v16[1] = m;
          m[1] = v16[1];
          sub_250450(v16 + 2);
          qfree(v16);
        }
LABEL_23:
        result = qfree(v5);
      }
      goto LABEL_5;
    case 'T':
      v3 = *(_QWORD *)(a1 + 24);
      if ( !v3 )
        goto LABEL_5;
      sub_250A30(*(_QWORD *)(a1 + 24));
      clear_tinfo_t(v3 + 48);
      v4 = v3;
LABEL_4:
      result = j__qfree(v4);
LABEL_5:
      *(_DWORD *)(a1 + 8) = 70;
      *(_QWORD *)(a1 + 24) = 0;
      return result;
    default:
      if ( !under_debugger )
        sub_37DDE0(50064);
      BUG();
  }
}
