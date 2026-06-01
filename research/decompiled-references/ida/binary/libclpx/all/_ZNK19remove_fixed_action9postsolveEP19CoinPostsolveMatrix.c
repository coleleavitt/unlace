double *__fastcall remove_fixed_action::postsolve(remove_fixed_action *this, CoinPostsolveMatrix *a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // r15
  __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // r12
  __int64 v7; // r13
  __int64 v8; // r14
  double v9; // xmm7_8
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // edi
  double *result; // rax
  __int64 v14; // r11
  double v15; // xmm4_8
  int v16; // eax
  int v17; // edi
  double v18; // xmm3_8
  int *v19; // rdx
  double *v20; // r8
  int v21; // r10d
  __int64 v22; // rcx
  __int64 v23; // rax
  double v24; // xmm0_8
  double v25; // xmm1_8
  int *v26; // r9
  double *v27; // r9
  double v28; // xmm2_8
  _BYTE *v29; // r11
  char v30; // dl
  char v31; // al
  char v32; // dl
  int *v33; // [rsp+0h] [rbp-B8h]
  __int64 v34; // [rsp+8h] [rbp-B0h]
  int v35; // [rsp+10h] [rbp-A8h]
  int v36; // [rsp+14h] [rbp-A4h]
  int *v37; // [rsp+18h] [rbp-A0h]
  __int64 v38; // [rsp+28h] [rbp-90h]
  __int64 v39; // [rsp+30h] [rbp-88h]
  __int64 v40; // [rsp+38h] [rbp-80h]
  __int64 v41; // [rsp+40h] [rbp-78h]
  __int64 v42; // [rsp+48h] [rbp-70h]
  __int64 v43; // [rsp+50h] [rbp-68h]
  __int64 v44; // [rsp+58h] [rbp-60h]
  __int64 v45; // [rsp+60h] [rbp-58h]
  int *v46; // [rsp+68h] [rbp-50h]
  __int64 v47; // [rsp+70h] [rbp-48h]
  __int64 v48; // [rsp+78h] [rbp-40h]
  __int64 v49; // [rsp+80h] [rbp-38h]

  v2 = *((_QWORD *)this + 5);
  v3 = *((_QWORD *)a2 + 8);
  v4 = *((_QWORD *)a2 + 7);
  v5 = *((_QWORD *)a2 + 33);
  v6 = *((_QWORD *)a2 + 13);
  v38 = *((_QWORD *)a2 + 5);
  v7 = *((_QWORD *)a2 + 14);
  v8 = *((_QWORD *)a2 + 21);
  v39 = *((_QWORD *)a2 + 6);
  v40 = *((_QWORD *)a2 + 11);
  v41 = *((_QWORD *)a2 + 12);
  v42 = *((_QWORD *)a2 + 20);
  v43 = *((_QWORD *)a2 + 9);
  v44 = *((_QWORD *)a2 + 23);
  v34 = *((_QWORD *)a2 + 22);
  v45 = *((_QWORD *)a2 + 24);
  v9 = *((double *)a2 + 19);
  v10 = *((_QWORD *)this + 2);
  v47 = *((_QWORD *)this + 3);
  v48 = v10;
  v11 = 16LL * *((int *)this + 8);
  v12 = *(_DWORD *)(v2 + v11 + 4);
  result = (double *)(v2 + v11 - 16);
  v35 = v12;
  if ( v2 <= (unsigned __int64)result )
  {
    v37 = (int *)(result - 2);
    v46 = (int *)((char *)result + (~((unsigned __int64)result - v2) & 0xFFFFFFFFFFFFFFF0LL));
    v49 = v10 + 4;
    while ( 1 )
    {
      v14 = *(int *)result;
      v15 = result[1];
      v16 = *((_DWORD *)result + 1);
      *(double *)(v42 + 8 * v14) = v15;
      v36 = v16;
      *(double *)(v40 + 8 * v14) = v15;
      *(double *)(v41 + 8 * v14) = v15;
      v17 = -66666666;
      v18 = *(double *)(v43 + 8 * v14) * v9;
      if ( v16 < v35 )
      {
        v19 = (int *)(v48 + 4LL * v16);
        v20 = (double *)(v47 + 8LL * v16);
        v21 = -66666666;
        v33 = (int *)(v49 + 4 * (v16 + (unsigned __int64)(unsigned int)(v35 - 1 - v16)));
        while ( 1 )
        {
          v22 = *((int *)a2 + 64);
          v23 = *v19;
          v24 = *v20;
          v25 = v15 * *v20;
          v26 = (int *)(v5 + 4 * v22);
          v17 = *((_DWORD *)a2 + 64);
          *((_DWORD *)a2 + 64) = *v26;
          *(_DWORD *)(v4 + 4 * v22) = v23;
          *(double *)(v3 + 8 * v22) = v24;
          *v26 = v21;
          v27 = (double *)(v6 + 8 * v23);
          if ( *v27 > -1.797693134862316e308 )
            *v27 = *v27 + v25;
          v28 = *(double *)(v7 + 8 * v23);
          if ( v28 < 1.797693134862316e308 )
          {
            ++v19;
            ++v20;
            *(double *)(v7 + 8 * v23) = v28 + v25;
            *(double *)(v34 + 8 * v23) = v25 + *(double *)(v34 + 8 * v23);
            v18 = v18 - v24 * *(double *)(v8 + 8 * v23);
            if ( v19 == v33 )
              break;
          }
          else
          {
            ++v19;
            ++v20;
            *(double *)(v34 + 8 * v23) = v25 + *(double *)(v34 + 8 * v23);
            v18 = v18 - v24 * *(double *)(v8 + 8 * v23);
            if ( v33 == v19 )
              break;
          }
          v21 = v17;
        }
      }
      *(_DWORD *)(v38 + 4 * v14) = v17;
      *(double *)(v44 + 8 * v14) = v18;
      *(_DWORD *)(v39 + 4 * v14) = v35 - v36;
      if ( v45 )
      {
        v29 = (_BYTE *)(*((_QWORD *)a2 + 24) + v14);
        v30 = *v29 & 0xF8;
        v31 = v30 | 3;
        v32 = v30 | 2;
        if ( v18 < 0.0 )
          v31 = v32;
        *v29 = v31;
      }
      v35 = v36;
      result = (double *)v37;
      if ( v37 == v46 )
        break;
      v37 -= 4;
    }
  }
  return result;
}

