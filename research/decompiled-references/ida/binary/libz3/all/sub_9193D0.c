__int64 __fastcall sub_9193D0(__int64 *a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // edi
  __int64 *v10; // rcx
  __int64 v11; // rax
  unsigned int v12; // edx
  char *v13; // rsi
  __int64 v14; // rdx
  __int64 *v15; // r8
  __int64 v16; // rdx
  _DWORD *v17; // rax
  int v18; // eax
  int v19; // eax
  unsigned int *v20; // r14
  unsigned int *v21; // r13
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 **v24; // r13
  __int64 *v25; // rdi
  __int64 v26; // rax
  __int64 (__fastcall *v27)(_QWORD *, __int64); // r8
  int v28; // eax
  int v29; // eax
  __int64 *v30; // r14
  __int64 *v31; // r13
  __int64 v32; // rsi
  int v33; // eax
  unsigned int **v34; // r14
  __int64 v35; // rax
  unsigned int *v36; // r15
  unsigned int *v37; // r13
  __int64 v38; // rdi
  __int64 v39; // rsi
  unsigned int **v40; // r13
  __int64 v41; // rax
  unsigned int *v42; // r15
  __int64 v43; // rdi
  __int64 v44; // rax
  int v45; // eax
  __int64 *v46; // r14
  __int64 *v47; // r13
  __int64 v48; // rsi
  __int64 v49; // rsi
  unsigned int v50; // eax
  int v51; // eax
  __int64 *v52; // r14
  __int64 *v53; // r13
  __int64 v54; // rsi
  unsigned int **v55; // [rsp+8h] [rbp-40h]
  unsigned int **v56; // [rsp+8h] [rbp-40h]

  result = sub_8E7030(a1[1]);
  if ( !(_DWORD)result )
    return result;
  v7 = a1[5];
  v8 = *(_DWORD *)a2 >> 5;
  if ( v7 )
  {
    if ( (unsigned int)v8 < *(_DWORD *)(v7 - 4)
      && (*(_DWORD *)(v7 + 4 * v8) & (1 << *(_DWORD *)a2)) != 0
      && !*(_WORD *)(a2 + 4) )
    {
      v17 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
      if ( v17 )
      {
        if ( !*v17 )
        {
          v18 = v17[1];
          switch ( v18 )
          {
            case 6:
              v33 = sub_8E8110((_QWORD *)a1[1], (unsigned int *)a2);
              if ( v33 )
              {
                if ( v33 == -1 )
                {
                  v45 = *(_DWORD *)(a2 + 24);
                  if ( v45 )
                  {
                    v46 = (__int64 *)(a2 + 24);
                    v47 = (__int64 *)(a2 + 8LL * (unsigned int)(v45 - 1) + 32);
                    do
                    {
                      v48 = *v47--;
                      (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 48))(a1, v48);
                    }
                    while ( v46 != v47 );
                  }
                  break;
                }
                if ( v33 != 1 )
                  break;
              }
              v34 = (unsigned int **)(a2 + 32);
              v35 = 8LL * *(unsigned int *)(a2 + 24);
              v55 = (unsigned int **)(a2 + 32 + v35);
              if ( v35 )
              {
                v36 = nullptr;
                do
                {
                  v37 = *v34;
                  if ( (unsigned int)sub_8E8110((_QWORD *)a1[1], *v34) == 1 )
                  {
                    v38 = a1[5];
                    v39 = *v37 >> 5;
                    if ( v38
                      && (unsigned int)v39 < *(_DWORD *)(v38 - 4)
                      && (*(_DWORD *)(v38 + 4 * v39) & (1 << *v37)) != 0 )
                    {
                      goto LABEL_4;
                    }
                    if ( !v36 )
                      v36 = v37;
                  }
                  ++v34;
                }
                while ( v55 != v34 );
                if ( v36 )
                  (*(void (__fastcall **)(__int64 *, unsigned int *))(*a1 + 48))(a1, v36);
              }
              break;
            case 5:
              v28 = sub_8E8110((_QWORD *)a1[1], (unsigned int *)a2);
              if ( v28 == -1 )
              {
                v40 = (unsigned int **)(a2 + 32);
                v41 = 8LL * *(unsigned int *)(a2 + 24);
                v56 = (unsigned int **)(a2 + 32 + v41);
                if ( v41 )
                {
                  v20 = nullptr;
                  do
                  {
                    v42 = *v40;
                    if ( (unsigned int)sub_8E8110((_QWORD *)a1[1], *v40) == -1 )
                    {
                      v43 = a1[5];
                      v44 = *v42 >> 5;
                      if ( v43
                        && (unsigned int)v44 < *(_DWORD *)(v43 - 4)
                        && (*(_DWORD *)(v43 + 4 * v44) & (1 << *v42)) != 0 )
                      {
                        goto LABEL_4;
                      }
                      if ( !v20 )
                        v20 = v42;
                    }
                    ++v40;
                  }
                  while ( v56 != v40 );
                  if ( v20 )
                    goto LABEL_73;
                }
              }
              else if ( v28 == 1 )
              {
                v29 = *(_DWORD *)(a2 + 24);
                if ( v29 )
                {
                  v30 = (__int64 *)(a2 + 24);
                  v31 = (__int64 *)(a2 + 8LL * (unsigned int)(v29 - 1) + 32);
                  do
                  {
                    v32 = *v31--;
                    (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 48))(a1, v32);
                  }
                  while ( v30 != v31 );
                }
              }
              break;
            case 9:
              v19 = sub_8E8110((_QWORD *)a1[1], (unsigned int *)a2);
              if ( !v19 )
              {
LABEL_22:
                v20 = *(unsigned int **)(a2 + 32);
                v21 = *(unsigned int **)(a2 + 40);
                if ( (unsigned int)sub_8E8110((_QWORD *)a1[1], v20) != -1 )
                {
                  if ( (unsigned int)sub_8E8110((_QWORD *)a1[1], v21) == 1 )
                  {
                    v22 = a1[5];
                    v23 = *v21 >> 5;
                    if ( !v22
                      || (unsigned int)v23 >= *(_DWORD *)(v22 - 4)
                      || (*(_DWORD *)(v22 + 4 * v23) & (1 << *v21)) == 0 )
                    {
                      (*(void (__fastcall **)(__int64 *, unsigned int *, __int64))(*a1 + 48))(a1, v21, v23);
                    }
                  }
                  break;
                }
                v49 = a1[5];
                v50 = *v20 >> 5;
                if ( v49 && v50 < *(_DWORD *)(v49 - 4) && (*(_DWORD *)(v49 + 4LL * v50) & (1 << *v20)) != 0 )
                  break;
LABEL_73:
                (*(void (__fastcall **)(__int64 *, unsigned int *))(*a1 + 48))(a1, v20);
                break;
              }
              if ( v19 != -1 )
              {
                if ( v19 != 1 )
                  break;
                goto LABEL_22;
              }
              v51 = *(_DWORD *)(a2 + 24);
              if ( v51 )
              {
                v52 = (__int64 *)(a2 + 24);
                v53 = (__int64 *)(a2 + 8LL * (unsigned int)(v51 - 1) + 32);
                do
                {
                  v54 = *v53--;
                  (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 48))(a1, v54);
                }
                while ( v52 != v53 );
              }
              break;
            default:
              break;
          }
        }
      }
    }
  }
