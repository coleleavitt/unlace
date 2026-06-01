__int64 *__fastcall sub_B3BEC0(__int64 a1, int a2)
{
  __int64 v2; // r8
  __int64 *result; // rax
  signed int v5; // r10d
  __int64 v6; // rbx
  int v7; // ecx
  int v8; // esi
  __int64 v9; // rcx
  int v10; // r13d
  unsigned int v11; // esi
  __int64 *v12; // rax
  __int64 v13; // r12
  __int64 v14; // r11
  unsigned int v15; // ebp
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // rax
  int v20; // r14d
  double v21; // xmm0_8
  __int64 v22; // rax
  __int64 v23; // r9
  __int64 i; // rax
  int v25; // r14d
  double v26; // xmm2_8
  __int64 v27; // r14
  __int64 v28; // r15
  double v29; // xmm1_8
  int v30; // edi
  int v31; // r8d
  double v32; // xmm3_8
  __int64 v33; // r15
  __int64 v34; // r12
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // r9
  __int64 j; // rax
  int v39; // edx
  double v40; // xmm2_8
  __int64 v41; // rbp
  __int64 v42; // rdx
  __int64 k; // rax
  int v44; // r9d
  double v45; // xmm0_8
  __int64 v46; // r15
  unsigned int v47; // eax
  int v48; // ecx
  int v49; // edx
  __int64 v50; // rdx
  __int64 *v51; // [rsp+0h] [rbp-58h]
  __int64 *v52; // [rsp+8h] [rbp-50h]
  __int64 v53; // [rsp+8h] [rbp-50h]
  _DWORD *v54; // [rsp+10h] [rbp-48h]
  __int64 v55; // [rsp+10h] [rbp-48h]
  __int64 v56; // [rsp+20h] [rbp-38h]
  __int64 v57; // [rsp+20h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 72);
  if ( v2 )
    result = (__int64 *)*(unsigned int *)(v2 - 4);
  else
    result = nullptr;
  if ( a2 < (int)result )
  {
    result = (__int64 *)(v2 + 4LL * (unsigned int)a2);
    v5 = *(_DWORD *)result;
    if ( *(_DWORD *)result )
    {
      v6 = *(_QWORD *)(a1 + 64);
      if ( v6 )
      {
        v7 = *(_DWORD *)(v6 - 4);
        v8 = v7 - 1;
      }
      else
      {
        v8 = -1;
        v7 = 0;
      }
      if ( v5 == v8 )
      {
        *(_DWORD *)result = 0;
        --*(_DWORD *)(v6 - 4);
      }
      else
      {
        v9 = *(unsigned int *)(v6 + 4LL * (unsigned int)(v7 - 1));
        v54 = (_DWORD *)(v6 + 4LL * (unsigned int)v5);
        *v54 = v9;
        *(_DWORD *)(v2 + 4 * v9) = v5;
        *(_DWORD *)result = 0;
        --*(_DWORD *)(v6 - 4);
        v10 = v5 >> 1;
        if ( !(v5 >> 1) )
          return sub_B3B670((__int64 **)(a1 + 48), v5);
        v11 = *(_DWORD *)(v6 + 4LL * (unsigned int)v10);
        v52 = *(__int64 **)(a1 + 48);
        v12 = *(__int64 **)(a1 + 56);
        v13 = *((unsigned int *)v12 + 2);
        v14 = *v12;
        v51 = v12;
        v15 = v13 - 1;
        v16 = *v12 + 24 * v13;
        v17 = 24LL * (((_DWORD)v13 - 1) & (unsigned int)v9);
        v18 = v14 + v17;
        if ( v17 != 24 * v13 )
        {
          v56 = v14 + v17;
          v19 = v14 + v17;
          do
          {
            v20 = *(_DWORD *)(v19 + 4);
            if ( v20 == 2 )
            {
              if ( (_DWORD)v9 == *(_DWORD *)v19 && (_DWORD)v9 == *(_DWORD *)(v19 + 8) )
              {
LABEL_16:
                v21 = *(double *)(v19 + 16);
                goto LABEL_17;
              }
            }
            else if ( !v20 )
            {
              goto LABEL_33;
            }
            v19 += 24;
          }
          while ( v16 != v19 );
          v18 = v56;
        }
        if ( v14 != v18 )
        {
          v57 = v2;
          v19 = v14;
          while ( 1 )
          {
            v31 = *(_DWORD *)(v19 + 4);
            if ( v31 == 2 )
            {
              if ( (_DWORD)v9 == *(_DWORD *)v19 && (_DWORD)v9 == *(_DWORD *)(v19 + 8) )
              {
                v2 = v57;
                goto LABEL_16;
              }
            }
            else if ( !v31 )
            {
              goto LABEL_32;
            }
            v19 += 24;
            if ( v18 == v19 )
            {
LABEL_32:
              v2 = v57;
              break;
            }
          }
        }
LABEL_33:
        v21 = 0.0;
LABEL_17:
        v22 = 24LL * (v15 & v11);
        v23 = v14 + v22;
        if ( 24 * v13 != v22 )
        {
          for ( i = v14 + v22; v16 != i; i += 24 )
          {
            v25 = *(_DWORD *)(i + 4);
            if ( v25 == 2 )
            {
              if ( v11 == *(_DWORD *)i && v11 == *(_DWORD *)(i + 8) )
              {
LABEL_24:
                v26 = *(double *)(i + 16);
                goto LABEL_25;
              }
            }
            else if ( !v25 )
            {
              goto LABEL_31;
            }
          }
        }
        if ( v14 != v23 )
        {
          for ( i = v14; v23 != i; i += 24 )
          {
            v30 = *(_DWORD *)(i + 4);
            if ( v30 == 2 )
            {
              if ( v11 == *(_DWORD *)i && v11 == *(_DWORD *)(i + 8) )
                goto LABEL_24;
            }
            else if ( !v30 )
            {
              break;
            }
          }
        }
LABEL_31:
        v26 = 0.0;
LABEL_25:
        v27 = v11;
        v28 = *v52;
        v29 = *(double *)(*v52 + 8LL * v11);
        if ( v21 + *(double *)(*v52 + 8 * v9) > v26 + v29 )
        {
          v53 = *v52;
          v55 = (unsigned int)*v54;
          v32 = *(double *)(v28 + 8 * v55);
          v33 = (unsigned int)v5;
          while ( 1 )
          {
            v34 = 24 * v13;
            v35 = v14 + v34;
            v36 = 24LL * (v15 & (unsigned int)v55);
            v37 = v14 + v36;
            if ( v36 != v34 )
            {
              for ( j = v14 + v36; v35 != j; j += 24 )
              {
                v39 = *(_DWORD *)(j + 4);
                if ( v39 == 2 )
                {
                  if ( (_DWORD)v55 == *(_DWORD *)j && (_DWORD)v55 == *(_DWORD *)(j + 8) )
                  {
LABEL_60:
                    v40 = *(double *)(j + 16);
                    goto LABEL_61;
                  }
                }
                else if ( !v39 )
                {
                  goto LABEL_73;
                }
              }
            }
            if ( v14 != v37 )
            {
              for ( j = v14; v37 != j; j += 24 )
              {
                v49 = *(_DWORD *)(j + 4);
                if ( v49 == 2 )
                {
                  if ( (_DWORD)v55 == *(_DWORD *)j && (_DWORD)v55 == *(_DWORD *)(j + 8) )
                    goto LABEL_60;
                }
                else if ( !v49 )
                {
                  break;
                }
              }
            }
LABEL_73:
            v40 = 0.0;
LABEL_61:
            v41 = v11 & v15;
            v42 = v14 + 24 * v41;
            if ( v34 != 24 * v41 )
            {
              for ( k = v14 + 24 * v41; v35 != k; k += 24 )
              {
                v44 = *(_DWORD *)(k + 4);
                if ( v44 == 2 )
                {
                  if ( v11 == *(_DWORD *)k && v11 == *(_DWORD *)(k + 8) )
                  {
LABEL_68:
                    v45 = *(double *)(k + 16);
                    goto LABEL_69;
                  }
                }
                else if ( !v44 )
                {
                  goto LABEL_72;
                }
              }
            }
            if ( v14 != v42 )
            {
              for ( k = v14; v42 != k; k += 24 )
              {
                v48 = *(_DWORD *)(k + 4);
                if ( v48 == 2 )
                {
                  if ( v11 == *(_DWORD *)k && v11 == *(_DWORD *)(k + 8) )
                    goto LABEL_68;
                }
                else if ( !v48 )
                {
                  break;
                }
              }
            }
LABEL_72:
            v45 = 0.0;
LABEL_69:
            v46 = 4 * v33;
            if ( v40 + v32 <= v45 + v29 )
              break;
            *(_DWORD *)(v6 + v46) = v11;
            v47 = v10 >> 1;
            *(_DWORD *)(v2 + 4 * v27) = v5;
            if ( !(v10 >> 1) )
            {
              v50 = v55;
              result = (_QWORD *)byte_4;
              v5 = 1;
              goto LABEL_91;
            }
            v33 = (unsigned int)v10;
            v10 >>= 1;
            v27 = *(unsigned int *)(v6 + 4LL * v47);
            v5 = v33;
            v29 = *(double *)(v53 + 8 * v27);
            v11 = *(_DWORD *)(v6 + 4LL * v47);
            v13 = *((unsigned int *)v51 + 2);
            v15 = v13 - 1;
          }
          v50 = v55;
          result = (__int64 *)v46;
LABEL_91:
          *(_DWORD *)((char *)result + v6) = v55;
          *(_DWORD *)(v2 + 4 * v50) = v5;
        }
        else
        {
          return sub_B3B670((__int64 **)(a1 + 48), v5);
        }
      }
    }
  }
  return result;
}

