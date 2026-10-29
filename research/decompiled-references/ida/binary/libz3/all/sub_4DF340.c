void __fastcall sub_4DF340(__int64 a1, _QWORD *a2, std::ostream *a3, __int64 a4)
{
  size_t v4; // r14
  __int64 **v5; // rbx
  unsigned __int64 v6; // rbp
  _QWORD *v7; // r13
  size_t v8; // rbp
  size_t v9; // r14
  _BYTE *v10; // r13
  _QWORD *v11; // rax
  __int64 *v12; // r8
  _QWORD *v13; // r12
  __int64 *v14; // r14
  __int64 *v15; // r13
  __int64 v16; // r15
  unsigned __int64 v17; // rdi
  _BYTE *v18; // rax
  _QWORD *v19; // r12
  _BYTE *v20; // r9
  size_t v21; // rcx
  __int64 v22; // r12
  _QWORD *v23; // rdi
  size_t v24; // rdx
  size_t v25; // r12
  unsigned __int64 v26; // rdi
  _QWORD *v27; // r15
  __int64 v28; // rbp
  unsigned __int64 v29; // rdi
  _BYTE *v30; // rax
  size_t v31; // rcx
  _QWORD *v32; // r15
  _BYTE *src; // [rsp+20h] [rbp-68h]
  _BYTE *na; // [rsp+28h] [rbp-60h]
  size_t n; // [rsp+28h] [rbp-60h]
  void *v37; // [rsp+30h] [rbp-58h] BYREF
  size_t v38; // [rsp+38h] [rbp-50h]
  _QWORD v39[9]; // [rsp+40h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a4 + 8);
  v5 = *(__int64 ***)(a1 + 80);
  src = *(_BYTE **)a4;
  v6 = v4 + 4;
  v37 = v39;
  v38 = 0;
  LOBYTE(v39[0]) = 0;
  if ( v4 + 4 > 0xF )
  {
    if ( (v6 & 0x8000000000000000LL) != 0LL )
      std::__throw_length_error("basic_string::_M_create");
    if ( v6 <= 0x1D )
    {
      v6 = 30;
      v17 = 31;
    }
    else
    {
      v17 = v4 + 5;
      if ( (__int64)(v4 + 5) < 0 )
        std::__throw_bad_alloc();
    }
    v18 = (_BYTE *)operator new(v17);
    v19 = v37;
    v20 = v18;
    *v18 = *(_BYTE *)v37;
    if ( v19 == v39 )
    {
      v37 = v18;
      v22 = v4;
      v21 = 0;
      v39[0] = v6;
      if ( v6 < v4 )
        goto LABEL_35;
    }
    else
    {
      na = v18;
      operator delete(v19, v39[0] + 1LL);
      v21 = v38;
      v20 = na;
      v37 = na;
      v39[0] = v6;
      if ( 0x7FFFFFFFFFFFFFFFLL - v38 < v4 )
LABEL_66:
        std::__throw_length_error("basic_string::append");
      v22 = v4 + v38;
      if ( v6 < v4 + v38 )
      {
        if ( v22 < 0 )
          std::__throw_length_error("basic_string::_M_create");
LABEL_35:
        v28 = 2 * v6;
        if ( v22 < (unsigned __int64)v28 )
        {
          if ( v28 >= 0 )
          {
            v29 = v28 + 1;
            goto LABEL_38;
          }
        }
        else
        {
          v29 = v22 + 1;
          if ( v22 + 1 >= 0 )
          {
            v28 = v22;
LABEL_38:
            n = v21;
            v30 = (_BYTE *)operator new(v29);
            v31 = n;
            v32 = v37;
            v7 = v30;
            if ( n )
            {
              if ( n == 1 )
              {
                *v30 = *(_BYTE *)v37;
              }
              else
              {
                memcpy(v30, v37, n);
                v31 = n;
              }
            }
            if ( src )
              memcpy((char *)v7 + v31, src, v4);
            if ( v32 != v39 )
              operator delete(v32, v39[0] + 1LL);
            v37 = v7;
            v4 = v22;
            v39[0] = v28;
            goto LABEL_5;
          }
        }
        std::__throw_bad_alloc();
      }
    }
    v23 = &v20[v21];
LABEL_26:
    v24 = v4;
    v4 = v22;
    memcpy(v23, src, v24);
    v7 = v37;
    goto LABEL_5;
  }
  if ( (v4 & 0x8000000000000000LL) != 0LL )
    goto LABEL_66;
  if ( !v4 )
  {
    v7 = v39;
    goto LABEL_5;
  }
  if ( v4 != 1 )
  {
    v23 = v39;
    v22 = v4;
    goto LABEL_26;
  }
  v7 = v39;
  LOBYTE(v39[0]) = *src;
LABEL_5:
  v38 = v4;
  *((_BYTE *)v7 + v4) = 0;
  v8 = v38;
  if ( 0x7FFFFFFFFFFFFFFFLL - v38 <= 3 )
    std::__throw_length_error("basic_string::append");
  v9 = v38 + 4;
  if ( v37 == v39 )
  {
    if ( v9 <= 0xF )
      goto LABEL_8;
    v27 = v37;
    v10 = (_BYTE *)operator new(0x1Fu);
    v25 = 30;
LABEL_48:
    memcpy(v10, v27, v38);
    goto LABEL_31;
  }
  if ( v39[0] >= v9 )
  {
LABEL_8:
    *(_DWORD *)((char *)v37 + v38) = 538976288;
    v10 = v37;
    goto LABEL_9;
  }
  if ( (v9 & 0x8000000000000000LL) != 0LL )
    std::__throw_length_error("basic_string::_M_create");
  v25 = 2LL * v39[0];
  if ( v9 >= 2LL * v39[0] )
  {
    v25 = v38 + 4;
    v26 = v38 + 5;
    if ( (__int64)(v38 + 5) >= 0 )
      goto LABEL_30;
LABEL_57:
    std::__throw_bad_alloc();
  }
  v26 = v25 + 1;
  if ( (v39[0] & 0x4000000000000000LL) != 0 )
    goto LABEL_57;
LABEL_30:
  v27 = v37;
  v10 = (_BYTE *)operator new(v26);
  if ( v38 )
  {
    if ( v38 == 1 )
    {
      *v10 = *(_BYTE *)v37;
      goto LABEL_31;
    }
    goto LABEL_48;
  }
LABEL_31:
  *(_DWORD *)&v10[v8] = 538976288;
  if ( v27 != v39 )
    operator delete(v27, v39[0] + 1LL);
  v37 = v10;
  v39[0] = v25;
LABEL_9:
  v38 = v8 + 4;
  v10[v8 + 4] = 0;
  v11 = sub_4DA320(a2);
  v12 = *v5;
  v13 = v11;
  if ( *v5 )
  {
    v14 = &v12[*((unsigned int *)v12 - 1)];
    if ( v12 != v14 )
    {
      v15 = *v5;
      do
      {
        v16 = *v15;
        if ( (unsigned __int8)sub_629B80(*v15 + 8, v13[6]) || *(_BYTE *)(v16 + 40) )
          sub_4DA7A0(v16, a2, a3, (__int64)&v37);
        ++v15;
      }
      while ( v14 != v15 );
    }
  }
  if ( v37 != v39 )
    operator delete(v37, v39[0] + 1LL);
}

