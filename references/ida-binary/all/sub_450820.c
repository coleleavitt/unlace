__int64 __fastcall commits_chooser_t__::vfunc_14(_QWORD *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 **v3; // r13
  unsigned __int64 v4; // r14
  __int64 (__fastcall *v5)(__int64); // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  __int64 (__fastcall *v10)(__int64); // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  bool v13; // cf
  unsigned __int64 *v14; // rax
  unsigned int *v15; // r12
  unsigned int *v16; // r8
  __int64 v17; // rcx
  _DWORD *v18; // rax
  unsigned __int64 v19; // rbx
  unsigned __int64 *v20; // rcx
  unsigned __int64 *v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 *v23; // rbx
  __int64 v24; // r14
  unsigned __int64 v25; // r12
  __int64 (__fastcall *v26)(__int64); // rax
  unsigned __int64 v27; // rax
  int v28; // r12d
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int64 *v31; // rdx
  __int64 v32; // rax
  unsigned int *v33; // [rsp+0h] [rbp-78h]
  __int64 v34; // [rsp+20h] [rbp-58h] BYREF
  __int128 v35; // [rsp+28h] [rbp-50h]
  unsigned __int64 v36; // [rsp+38h] [rbp-40h]

  v2 = a2[1];
  v36 = __readfsqword(0x28u);
  v3 = (unsigned __int64 **)a2;
  v35 = 0;
  v34 = 0;
  if ( v2 )
  {
    a2 = nullptr;
    v34 = qvector_reserve(&v34, 0, v2, 4);
    v23 = *v3;
    v24 = (__int64)&(*v3)[(_QWORD)v3[1]];
    if ( *v3 != (unsigned __int64 *)v24 )
    {
      do
      {
        v25 = *v23;
        v26 = *(__int64 (__fastcall **)(__int64))(*a1 + 40LL);
        if ( v26 == commits_chooser_t__::vfunc_5 )
          v27 = a1[28];
        else
          v27 = v26((__int64)a1);
        if ( v25 < v27 )
        {
          a2 = (unsigned __int64 *)v34;
          v28 = *(_DWORD *)(a1[27] + 88 * v25);
          v29 = v35;
          if ( *((_QWORD *)&v35 + 1) < (unsigned __int64)(v35 + 1) )
          {
            v34 = qvector_reserve(&v34, v34, v35 + 1, 4);
            a2 = (unsigned __int64 *)v34;
            v29 = v35;
          }
          *((_DWORD *)a2 + v29) = v28;
          *(_QWORD *)&v35 = v35 + 1;
        }
        ++v23;
      }
      while ( (unsigned __int64 *)v24 != v23 );
    }
  }
  (*(void (__fastcall **)(_QWORD *))(*a1 + 32LL))(a1);
  v4 = -1;
  if ( v3[1] )
    v4 = **v3;
  v3[1] = nullptr;
  v5 = *(__int64 (__fastcall **)(__int64))(*a1 + 40LL);
  if ( v5 == commits_chooser_t__::vfunc_5 )
    v6 = a1[28];
  else
    v6 = v5((__int64)a1);
  if ( v6 && (v7 = v35) != 0 )
  {
    if ( (unsigned __int64)v3[2] < (unsigned __int64)v35 )
    {
      a2 = *v3;
      *v3 = (unsigned __int64 *)qvector_reserve(v3, *v3, v35, 8);
      v7 = v35;
    }
    v15 = (unsigned int *)v34;
    v16 = (unsigned int *)(v34 + 4 * v7);
    v8 = (unsigned __int64)v3[1];
    if ( (unsigned int *)v34 != v16 )
    {
      do
      {
        v17 = a1[28];
        a2 = (unsigned __int64 *)*v15;
        if ( v17 )
        {
          v18 = (_DWORD *)a1[27];
          v19 = 0;
          while ( (_DWORD)a2 != *v18 )
          {
            ++v19;
            v18 += 22;
            if ( v19 == v17 )
              goto LABEL_34;
          }
          a2 = *v3;
          v20 = &(*v3)[v8];
          v21 = *v3;
          if ( *v3 == v20 )
            goto LABEL_36;
          while ( v19 != *v21 )
          {
            if ( v20 == ++v21 )
              goto LABEL_36;
          }
          if ( v21 == v20 )
          {
LABEL_36:
            v22 = v8 + 1;
            if ( (unsigned __int64)v3[2] < v22 )
            {
              v33 = v16;
              v30 = qvector_reserve(v3, a2, v22, 8);
              v31 = v3[1];
              v16 = v33;
              *v3 = (unsigned __int64 *)v30;
              v20 = (unsigned __int64 *)(v30 + 8LL * (_QWORD)v31);
            }
            *v20 = v19;
            v8 = (unsigned __int64)v3[1] + 1;
            v3[1] = (unsigned __int64 *)v8;
          }
        }
LABEL_34:
        ++v15;
      }
      while ( v16 != v15 );
    }
  }
  else
  {
    v8 = (unsigned __int64)v3[1];
  }
  if ( v4 != -1 && !v8 )
  {
    v10 = *(__int64 (__fastcall **)(__int64))(*a1 + 40LL);
    v11 = v10 == commits_chooser_t__::vfunc_5 ? a1[28] : v10((__int64)a1);
    if ( v11 )
    {
      v12 = v11 - 1;
      v13 = v4 < v11;
      v14 = v3[1];
      a2 = *v3;
      if ( !v13 )
        v4 = v12;
      v8 = (unsigned __int64)v3[2];
      if ( v8 < (unsigned __int64)v14 + 1 )
      {
        v32 = qvector_reserve(v3, a2, (char *)v14 + 1, 8);
        *v3 = (unsigned __int64 *)v32;
        a2 = (unsigned __int64 *)v32;
        v14 = v3[1];
      }
      a2[(_QWORD)v14] = v4;
      v3[1] = (unsigned __int64 *)((char *)v3[1] + 1);
    }
  }
  if ( v34 )
  {
    *(_QWORD *)&v35 = 0;
    qfree(v34, (const char *)a2, v8);
  }
  return 1;
}
