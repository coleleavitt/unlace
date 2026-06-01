__int64 __fastcall sub_A21260(__int64 a1, char *a2, _DWORD *a3, _QWORD *a4)
{
  char *v5; // rbx
  char *v6; // rbp
  char *v7; // r8
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rcx
  char *v13; // rax
  char *v14; // rdx
  __int64 v15; // rax
  int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  char *v23; // rax
  int v24; // ecx
  __int64 v25; // rcx
  __int64 v26; // rcx
  char *i; // r15
  _QWORD *v28; // r12
  _QWORD *v29; // r13
  volatile signed __int32 *v30; // rdi
  __int64 result; // rax
  __m128 v32; // xmm0
  unsigned __int64 v33; // [rsp+8h] [rbp-70h] BYREF
  __int64 v34; // [rsp+10h] [rbp-68h]
  __int64 v35; // [rsp+18h] [rbp-60h]
  signed __int64 v36; // [rsp+20h] [rbp-58h]
  char *v37; // [rsp+28h] [rbp-50h]
  _DWORD *v38; // [rsp+30h] [rbp-48h]
  _QWORD *v39; // [rsp+38h] [rbp-40h]

  v5 = *(char **)(a1 + 8);
  v6 = *(char **)a1;
  v7 = &a2[-*(_QWORD *)a1];
  if ( !(0xCCCCCCCCCCCCCCCDLL * ((__int64)&v5[-*(_QWORD *)a1] >> 3)) )
  {
    v8 = 1;
    goto LABEL_30;
  }
  v8 = 0x999999999999999ALL * ((v5 - v6) >> 3);
  v9 = -16;
  if ( 0xCCCCCCCCCCCCCCCDLL * ((v5 - v6) >> 3) > v8 || v8 > 0x666666666666666LL )
    goto LABEL_3;
  if ( v8 )
  {
LABEL_30:
    v9 = 40 * v8;
LABEL_3:
    v39 = a4;
    v38 = a3;
    v37 = a2;
    v36 = a2 - v6;
    v10 = operator new(v9);
    v7 = (char *)(a2 - v6);
    v34 = v10;
    a3 = v38;
    v35 = v10 + v9;
    a4 = v39;
    v33 = v10 + 40;
    goto LABEL_4;
  }
  v33 = 40;
  v35 = 0;
  v34 = 0;
LABEL_4:
  v11 = v34;
  v12 = *a4;
  v13 = &v7[v34];
  *(_DWORD *)v13 = *a3;
  *((_QWORD *)v13 + 1) = v12;
  *((_OWORD *)v13 + 1) = 0;
  *((_QWORD *)v13 + 4) = 0;
  if ( a2 != v6 )
  {
    v14 = v6;
    v15 = v11;
    do
    {
      v16 = *(_DWORD *)v14;
      v14 += 40;
      v15 += 40;
      *(_DWORD *)(v15 - 40) = v16;
      v17 = *((_QWORD *)v14 - 4);
      *(_OWORD *)(v15 - 24) = 0;
      *(_QWORD *)(v15 - 8) = 0;
      *(_QWORD *)(v15 - 32) = v17;
      *(_QWORD *)(v15 - 24) = *((_QWORD *)v14 - 3);
      v18 = *((_QWORD *)v14 - 2);
      *((_QWORD *)v14 - 3) = 0;
      v19 = *(_QWORD *)(v15 - 16);
      *(_QWORD *)(v15 - 16) = v18;
      v20 = *((_QWORD *)v14 - 1);
      *((_QWORD *)v14 - 2) = v19;
      v21 = *(_QWORD *)(v15 - 8);
      *(_QWORD *)(v15 - 8) = v20;
      *((_QWORD *)v14 - 1) = v21;
    }
    while ( a2 != v14 );
    v33 = v34 + 8 * ((unsigned __int64)(a2 - 40 - v6) >> 3) + 80;
  }
  if ( a2 != v5 )
  {
    v22 = v33;
    v23 = a2;
    do
    {
      v24 = *(_DWORD *)v23;
      v23 += 40;
      v22 += 40LL;
      *(_DWORD *)(v22 - 40) = v24;
      *(_QWORD *)(v22 - 32) = *((_QWORD *)v23 - 4);
      *(_QWORD *)(v22 - 24) = *((_QWORD *)v23 - 3);
      v25 = *((_QWORD *)v23 - 2);
      *(_OWORD *)(v23 - 24) = 0;
      *(_QWORD *)(v22 - 16) = v25;
      v26 = *((_QWORD *)v23 - 1);
      *((_QWORD *)v23 - 1) = 0;
      *(_QWORD *)(v22 - 8) = v26;
    }
    while ( v5 != v23 );
    v33 += 8 * ((unsigned __int64)(v5 - a2 - 40) >> 3) + 40;
  }
  for ( i = v6; i != v5; i += 40 )
  {
    while ( 1 )
    {
      v28 = *((_QWORD **)i + 3);
      v29 = *((_QWORD **)i + 2);
      if ( v28 != v29 )
      {
        do
        {
          while ( 1 )
          {
            v30 = (volatile signed __int32 *)v29[1];
            if ( !v30 )
              break;
            sub_4343A0(v30);
            v29 += 2;
            if ( v28 == v29 )
              goto LABEL_16;
          }
          v29 += 2;
        }
        while ( v28 != v29 );
LABEL_16:
        v29 = *((_QWORD **)i + 2);
      }
      if ( !v29 )
        break;
      i += 40;
      operator delete(v29);
      if ( v5 == i )
        goto LABEL_19;
    }
  }
LABEL_19:
  if ( v6 )
    operator delete(v6);
  result = v35;
  v32 = _mm_loadh_ps((const double *)&v33);
  *(_QWORD *)(a1 + 16) = v35;
  *(__m128 *)a1 = v32;
  return result;
}
