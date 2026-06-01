unsigned __int64 __fastcall sub_490580(_QWORD *a1, __int64 a2, double a3)
{
  __int64 v4; // rcx
  __int64 *v6; // rax
  __int64 v7; // rsi
  unsigned __int64 v8; // rbp
  unsigned __int64 v10; // rdi
  _QWORD *v11; // r8
  unsigned __int64 v12; // r15
  _QWORD *v13; // rax
  _QWORD *v14; // rsi
  _QWORD *v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rsi
  _QWORD *v18; // r12
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  char *v23; // r14
  __int64 v24; // r15
  char *v25; // rax
  _QWORD *v26; // rdx
  _QWORD *v27; // rdx
  unsigned __int64 v28; // r13
  size_t v29; // r15
  _QWORD *v30; // r10
  _QWORD *v31; // rsi
  unsigned __int64 v32; // r9
  _QWORD *v33; // rcx
  unsigned __int64 v34; // rdx
  char *v35; // rax
  _QWORD *v36; // rdi
  __int64 v37; // rdx
  unsigned __int64 v38; // [rsp+Fh] [rbp-49h] BYREF
  char v39; // [rsp+17h] [rbp-41h]
  unsigned __int64 v40; // [rsp+18h] [rbp-40h]

  v4 = a1[9];
  v40 = __readfsqword(0x28u);
  v6 = *(__int64 **)(v4 + 216);
  if ( !v6 )
    v6 = *(__int64 **)(v4 + 208);
  v7 = *v6;
  v39 = 0;
  v38 = -1;
  dirtree_resolve_path(&v38, v7, a2, a3);
  v8 = v38;
  if ( v38 == -1 || !v39 )
    return v40 - __readfsqword(0x28u);
  if ( a1[4] )
  {
    v10 = a1[2];
    v11 = *(_QWORD **)(a1[1] + 8 * (v38 % v10));
    v12 = v38 % v10;
    if ( v11 )
    {
      v13 = (_QWORD *)*v11;
      if ( v38 == *(_QWORD *)(*v11 + 8LL) )
      {
LABEL_12:
        if ( v11 && *v11 )
          return v40 - __readfsqword(0x28u);
      }
      else
      {
        while ( 1 )
        {
          v14 = (_QWORD *)*v13;
          if ( !*v13 )
            break;
          v11 = v13;
          if ( v14[1] % v10 != v38 % v10 )
            break;
          v13 = (_QWORD *)*v13;
          if ( v38 == v14[1] )
            goto LABEL_12;
        }
      }
    }
    goto LABEL_14;
  }
  v27 = (_QWORD *)a1[3];
  if ( !v27 )
  {
LABEL_24:
    v12 = v38 % a1[2];
LABEL_14:
    v15 = (_QWORD *)operator new(0x10u);
    v16 = a1[4];
    v17 = a1[2];
    v15[1] = v8;
    v18 = v15;
    *v15 = 0;
    if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(
                            (std::__detail::_Prime_rehash_policy *)(a1 + 5),
                            v17,
                            v16,
                            1u) )
    {
      v28 = v19;
      if ( v19 == 1 )
      {
        v30 = a1 + 7;
        a1[7] = 0;
        v23 = (char *)(a1 + 7);
      }
      else
      {
        if ( v19 >> 60 )
        {
          if ( v19 >> 61 )
            sub_162118(a1 + 5, v17, v19, v20, v21, v22);
          std::__throw_bad_alloc();
        }
        v29 = 8 * v19;
        v23 = (char *)operator new(8 * v19);
        memset(v23, 0, v29);
        v30 = a1 + 7;
      }
      v31 = (_QWORD *)a1[3];
      a1[3] = 0;
      v32 = 0;
      while ( v31 )
      {
        while ( 1 )
        {
          v33 = v31;
          v31 = (_QWORD *)*v31;
          v34 = v33[1] % v28;
          v35 = &v23[8 * v34];
          if ( !*(_QWORD *)v35 )
            break;
          *v33 = **(_QWORD **)v35;
          **(_QWORD **)v35 = v33;
          if ( !v31 )
            goto LABEL_32;
        }
        *v33 = a1[3];
        a1[3] = v33;
        *(_QWORD *)v35 = a1 + 3;
        if ( *v33 )
          *(_QWORD *)&v23[8 * v32] = v33;
        v32 = v34;
      }
LABEL_32:
      v36 = (_QWORD *)a1[1];
      if ( v36 != v30 )
        operator delete(v36, 8LL * a1[2]);
      a1[2] = v28;
      a1[1] = v23;
      v12 = v8 % v28;
    }
    else
    {
      v23 = (char *)a1[1];
    }
    v24 = 8 * v12;
    v25 = &v23[v24];
    v26 = *(_QWORD **)&v23[v24];
    if ( v26 )
    {
      *v18 = *v26;
      **(_QWORD **)v25 = v18;
    }
    else
    {
      v37 = a1[3];
      a1[3] = v18;
      *v18 = v37;
      if ( v37 )
      {
        *(_QWORD *)&v23[8 * (*(_QWORD *)(v37 + 8) % a1[2])] = v18;
        v25 = (char *)(v24 + a1[1]);
      }
      *(_QWORD *)v25 = a1 + 3;
    }
    ++a1[4];
    return v40 - __readfsqword(0x28u);
  }
  while ( v27[1] != v38 )
  {
    v27 = (_QWORD *)*v27;
    if ( !v27 )
      goto LABEL_24;
  }
  return v40 - __readfsqword(0x28u);
}
