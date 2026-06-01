unsigned __int64 __fastcall implied_free_action::postsolve(implied_free_action *this, CoinPostsolveMatrix *a2)
{
  unsigned __int64 result; // rax
  __int64 v3; // rdx
  int *v4; // rbp
  __int64 v6; // r12
  __int64 v7; // r11
  __int64 v8; // r13
  __int64 v9; // rbx
  __int64 v10; // rax
  double v11; // xmm2_8
  double v12; // xmm3_8
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rsi
  int v16; // edi
  double v17; // xmm0_8
  _DWORD *v18; // r10
  __int64 v19; // rdx
  _DWORD *v20; // rdx
  double *v21; // rdx
  double *v22; // rcx
  _QWORD *v23; // rax
  double v24; // xmm0_8
  _BYTE *v25; // r11
  double *v26; // rdi
  double v27; // xmm1_8
  int v28; // [rsp+0h] [rbp-BCh]
  __int64 v29; // [rsp+4h] [rbp-B8h]
  __int64 v30; // [rsp+Ch] [rbp-B0h]
  __int64 v31; // [rsp+14h] [rbp-A8h]
  __int64 v32; // [rsp+1Ch] [rbp-A0h]
  __int64 v33; // [rsp+24h] [rbp-98h]
  __int64 v34; // [rsp+2Ch] [rbp-90h]
  __int64 v35; // [rsp+34h] [rbp-88h]
  __int64 v36; // [rsp+44h] [rbp-78h]
  __int64 v37; // [rsp+4Ch] [rbp-70h]
  __int64 v38; // [rsp+54h] [rbp-68h]
  __int64 v39; // [rsp+5Ch] [rbp-60h]
  __int64 v40; // [rsp+64h] [rbp-58h]
  __int64 v41; // [rsp+6Ch] [rbp-50h]
  __int64 v42; // [rsp+74h] [rbp-48h]
  __int64 v43; // [rsp+7Ch] [rbp-40h]
  char *v44; // [rsp+84h] [rbp-38h]

  result = *((_QWORD *)this + 3);
  v30 = *((_QWORD *)a2 + 5);
  v31 = *((_QWORD *)a2 + 6);
  v32 = *((_QWORD *)a2 + 7);
  v33 = *((_QWORD *)a2 + 8);
  v34 = *((_QWORD *)a2 + 33);
  v37 = *((_QWORD *)a2 + 11);
  v38 = *((_QWORD *)a2 + 12);
  v40 = *((_QWORD *)a2 + 13);
  v41 = *((_QWORD *)a2 + 14);
  v35 = *((_QWORD *)a2 + 20);
  v36 = *((_QWORD *)a2 + 23);
  v42 = *((_QWORD *)a2 + 22);
  v3 = (__int64)*((int *)this + 4) << 6;
  v43 = *((_QWORD *)a2 + 21);
  v4 = (int *)(result + v3 - 64);
  if ( result <= (unsigned __int64)v4 )
  {
    v39 = result + v3 - 128;
    v6 = *((_QWORD *)a2 + 9);
    v44 = (char *)v4 + (~(v3 - 64) & 0xFFFFFFFFFFFFFFC0LL);
    while ( 1 )
    {
      v7 = *v4;
      v8 = *((_QWORD *)v4 + 5);
      v9 = *((_QWORD *)v4 + 6);
      v28 = v4[1];
      v10 = v4[14];
      if ( (int)v10 <= 0 )
      {
        v11 = 0.0;
        v12 = 0.0;
      }
      else
      {
        v11 = 0.0;
        v12 = 0.0;
        v29 = (unsigned int)(v10 - 1) + 1LL;
        v13 = v8 + 8 * v10;
        v14 = 0;
        do
        {
          while ( 1 )
          {
            v15 = *((int *)a2 + 64);
            v16 = *(_DWORD *)(v13 + 4 * v14);
            v17 = *(double *)(v8 + 8 * v14);
            v18 = (_DWORD *)(v34 + 4 * v15);
            *((_DWORD *)a2 + 64) = *v18;
            v19 = 4LL * v16;
            *v18 = *(_DWORD *)(v19 + v30);
            *(_DWORD *)(v19 + v30) = v15;
            *(double *)(v33 + 8 * v15) = v17;
            *(_DWORD *)(v32 + 4 * v15) = v7;
            if ( v9 )
              *(_QWORD *)(v6 + 8LL * v16) = *(_QWORD *)(v9 + 8 * v14);
            v20 = (_DWORD *)(v31 + v19);
            if ( v28 == v16 )
              break;
            ++*v20;
            ++v14;
            v11 = v11 + v17 * *(double *)(v35 + 8LL * v16);
            if ( v29 == v14 )
              goto LABEL_10;
          }
          *v20 = 1;
          ++v14;
          v12 = v17;
          *(_QWORD *)(v37 + 8LL * v16) = *((_QWORD *)v4 + 1);
          *(_QWORD *)(v38 + 8LL * v16) = *((_QWORD *)v4 + 2);
          *(double *)(v36 + 8LL * v16) = -*(double *)(v6 + 8LL * v16) / v17;
        }
        while ( v29 != v14 );
      }
LABEL_10:
      v21 = (double *)(v40 + 8 * v7);
      *v21 = *((double *)v4 + 3);
      v22 = (double *)(v41 + 8 * v7);
      v23 = (_QWORD *)(v42 + 8 * v7);
      *v22 = *((double *)v4 + 4);
      v24 = *(double *)(v6 + 8LL * v28) / v12;
      *(double *)(v43 + 8 * v7) = v24;
      v25 = (_BYTE *)(*((_QWORD *)a2 + 25) + v7);
      v26 = (double *)(v35 + 8LL * v28);
      if ( v24 >= 0.0 && *v21 > -1.0e20 )
        break;
      v27 = *v22;
      if ( (v24 > 0.0 || v27 >= 1.0e20) && v27 >= 1.0e20 )
      {
        *v26 = (*v21 - v11) / v12;
        goto LABEL_13;
      }
      *v26 = (v27 - v11) / v12;
      *v23 = *(_QWORD *)v22;
      *v25 = *v25 & 0xF8 | 3;
LABEL_14:
      *(_BYTE *)(v28 + *((_QWORD *)a2 + 24)) = *(_BYTE *)(v28 + *((_QWORD *)a2 + 24)) & 0xF8 | 1;
      *(_QWORD *)(v36 + 8LL * v28) = 0;
      result = v39;
      v4 = (int *)v39;
      if ( (char *)v39 == v44 )
        return result;
      v39 -= 64;
    }
    *v26 = (*v21 - v11) / v12;
LABEL_13:
    *v23 = *(_QWORD *)v21;
    *v25 = *v25 & 0xF8 | 2;
    goto LABEL_14;
  }
  return result;
}

