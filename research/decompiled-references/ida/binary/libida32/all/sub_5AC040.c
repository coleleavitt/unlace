unsigned __int64 __fastcall sub_5AC040(__int64 a1, __int64 a2, int a3)
{
  unsigned __int8 *v3; // rax
  __int64 v5; // rdx
  int v6; // r12d
  __int64 v7; // r13
  unsigned int v9; // r12d
  unsigned int v10; // eax
  _DWORD *v11; // rdi
  unsigned int v12; // ebp
  __int64 v13; // rax
  __int64 v14; // rsi
  unsigned int *v15; // rax
  __int64 v16; // rdx
  unsigned int *v17; // rbx
  unsigned int *v18; // r9
  unsigned int v19; // eax
  __int64 v20; // rdx
  unsigned int v21; // r14d
  unsigned int *v22; // rax
  unsigned int v24; // r12d
  int v25; // ebp
  int v26; // eax
  char *v27; // rsi
  int v28; // edi
  char *v29; // rcx
  __int64 v30; // rax
  char *v31; // r9
  __int64 v32; // rax
  char *v33; // rdi
  __int64 v34; // rcx
  char *v35; // r8
  __int64 v36; // rcx
  unsigned int v37; // ebp
  unsigned int v38; // r12d
  unsigned int v39; // ecx
  __int64 v40; // rsi
  unsigned int *v41; // rax
  __int64 v42; // rdx
  unsigned int *v43; // rbx
  unsigned int *v44; // r9
  _DWORD *v45; // rdi
  __int64 v46; // rsi
  _DWORD *v47; // rax
  __int64 v48; // rdx
  _DWORD *v49; // r15
  _DWORD *v50; // r9
  __m128i v51; // [rsp+10h] [rbp-68h] BYREF
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v53; // [rsp+28h] [rbp-50h]
  unsigned __int64 v54; // [rsp+38h] [rbp-40h]

  v3 = *(unsigned __int8 **)(a2 + 8);
  v54 = __readfsqword(0x28u);
  v5 = *(unsigned int *)(a2 + 4);
  v51 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v3, (__m128i)(unsigned __int64)&v3[v5]);
  if ( v3 < &v3[v5] )
  {
    v6 = *v3;
    v7 = *(_QWORD *)(a1 + 1424);
    v51.m128i_i64[0] = (__int64)(v3 + 1);
    if ( (_BYTE)v6 == 3 )
    {
      v37 = unpack_dd(&v51);
      v38 = unpack_dd(&v51);
      v39 = unpack_dd(&v51);
      if ( a3 )
        sub_5ABCA0(v7, v37, v38, v39);
      else
        sub_5ABCA0(v7, v38, v37, v39);
    }
    else if ( (unsigned __int8)v6 > 3u )
    {
      if ( (_BYTE)v6 == 4 )
      {
        v24 = unpack_dd(&v51);
        v25 = unpack_dd(&v51);
        v26 = unpack_dd(&v51);
        v27 = *(char **)(v7 + 16);
        v28 = v26;
        v29 = v27;
        v30 = 8LL * *(_QWORD *)(v7 + 24);
        v31 = &v27[v30];
        v32 = v30 >> 3;
        if ( a3 )
        {
          while ( v32 > 0 )
          {
            while ( 1 )
            {
              v35 = &v29[8 * (v32 >> 1)];
              if ( *(_DWORD *)v35 >= v24 )
                break;
              v29 = v35 + 8;
              v32 = v32 - 1 - (v32 >> 1);
              if ( v32 <= 0 )
                goto LABEL_29;
            }
            v32 >>= 1;
          }
LABEL_29:
          if ( v29 != v31 && v24 == *(_DWORD *)v29 )
          {
            v36 = (v29 - v27) >> 3;
            if ( (_DWORD)v36 != -1 )
              *(_DWORD *)&v27[8 * (int)v36 + 4] = v28;
          }
        }
        else
        {
          while ( v32 > 0 )
          {
            while ( 1 )
            {
              v33 = &v29[8 * (v32 >> 1)];
              if ( *(_DWORD *)v33 >= v24 )
                break;
              v29 = v33 + 8;
              v32 = v32 - 1 - (v32 >> 1);
              if ( v32 <= 0 )
                goto LABEL_21;
            }
            v32 >>= 1;
          }
LABEL_21:
          if ( v29 != v31 && v24 == *(_DWORD *)v29 )
          {
            v34 = (v29 - v27) >> 3;
            if ( (_DWORD)v34 != -1 )
              *(_DWORD *)&v27[8 * (int)v34 + 4] = v25;
          }
        }
      }
    }
    else if ( (_BYTE)v6 == 2 )
    {
      v9 = unpack_dd(&v51);
      v10 = unpack_dd(&v51);
      v11 = *(_DWORD **)(v7 + 16);
      v12 = v10;
      v13 = *(_QWORD *)(v7 + 24);
      if ( a3 )
      {
        v40 = (__int64)&v11[2 * v13];
        v41 = sub_5AA180(v11, v40, v9);
        v43 = v41;
        if ( v41 != v44 && v9 == *v41 )
        {
          if ( (unsigned __int8)must_journal(v11, v40, v42)
            && (v53 = 0,
                ptr = nullptr,
                ptr = (void *)qvector_reserve(&ptr, 0, 1, 1),
                *((_BYTE *)ptr + v53) = 2,
                *(_QWORD *)&v53 = v53 + 1,
                sub_3FA160((__int64 *)&ptr, v9),
                sub_3FA160((__int64 *)&ptr, v12),
                add_undo_record(*(unsigned int *)(v7 + 40), ptr, v53),
                ptr) )
          {
            *(_QWORD *)&v53 = 0;
            qfree(ptr);
            *v43 = v12;
          }
          else
          {
            *v43 = v12;
          }
        }
      }
      else
      {
        v14 = (__int64)&v11[2 * v13];
        v15 = sub_5AA180(v11, v14, v12);
        v17 = v15;
        if ( v15 != v18 && v12 == *v15 )
        {
          if ( (unsigned __int8)must_journal(v11, v14, v16) )
          {
            v53 = 0;
            ptr = nullptr;
            ptr = (void *)qvector_reserve(&ptr, 0, 1, 1);
            *((_BYTE *)ptr + v53) = 2;
            *(_QWORD *)&v53 = v53 + 1;
            sub_3FA160((__int64 *)&ptr, v12);
            sub_3FA160((__int64 *)&ptr, v9);
            add_undo_record(*(unsigned int *)(v7 + 40), ptr, v53);
            if ( ptr )
            {
              *(_QWORD *)&v53 = 0;
              qfree(ptr);
            }
          }
          *v17 = v9;
        }
      }
    }
    else
    {
      v19 = unpack_dd(&v51);
      v21 = v19;
      if ( v6 == a3 )
      {
        v45 = *(_DWORD **)(v7 + 16);
        v46 = (__int64)&v45[2 * *(_QWORD *)(v7 + 24)];
        v47 = sub_5AA180(v45, v46, v19);
        v49 = v47;
        if ( v50 != v47 && v21 == *v47 )
        {
          if ( (unsigned __int8)must_journal(v45, v46, v48) )
          {
            ptr = nullptr;
            v53 = 0;
            ptr = (void *)qvector_reserve(&ptr, 0, 1, 1);
            *((_BYTE *)ptr + v53) = 1;
            *(_QWORD *)&v53 = v53 + 1;
            sub_3FA160((__int64 *)&ptr, v21);
            add_undo_record(*(unsigned int *)(v7 + 40), ptr, v53);
            if ( ptr )
            {
              *(_QWORD *)&v53 = 0;
              qfree(ptr);
            }
          }
          memmove(v49, v49 + 2, *(_QWORD *)(v7 + 16) + 8LL * *(_QWORD *)(v7 + 24) - (_QWORD)v49 - 8);
          --*(_QWORD *)(v7 + 24);
        }
      }
      else
      {
        sub_5ABB20(v7, v19, v20);
      }
      v22 = (unsigned int *)sub_41FEF0(*(_QWORD *)(a1 + 1480), 1u);
      if ( v22 )
        sub_42E7C0(v22, v21, v6 == a3);
    }
    mark_builtin_widgets(8, 0, 1);
  }
  return v54 - __readfsqword(0x28u);
}

