// Alternative name is '_ZN12ClpHashValueC2EP10ClpSimplex'
void __fastcall ClpHashValue::ClpHashValue(ClpHashValue *this, ClpSimplex *a2)
{
  ClpHashValue *v2; // r14
  __int64 (__fastcall ***v3)(_QWORD, _QWORD, _QWORD, char *, _QWORD, __int64); // rdi
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(ClpPackedMatrix *); // rax
  _QWORD *v7; // rax
  unsigned __int64 v8; // rdi
  __int64 v9; // r13
  __int64 v10; // rax
  int v11; // ecx
  __int64 v12; // rdx
  int *v13; // r12
  ClpHashValue *v14; // r15
  _DWORD *v15; // rbp
  int v16; // eax
  int v17; // esi
  double *v18; // r14
  unsigned __int64 v19; // rbx
  __int64 v20; // rax
  int v21; // edx
  double v22; // xmm0_8
  int v23; // eax
  __int64 v24; // rbx
  __int64 v25; // rbx
  int v26; // ebp
  int v27; // r12d
  int v28; // ebp
  double *v29; // r15
  unsigned __int64 v30; // rbp
  double v31; // [rsp+0h] [rbp-98h]
  double v32; // [rsp+0h] [rbp-98h]
  double v33; // [rsp+0h] [rbp-98h]
  double v34; // [rsp+0h] [rbp-98h]
  double v35; // [rsp+0h] [rbp-98h]
  double v36; // [rsp+0h] [rbp-98h]
  int *v37; // [rsp+8h] [rbp-90h]
  _DWORD *v38; // [rsp+10h] [rbp-88h]
  __int64 v39; // [rsp+18h] [rbp-80h]
  __int64 v40; // [rsp+20h] [rbp-78h]
  __int64 v41; // [rsp+28h] [rbp-70h]
  int v42; // [rsp+38h] [rbp-60h]
  int v43; // [rsp+3Ch] [rbp-5Ch]
  __int64 v44; // [rsp+40h] [rbp-58h]
  __int64 v45; // [rsp+48h] [rbp-50h]
  char v46[64]; // [rsp+58h] [rbp-40h] BYREF

  v2 = this;
  *((_QWORD *)this + 1) = 0;
  *((_DWORD *)this + 6) = -1;
  *(_QWORD *)this = off_4D0A20;
  *((_QWORD *)this + 2) = 0x3E800000000LL;
  v3 = *((__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, char *, _QWORD, __int64))a2 + 20);
  v42 = *((_DWORD *)a2 + 27);
  v39 = *((_QWORD *)a2 + 22);
  v40 = *((_QWORD *)a2 + 23);
  v43 = *((_DWORD *)a2 + 26);
  v44 = *((_QWORD *)a2 + 18);
  v45 = *((_QWORD *)a2 + 19);
  if ( !v3 )
  {
    v5 = *((_QWORD *)a2 + 24);
    if ( v5 )
    {
      v41 = 0;
      v6 = **(__int64 (__fastcall ***)(ClpPackedMatrix *))v5;
      if ( v6 == ClpPackedMatrix::getPackedMatrix )
        goto LABEL_4;
LABEL_51:
      v7 = (_QWORD *)((__int64 (*)(void))v6)();
      goto LABEL_5;
    }
LABEL_26:
    BUG();
  }
  v4 = (**v3)(v3, 0, 0, v46, 0, 2);
  v5 = *((_QWORD *)a2 + 24);
  v41 = v4;
  if ( !v5 )
    goto LABEL_26;
  v6 = **(__int64 (__fastcall ***)(ClpPackedMatrix *))v5;
  if ( v6 != ClpPackedMatrix::getPackedMatrix )
    goto LABEL_51;
LABEL_4:
  v7 = *(_QWORD **)(v5 + 88);
