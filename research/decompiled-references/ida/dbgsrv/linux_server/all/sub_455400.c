/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_455400
// Address: 0x0000000000455400

//----- (0000000000455400) ----------------------------------------------------
__int64 __fastcall sub_455400(_QWORD *a1, unsigned int a2)
{
  _QWORD *v2; // rbx
  _QWORD *v4; // r15
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 (*v10)(); // rcx
  __int64 v11; // rcx
  __int64 (*v12)(); // rax
  __int64 result; // rax
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // r14
  _QWORD *v17; // rbp
  char *v18; // rax
  __int64 i; // r13
  char *v20; // r14
  char *v21; // rdi
  __int64 v22; // r15
  __int64 j; // rbx
  char *v24; // rax
  void *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r13
  char *v28; // rdi
  size_t v29; // rdx
  __int64 k; // rbp
  char *v31; // rdi
  void *v32; // rax
  _QWORD *v33; // rax
  _QWORD *v34; // r9
  __int64 v35; // r8
  __int128 v36; // xmm0
  char *v37; // rbp
  __int64 v38; // r13
  int *v39; // rbp
  __int64 m; // r13
  void *v41; // rdi
  void *v42; // rax
  _QWORD *v43; // [rsp+0h] [rbp-58h]
  __int64 v44; // [rsp+0h] [rbp-58h]
  size_t n; // [rsp+8h] [rbp-50h]
  size_t na; // [rsp+8h] [rbp-50h]
  size_t nb; // [rsp+8h] [rbp-50h]
  _QWORD *v48; // [rsp+10h] [rbp-48h]
  __int64 v49; // [rsp+18h] [rbp-40h]

  v2 = (_QWORD *)a1[44];
  v43 = a1 + 43;
  if ( !v2 )
    return 0xFFFFFFFFLL;
  v4 = a1 + 43;
  do
  {
    while ( 1 )
    {
      v5 = v2[2];
      v6 = v2[3];
      if ( *((_DWORD *)v2 + 8) < (signed int)a2 )
        break;
      v4 = v2;
      v2 = (_QWORD *)v2[2];
      if ( !v5 )
        goto LABEL_6;
    }
    v2 = (_QWORD *)v2[3];
  }
  while ( v6 );
LABEL_6:
  if ( v43 == v4 )
    return 0xFFFFFFFFLL;
  if ( *((_DWORD *)v4 + 8) > (signed int)a2 )
    return 0xFFFFFFFFLL;
  v7 = v4[6];
  if ( !v7 )
    return 0xFFFFFFFFLL;
  v8 = v4[5] + 48 * v7 - 48;
  v9 = *a1;
  v10 = *(__int64 (**)())(*a1 + 480LL);
  if ( v10 != sub_453BF0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, _QWORD, __int64))v10)(a1, a2, v8) )
      return 0xFFFFFFFFLL;
    v9 = *a1;
  }
  (*(void (__fastcall **)(_QWORD *, __int64, _QWORD, _QWORD, _QWORD))(v9 + 320))(
    a1,
    4,
    *(_QWORD *)(v8 + 32),
    a1[61],
    *((unsigned int *)a1 + 124));
  if ( *(_BYTE *)(v8 + 40) )
  {
    v11 = *(_QWORD *)(v8 + 8);
    v12 = *(__int64 (**)())(*a1 + 440LL);
    if ( v12 == sub_40C060 )
    {
LABEL_12:
      sub_411B10((__int64)a1, "Failed to restore %zu registers!\n", v11);
      return 0xFFFFFFFFLL;
    }
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, _QWORD, _QWORD, __int64, _QWORD))v12)(
            a1,
            a2,
            0,
            v11,
            *(_QWORD *)v8) )
    {
      v11 = *(_QWORD *)(v8 + 8);
      goto LABEL_12;
    }
  }
  v14 = v4[6];
  v15 = v4[5];
  v16 = *(_QWORD *)(v15 + 48 * v14 - 48 + 8);
  if ( v16 )
  {
    na = v15 + 48 * v14 - 48;
    v33 = sub_4814F0(32 * v16);
    v34 = (_QWORD *)na;
    v35 = 0;
    v36 = 0;
    v2 = v33;
    v37 = (char *)v33;
    do
    {
      v38 = *v34 + 32 * v35;
      *(_DWORD *)v37 = -2;
      *((_QWORD *)v37 + 3) = 0;
      *(_OWORD *)(v37 + 8) = v36;
      if ( v37 != (char *)v38 )
      {
        if ( *(int *)v38 >= -1 )
        {
          *((_QWORD *)v37 + 1) = 0;
          *((_OWORD *)v37 + 1) = 0;
          if ( *(_QWORD *)(v38 + 16) )
          {
            v49 = v35;
            v48 = v34;
            nb = *(_QWORD *)(v38 + 16);
            v42 = sub_4814F0(nb);
            *((_QWORD *)v37 + 1) = v42;
            *((_QWORD *)v37 + 3) = nb;
            memcpy(v42, *(const void **)(v38 + 8), nb);
            v34 = v48;
            v36 = 0;
            v35 = v49;
            *((_QWORD *)v37 + 2) = nb;
          }
        }
        else
        {
          *((_QWORD *)v37 + 1) = *(_QWORD *)(v38 + 8);
        }
        *(_DWORD *)v37 = *(_DWORD *)v38;
      }
      ++v35;
      v37 += 32;
    }
    while ( v16 != v35 );
    v26 = v4[6];
    if ( v26 )
    {
      v4[6] = --v26;
      v27 = v4[5] + 48 * v26;
      v28 = *(char **)v27;
      if ( *(_QWORD *)v27 )
      {
        v29 = *(_QWORD *)(v27 + 8);
        if ( !v29 )
          goto LABEL_41;
        goto LABEL_36;
      }
    }
    if ( v2 )
      goto LABEL_57;
  }
  else
  {
    if ( !v14 )
    {
LABEL_18:
      v17 = (_QWORD *)std::_Rb_tree_rebalance_for_erase(v4, v43);
      v18 = (char *)v17[5];
      if ( v18 )
      {
        v44 = v17[6];
        if ( v44 )
        {
          for ( i = 0; i != v44; ++i )
          {
            v20 = &v18[48 * i];
            v21 = *(char **)v20;
            if ( *(_QWORD *)v20 )
            {
              v22 = *((_QWORD *)v20 + 1);
              if ( v22 )
              {
                for ( j = 0; j != v22; ++j )
                {
                  v24 = &v21[32 * j];
                  if ( *(int *)v24 >= -1 )
                  {
                    v25 = *((void **)v24 + 1);
                    if ( v25 )
                    {
                      *((_QWORD *)v24 + 2) = 0;
                      j__free(v25);
                      v21 = *(char **)v20;
                    }
                  }
                }
              }
              *((_QWORD *)v20 + 1) = 0;
              j__free(v21);
              v18 = (char *)v17[5];
            }
          }
        }
        v17[6] = 0;
        j__free(v18);
      }
      operator delete(v17, 0x40u);
      --a1[47];
      goto LABEL_32;
    }
    v26 = v14 - 1;
    v4[6] = v26;
    v27 = 48 * v26 + v15;
    v28 = *(char **)v27;
    if ( *(_QWORD *)v27 )
    {
      v29 = *(_QWORD *)(v27 + 8);
      if ( v29 )
      {
LABEL_36:
        for ( k = 0; k != v29; ++k )
        {
          v31 = &v28[32 * k];
          if ( *(int *)v31 >= -1 )
          {
            v32 = *((void **)v31 + 1);
            if ( v32 )
            {
              *((_QWORD *)v31 + 2) = 0;
              n = v29;
              j__free(v32);
              v29 = n;
            }
          }
          v28 = *(char **)v27;
        }
LABEL_41:
        *(_QWORD *)(v27 + 8) = 0;
        j__free(v28);
        if ( !v2 )
        {
LABEL_44:
          v26 = v4[6];
          goto LABEL_45;
        }
        if ( !v16 )
        {
LABEL_43:
          j__free(v2);
          goto LABEL_44;
        }
LABEL_57:
        v39 = (int *)v2;
        for ( m = 0; m != v16; ++m )
        {
          if ( *v39 >= -1 )
          {
            v41 = *((void **)v39 + 1);
            if ( v41 )
            {
              *((_QWORD *)v39 + 2) = 0;
              j__free(v41);
            }
          }
          v39 += 8;
        }
        goto LABEL_43;
      }
      j__free(v28);
      v26 = v4[6];
    }
  }
LABEL_45:
  if ( !v26 )
    goto LABEL_18;
LABEL_32:
  result = 3;
  if ( a1[21] == a1[17] )
    return 1;
  return result;
}
// 4053F0: using guessed type __int64 __fastcall std::_Rb_tree_rebalance_for_erase(_QWORD, _QWORD);
// 40C060: using guessed type __int64 sub_40C060();
// 453BF0: using guessed type __int64 sub_453BF0();
