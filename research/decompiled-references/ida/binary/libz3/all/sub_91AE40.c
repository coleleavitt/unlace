void __fastcall sub_91AE40(__int64 a1)
{
  __int64 v2; // rdx
  unsigned int v3; // eax
  __int64 v4; // rbp
  _DWORD *v5; // rax
  int v6; // eax
  int v7; // eax
  int m; // r13d
  __int64 v9; // rsi
  __int64 v10; // rax
  int v11; // edi
  __int64 *v12; // rcx
  unsigned int v13; // edx
  __int64 *v14; // rsi
  __int64 v15; // rdx
  __int64 *v16; // r8
  __int64 *v17; // rax
  __int64 v18; // rdx
  __int64 **ii; // r13
  __int64 *v20; // rdi
  __int64 v21; // rax
  __int64 (__fastcall *v22)(_QWORD *, __int64); // rcx
  __int64 v23; // rax
  int v24; // eax
  unsigned int *v25; // r14
  unsigned int *v26; // r13
  __int64 v27; // rsi
  __int64 v28; // rdx
  int i; // r13d
  __int64 v30; // rsi
  int k; // r13d
  __int64 v32; // rsi
  int v33; // eax
  int v34; // eax
  unsigned int **v35; // r15
  __int64 v36; // rax
  unsigned int *v37; // r13
  __int64 v38; // rsi
  __int64 v39; // rdi
  __int64 v40; // rax
  unsigned int **v41; // r15
  unsigned int *v42; // r14
  __int64 v43; // rax
  __int64 v44; // rdi
  int n; // r13d
  __int64 v46; // rsi
  __int64 v47; // rsi
  unsigned int v48; // eax
  int j; // r13d
  __int64 v50; // rsi
  unsigned int **v51; // [rsp+0h] [rbp-40h]
  unsigned int **v52; // [rsp+0h] [rbp-40h]

  if ( !*(_BYTE *)(a1 + 136) )
  {
    v2 = *(_QWORD *)(a1 + 32);
    *(_BYTE *)(a1 + 136) = 1;
    if ( !v2 )
      goto LABEL_25;
    v3 = *(_DWORD *)(a1 + 16);
    if ( v3 >= *(_DWORD *)(v2 - 4) )
      goto LABEL_25;
    while ( 1 )
    {
      v4 = *(_QWORD *)(v2 + 8LL * v3);
      *(_DWORD *)(a1 + 16) = v3 + 1;
      if ( !*(_WORD *)(v4 + 4) )
      {
        v5 = *(_DWORD **)(*(_QWORD *)(v4 + 16) + 24LL);
        if ( !v5 || *v5 )
        {
          for ( i = *(_DWORD *)(v4 + 24); i; --i )
          {
            v30 = *(_QWORD *)(v4 + 8LL * (unsigned int)(i - 1) + 32);
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, v30);
          }
          goto LABEL_16;
        }
        v6 = v5[1];
        if ( v6 == 6 )
        {
          v34 = sub_8E8110(*(_QWORD **)(a1 + 8), (unsigned int *)v4);
          switch ( v34 )
          {
            case 0:
              goto LABEL_66;
            case -1:
              for ( j = *(_DWORD *)(v4 + 24); j; --j )
              {
                v50 = *(_QWORD *)(v4 + 8LL * (unsigned int)(j - 1) + 32);
                (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, v50);
              }
              break;
            case 1:
LABEL_66:
              v35 = (unsigned int **)(v4 + 32);
              v36 = 8LL * *(unsigned int *)(v4 + 24);
              v51 = (unsigned int **)(v4 + 32 + v36);
              if ( !v36 )
                break;
              v25 = nullptr;
              do
              {
                v37 = *v35;
                if ( (unsigned int)sub_8E8110(*(_QWORD **)(a1 + 8), *v35) == 1 )
                {
                  v38 = *(_QWORD *)(a1 + 40);
                  v39 = *v37 >> 5;
                  if ( v38
                    && (unsigned int)v39 < *(_DWORD *)(v38 - 4)
                    && (*(_DWORD *)(v38 + 4 * v39) & (1 << *v37)) != 0 )
                  {
                    goto LABEL_16;
                  }
                  if ( !v25 )
                    v25 = v37;
                }
                ++v35;
              }
              while ( v51 != v35 );
              if ( !v25 )
                break;
LABEL_88:
              (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a1 + 48LL))(a1, v25);
              break;
          }
        }
        else
        {
          if ( v6 <= 6 )
          {
            if ( v6 == 4 )
            {
              (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 48LL))(a1, *(_QWORD *)(v4 + 32));
              v33 = sub_8E8110(*(_QWORD **)(a1 + 8), *(unsigned int **)(v4 + 32));
              if ( v33 == -1 )
              {
                (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 48LL))(a1, *(_QWORD *)(v4 + 48));
              }
              else if ( v33 == 1 )
              {
                (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 48LL))(a1, *(_QWORD *)(v4 + 40));
              }
              goto LABEL_16;
            }
            if ( v6 != 5 )
            {
LABEL_56:
              for ( k = *(_DWORD *)(v4 + 24); k; --k )
              {
                v32 = *(_QWORD *)(v4 + 8LL * (unsigned int)(k - 1) + 32);
                (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, v32);
              }
              goto LABEL_16;
            }
            v7 = sub_8E8110(*(_QWORD **)(a1 + 8), (unsigned int *)v4);
            if ( v7 != -1 )
            {
              if ( v7 == 1 )
              {
                for ( m = *(_DWORD *)(v4 + 24); m; --m )
                {
                  v9 = *(_QWORD *)(v4 + 8LL * (unsigned int)(m - 1) + 32);
                  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, v9);
                }
              }
              goto LABEL_16;
            }
            v40 = 8LL * *(unsigned int *)(v4 + 24);
            v52 = (unsigned int **)(v4 + 32 + v40);
            if ( !v40 )
              goto LABEL_16;
            v41 = (unsigned int **)(v4 + 32);
            v26 = nullptr;
            do
            {
              v42 = *v41;
              if ( (unsigned int)sub_8E8110(*(_QWORD **)(a1 + 8), *v41) == -1 )
              {
                v43 = *(_QWORD *)(a1 + 40);
                v44 = *v42 >> 5;
                if ( v43 && (unsigned int)v44 < *(_DWORD *)(v43 - 4) && (*(_DWORD *)(v43 + 4 * v44) & (1 << *v42)) != 0 )
                  goto LABEL_16;
                if ( !v26 )
                  v26 = v42;
              }
              ++v41;
            }
            while ( v52 != v41 );
            if ( !v26 )
              goto LABEL_16;
