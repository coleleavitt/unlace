unsigned __int64 __fastcall sub_5C6AE0(__int64 a1, __int64 a2, int a3)
{
  unsigned __int8 *v3; // rax
  __int64 v5; // rdx
  int v6; // r12d
  __int64 v7; // r13
  __int64 v9; // r12
  unsigned __int64 v10; // rax
  _QWORD *v11; // rdi
  __int64 v12; // rbp
  __int64 v13; // rsi
  __int64 *v14; // rax
  __int64 v15; // rdx
  __int64 *v16; // rbx
  __int64 *v17; // r9
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // r14
  unsigned int *v21; // rax
  unsigned __int64 v23; // r12
  int v24; // ebp
  int v25; // eax
  char *v26; // rsi
  int v27; // r9d
  char *v28; // r8
  __int64 v29; // rax
  char *v30; // rdi
  __int64 v31; // rax
  unsigned __int64 *v32; // rdx
  __int64 v33; // r8
  unsigned __int64 *v34; // rdx
  __int64 v35; // r8
  unsigned __int64 v36; // rbp
  unsigned __int64 v37; // r12
  __int64 v38; // rcx
  __int64 v39; // rsi
  __int64 *v40; // rax
  __int64 v41; // rdx
  __int64 *v42; // rbx
  __int64 *v43; // r9
  _QWORD *v44; // rdi
  __int64 v45; // rsi
  _QWORD *v46; // rax
  __int64 v47; // rdx
  _QWORD *v48; // r15
  _QWORD *v49; // r9
  __m128i v50; // [rsp+10h] [rbp-68h] BYREF
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v52; // [rsp+28h] [rbp-50h]
  unsigned __int64 v53; // [rsp+38h] [rbp-40h]

  v3 = *(unsigned __int8 **)(a2 + 8);
  v53 = __readfsqword(0x28u);
  v5 = *(unsigned int *)(a2 + 4);
  v50 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v3, (__m128i)(unsigned __int64)&v3[v5]);
  if ( v3 < &v3[v5] )
  {
    v6 = *v3;
    v7 = *(_QWORD *)(a1 + 1616);
    v50.m128i_i64[0] = (__int64)(v3 + 1);
    if ( (_BYTE)v6 == 3 )
    {
      v36 = unpack_dq(&v50);
      v37 = unpack_dq(&v50);
      v38 = unpack_dq(&v50);
      if ( a3 )
        sub_5C6720(v7, v36, v37, v38);
      else
        sub_5C6720(v7, v37, v36, v38);
    }
    else if ( (unsigned __int8)v6 > 3u )
    {
      if ( (_BYTE)v6 == 4 )
      {
        v23 = unpack_dq(&v50);
        v24 = unpack_dd(&v50);
        v25 = unpack_dd(&v50);
        v26 = *(char **)(v7 + 24);
        v27 = v25;
        v28 = v26;
        v29 = 16LL * *(_QWORD *)(v7 + 32);
        v30 = &v26[v29];
        v31 = v29 >> 4;
        if ( a3 )
        {
          while ( v31 > 0 )
          {
            while ( 1 )
            {
              v34 = (unsigned __int64 *)&v28[16 * (v31 >> 1)];
              if ( *v34 >= v23 )
                break;
              v28 = (char *)(v34 + 2);
              v31 = v31 - 1 - (v31 >> 1);
              if ( v31 <= 0 )
                goto LABEL_29;
            }
            v31 >>= 1;
          }
LABEL_29:
          if ( v28 != v30 && v23 == *(_QWORD *)v28 )
          {
            v35 = (v28 - v26) >> 4;
            if ( (_DWORD)v35 != -1 )
              *(_DWORD *)&v26[16 * (int)v35 + 8] = v27;
          }
        }
        else
        {
          while ( v31 > 0 )
          {
            while ( 1 )
            {
              v32 = (unsigned __int64 *)&v28[16 * (v31 >> 1)];
              if ( *v32 >= v23 )
                break;
              v28 = (char *)(v32 + 2);
              v31 = v31 - 1 - (v31 >> 1);
              if ( v31 <= 0 )
                goto LABEL_21;
            }
            v31 >>= 1;
          }
LABEL_21:
          if ( v28 != v30 && v23 == *(_QWORD *)v28 )
          {
            v33 = (v28 - v26) >> 4;
            if ( (_DWORD)v33 != -1 )
              *(_DWORD *)&v26[16 * (int)v33 + 8] = v24;
          }
        }
      }
    }
    else if ( (_BYTE)v6 == 2 )
    {
      v9 = unpack_dq(&v50);
      v10 = unpack_dq(&v50);
      v11 = *(_QWORD **)(v7 + 24);
      v12 = v10;
      if ( a3 )
      {
        v39 = (__int64)&v11[2 * *(_QWORD *)(v7 + 32)];
        v40 = sub_5C46C0(v11, v39, v9);
        v42 = v40;
        if ( v40 != v43 && v9 == *v40 )
        {
          if ( (unsigned __int8)must_journal(v11, v39, v41) )
          {
            v52 = 0;
            ptr = nullptr;
            ptr = (void *)qvector_reserve(&ptr, 0, 1, 1);
            *((_BYTE *)ptr + v52) = 2;
            *(_QWORD *)&v52 = v52 + 1;
            sub_40D2A0((__int64 *)&ptr, v9);
            sub_40D2A0((__int64 *)&ptr, v12);
            add_undo_record(*(unsigned int *)(v7 + 48), ptr, v52);
            if ( ptr )
            {
              *(_QWORD *)&v52 = 0;
              qfree(ptr);
            }
          }
          *v42 = v12;
        }
      }
      else
      {
        v13 = (__int64)&v11[2 * *(_QWORD *)(v7 + 32)];
        v14 = sub_5C46C0(v11, v13, v10);
        v16 = v14;
        if ( v14 != v17 && v12 == *v14 )
        {
          if ( (unsigned __int8)must_journal(v11, v13, v15) )
          {
            v52 = 0;
            ptr = nullptr;
            ptr = (void *)qvector_reserve(&ptr, 0, 1, 1);
            *((_BYTE *)ptr + v52) = 2;
            *(_QWORD *)&v52 = v52 + 1;
            sub_40D2A0((__int64 *)&ptr, v12);
            sub_40D2A0((__int64 *)&ptr, v9);
            add_undo_record(*(unsigned int *)(v7 + 48), ptr, v52);
            if ( ptr )
            {
              *(_QWORD *)&v52 = 0;
              qfree(ptr);
            }
          }
          *v16 = v9;
        }
      }
    }
    else
    {
      v18 = unpack_dq(&v50);
      v20 = v18;
      if ( v6 == a3 )
      {
        v44 = *(_QWORD **)(v7 + 24);
        v45 = (__int64)&v44[2 * *(_QWORD *)(v7 + 32)];
        v46 = sub_5C46C0(v44, v45, v18);
        v48 = v46;
        if ( v49 != v46 && v20 == *v46 )
        {
          if ( (unsigned __int8)must_journal(v44, v45, v47) )
          {
            ptr = nullptr;
            v52 = 0;
            ptr = (void *)qvector_reserve(&ptr, 0, 1, 1);
            *((_BYTE *)ptr + v52) = 1;
            *(_QWORD *)&v52 = v52 + 1;
            sub_40D2A0((__int64 *)&ptr, v20);
            add_undo_record(*(unsigned int *)(v7 + 48), ptr, v52);
            if ( ptr )
            {
              *(_QWORD *)&v52 = 0;
              qfree(ptr);
            }
          }
          memmove(v48, v48 + 2, *(_QWORD *)(v7 + 24) + 16LL * *(_QWORD *)(v7 + 32) - (_QWORD)v48 - 16);
          --*(_QWORD *)(v7 + 32);
        }
      }
      else
      {
        sub_5C65A0(v7, v18, v19);
      }
      v21 = (unsigned int *)sub_433DB0(*(_QWORD *)(a1 + 1672), 1u);
      if ( v21 )
        sub_442560(v21, v20, v6 == a3);
    }
    mark_builtin_widgets(8, 0, 1);
  }
  return v53 - __readfsqword(0x28u);
}
