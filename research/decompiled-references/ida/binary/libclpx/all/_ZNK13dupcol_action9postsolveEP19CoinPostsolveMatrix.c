__int64 __fastcall dupcol_action::postsolve(dupcol_action *this, CoinPostsolveMatrix *a2)
{
  __int64 v2; // rdx
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // r13
  double v6; // xmm4_8
  __int64 result; // rax
  unsigned __int64 v8; // rdi
  __int64 v9; // r12
  __int64 v10; // r10
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // r11
  int v17; // r8d
  __int64 v18; // rax
  __int64 v19; // r11
  int v20; // edi
  __int64 v21; // xmm0_8
  int *v22; // rsi
  int v23; // r9d
  CoinPostsolveMatrix *v24; // rbx
  double v25; // xmm0_8
  double v26; // xmm3_8
  double v27; // xmm2_8
  double v28; // xmm5_8
  __int64 v29; // rsi
  double *v30; // rdx
  double *v31; // rcx
  double v32; // xmm1_8
  _BYTE *v33; // rax
  double v34; // xmm8_8
  double v35; // xmm8_8
  double v36; // xmm8_8
  double v37; // xmm1_8
  unsigned __int64 v39; // [rsp+18h] [rbp-78h]
  unsigned __int64 v40; // [rsp+20h] [rbp-70h]
  __int64 v41; // [rsp+28h] [rbp-68h]
  __int64 v42; // [rsp+30h] [rbp-60h]
  __int64 v43; // [rsp+38h] [rbp-58h]
  __int64 v44; // [rsp+40h] [rbp-50h]
  __int64 v45; // [rsp+48h] [rbp-48h]
  __int64 i; // [rsp+50h] [rbp-40h]
  __int64 v47; // [rsp+58h] [rbp-38h]

  v2 = *((int *)this + 4);
  v3 = *((_QWORD *)a2 + 8);
  v4 = *((_QWORD *)a2 + 7);
  v45 = *((_QWORD *)a2 + 5);
  v41 = *((_QWORD *)a2 + 11);
  v5 = *((_QWORD *)a2 + 33);
  v6 = *((double *)a2 + 17);
  v40 = *((_QWORD *)this + 3);
  v42 = *((_QWORD *)a2 + 12);
  v47 = *((_QWORD *)a2 + 23);
  v43 = *((_QWORD *)a2 + 20);
  v44 = *((_QWORD *)a2 + 9);
  result = 7 * v2;
  v8 = v40 + 56 * v2 - 56;
  for ( i = *((_QWORD *)a2 + 6); v40 <= v8; *(_QWORD *)(v47 + 8 * v10) = *(_QWORD *)(v47 + 8 * v9) )
  {
    v9 = *(int *)(v8 + 36);
    v10 = *(int *)(v8 + 32);
    v11 = *(int *)(v8 + 48);
    v12 = *((_DWORD *)a2 + 64);
    *(_QWORD *)(v44 + 8 * v10) = *(_QWORD *)(v44 + 8 * v9);
    *(_QWORD *)(v41 + 8 * v10) = *(_QWORD *)v8;
    *(_QWORD *)(v42 + 8 * v10) = *(_QWORD *)(v8 + 8);
    *(_QWORD *)(v41 + 8 * v9) = *(_QWORD *)(v8 + 16);
    v13 = v11;
    v14 = 8 * v11;
    *(_QWORD *)(v42 + 8 * v9) = *(_QWORD *)(v8 + 24);
    v15 = *(_QWORD *)(v8 + 40);
    if ( v13 <= 0 )
    {
      v23 = v12;
      v24 = a2;
      v12 = -66666666;
    }
    else
    {
      v16 = (unsigned int)(v13 - 1);
      v17 = -66666666;
      v18 = 0;
      v39 = v8;
      v19 = v16 + 1;
      while ( 1 )
      {
        v20 = *(_DWORD *)(v15 + v14 + 4 * v18);
        v21 = *(_QWORD *)(v15 + 8 * v18);
        v22 = (int *)(v5 + 4LL * v12);
        ++v18;
        v23 = *v22;
        *(_DWORD *)(v4 + 4LL * v12) = v20;
        *(_QWORD *)(v3 + 8LL * v12) = v21;
        *v22 = v17;
        v17 = v12;
        if ( v19 == v18 )
          break;
        v12 = v23;
      }
      v8 = v39;
      v24 = a2;
    }
    v25 = *(double *)v8;
    v26 = *(double *)(v8 + 8);
    *(_DWORD *)(v45 + 4 * v10) = v12;
    *((_DWORD *)v24 + 64) = v23;
    v27 = *(double *)(v8 + 16);
    v28 = *(double *)(v8 + 24);
    *(_DWORD *)(i + 4 * v10) = *(_DWORD *)(v8 + 48);
    v29 = *((_QWORD *)v24 + 24);
    v30 = (double *)(v43 + 8 * v9);
    v31 = (double *)(v43 + 8 * v10);
    v32 = *v30;
    v33 = (_BYTE *)(v29 + v10);
    if ( v25 <= -1.797693134862316e308 || (v34 = v32 - v25, v32 - v25 < v27 - v6) || v6 + v28 < v34 )
    {
      if ( v26 >= 1.797693134862316e308 || (v35 = v32 - v26, v32 - v26 < v27 - v6) || v6 + v28 < v35 )
      {
        if ( v27 <= -1.797693134862316e308 || (v36 = v32 - v27, v32 - v27 < v25 - v6) || v6 + v26 < v36 )
        {
          if ( v28 >= 1.797693134862316e308 || (v37 = v32 - v28, v37 < v25 - v6) || v26 + v6 < v37 )
          {
            *v31 = 0.0;
            *v33 &= 0xF8u;
          }
          else
          {
            *v33 = *v33 & 0xF8 | *(_BYTE *)(v29 + v9) & 7;
            *v30 = v28;
            *v31 = v37;
            *(_BYTE *)(v9 + *((_QWORD *)a2 + 24)) = *(_BYTE *)(v9 + *((_QWORD *)a2 + 24)) & 0xF8 | 2;
          }
        }
        else
        {
          *v33 = *v33 & 0xF8 | *(_BYTE *)(v29 + v9) & 7;
          *v30 = v27;
          *v31 = v36;
          *(_BYTE *)(v9 + *((_QWORD *)a2 + 24)) = *(_BYTE *)(v9 + *((_QWORD *)a2 + 24)) & 0xF8 | 3;
        }
      }
      else
      {
        *v33 = *v33 & 0xF8 | 2;
        *v31 = v26;
        *v30 = v35;
      }
    }
    else
    {
      *v33 = *v33 & 0xF8 | 3;
      *v31 = v25;
      *v30 = v34;
    }
    result = v47;
    v8 -= 56LL;
  }
  return result;
}