LABEL_4:
  v9 = *(_DWORD *)(a2 + 12);
  v10 = *(__int64 **)((char *)a1 + (-a3 & 0x18) + 72);
  v11 = *(unsigned int *)((char *)a1 + (-a3 & 0x18) + 80);
  v12 = v11 - 1;
  result = 16 * v11;
  v13 = (char *)v10 + result;
  v14 = 16LL * (v9 & v12);
  v15 = &v10[(unsigned __int64)v14 / 8];
  if ( v14 != result )
  {
    result = (__int64)&v10[(unsigned __int64)v14 / 8];
    do
    {
      v16 = *(_QWORD *)result;
      if ( *(_QWORD *)result > 1u )
      {
        if ( *(_DWORD *)(v16 + 12) == v9 && a2 == v16 )
          goto LABEL_29;
      }
      else if ( !v16 )
      {
        return result;
      }
      result += 16;
    }
    while ( v13 != (char *)result );
  }
  for ( ; v15 != v10; v10 += 2 )
  {
    result = *v10;
    if ( (unsigned __int64)*v10 > 1 )
    {
      if ( *(_DWORD *)(result + 12) == v9 && a2 == result )
      {
        result = (__int64)v10;
LABEL_29:
        v24 = *(__int64 ***)(result + 8);
        if ( v24 )
        {
          while ( 1 )
          {
            v25 = *v24;
            v26 = **v24;
            v27 = *(__int64 (__fastcall **)(_QWORD *, __int64))(v26 + 24);
            if ( v27 == sub_8E3150 )
              break;
LABEL_33:
            result = ((__int64 (__fastcall *)(__int64 *, __int64 *, __int64, _QWORD))v27)(
                       v25,
                       a1,
                       a2,
                       (unsigned __int8)a3);
            v24 = (__int64 **)v24[1];
            if ( !v24 )
              return result;
          }
          while ( 1 )
          {
            result = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v26 + 32))(v25, a1);
            v24 = (__int64 **)v24[1];
            if ( !v24 )
              break;
            v25 = *v24;
            v26 = **v24;
            v27 = *(__int64 (__fastcall **)(_QWORD *, __int64))(v26 + 24);
            if ( v27 != sub_8E3150 )
              goto LABEL_33;
          }
        }
        return result;
      }
    }
    else if ( !result )
    {
      return result;
    }
  }
  return result;
}

