unsigned __int64 __fastcall sub_1CD100(_QWORD *a1, unsigned __int64 a2, _QWORD *a3)
{
  __int64 v3; // r9
  unsigned __int64 v5; // r12
  __int64 v7; // rbp
  _QWORD *v8; // rdi
  unsigned __int64 v9; // rbx
  unsigned __int64 *v10; // rax
  unsigned __int64 *v11; // r14
  unsigned __int64 *v12; // r9
  char v13; // al
  unsigned __int64 *v14; // rsi
  __int64 v15; // rdx
  char *v16; // r8
  __int64 v17; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  bool v22; // cf
  __int64 v23; // rdi
  int *v24; // rbx
  __int128 *v25; // r15
  __int128 *v26; // r8
  unsigned __int64 v27; // r14
  int *v28; // rax
  bool v29; // r12
  __int128 *v30; // rax
  __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // r15
  unsigned __int64 *v35; // r12
  int *v36; // rax
  int *v37; // rdi
  __int64 v38; // rcx
  unsigned __int64 v39; // rax
  __int64 v40; // rax
  unsigned __int64 v41; // [rsp+0h] [rbp-B8h]
  __int128 *v42; // [rsp+8h] [rbp-B0h]
  int v43; // [rsp+18h] [rbp-A0h] BYREF
  int *v44; // [rsp+20h] [rbp-98h]
  int *v45; // [rsp+28h] [rbp-90h]
  int *v46; // [rsp+30h] [rbp-88h]
  __int64 v47; // [rsp+38h] [rbp-80h]
  __m128i v48; // [rsp+40h] [rbp-78h]
  __int64 v49; // [rsp+50h] [rbp-68h] BYREF
  int v50; // [rsp+58h] [rbp-60h]
  __int128 v51; // [rsp+60h] [rbp-58h] BYREF
  unsigned __int64 v52; // [rsp+78h] [rbp-40h]

  v52 = __readfsqword(0x28u);
  v3 = a1[150];
  if ( v3 )
  {
    v5 = a2;
    if ( *(_DWORD *)(a2 + 96) )
    {
      v7 = 0;
      while ( 1 )
      {
        v8 = (_QWORD *)a1[149];
        v9 = *(_QWORD *)(*(_QWORD *)(v5 + 72) + (v7 << 6));
        a2 = (unsigned __int64)&v8[2 * v3];
        v10 = sub_1CCA10(v8, a2, v9);
        v11 = v10;
        if ( v10 == v12 || v9 != *v10 )
        {
          v13 = sub_317400(a3[3], v9);
          v41 = 0;
          v14 = (unsigned __int64 *)a1[149];
          if ( !v13 && v14 != v11 )
            v41 = *(v11 - 1);
          v15 = a1[150];
          v16 = (char *)((char *)v11 - (char *)v14);
          if ( a1[151] < (unsigned __int64)(v15 + 1) )
          {
            v17 = qvector_reserve(a1 + 149, v14, v15 + 1, 16);
            v16 = (char *)((char *)v11 - (char *)v14);
            v15 = a1[150];
            a1[149] = v17;
            v11 = (unsigned __int64 *)(v17 + (char *)v11 - (char *)v14);
          }
          a2 = (unsigned __int64)v11;
          memmove(v11 + 2, v11, 16 * v15 - (_QWORD)v16);
          *v11 = v9;
          v11[1] = v41;
          ++a1[150];
        }
        if ( ++v7 >= (unsigned __int64)*(int *)(v5 + 96) )
          break;
        v3 = a1[150];
      }
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a3 + 16LL))(a3) )
    {
      v21 = a1[150] - 1LL;
      if ( v21 >= 0 )
      {
        do
        {
          while ( 1 )
          {
            a2 = (unsigned int)v21;
            if ( !sub_64330(a3 + 4, v21) )
              break;
            v22 = v21-- == 0;
            if ( v22 )
              goto LABEL_24;
          }
          v23 = a1[149] + 16 * v21;
          a2 = v23 + 16;
          memmove((void *)v23, (const void *)(v23 + 16), 16 * (a1[150] - v21) - 16);
          --a1[150];
          v22 = v21-- == 0;
        }
        while ( !v22 );
      }
    }