LABEL_50:
            (*(void (__fastcall **)(__int64, unsigned int *, __int64))(*(_QWORD *)a1 + 48LL))(a1, v26, v28);
            goto LABEL_16;
          }
          if ( v6 != 9 )
            goto LABEL_56;
          v24 = sub_8E8110(*(_QWORD **)(a1 + 8), (unsigned int *)v4);
          switch ( v24 )
          {
            case 0:
              goto LABEL_45;
            case -1:
              for ( n = *(_DWORD *)(v4 + 24); n; --n )
              {
                v46 = *(_QWORD *)(v4 + 8LL * (unsigned int)(n - 1) + 32);
                (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, v46);
              }
              break;
            case 1:
LABEL_45:
              v25 = *(unsigned int **)(v4 + 32);
              v26 = *(unsigned int **)(v4 + 40);
              if ( (unsigned int)sub_8E8110(*(_QWORD **)(a1 + 8), v25) == -1 )
              {
                v47 = *(_QWORD *)(a1 + 40);
                v48 = *v25 >> 5;
                if ( v47 && v48 < *(_DWORD *)(v47 - 4) && (*(_DWORD *)(v47 + 4LL * v48) & (1 << *v25)) != 0 )
                  break;
                goto LABEL_88;
              }
              if ( (unsigned int)sub_8E8110(*(_QWORD **)(a1 + 8), v26) != 1 )
                break;
              v27 = *(_QWORD *)(a1 + 40);
              v28 = *v26 >> 5;
              if ( v27 )
              {
                if ( (unsigned int)v28 < *(_DWORD *)(v27 - 4) && (*(_DWORD *)(v27 + 4 * v28) & (1 << *v26)) != 0 )
                  break;
              }
              goto LABEL_50;
          }
        }
      }
LABEL_16:
      v10 = *(unsigned int *)(a1 + 56);
      v11 = *(_DWORD *)(v4 + 12);
      v12 = *(__int64 **)(a1 + 48);
      v13 = v10 - 1;
      v10 *= 16;
      v14 = (__int64 *)((char *)v12 + v10);
      v15 = 16LL * (v11 & v13);
      v16 = &v12[(unsigned __int64)v15 / 8];
      if ( v15 != v10 )
      {
        v17 = &v12[(unsigned __int64)v15 / 8];
        do
        {
          v18 = *v17;
          if ( (unsigned __int64)*v17 > 1 )
          {
            if ( *(_DWORD *)(v18 + 12) == v11 && v4 == v18 )
              goto LABEL_27;
          }
          else if ( !v18 )
          {
            goto LABEL_23;
          }
          v17 += 2;
        }
        while ( v14 != v17 );
      }
      if ( v12 == v16 )
        goto LABEL_23;
      while ( 1 )
      {
        v23 = *v12;
        if ( (unsigned __int64)*v12 > 1 )
          break;
        if ( !v23 )
          goto LABEL_23;
LABEL_37:
        v12 += 2;
        if ( v16 == v12 )
          goto LABEL_23;
      }
      if ( *(_DWORD *)(v23 + 12) != v11 || v4 != v23 )
        goto LABEL_37;
      v17 = v12;
LABEL_27:
      for ( ii = (__int64 **)v17[1]; ii; ii = (__int64 **)ii[1] )
      {
        v20 = *ii;
        v21 = **ii;
        v22 = *(__int64 (__fastcall **)(_QWORD *, __int64))(v21 + 16);
        if ( v22 == sub_8E31E0 )
          (*(void (__fastcall **)(__int64 *, __int64))(v21 + 32))(v20, a1);
        else
          ((void (__fastcall *)(__int64 *, __int64, __int64, __int64 (__fastcall *)(_QWORD *, __int64), __int64 *))v22)(
            v20,
            a1,
            v4,
            v22,
            v16);
      }
LABEL_23:
      v2 = *(_QWORD *)(a1 + 32);
      if ( v2 )
      {
        v3 = *(_DWORD *)(a1 + 16);
        if ( v3 < *(_DWORD *)(v2 - 4) )
          continue;
      }
LABEL_25:
      *(_BYTE *)(a1 + 136) = 0;
      return;
    }
  }
}