LABEL_5:
  v8 = *((int *)v2 + 5);
  v9 = v7[4];
  v38 = (_DWORD *)v7[7];
  v37 = (int *)v7[6];
  if ( v8 > 0x7FFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v10 = operator new[](16 * v8);
  v11 = *((_DWORD *)v2 + 5);
  *((_QWORD *)v2 + 1) = v10;
  if ( v11 > 0 )
  {
    v12 = v10;
    do
    {
      *(_QWORD *)v12 = 0xAB2BFF2EE48E0530LL;
      *(_DWORD *)(v12 + 8) = -1;
      *(_DWORD *)(v12 + 12) = -1;
      v12 += 16;
    }
    while ( v10 + 16LL * (unsigned int)(v11 - 1) + 16 != v12 );
  }
  *(_QWORD *)v10 = 0;
  *(_DWORD *)(v10 + 8) = 0;
  *((_DWORD *)v2 + 4) = 1;
  if ( v42 <= 0 )
  {
    if ( v43 <= 0 )
      goto LABEL_48;
    v23 = 1;
  }
  else
  {
    v13 = v37;
    v14 = v2;
    v15 = v38;
    do
    {
      v16 = *v13;
      v17 = *v13 + *v15;
      if ( v17 > *v13 )
      {
        v18 = (double *)(v9 + 8LL * v16);
        v19 = v9 + 8 + 8 * (v16 + (unsigned __int64)(unsigned int)(v17 - v16 - 1));
        do
        {
          v20 = *((_QWORD *)v14 + 1) + 16LL * (int)ClpHashValue::hash(v14, *v18);
          if ( *(_DWORD *)(v20 + 8) == -1 )
          {
            v21 = *((_DWORD *)v14 + 4);
            v22 = *v18;
            *(_DWORD *)(v20 + 8) = v21;
            *((_DWORD *)v14 + 4) = v21 + 1;
            *(double *)v20 = v22;
          }
          ++v18;
        }
        while ( (double *)v19 != v18 );
      }
      ++v15;
      ++v13;
    }
    while ( &v38[v42 - 1 + 1] != v15 );
    v2 = v14;
    v23 = *((_DWORD *)v14 + 4);
    v11 = *((_DWORD *)v14 + 5);
    if ( v43 <= 0 )
      goto LABEL_30;
  }
  v24 = 0;
  while ( 1 )
  {
    if ( 2 * v23 > v11 )
      ClpHashValue::resize(v2, 1);
    v31 = *(double *)(v44 + 8 * v24);
    if ( (int)ClpHashValue::index(v2, v31) < 0 )
      ClpHashValue::addValue(v2, v31);
    v32 = *(double *)(v45 + 8 * v24);
    if ( (int)ClpHashValue::index(v2, v32) < 0 )
      break;
    if ( v43 <= (int)++v24 )
      goto LABEL_28;
LABEL_23:
    v23 = *((_DWORD *)v2 + 4);
    v11 = *((_DWORD *)v2 + 5);
  }
  ++v24;
  ClpHashValue::addValue(v2, v32);
  if ( v43 > (int)v24 )
    goto LABEL_23;
LABEL_28:
  if ( v42 > 0 )
  {
    v23 = *((_DWORD *)v2 + 4);
    v11 = *((_DWORD *)v2 + 5);
LABEL_30:
    v25 = 0;
    while ( 1 )
    {
      v26 = v38[v25];
      v27 = v37[v25];
      if ( 2 * v23 > v11 )
        ClpHashValue::resize(v2, 1);
      v33 = *(double *)(v41 + 8 * v25);
      if ( (int)ClpHashValue::index(v2, v33) < 0 )
        ClpHashValue::addValue(v2, v33);
      v34 = *(double *)(v39 + 8 * v25);
      if ( (int)ClpHashValue::index(v2, v34) < 0 )
        ClpHashValue::addValue(v2, v34);
      v35 = *(double *)(v40 + 8 * v25);
      if ( (int)ClpHashValue::index(v2, v35) < 0 )
        ClpHashValue::addValue(v2, v35);
      v28 = v27 + v26;
      if ( v27 < v28 )
      {
        v29 = (double *)(v9 + 8LL * v27);
        v30 = v9 + 8 + 8 * (v27 + (unsigned __int64)(unsigned int)(v28 - v27 - 1));
        do
        {
          while ( 1 )
          {
            if ( 2 * *((_DWORD *)v2 + 4) > *((_DWORD *)v2 + 5) )
              ClpHashValue::resize(v2, 1);
            v36 = *v29;
            if ( (int)ClpHashValue::index(v2, *v29) < 0 )
              break;
            if ( (double *)v30 == ++v29 )
              goto LABEL_46;
          }
          ++v29;
          ClpHashValue::addValue(v2, v36);
        }
        while ( (double *)v30 != v29 );
      }
LABEL_46:
      if ( v42 <= (int)++v25 )
        break;
      v23 = *((_DWORD *)v2 + 4);
      v11 = *((_DWORD *)v2 + 5);
    }
  }
LABEL_48:
  ClpHashValue::resize(v2, 0);
}