LABEL_24:
    v24 = (int *)a1[1];
    v43 = 0;
    v44 = nullptr;
    v45 = &v43;
    v46 = &v43;
    v47 = 0;
    v49 = 0;
    v50 = -1;
    v48 = 0;
    v51 = 0;
    if ( v24 )
    {
      a2 = (unsigned __int64)v24;
      if ( (unsigned __int8)func_tail_iterator_set(&v49, v24, -1) )
      {
        v25 = (__int128 *)v48.m128i_i64[0];
        v24 = v44;
        goto LABEL_27;
      }
    }
    else
    {
      v25 = (__int128 *)a1[2];
      v30 = &v25[a1[3]];
      v48 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v25, (__m128i)(unsigned __int64)v30);
      if ( v25 != v30 )
      {
LABEL_27:
        if ( v25 )
        {
          v26 = v25;
        }
        else
        {
          v25 = (__int128 *)v49;
          if ( v49 )
            goto LABEL_29;
          v26 = nullptr;
          v25 = &v51;
        }
        while ( 1 )
        {
          v27 = *(_QWORD *)v25;
          if ( !v24 )
            break;
          while ( 1 )
          {
            while ( 1 )
            {
              v19 = *((_QWORD *)v24 + 4);
              a2 = *((_QWORD *)v24 + 2);
              v20 = 0;
              v28 = *((int **)v24 + 3);
              if ( v27 < v19 )
              {
                v28 = *((int **)v24 + 2);
                v20 = 1;
              }
              if ( !v28 )
                break;
              v24 = v28;
            }
            if ( (_BYTE)v20 )
            {
              if ( v45 != v24 )
                goto LABEL_63;
LABEL_40:
              v29 = 1;
              if ( v24 != &v43 )
                v29 = v27 < *((_QWORD *)v24 + 4);
              goto LABEL_42;
            }
LABEL_39:
            if ( v19 < v27 )
              goto LABEL_40;
LABEL_43:
            if ( !v26 )
              break;
            v25 = v26 + 1;
            v48.m128i_i64[0] = (__int64)(v26 + 1);
            if ( v26 + 1 == (__int128 *)v48.m128i_i64[1] )
              goto LABEL_49;
            v24 = v44;
            v27 = *(_QWORD *)v25;
            ++v26;
            if ( !v44 )
              goto LABEL_46;
          }
          v25 = (__int128 *)v49;
          if ( !v49 || v50 + 1 >= *(_DWORD *)(v49 + 128) )
            goto LABEL_49;
          ++v50;
          v24 = v44;
LABEL_29:
          v26 = nullptr;
          if ( v50 >= 0 && v50 < *((_DWORD *)v25 + 32) )
            v25 = (__int128 *)(*((_QWORD *)v25 + 17) + 16LL * v50);
        }
LABEL_46:
        v24 = v45;
        if ( v45 != &v43 )
        {
          v24 = &v43;
LABEL_63:
          v42 = v26;
          v40 = std::_Rb_tree_decrement(v24, a2, v19, v20, v26);
          v26 = v42;
          v19 = *(_QWORD *)(v40 + 32);
          goto LABEL_39;
        }
        v29 = 1;
LABEL_42:
        a2 = operator new(0x28u);
        *(_QWORD *)(a2 + 32) = *(_QWORD *)v25;
        std::_Rb_tree_insert_and_rebalance(v29, a2, v24, &v43);
        ++v47;
        v26 = (__int128 *)v48.m128i_i64[0];
        goto LABEL_43;
      }
    }
LABEL_49:
    v31 = a1[150] - 1LL;
    if ( v31 > 0 )
    {
      do
      {
        v32 = a1[149];
        v33 = v31;
        v34 = v31--;
        v35 = (unsigned __int64 *)(v32 + 16 * v33);
        if ( v35[1] == *(v35 - 1) )
        {
          v36 = v44;
          if ( v44 )
          {
            a2 = *v35;
            v37 = &v43;
            do
            {
              while ( 1 )
              {
                v38 = *((_QWORD *)v36 + 2);
                v32 = *((_QWORD *)v36 + 3);
                if ( a2 >= *((_QWORD *)v36 + 4) )
                  break;
                v37 = v36;
                v36 = *((int **)v36 + 2);
                if ( !v38 )
                  goto LABEL_58;
              }
              v36 = *((int **)v36 + 3);
            }
            while ( v32 );
          }
          else
          {
            v37 = &v43;
          }
LABEL_58:
          if ( v37 == v45
            || (v39 = *(_QWORD *)(std::_Rb_tree_decrement(v37, a2, v32) + 32), *(v35 - 2) >= v39)
            || *v35 < v39 )
          {
            a2 = (unsigned __int64)(v35 + 2);
            memmove(v35, v35 + 2, 16 * (a1[150] - v34) - 16);
            --a1[150];
          }
        }
      }
      while ( v31 );
    }
    if ( v49 )
      lock_func_range(v49, 0);
    sub_1CCB40(v44);
  }
  return v52 - __readfsqword(0x28u);
}
