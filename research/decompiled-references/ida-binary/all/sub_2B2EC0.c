unsigned __int64 __fastcall gruser_model_data_t__::vfunc_3(
        _QWORD *a1,
        const char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rax
  _QWORD *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  const char *v14; // r15
  __int64 v15; // rdx
  __int64 *v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // r14
  __int64 v19; // r12
  __int64 *v20; // rdi
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rdx
  _QWORD *v23; // rdi
  __int64 v24; // rdi
  int v25; // esi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // [rsp+0h] [rbp-68h]
  __int64 v36; // [rsp+10h] [rbp-58h] BYREF
  __int128 v37; // [rsp+18h] [rbp-50h]
  unsigned __int64 v38; // [rsp+28h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  v6 = a1[3];
  if ( a2 != (const char *)v6 )
  {
    v36 = 0;
    v37 = 0;
    if ( (unsigned __int64)a2 < v6 )
    {
      v14 = a2;
      do
      {
        v15 = a1[2];
        v16 = (__int64 *)(v15 + 24LL * (_QWORD)v14);
        v17 = *v16;
        if ( *v16 )
        {
          v34 = v16[1];
          if ( v34 )
          {
            v18 = 0;
            v19 = 0;
            do
            {
              v20 = (__int64 *)(v18 + v17);
              ++v19;
              v18 += 272;
              sub_174D10(v20, (__int64)a2, v15, a4, a5);
              v17 = *v16;
            }
            while ( v34 != v19 );
          }
          v16[1] = 0;
          qfree(v17, a2);
        }
        ++v14;
      }
      while ( (const char *)v6 != v14 );
      a1[3] = a2;
    }
    else
    {
      v7 = a1[2];
      v8 = a1[4];
      v9 = a1 + 2;
      if ( (unsigned __int64)&v36 < v7 || (unsigned __int64)&v36 >= v7 + 24 * v8 )
      {
        if ( v8 < (unsigned __int64)a2 )
        {
          v30 = qvector_reserve(v9, v7, a2, 24);
          v6 = a1[3];
          a1[2] = v30;
        }
        if ( v6 < (unsigned __int64)a2 )
        {
          v10 = 24 * v6;
          do
          {
            ++v6;
            v11 = v10 + a1[2];
            v10 += 24;
            *(_QWORD *)v11 = 0;
            *(_OWORD *)(v11 + 8) = 0;
          }
          while ( a2 != (const char *)v6 );
        }
      }
      else
      {
        if ( v8 < (unsigned __int64)a2 )
        {
          v33 = qvector_reserve(v9, v7, a2, 24);
          v6 = a1[3];
          a1[2] = v33;
        }
        if ( v6 < (unsigned __int64)a2 )
        {
          v28 = 24 * v6;
          do
          {
            ++v6;
            v29 = v28 + a1[2];
            v28 += 24;
            *(_QWORD *)v29 = 0;
            *(_OWORD *)(v29 + 8) = 0;
          }
          while ( a2 != (const char *)v6 );
        }
      }
      a1[3] = a2;
    }
  }
  v12 = a1[6];
  if ( a2 != (const char *)v12 )
  {
    v36 = 0;
    LODWORD(v37) = 0;
    if ( (unsigned __int64)a2 >= v12 )
    {
      v21 = a1[5];
      v22 = a1[7];
      v23 = a1 + 5;
      if ( (unsigned __int64)&v36 >= v21 && (unsigned __int64)&v36 < v21 + 12 * v22 )
      {
        if ( v22 < (unsigned __int64)a2 )
        {
          a1[5] = qvector_reserve(v23, v21, a2, 12);
          v12 = a1[6];
        }
        v31 = 12 * v12;
        if ( v12 < (unsigned __int64)a2 )
        {
          do
          {
            ++v12;
            v32 = v31 + a1[5];
            v31 += 12;
            *(_QWORD *)v32 = 0;
            *(_DWORD *)(v32 + 8) = 0;
          }
          while ( a2 != (const char *)v12 );
        }
      }
      else
      {
        if ( v22 < (unsigned __int64)a2 )
        {
          a1[5] = qvector_reserve(v23, v21, a2, 12);
          v12 = a1[6];
        }
        if ( v12 < (unsigned __int64)a2 )
        {
          v24 = v36;
          v25 = v37;
          v26 = 12 * v12;
          do
          {
            v27 = a1[5];
            ++v12;
            *(_QWORD *)(v27 + v26) = v24;
            *(_DWORD *)(v27 + v26 + 8) = v25;
            v26 += 12;
          }
          while ( a2 != (const char *)v12 );
        }
      }
    }
    a1[6] = a2;
  }
  return v38 - __readfsqword(0x28u);
}
