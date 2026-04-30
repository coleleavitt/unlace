void __fastcall sub_29D700(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rax
  unsigned __int64 v7; // r12
  __int64 v8; // rbx
  void *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // r15
  __int64 v17; // rbp
  _QWORD *v18; // rdi
  __m128 v19; // xmm0
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // r12
  __int64 v24; // r15
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // r15
  __int64 v28; // rbp
  _QWORD *v29; // rdi
  __m128 v30; // xmm0
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // [rsp+8h] [rbp-B0h]
  __int64 v35; // [rsp+8h] [rbp-B0h]
  char v36; // [rsp+10h] [rbp-A8h] BYREF
  int v37; // [rsp+18h] [rbp-A0h] BYREF
  __int64 v38; // [rsp+20h] [rbp-98h]
  int *v39; // [rsp+28h] [rbp-90h]
  int *v40; // [rsp+30h] [rbp-88h]
  __int64 v41; // [rsp+38h] [rbp-80h]
  int v42; // [rsp+48h] [rbp-70h] BYREF
  __int64 v43; // [rsp+50h] [rbp-68h]
  int *v44; // [rsp+58h] [rbp-60h]
  int *v45; // [rsp+60h] [rbp-58h]
  __int64 v46; // [rsp+68h] [rbp-50h]
  unsigned __int64 v47; // [rsp+78h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 != a2 )
  {
    v37 = 0;
    v38 = 0;
    v39 = &v37;
    v40 = &v37;
    v41 = 0;
    if ( a2 < v2 )
    {
      v7 = a2;
      do
      {
        v8 = *(_QWORD *)(*a1 + 48 * v7 + 16);
        while ( v8 )
        {
          sub_290E80(*(_QWORD **)(v8 + 24));
          v9 = (void *)v8;
          v8 = *(_QWORD *)(v8 + 16);
          operator delete(v9, 0x38u);
        }
        ++v7;
      }
      while ( v2 != v7 );
      a1[1] = a2;
    }
    else
    {
      v4 = a1[2];
      if ( (unsigned __int64)&v36 < *a1 || (unsigned __int64)&v36 >= 48 * v4 + *a1 )
      {
        if ( v4 < a2 )
        {
          v12 = qvector_reserve(a1, 0, a2, 48);
          v13 = a1[1];
          v14 = a1[2];
          a1[2] = v4;
          v15 = *a1;
          v34 = v14;
          v16 = v13 - 1;
          if ( v16 >= 0 )
          {
            v17 = v12 + 8;
            do
            {
              v22 = *(_QWORD *)(v15 + 16);
              if ( v22 )
              {
                v18 = nullptr;
                v19 = _mm_loadh_ps((const double *)(v15 + 24));
                *(_DWORD *)v17 = *(_DWORD *)(v15 + 8);
                v20 = *(_QWORD *)(v15 + 32);
                *(__m128 *)(v17 + 8) = v19;
                *(_QWORD *)(v17 + 24) = v20;
                *(_QWORD *)(v22 + 8) = v17;
                v21 = *(_QWORD *)(v15 + 40);
                *(_QWORD *)(v15 + 16) = 0;
                *(_QWORD *)(v17 + 32) = v21;
                *(_QWORD *)(v15 + 24) = v15 + 8;
                *(_QWORD *)(v15 + 32) = v15 + 8;
                *(_QWORD *)(v15 + 40) = 0;
              }
              else
              {
                *(_DWORD *)v17 = 0;
                *(_QWORD *)(v17 + 8) = 0;
                *(_QWORD *)(v17 + 16) = v17;
                *(_QWORD *)(v17 + 24) = v17;
                *(_QWORD *)(v17 + 32) = 0;
                v18 = *(_QWORD **)(v15 + 16);
              }
              --v16;
              v15 += 48;
              v17 += 48;
              sub_290E80(v18);
            }
            while ( v16 != -1 );
            v15 = *a1;
          }
          qfree(v15, nullptr);
          v2 = a1[1];
          *a1 = v12;
          a1[2] = v34;
        }
        v5 = 48 * v2;
        if ( v2 < a2 )
        {
          do
          {
            ++v2;
            v6 = v5 + *a1;
            v5 += 48;
            *(_DWORD *)(v6 + 8) = 0;
            *(_QWORD *)(v6 + 16) = 0;
            *(_QWORD *)(v6 + 24) = v6 + 8;
            *(_QWORD *)(v6 + 32) = v6 + 8;
            *(_QWORD *)(v6 + 40) = 0;
          }
          while ( a2 != v2 );
        }
        a1[1] = a2;
      }
      else
      {
        v42 = 0;
        v43 = 0;
        v44 = &v42;
        v45 = &v42;
        v46 = 0;
        if ( v4 < a2 )
        {
          v23 = qvector_reserve(a1, 0, a2, 48);
          v24 = a1[1];
          v25 = a1[2];
          a1[2] = v4;
          v26 = *a1;
          v35 = v25;
          v27 = v24 - 1;
          if ( v27 >= 0 )
          {
            v28 = v23 + 8;
            do
            {
              v33 = *(_QWORD *)(v26 + 16);
              if ( v33 )
              {
                v29 = nullptr;
                v30 = _mm_loadh_ps((const double *)(v26 + 24));
                *(_DWORD *)v28 = *(_DWORD *)(v26 + 8);
                v31 = *(_QWORD *)(v26 + 32);
                *(__m128 *)(v28 + 8) = v30;
                *(_QWORD *)(v28 + 24) = v31;
                *(_QWORD *)(v33 + 8) = v28;
                v32 = *(_QWORD *)(v26 + 40);
                *(_QWORD *)(v26 + 16) = 0;
                *(_QWORD *)(v28 + 32) = v32;
                *(_QWORD *)(v26 + 24) = v26 + 8;
                *(_QWORD *)(v26 + 32) = v26 + 8;
                *(_QWORD *)(v26 + 40) = 0;
              }
              else
              {
                *(_DWORD *)v28 = 0;
                *(_QWORD *)(v28 + 8) = 0;
                *(_QWORD *)(v28 + 16) = v28;
                *(_QWORD *)(v28 + 24) = v28;
                *(_QWORD *)(v28 + 32) = 0;
                v29 = *(_QWORD **)(v26 + 16);
              }
              --v27;
              v26 += 48;
              v28 += 48;
              sub_290E80(v29);
            }
            while ( v27 != -1 );
            v26 = *a1;
          }
          qfree(v26, nullptr);
          v2 = a1[1];
          *a1 = v23;
          a1[2] = v35;
        }
        v10 = 48 * v2;
        if ( v2 < a2 )
        {
          do
          {
            ++v2;
            v11 = v10 + *a1;
            v10 += 48;
            *(_DWORD *)(v11 + 8) = 0;
            *(_QWORD *)(v11 + 16) = 0;
            *(_QWORD *)(v11 + 24) = v11 + 8;
            *(_QWORD *)(v11 + 32) = v11 + 8;
            *(_QWORD *)(v11 + 40) = 0;
          }
          while ( a2 != v2 );
        }
        a1[1] = a2;
        sub_290E80(nullptr);
      }
    }
  }
}
