char __fastcall sub_9E3D20(__int64 a1, unsigned int a2, _QWORD *a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r12
  __int64 v9; // rsi
  __int64 v10; // rax
  unsigned int **v11; // r14
  unsigned int **v12; // r15
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdi
  int v16; // eax
  _DWORD *v17; // rdx
  int v18; // edi
  __int64 v19; // rax
  unsigned int v20; // ecx
  _DWORD *v21; // r8
  __int64 v22; // rcx
  _DWORD *v23; // r9
  _DWORD *i; // rax
  int v25; // ecx
  __int64 j; // rax
  unsigned int *v27; // r8
  unsigned int *v28; // r9
  int *v29; // r15
  __int64 v30; // r14
  int v31; // edi
  __int64 v32; // rax
  _DWORD *v33; // rdx
  unsigned int v34; // ecx
  int *v35; // r9
  __int64 v36; // rcx
  _DWORD *v37; // r10
  int v38; // ecx
  int *v39; // rcx
  unsigned int v40; // edx
  __int64 v41; // r12
  __int64 k; // rbx
  unsigned int v43; // esi
  unsigned int v44; // esi
  _DWORD *v45; // rdi
  int v46; // edx
  int v47; // eax
  unsigned int *v49; // [rsp+0h] [rbp-68h]
  int v52; // [rsp+28h] [rbp-40h] BYREF
  int v53[15]; // [rsp+2Ch] [rbp-3Ch] BYREF

  v6 = a2;
  v9 = **(_QWORD **)(*(_QWORD *)(a1 + 32) + 8LL * a2);
  if ( (unsigned __int8)sub_98ACD0(v9) )
  {
    v10 = 8LL * *(unsigned int *)(v9 + 24);
    v11 = (unsigned int **)(v9 + 32 + v10);
    if ( v10 )
    {
      v12 = (unsigned int **)(v9 + 32);
      do
      {
        v13 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL);
        if ( v13 )
        {
          v14 = **v12;
          if ( (unsigned int)v14 < *(_DWORD *)(v13 - 4) )
          {
            v15 = *(_QWORD *)(v13 + 8 * v14);
            if ( v15 )
            {
              v16 = sub_B39350(v15, *(unsigned int *)(a1 + 8));
              v17 = *(_DWORD **)a4;
              v18 = v16;
              v52 = v16;
              v19 = *(unsigned int *)(a4 + 8);
              v20 = v19 - 1;
              v19 *= 8;
              v21 = (_DWORD *)((char *)v17 + v19);
              v22 = 8LL * (v18 & v20);
              v23 = &v17[(unsigned __int64)v22 / 4];
              if ( v22 != v19 )
              {
                for ( i = &v17[(unsigned __int64)v22 / 4]; v21 != i; i += 2 )
                {
                  v25 = i[1];
                  if ( v25 + 0x80000000 > 1 )
                  {
                    if ( *i == v18 && v18 == v25 )
                      goto LABEL_15;
                  }
                  else if ( v25 == 0x80000000 )
                  {
                    goto LABEL_14;
                  }
                }
              }
              for ( ; v23 != v17; v17 += 2 )
              {
                v47 = v17[1];
                if ( v47 + 0x80000000 > 1 )
                {
                  if ( *v17 == v18 && v18 == v47 )
                    goto LABEL_15;
                }
                else if ( v47 == 0x80000000 )
                {
                  break;
                }
              }
LABEL_14:
              v53[0] = v18;
              sub_9E1E20(a4, v53);
              sub_98D100(a3, (unsigned int *)&v52);
            }
          }
        }
LABEL_15:
        ++v12;
      }
      while ( v11 != v12 );
    }
  }
  LOBYTE(j) = sub_9B1230(a1, a2);
  if ( !(_BYTE)j )
  {
    v27 = *(unsigned int **)(*(_QWORD *)(a1 + 712) + 16 * v6);
    if ( v27 )
    {
      j = *(v27 - 1);
      v28 = &v27[2 * j];
      if ( v28 != v27 )
      {
        j = (__int64)v53;
        v49 = v28;
        v29 = *(int **)(*(_QWORD *)(a1 + 712) + 16 * v6);
        v30 = a5;
        do
        {
          v31 = *v29;
          if ( *v29 != -1 )
          {
            v32 = *(unsigned int *)(v30 + 8);
            v33 = *(_DWORD **)v30;
            v34 = v32 - 1;
            v32 *= 8;
            v35 = (int *)(*(_QWORD *)v30 + v32);
            v36 = 8LL * (v31 & v34);
            v37 = (_DWORD *)(*(_QWORD *)v30 + v36);
            if ( v36 != v32 )
            {
              for ( j = *(_QWORD *)v30 + v36; v35 != (int *)j; j += 8 )
              {
                v38 = *(_DWORD *)(j + 4);
                if ( v38 + 0x80000000 > 1 )
                {
                  if ( *(_DWORD *)j == v31 && v31 == v38 )
                    goto LABEL_39;
                }
                else if ( v38 == 0x80000000 )
                {
                  goto LABEL_28;
                }
              }
            }
            for ( ; v37 != v33; v33 += 2 )
            {
              LODWORD(j) = v33[1];
              if ( (unsigned int)j + 0x80000000 > 1 )
              {
                if ( *v33 == v31 && v31 == (_DWORD)j )
                  goto LABEL_39;
              }
              else if ( (_DWORD)j == 0x80000000 )
              {
                break;
              }
            }
LABEL_28:
            v53[0] = *v29;
            sub_9E1E20(v30, v53);
            j = *(_QWORD *)(a1 + 696);
            v39 = (int *)(j + 24LL * (unsigned int)*v29);
            v40 = v39[3];
            if ( v40 == -1
              || (LOBYTE(j) = (*(_BYTE *)(*(_QWORD *)(a1 + 720) + 4LL * v40 + 3) >> 4) & 3, (_BYTE)j != 2)
              && ((j = *(_QWORD *)(a1 + 744), *(_QWORD *)(j + 8LL * v40))
               || (j = *(_QWORD *)(a1 + 752), *(_QWORD *)(j + 8LL * v40))
               || a2 == v40) )
            {
              v41 = *(_QWORD *)v39;
              if ( *(_QWORD *)v39 )
              {
                LODWORD(j) = 5 * *(_DWORD *)(v41 - 4);
                for ( k = v41 + 40LL * *(unsigned int *)(v41 - 4);
                      v41 != k;
                      LOBYTE(j) = sub_98D100(a3, (unsigned int *)&v52) )
                {
                  while ( 1 )
                  {
                    v43 = *(_DWORD *)(v41 + 32);
                    if ( v43 != -1 )
                    {
                      LOBYTE(j) = sub_9B1230(a1, v43);
                      if ( !(_BYTE)j )
                      {
                        v44 = *(_DWORD *)(a4 + 8);
                        v45 = *(_DWORD **)a4;
                        v52 = *(_DWORD *)(v41 + 32);
                        j = (__int64)sub_98B080(v45, v44, v52);
                        if ( !j )
                          break;
                      }
                    }
                    v41 += 40;
                    if ( v41 == k )
                      goto LABEL_39;
                  }
                  v53[0] = v46;
                  v41 += 40;
                  sub_9E1E20(a4, v53);
                }
              }
            }
          }
LABEL_39:
          v29 += 2;
        }
        while ( v49 != (unsigned int *)v29 );
      }
    }
  }
  return j;
}

