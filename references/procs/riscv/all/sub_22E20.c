__int64 __fastcall sub_22E20(_QWORD *a1, __int64 a2)
{
  void *v2; // r15
  int v5; // eax
  __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rax
  int v11; // esi
  _QWORD *v12; // r8
  _QWORD *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r10
  __int64 v20; // rsi
  __int64 v21; // rdi
  int *v22; // r9
  int *v23; // r8
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r12
  int *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rdx
  int v31; // edi
  int *v32; // r13
  __int64 v33; // r12
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rsi
  __int64 v37; // r14
  int *v38; // rsi
  __int64 v39; // rax
  int v40; // ecx
  __int64 v41; // rax
  int *v42; // rdx
  _BOOL8 v43; // rdi
  __int64 v44; // rax
  int dtype_size; // eax
  int v46; // r14d
  __int64 v47; // r15
  _QWORD *v48; // rdi
  int v49; // r13d
  __int64 v50; // rax
  __int64 v51; // rsi
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rax
  int v55; // r14d
  __int64 v56; // r12
  __int64 v57; // rbx
  __int64 v58; // rsi
  __int64 v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  int v63; // [rsp+8h] [rbp-40h]

  v5 = *(unsigned __int16 *)(a2 + 24);
  if ( (unsigned __int16)v5 > 0x48u )
  {
    if ( (unsigned __int16)v5 > 0xA2u )
    {
      switch ( *(_WORD *)(a2 + 24) )
      {
        case 0x1AE:
        case 0x1B1:
        case 0x1B2:
        case 0x1B9:
        case 0x1BA:
          goto LABEL_18;
        case 0x1AF:
        case 0x1B0:
        case 0x1B3:
        case 0x1B4:
        case 0x1B5:
        case 0x1B6:
        case 0x1B7:
        case 0x1B8:
        case 0x1BB:
        case 0x1BC:
        case 0x1BD:
        case 0x1BE:
        case 0x1BF:
        case 0x1C0:
        case 0x1C1:
        case 0x1C2:
        case 0x1C3:
        case 0x1C4:
        case 0x1C5:
        case 0x1C6:
        case 0x1C7:
        case 0x1C8:
        case 0x1C9:
        case 0x1CA:
        case 0x1CB:
        case 0x1CC:
        case 0x1CD:
        case 0x1CE:
        case 0x1CF:
        case 0x1D0:
        case 0x1D1:
        case 0x1D2:
        case 0x1D3:
        case 0x1D4:
        case 0x1D5:
        case 0x1D6:
        case 0x1D7:
        case 0x1D8:
        case 0x1D9:
        case 0x1DA:
        case 0x1DB:
        case 0x1DC:
        case 0x1DD:
        case 0x1DE:
        case 0x1DF:
        case 0x1E0:
        case 0x1E1:
        case 0x1E2:
        case 0x1E3:
        case 0x1E4:
        case 0x1E5:
        case 0x1E6:
LABEL_8:
          if ( (unsigned __int16)(v5 - 444) > 0x14u )
          {
            if ( (unsigned __int16)(v5 - 443) > 0x14u )
              return 2;
          }
          else
          {
            v6 = 1398101;
            if ( !_bittest64(&v6, (unsigned int)(v5 - 444))
              && ((_WORD)v5 == 464 || !_bittest64(&v6, (unsigned int)(v5 - 443))) )
            {
              return 2;
            }
          }
          if ( *(_WORD *)(a2 + 86) == 2 )
            return 2;
          break;
        case 0x1E7:
        case 0x1E8:
        case 0x1E9:
          v9 = a2 + 120;
          goto LABEL_22;
        case 0x1EA:
        case 0x1EB:
          v19 = a2 + 120;
          goto LABEL_38;
        default:
          return 2;
      }
      return 1;
    }
    if ( (unsigned __int16)v5 > 0x5Cu )
    {
      switch ( *(_WORD *)(a2 + 24) )
      {
        case 0x5D:
        case 0x75:
          goto LABEL_21;
        case 0x5E:
        case 0x76:
          goto LABEL_37;
        case 0x63:
        case 0x64:
        case 0x65:
        case 0x66:
        case 0x6D:
        case 0x6E:
        case 0x6F:
        case 0x70:
        case 0x7A:
        case 0xA2:
          return 1;
        case 0x7B:
        case 0x7C:
          goto LABEL_18;
        default:
          goto LABEL_8;
      }
    }
    return 2;
  }
  if ( (unsigned __int16)v5 > 0x21u )
  {
    v8 = 1LL << ((unsigned __int8)v5 - 34);
    if ( (v8 & 0x4406FE000BLL) != 0 )
    {
LABEL_18:
      if ( *(_BYTE *)(a2 + 41) != 1 )
        return 1;
      goto LABEL_19;
    }
    if ( (v8 & 0xC000) != 0 )
    {
LABEL_21:
      v9 = a2 + 80;
LABEL_22:
      v10 = a1[11];
      v11 = *(unsigned __int16 *)(v9 + 6);
      v12 = a1 + 10;
      if ( !v10 )
        return 1;
      v13 = a1 + 10;
      do
      {
        while ( 1 )
        {
          v14 = *(_QWORD *)(v10 + 16);
          v15 = *(_QWORD *)(v10 + 24);
          if ( v11 <= *(_DWORD *)(v10 + 32) )
            break;
          v10 = *(_QWORD *)(v10 + 24);
          if ( !v15 )
            goto LABEL_27;
        }
        v13 = (_QWORD *)v10;
        v10 = *(_QWORD *)(v10 + 16);
      }
      while ( v14 );
LABEL_27:
      if ( v13 == v12 || v11 < *((_DWORD *)v13 + 8) )
        return 1;
      v16 = v13[5];
      if ( *(_BYTE *)(v9 + 1) == 4 )
        v16 += *(_QWORD *)(v9 + 16);
      if ( v16 >= 0 )
        return 1;
      v17 = a1[2];
      v18 = v17 + 32LL * a1[3];
      if ( v17 != v18 )
      {
        while ( v16 != *(_QWORD *)(v17 + 8) )
        {
          v17 += 32;
          if ( v18 == v17 )
            return 2;
        }
        return 1;
      }
    }
    else if ( (_WORD)v5 == 50 )
    {
LABEL_37:
      v19 = a2 + 80;
LABEL_38:
      v20 = a1[11];
      v21 = *(unsigned __int16 *)(v19 + 6);
      v22 = (int *)(a1 + 10);
      if ( v20 )
      {
        v23 = (int *)(a1 + 10);
        v24 = a1[11];
        do
        {
          while ( 1 )
          {
            v25 = *(_QWORD *)(v24 + 16);
            v26 = *(_QWORD *)(v24 + 24);
            if ( (int)v21 <= *(_DWORD *)(v24 + 32) )
              break;
            v24 = *(_QWORD *)(v24 + 24);
            if ( !v26 )
              goto LABEL_43;
          }
          v23 = (int *)v24;
          v24 = *(_QWORD *)(v24 + 16);
        }
        while ( v25 );
LABEL_43:
        if ( v22 != v23 && (int)v21 >= v23[8] )
        {
          v27 = *((_QWORD *)v23 + 5);
          if ( *(_BYTE *)(v19 + 1) == 4 )
            v27 += *(_QWORD *)(v19 + 16);
          if ( v27 < 0 )
          {
            v28 = (int *)(a1 + 10);
            do
            {
              v29 = *(_QWORD *)(v20 + 24);
              if ( *(int *)(v20 + 32) <= 1 )
              {
                v20 = *(_QWORD *)(v20 + 24);
              }
              else
              {
                v28 = (int *)v20;
                v20 = *(_QWORD *)(v20 + 16);
              }
            }
            while ( v20 );
            if ( v28 == v22 || v28[8] > 2 )
              sub_22120(v21, 0, v29);
            if ( v27 >= *((_QWORD *)v28 + 5) )
            {
              dtype_size = get_dtype_size(*(unsigned __int8 *)(v19 + 5));
              v46 = *(unsigned __int16 *)(a2 + 46);
              v47 = *(_QWORD *)(a2 + 16);
              v48 = a1 + 2;
              v49 = dtype_size;
              v50 = a1[3];
              v51 = a1[2];
              v52 = v50 + 1;
              if ( a1[4] < (unsigned __int64)(v50 + 1) )
              {
                v61 = qvector_reserve(v48, v51, v52, 32);
                a1[2] = v61;
                v51 = v61;
                v50 = a1[3];
                v52 = v50 + 1;
              }
              a1[3] = v52;
              v53 = v51 + 32 * v50;
              *(_QWORD *)v53 = v47;
              *(_QWORD *)(v53 + 8) = v27;
              *(_QWORD *)(v53 + 16) = v49;
              *(_DWORD *)(v53 + 24) = v46;
              if ( (unsigned int)*(unsigned __int16 *)(a2 + 24) - 487 <= 4 )
              {
                v54 = a1[3];
                v55 = *(unsigned __int16 *)(a2 + 86);
                v56 = v49 + v27;
                v57 = *(_QWORD *)(a2 + 16);
                v58 = a1[2];
                v59 = v54 + 1;
                if ( a1[4] < (unsigned __int64)(v54 + 1) )
                {
                  v62 = qvector_reserve(v48, v58, v59, 32);
                  a1[2] = v62;
                  v58 = v62;
                  v54 = a1[3];
                  v59 = v54 + 1;
                }
                a1[3] = v59;
                v60 = v58 + 32 * v54;
                *(_QWORD *)v60 = v57;
                *(_QWORD *)(v60 + 8) = v56;
                *(_QWORD *)(v60 + 16) = v49;
                *(_DWORD *)(v60 + 24) = v55;
              }
            }
          }
        }
      }
      return 1;
    }
    return 2;
  }
  if ( (unsigned __int16)(v5 - 1) > 0x1Fu )
    return 2;
  switch ( (__int16)v5 )
  {
    case 1:
    case 2:
    case 20:
    case 21:
    case 31:
    case 32:
      return 1;
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
      goto LABEL_21;
    case 16:
    case 17:
    case 18:
      goto LABEL_37;
    case 19:
      v30 = a1[11];
      v31 = *(unsigned __int16 *)(a2 + 86);
      v32 = (int *)(a1 + 10);
      if ( !v30 )
        goto LABEL_19;
      v33 = (__int64)(a1 + 10);
      v34 = a1[11];
      break;
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
      goto LABEL_18;
    default:
      goto LABEL_8;
  }
  do
  {
    while ( 1 )
    {
      v35 = *(_QWORD *)(v34 + 16);
      v36 = *(_QWORD *)(v34 + 24);
      if ( v31 <= *(_DWORD *)(v34 + 32) )
        break;
      v34 = *(_QWORD *)(v34 + 24);
      if ( !v36 )
        goto LABEL_58;
    }
    v33 = v34;
    v34 = *(_QWORD *)(v34 + 16);
  }
  while ( v35 );
LABEL_58:
  if ( v32 == (int *)v33 || v31 < *(_DWORD *)(v33 + 32) )
  {
LABEL_19:
    result = 2;
    if ( *(_WORD *)(a2 + 46) == 2 )
      return result;
    return 1;
  }
  v37 = *(_QWORD *)(v33 + 40) + *(_QWORD *)(a2 + 128);
  v38 = (int *)(a1 + 10);
  if ( *(_WORD *)(a2 + 46) != 2 )
  {
    v39 = operator new(0x30u);
    v40 = *(unsigned __int16 *)(a2 + 46);
    *(_QWORD *)(v39 + 40) = 0;
    v2 = (void *)v39;
    *(_DWORD *)(v39 + 32) = v40;
    v63 = v40;
    v41 = sub_22430(a1 + 9, v33, v40);
    v33 = v41;
    if ( v42 )
    {
      v43 = v41 || v32 == v42 || v63 < v42[8];
      v33 = (__int64)v2;
      std::_Rb_tree_insert_and_rebalance(v43, v2, v42, a1 + 10);
      ++a1[14];
LABEL_66:
      *(_QWORD *)(v33 + 40) = v37;
      if ( *(_WORD *)(a2 + 46) == 8 )
      {
        v44 = *(_QWORD *)(a2 + 16);
        a1[15] = v37;
        a1[16] = v44;
      }
      return 1;
    }
LABEL_82:
    if ( v2 )
      operator delete(v2, 0x30u);
    goto LABEL_66;
  }
  do
  {
    if ( *(int *)(v30 + 32) <= 1 )
    {
      v30 = *(_QWORD *)(v30 + 24);
    }
    else
    {
      v38 = (int *)v30;
      v30 = *(_QWORD *)(v30 + 16);
    }
  }
  while ( v30 );
  if ( v32 == v38 || v38[8] > 2 )
  {
    if ( under_debugger )
      BUG();
    interr(10492);
    goto LABEL_82;
  }
  result = 2;
  if ( *((_QWORD *)v38 + 5) > v37 )
  {
    *((_QWORD *)v38 + 5) = v37;
    return 0;
  }
  return result;
}
