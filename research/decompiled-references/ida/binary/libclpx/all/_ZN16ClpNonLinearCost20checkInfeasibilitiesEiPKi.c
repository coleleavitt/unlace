__int64 __fastcall ClpNonLinearCost::checkInfeasibilities(ClpNonLinearCost *this, int a2, const int *a3)
{
  __int64 v3; // r11
  __int64 result; // rax
  double v5; // xmm2_8
  __int64 v6; // r14
  const int *v7; // rbp
  __int64 v8; // rax
  double v9; // xmm3_8
  __int64 v10; // r10
  signed int *v11; // r15
  signed int v12; // r13d
  int v13; // r12d
  int v14; // esi
  __int64 v15; // rcx
  double *v16; // r9
  double v17; // xmm0_8
  double *v18; // rax
  signed int v19; // ebx
  signed int v20; // edx
  _QWORD *v21; // rsi
  _QWORD *v22; // rdx
  _QWORD *v23; // r10
  __int64 v24; // r8
  int v25; // eax
  int v26; // eax
  __int64 v27; // rbp
  __int64 v28; // rbx
  __int64 v29; // r10
  __int64 v30; // r11
  __int64 v31; // rcx
  double v32; // xmm6_8
  double v33; // xmm0_8
  int v34; // esi
  char v35; // si
  __int64 v36; // xmm1_8
  char *v37; // r8
  double v38; // xmm4_8
  double v39; // xmm1_8
  double *v40; // r9
  double *v41; // rdx
  double v42; // xmm3_8
  char v43; // r15
  int v44; // eax
  double v45; // xmm1_8
  __int64 v46; // [rsp+0h] [rbp-68h]
  __int64 v47; // [rsp+8h] [rbp-60h]
  __int64 v48; // [rsp+10h] [rbp-58h]
  const int *v49; // [rsp+18h] [rbp-50h]
  __int64 v50; // [rsp+20h] [rbp-48h]

  v3 = *((_QWORD *)this + 12);
  v46 = *(_QWORD *)(v3 + 1256);
  result = *((unsigned int *)this + 36);
  v5 = *(double *)(v3 + 880);
  if ( (result & 1) != 0 )
  {
    result = (unsigned int)a2;
    if ( a2 > 0 )
    {
      v6 = *((_QWORD *)this + 10);
      v7 = a3;
      v47 = *((_QWORD *)this + 8);
      v49 = &a3[a2 - 1 + 1];
      v48 = *((_QWORD *)this + 7);
      v50 = *((_QWORD *)this + 11);
      do
      {
        v8 = *(int *)(v46 + 4LL * *v7);
        v9 = *(double *)(*(_QWORD *)(v3 + 1200) + 8 * v8);
        v10 = 8 * v8;
        v11 = (signed int *)(v47 + 4 * v8);
        v12 = *v11;
        v13 = *(_DWORD *)(v48 + 4 * v8);
        v14 = *(_DWORD *)(v48 + 4 * v8 + 4) - 1;
        v15 = v13 + 1LL;
        v16 = (double *)(v6 + 8 * v15);
        if ( v13 >= v14 )
        {
          v15 = v13;
          v19 = *(_DWORD *)(v48 + 4 * v8);
        }
        else
        {
          v17 = *v16;
          if ( v5 + *v16 > v9 )
          {
            v15 = v13;
            v19 = *(_DWORD *)(v48 + 4 * v8);
LABEL_36:
            if ( v9 >= v17 - v5 )
            {
              v44 = *(_DWORD *)(*((_QWORD *)this + 13) + 4LL * (v19 >> 5));
              if ( _bittest(&v44, v19) )
              {
                if ( v13 == v19 )
                {
                  v15 = ++v19;
                  v16 = (double *)(v6 + 8LL * v19 + 8);
                }
              }
            }
          }
          else
          {
            v18 = (double *)(v6 + 8 * v15 + 8);
            v19 = v14;
            v20 = v13;
            while ( 1 )
            {
              ++v20;
              v16 = v18;
              if ( v20 == v14 )
                break;
              v17 = *v18++;
              if ( v17 + v5 > v9 )
              {
                v19 = v20;
                goto LABEL_36;
              }
              ++v15;
            }
          }
        }
        v21 = (_QWORD *)(v10 + *(_QWORD *)(v3 + 984));
        v22 = (_QWORD *)(v10 + *(_QWORD *)(v3 + 1008));
        v23 = (_QWORD *)(*(_QWORD *)(v3 + 1032) + v10);
        *v11 = v19;
        if ( v19 != v12 )
        {
          v24 = *((_QWORD *)this + 13);
          v25 = *(_DWORD *)(v24 + 4LL * (v19 >> 5));
          if ( _bittest(&v25, v19) )
            ++*((_DWORD *)this + 28);
          v26 = *(_DWORD *)(v24 + 4LL * (v12 >> 5));
          if ( _bittest(&v26, v12) )
            --*((_DWORD *)this + 28);
        }
        result = v50;
        ++v7;
        *v21 = *(_QWORD *)(v6 + 8 * v15);
        *v22 = *(_QWORD *)v16;
        *v23 = *(_QWORD *)(v50 + 8 * v15);
      }
      while ( v49 != v7 );
      if ( (*((_BYTE *)this + 144) & 2) != 0 )
      {
        v27 = *(_QWORD *)(v3 + 1200);
        v28 = *(_QWORD *)(v3 + 1008);
        v29 = *(_QWORD *)(v3 + 984);
        v30 = *(_QWORD *)(v3 + 1032);
LABEL_18:
        v31 = 0;
        v32 = -v5;
        while ( 1 )
        {
          result = *(int *)(v46 + 4LL * a3[v31]);
          v37 = (char *)(result + *((_QWORD *)this + 15));
          v38 = *(double *)(*((_QWORD *)this + 17) + 8 * result);
          v35 = *v37;
          v39 = *(double *)(v27 + 8 * result);
          v40 = (double *)(v29 + 8 * result);
          v41 = (double *)(v28 + 8 * result);
          v42 = *v41;
          v43 = *v37 & 0xF;
          if ( !v43 )
            break;
          v33 = *v40;
          if ( v43 == 2 )
          {
            if ( v5 < v39 - v33 )
              goto LABEL_24;
            v42 = *(double *)(*((_QWORD *)this + 16) + 8 * result);
            --*((_DWORD *)this + 28);
            if ( v39 - v42 < v32 )
            {
              v36 = *(_QWORD *)&v42;
              ++*((_DWORD *)this + 28);
              v38 = v38 - *((double *)this + 2);
              v42 = v33;
              goto LABEL_30;
            }
            goto LABEL_21;
          }
          if ( v5 < v39 - v42 )
          {
            v45 = *v41;
            ++*((_DWORD *)this + 28);
            v42 = v33;
            v38 = v38 + *((double *)this + 2);
            v33 = v45;
            goto LABEL_41;
          }
          if ( v39 - v33 < v32 )
          {
            v38 = v38 - *((double *)this + 2);
            ++*((_DWORD *)this + 28);
            v36 = *(_QWORD *)&v33;
LABEL_30:
            *v37 &= 0xF0u;
            v33 = -1.797693134862316e308;
            *(double *)(*((_QWORD *)this + 16) + 8 * result) = v42;
            goto LABEL_23;
          }
          if ( v43 == 1 )
            goto LABEL_24;
          v42 = *v40;
          v33 = *v41;
LABEL_22:
          v36 = *(_QWORD *)&v33;
          v33 = v42;
          *v37 = v35 & 0xF0 | 1;
LABEL_23:
          *v40 = v33;
          *(_QWORD *)v41 = v36;
          *(double *)(v30 + 8 * result) = v38;
LABEL_24:
          if ( a2 <= (int)++v31 )
            return result;
        }
        v33 = *(double *)(*((_QWORD *)this + 16) + 8 * result);
        v34 = *((_DWORD *)this + 28);
        *((_DWORD *)this + 28) = v34 - 1;
        if ( v5 < v39 - v33 )
        {
          v38 = v38 + *((double *)this + 2);
          *((_DWORD *)this + 28) = v34;
LABEL_41:
          v36 = 0x7FEFFFFFFFFFFFFFLL;
          *v37 = *v37 & 0xF0 | 2;
          *(double *)(*((_QWORD *)this + 16) + 8 * result) = v42;
          goto LABEL_23;
        }
        if ( v39 - v42 < v32 )
        {
          ++*((_DWORD *)this + 28);
          goto LABEL_24;
        }
LABEL_21:
        v35 = *v37;
        goto LABEL_22;
      }
    }
  }
  else if ( (result & 2) != 0 )
  {
    result = (unsigned int)a2;
    v27 = *(_QWORD *)(v3 + 1200);
    v28 = *(_QWORD *)(v3 + 1008);
    v29 = *(_QWORD *)(v3 + 984);
    v30 = *(_QWORD *)(v3 + 1032);
    if ( a2 > 0 )
      goto LABEL_18;
  }
  return result;
}

