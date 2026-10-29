__int64 __fastcall sub_E2D480(__int64 *a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  __int64 v4; // r13
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rbx
  _DWORD *v8; // rax
  int v9; // eax
  __int64 v10; // rax
  unsigned int v11; // r15d
  __int64 v12; // rbp
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rdx
  _BYTE *v16; // rax
  __int64 v17; // rbx
  _DWORD *v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  _DWORD *v22; // rdx
  __int64 v23; // rax
  unsigned int v24; // r14d
  __int64 v25; // rbp
  __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // rdx
  _BYTE *v29; // rax
  int v30; // eax
  __int64 v31; // [rsp+8h] [rbp-50h]

  v2 = *a1;
  if ( *a1 && !*(_BYTE *)(v2 + 306) )
  {
    v3 = *(unsigned int *)(a2 + 32);
    if ( (_DWORD)v3 )
    {
      if ( !*(_BYTE *)(v2 + 296) )
      {
        v22 = *(_DWORD **)(a2 + 24);
        if ( !v22 || *v22 == -1 )
          sub_E2E330(v2, "logic does not support uninterpreted functions");
      }
      v4 = a2;
      v31 = a2 + 8 * v3;
      while ( 1 )
      {
        v7 = *(_QWORD *)(v4 + 48);
        v8 = *(_DWORD **)(v7 + 24);
        if ( v8 )
          break;
LABEL_35:
        if ( !*(_BYTE *)(v2 + 296) )
          sub_E2E330(v2, "logic does not support uninterpreted sorts");
LABEL_10:
        v4 += 8;
        if ( v31 == v4 )
          goto LABEL_37;
      }
      while ( 1 )
      {
        if ( *v8 == -1 )
          goto LABEL_35;
        if ( *(_QWORD *)(*(_QWORD *)v2 + 840LL) == v7 )
          goto LABEL_10;
        if ( *v8 == 5 )
        {
          v9 = v8[1];
          if ( v9 == 1 )
          {
            if ( !*(_BYTE *)(v2 + 301) )
              sub_E2E330(v2, "logic does not support integers");
            goto LABEL_10;
          }
          if ( !v9 )
          {
            if ( !*(_BYTE *)(v2 + 300) )
              sub_E2E330(v2, "logic does not support reals");
            goto LABEL_10;
          }
        }
        if ( (unsigned __int8)sub_1673B10(v2 + 32, v7) )
        {
          if ( !*(_BYTE *)(v2 + 304) )
            sub_E2E330(v2, "logic does not support bitvectors");
          goto LABEL_10;
        }
        v5 = sub_15F0200(v2 + 208);
        v6 = *(_QWORD *)(v7 + 24);
        if ( !v6 )
          goto LABEL_10;
        if ( v5 == *(_DWORD *)v6 )
        {
          if ( !*(_DWORD *)(v6 + 4) && !*(_BYTE *)(v2 + 297) )
            sub_E2E330(v2, "logic does not support algebraic datatypes");
          goto LABEL_10;
        }
        if ( *(_DWORD *)v6 != *(_DWORD *)(v2 + 56) || *(_DWORD *)(v6 + 4) || *(_BYTE *)(v2 + 298) )
          goto LABEL_10;
        if ( !*(_BYTE *)(v2 + 299) )
          sub_E2E330(v2, "logic does not support arrays");
        v10 = *(_QWORD *)(v6 + 8);
        if ( !v10 )
          break;
        v11 = *(_DWORD *)(v10 - 4) - 1;
        if ( *(_DWORD *)(v10 - 4) != 1 )
          goto LABEL_27;
LABEL_32:
        v15 = 16LL * (unsigned int)(*(_DWORD *)(v10 - 4) - 1);
LABEL_33:
        v16 = (_BYTE *)(v15 + v10);
        if ( v16[8] != 1 )
          sub_A8ADA((__int64)"std::get: wrong index for variant");
        v7 = *(_QWORD *)v16;
        v8 = *(_DWORD **)(*(_QWORD *)v16 + 24LL);
        if ( !v8 )
          goto LABEL_35;
      }
      v11 = -1;
LABEL_27:
      v12 = 0;
      v13 = 16LL * v11;
      do
      {
        v14 = v12 + v10;
        if ( *(_BYTE *)(v14 + 8) != 1 )
          sub_A8ADA((__int64)"std::get: wrong index for variant");
        if ( !(unsigned __int8)sub_1673B10(v2 + 32, *(_QWORD *)v14) )
          sub_E2E330(v2, "logic supports only arrays from bitvectors to bitvectors");
        v12 += 16;
        v10 = *(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL);
      }
      while ( v13 != v12 );
      v15 = 0xFFFFFFFF0LL;
      if ( !v10 )
        goto LABEL_33;
      goto LABEL_32;
    }
LABEL_37:
    v17 = *(_QWORD *)(a2 + 40);
    v18 = *(_DWORD **)(v17 + 24);
    if ( v18 )
    {
      while ( 1 )
      {
        if ( *v18 == -1 )
          goto LABEL_67;
        if ( *(_QWORD *)(*(_QWORD *)v2 + 840LL) == v17 )
          return 1;
        if ( *v18 == 5 )
        {
          v30 = v18[1];
          if ( v30 == 1 )
          {
            if ( !*(_BYTE *)(v2 + 301) )
              sub_E2E330(v2, "logic does not support integers");
            return 1;
          }
          if ( !v30 )
          {
            if ( !*(_BYTE *)(v2 + 300) )
              sub_E2E330(v2, "logic does not support reals");
            return 1;
          }
        }
        if ( (unsigned __int8)sub_1673B10(v2 + 32, v17) )
        {
          if ( !*(_BYTE *)(v2 + 304) )
            sub_E2E330(v2, "logic does not support bitvectors");
          return 1;
        }
        v19 = sub_15F0200(v2 + 208);
        v20 = *(_QWORD *)(v17 + 24);
        if ( !v20 )
          return 1;
        if ( v19 == *(_DWORD *)v20 )
        {
          if ( !*(_DWORD *)(v20 + 4) && !*(_BYTE *)(v2 + 297) )
            sub_E2E330(v2, "logic does not support algebraic datatypes");
          return 1;
        }
        if ( *(_DWORD *)(v2 + 56) != *(_DWORD *)v20 || *(_DWORD *)(v20 + 4) || *(_BYTE *)(v2 + 298) )
          return 1;
        if ( !*(_BYTE *)(v2 + 299) )
          sub_E2E330(v2, "logic does not support arrays");
        v23 = *(_QWORD *)(v20 + 8);
        if ( !v23 )
          break;
        v24 = *(_DWORD *)(v23 - 4) - 1;
        if ( *(_DWORD *)(v23 - 4) != 1 )
          goto LABEL_59;
LABEL_64:
        v28 = 16LL * (unsigned int)(*(_DWORD *)(v23 - 4) - 1);
LABEL_65:
        v29 = (_BYTE *)(v28 + v23);
        if ( v29[8] != 1 )
          sub_A8ADA((__int64)"std::get: wrong index for variant");
        v17 = *(_QWORD *)v29;
        v18 = *(_DWORD **)(*(_QWORD *)v29 + 24LL);
        if ( !v18 )
          goto LABEL_67;
      }
      v24 = -1;
LABEL_59:
      v25 = 0;
      v26 = 16LL * v24;
      do
      {
        v27 = v25 + v23;
        if ( *(_BYTE *)(v27 + 8) != 1 )
          sub_A8ADA((__int64)"std::get: wrong index for variant");
        if ( !(unsigned __int8)sub_1673B10(v2 + 32, *(_QWORD *)v27) )
          sub_E2E330(v2, "logic supports only arrays from bitvectors to bitvectors");
        v25 += 16;
        v23 = *(_QWORD *)(*(_QWORD *)(v17 + 24) + 8LL);
      }
      while ( v26 != v25 );
      v28 = 0xFFFFFFFF0LL;
      if ( !v23 )
        goto LABEL_65;
      goto LABEL_64;
    }
LABEL_67:
    if ( !*(_BYTE *)(v2 + 296) )
      sub_E2E330(v2, "logic does not support uninterpreted sorts");
  }
  return 1;
}

