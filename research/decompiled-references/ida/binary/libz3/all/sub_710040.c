__int64 __fastcall sub_710040(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 *a4)
{
  _QWORD *v4; // r12
  _QWORD *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r8
  _QWORD *v9; // rdx
  __int64 v10; // rax
  int v11; // ecx
  _QWORD *v12; // rdi
  __int64 v13; // rcx
  _QWORD *v14; // r9
  _QWORD *i; // rax
  _QWORD *v16; // r15
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 *v19; // rcx
  __int64 v20; // rax
  int v21; // edx
  __int64 *v22; // rdi
  __int64 v23; // rdx
  __int64 *v24; // r9
  __int64 *j; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // r13
  __int64 v30; // r14
  _QWORD *v31; // rsi
  _QWORD *v32; // rax
  __int64 v33; // rax
  __int64 *v34; // r13
  __int64 v35; // r14
  __int64 v36; // rsi
  __int64 *v37; // rax
  __int64 v38; // r12
  __int64 v39; // rsi
  __int64 v40; // rdi
  bool v41; // zf
  __int64 v42; // rbx
  __int64 v43; // rsi
  __int64 v44; // rdi
  __int64 v45; // rax
  __int64 *v46; // r14
  __int64 v47; // r13
  __int64 v48; // rsi
  __int64 *v49; // rax
  __int64 v50; // rax
  _QWORD *v51; // r15
  __int64 v52; // r14
  _QWORD *v53; // rsi
  _QWORD *v54; // r12
  _QWORD *v55; // rax

  v4 = a2;
  v6 = (_QWORD *)*a2;
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 24LL))(*(_QWORD *)(a1 + 24));
  v8 = *((unsigned int *)v6 + 3);
  v9 = *(_QWORD **)v7;
  v10 = *(unsigned int *)(v7 + 8);
  v11 = v10 - 1;
  v10 *= 8;
  v12 = (_QWORD *)((char *)v9 + v10);
  v13 = 8LL * ((unsigned int)v8 & v11);
  v14 = (_QWORD *)((char *)v9 + v13);
  if ( v13 != v10 )
  {
    for ( i = (_QWORD *)((char *)v9 + v13); v12 != i; ++i )
    {
      v16 = (_QWORD *)*i;
      if ( *i > 1u )
      {
        LOBYTE(v13) = v6 == v16;
        LOBYTE(a2) = v6 == v16 && *((_DWORD *)v16 + 3) == (_DWORD)v8;
        if ( (_BYTE)a2 )
        {
          v16 = i;
          goto LABEL_8;
        }
      }
      else if ( !v16 )
      {
LABEL_7:
        a2 = nullptr;
        goto LABEL_8;
      }
    }
  }
  if ( v9 == v14 )
  {
LABEL_25:
    a2 = nullptr;
    v16 = nullptr;
  }
  else
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v16 = (_QWORD *)*v9;
        if ( *v9 > 1u )
          break;
        if ( !v16 )
          goto LABEL_7;
        if ( v14 == ++v9 )
          goto LABEL_25;
      }
      LOBYTE(a2) = v6 == v16 && *((_DWORD *)v16 + 3) == (_DWORD)v8;
      if ( (_BYTE)a2 )
        break;
      if ( v14 == ++v9 )
        goto LABEL_25;
    }
    v16 = v9;
  }
LABEL_8:
  v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, _QWORD *, __int64, __int64, _QWORD *))(**(_QWORD **)(a1 + 24) + 32LL))(
          *(_QWORD *)(a1 + 24),
          a2,
          v9,
          v13,
          v8,
          v14);
  v18 = *((unsigned int *)v6 + 3);
  v19 = *(__int64 **)v17;
  v20 = *(unsigned int *)(v17 + 8);
  v21 = v20 - 1;
  v20 *= 8;
  v22 = (__int64 *)((char *)v19 + v20);
  v23 = 8LL * ((unsigned int)v18 & v21);
  v24 = (__int64 *)((char *)v19 + v23);
  if ( v23 != v20 )
  {
    for ( j = (__int64 *)((char *)v19 + v23); v22 != j; ++j )
    {
      v23 = *j;
      if ( (unsigned __int64)*j > 1 )
      {
        if ( *(_DWORD *)(v23 + 12) == (_DWORD)v18 && v6 == (_QWORD *)v23 )
        {
LABEL_72:
          if ( (_BYTE)a2 )
            return 0;
          if ( v16 )
            goto LABEL_16;
          v45 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *, __int64, __int64 *))(**(_QWORD **)(a1 + 24)
                                                                                                  + 24LL))(
                  *(_QWORD *)(a1 + 24),
                  (unsigned __int8)a2,
                  v23,
                  v19,
                  v18,
                  v24);
          v46 = *(__int64 **)v45;
          v47 = *(_QWORD *)v45 + 8LL * *(unsigned int *)(v45 + 8);
          if ( *(_QWORD *)v45 != v47 )
          {
            while ( (unsigned __int64)*v46 <= 1 )
            {
              if ( (__int64 *)v47 == ++v46 )
                goto LABEL_86;
            }
            if ( (__int64 *)v47 != v46 )
            {
              v48 = *v46;
              while ( !(unsigned __int8)sub_168D740(v4 + 4, v48) )
              {
                v49 = v46 + 1;
                if ( (__int64 *)v47 != v46 + 1 )
                {
                  while ( 1 )
                  {
                    v48 = *v49;
                    v46 = v49;
                    if ( (unsigned __int64)*v49 > 1 )
                      break;
                    if ( (__int64 *)v47 == ++v49 )
                      goto LABEL_86;
                  }
                  if ( (__int64 *)v47 != v49 )
                    continue;
                }
                goto LABEL_86;
              }
              return 0;
            }
          }
LABEL_86:
          v50 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
          v51 = *(_QWORD **)v50;
          v52 = *(_QWORD *)v50 + 8LL * *(unsigned int *)(v50 + 8);
          if ( *(_QWORD *)v50 != v52 )
          {
            while ( *v51 <= 1u )
            {
              if ( (_QWORD *)v52 == ++v51 )
                goto LABEL_99;
            }
            if ( (_QWORD *)v52 != v51 )
            {
              v53 = (_QWORD *)*v51;
              v54 = v4 + 4;
              while ( v6 == v53 || !(unsigned __int8)sub_168D740(v54, v53) )
              {
                v55 = v51 + 1;
                if ( (_QWORD *)v52 != v51 + 1 )
                {
                  while ( 1 )
                  {
                    v53 = (_QWORD *)*v55;
                    v51 = v55;
                    if ( *v55 > 1u )
                      break;
                    if ( (_QWORD *)v52 == ++v55 )
                      goto LABEL_99;
                  }
                  if ( (_QWORD *)v52 != v55 )
                    continue;
                }
                goto LABEL_99;
              }
              return 0;
            }
          }
LABEL_99:
          v38 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 864LL);
          if ( !v38 )
            goto LABEL_61;
LABEL_60:
          ++*(_DWORD *)(v38 + 8);
LABEL_61:
          v39 = *a4;
          if ( *a4 )
          {
            v40 = a4[1];
            v41 = (*(_DWORD *)(v39 + 8))-- == 1;
            if ( v41 )
              sub_15D7BC0(v40, v39);
          }
          *a4 = v38;
          sub_14EC390(a1 + 32, v6, v38, a3);
          return 1;
        }
      }
      else if ( !v23 )
      {
LABEL_15:
        if ( !(_BYTE)a2 )
          goto LABEL_16;
LABEL_34:
        v28 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *, __int64, __int64 *))(**(_QWORD **)(a1 + 24)
                                                                                                + 24LL))(
                *(_QWORD *)(a1 + 24),
                (unsigned __int8)a2,
                v23,
                v19,
                v18,
                v24);
        v29 = *(_QWORD **)v28;
        v30 = *(_QWORD *)v28 + 8LL * *(unsigned int *)(v28 + 8);
        if ( v30 != *(_QWORD *)v28 )
        {
          while ( *v29 <= 1u )
          {
            if ( (_QWORD *)v30 == ++v29 )
              goto LABEL_47;
          }
          if ( (_QWORD *)v30 != v29 )
          {
            v31 = (_QWORD *)*v29;
            while ( v6 == v31 || !(unsigned __int8)sub_168D740(v4 + 4, v31) )
            {
              v32 = v29 + 1;
              if ( (_QWORD *)v30 != v29 + 1 )
              {
                while ( 1 )
                {
                  v31 = (_QWORD *)*v32;
                  v29 = v32;
                  if ( *v32 > 1u )
                    break;
                  if ( (_QWORD *)v30 == ++v32 )
                    goto LABEL_47;
                }
                if ( (_QWORD *)v30 != v32 )
                  continue;
              }
              goto LABEL_47;
            }
            return 0;
          }
        }
LABEL_47:
        v33 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
        v34 = *(__int64 **)v33;
        v35 = *(_QWORD *)v33 + 8LL * *(unsigned int *)(v33 + 8);
        if ( *(_QWORD *)v33 != v35 )
        {
          while ( (unsigned __int64)*v34 <= 1 )
          {
            if ( (__int64 *)v35 == ++v34 )
              goto LABEL_59;
          }
          if ( (__int64 *)v35 != v34 )
          {
            v36 = *v34;
            while ( !(unsigned __int8)sub_168D740(v4 + 4, v36) )
            {
              v37 = v34 + 1;
              if ( (__int64 *)v35 != v34 + 1 )
              {
                while ( 1 )
                {
                  v36 = *v37;
                  v34 = v37;
                  if ( (unsigned __int64)*v37 > 1 )
                    break;
                  if ( (__int64 *)v35 == ++v37 )
                    goto LABEL_59;
                }
                if ( (__int64 *)v35 != v37 )
                  continue;
              }
              goto LABEL_59;
            }
            return 0;
          }
        }
LABEL_59:
        v38 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 856LL);
        if ( v38 )
          goto LABEL_60;
        goto LABEL_61;
      }
    }
  }
  if ( v19 == v24 )
  {
    if ( v16 )
      goto LABEL_34;
    goto LABEL_16;
  }
  while ( 1 )
  {
    v27 = *v19;
    if ( (unsigned __int64)*v19 <= 1 )
      break;
    if ( *(_DWORD *)(v27 + 12) == (_DWORD)v18 && v6 == (_QWORD *)v27 )
      goto LABEL_72;
LABEL_30:
    if ( v24 == ++v19 )
      goto LABEL_15;
  }
  if ( v27 )
    goto LABEL_30;
  if ( (_BYTE)a2 )
    goto LABEL_34;
LABEL_16:
  if ( (unsigned __int8)sub_168D740(v4 + 4, *a3) )
    return 0;
  v42 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 864LL);
  if ( v42 )
    ++*(_DWORD *)(v42 + 8);
  v43 = *a4;
  if ( *a4 )
  {
    v44 = a4[1];
    v41 = (*(_DWORD *)(v43 + 8))-- == 1;
    if ( v41 )
      sub_15D7BC0(v44, v43);
  }
  *a4 = v42;
  return 1;
}

