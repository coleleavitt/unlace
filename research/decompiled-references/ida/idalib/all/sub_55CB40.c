__int64 __fastcall sub_55CB40(_QWORD *a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebp
  __int64 v4; // r15
  size_t v5; // r13
  __int64 v6; // rbp
  unsigned __int64 v7; // r13
  _BYTE *v8; // rsi
  unsigned __int64 v9; // r13
  __int64 v10; // rbp
  _BYTE *v11; // rsi
  unsigned __int64 v12; // r13
  __int64 v13; // rbp
  _BYTE *v14; // rsi
  unsigned __int64 v15; // r13
  __int64 v16; // rbp
  _BYTE *v17; // rsi
  unsigned __int64 v18; // r13
  __int64 v19; // rbp
  _BYTE *v20; // rsi
  const char *v21; // rsi
  _BYTE *v22; // r14
  __int64 v23; // r15
  unsigned __int64 v24; // rdx
  _BYTE *v25; // rsi
  unsigned __int64 v26; // rdx
  __int64 v27; // r15
  _BYTE *v28; // rsi
  size_t v29; // r15
  __int64 v30; // rbp
  size_t v31; // r8
  _BYTE *v32; // rsi
  __int64 v33; // rbp
  unsigned __int64 v34; // r13
  _BYTE *v35; // rsi
  unsigned __int64 v36; // r13
  __int64 v37; // rbp
  _BYTE *v38; // rsi
  unsigned __int64 v39; // [rsp+8h] [rbp-60h]
  unsigned __int64 v40; // [rsp+8h] [rbp-60h]
  size_t v41; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v43; // [rsp+18h] [rbp-50h]
  unsigned __int64 v44; // [rsp+28h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  v1 = a1[31];
  if ( v1 )
  {
    v2 = *(_DWORD *)(v1 + 96);
    if ( v2 )
    {
      if ( a1[30] != -2 )
      {
        (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 136LL))(a1, &byte_22F0C30, 0xFFFFFFFFLL);
        return 1;
      }
      v43 = 0;
      ptr = nullptr;
      sub_35A790((char **)&ptr);
      v4 = a1[31];
      v5 = *(_QWORD *)(v4 + 16);
      if ( v5 )
      {
        v22 = (_BYTE *)qalloc_or_throw(*(_QWORD *)(v4 + 16));
        memcpy(v22, *(const void **)(v4 + 8), v5);
        if ( !*v22 )
        {
LABEL_58:
          if ( v22 )
            qfree(v22);
          goto LABEL_9;
        }
      }
      else
      {
        if ( !byte_2CCB1E1 )
        {
LABEL_9:
          v6 = v43;
          v7 = 2;
          if ( (_QWORD)v43 )
          {
            v7 = v43 + 1;
            v6 = v43 - 1;
          }
          v8 = ptr;
          if ( *((_QWORD *)&v43 + 1) < v7 )
          {
            ptr = (void *)qvector_reserve(&ptr, ptr, v7, 1);
            v8 = ptr;
          }
          *(_QWORD *)&v43 = v7;
          v9 = 2;
          v8[v6] = 1;
          *((_BYTE *)ptr + v6 + 1) = 0;
          v10 = v43;
          if ( (_QWORD)v43 )
          {
            v9 = v43 + 1;
            v10 = v43 - 1;
          }
          v11 = ptr;
          if ( *((_QWORD *)&v43 + 1) < v9 )
          {
            ptr = (void *)qvector_reserve(&ptr, ptr, v9, 1);
            v11 = ptr;
          }
          *(_QWORD *)&v43 = v9;
          v12 = 2;
          v11[v10] = 9;
          *((_BYTE *)ptr + v10 + 1) = 0;
          v13 = v43;
          if ( (_QWORD)v43 )
          {
            v12 = v43 + 1;
            v13 = v43 - 1;
          }
          v14 = ptr;
          if ( *((_QWORD *)&v43 + 1) < v12 )
          {
            ptr = (void *)qvector_reserve(&ptr, ptr, v12, 1);
            v14 = ptr;
          }
          *(_QWORD *)&v43 = v12;
          v15 = 2;
          v14[v13] = 41;
          *((_BYTE *)ptr + v13 + 1) = 0;
          v16 = v43;
          if ( (_QWORD)v43 )
          {
            v15 = v43 + 1;
            v16 = v43 - 1;
          }
          v17 = ptr;
          if ( *((_QWORD *)&v43 + 1) < v15 )
          {
            ptr = (void *)qvector_reserve(&ptr, ptr, v15, 1);
            v17 = ptr;
          }
          *(_QWORD *)&v43 = v15;
          v18 = 2;
          v17[v16] = 2;
          *((_BYTE *)ptr + v16 + 1) = 0;
          v19 = v43;
          if ( (_QWORD)v43 )
          {
            v18 = v43 + 1;
            v19 = v43 - 1;
          }
          v20 = ptr;
          if ( *((_QWORD *)&v43 + 1) < v18 )
          {
            ptr = (void *)qvector_reserve(&ptr, ptr, v18, 1);
            v20 = ptr;
          }
          *(_QWORD *)&v43 = v18;
          v20[v19] = 9;
          v21 = haystack;
          *((_BYTE *)ptr + v19 + 1) = 0;
          if ( (_QWORD)v43 )
            v21 = (const char *)ptr;
          (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 184LL))(a1, v21, 4);
          if ( ptr )
          {
            *(_QWORD *)&v43 = 0;
            qfree(ptr);
          }
          return 1;
        }
        v22 = nullptr;
      }
      v23 = v43;
      v24 = 2;
      if ( (_QWORD)v43 )
      {
        v24 = v43 + 1;
        v23 = v43 - 1;
      }
      v25 = ptr;
      if ( *((_QWORD *)&v43 + 1) < v24 )
      {
        v40 = v24;
        ptr = (void *)qvector_reserve(&ptr, ptr, v24, 1);
        v24 = v40;
        v25 = ptr;
      }
      *(_QWORD *)&v43 = v24;
      v26 = 2;
      v25[v23] = 1;
      *((_BYTE *)ptr + v23 + 1) = 0;
      v27 = v43;
      if ( (_QWORD)v43 )
      {
        v26 = v43 + 1;
        v27 = v43 - 1;
      }
      v28 = ptr;
      if ( *((_QWORD *)&v43 + 1) < v26 )
      {
        v39 = v26;
        ptr = (void *)qvector_reserve(&ptr, ptr, v26, 1);
        v26 = v39;
        v28 = ptr;
      }
      *(_QWORD *)&v43 = v26;
      v28[v27] = 23;
      *((_BYTE *)ptr + v27 + 1) = 0;
      tag_addr(&ptr, v2, 0);
      if ( v5 )
      {
        v29 = v5 - 1;
        if ( v5 != 1 )
        {
          v30 = v43;
          v31 = v5 - 1;
          if ( (_QWORD)v43 )
          {
            v30 = v43 - 1;
            v31 = v29 + v43 - 1;
            v5 += v43 - 1;
          }
          v32 = ptr;
          if ( *((_QWORD *)&v43 + 1) < v5 )
          {
            v41 = v31;
            ptr = (void *)qvector_reserve(&ptr, ptr, v5, 1);
            v31 = v41;
            v32 = ptr;
          }
          *(_QWORD *)&v43 = v5;
          v32[v31] = 0;
          memcpy((char *)ptr + v30, v22, v29);
        }
      }
      v33 = v43;
      v34 = 2;
      if ( (_QWORD)v43 )
      {
        v34 = v43 + 1;
        v33 = v43 - 1;
      }
      v35 = ptr;
      if ( *((_QWORD *)&v43 + 1) < v34 )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, v34, 1);
        v35 = ptr;
      }
      *(_QWORD *)&v43 = v34;
      v36 = 2;
      v35[v33] = 2;
      *((_BYTE *)ptr + v33 + 1) = 0;
      v37 = v43;
      if ( (_QWORD)v43 )
      {
        v36 = v43 + 1;
        v37 = v43 - 1;
      }
      v38 = ptr;
      if ( *((_QWORD *)&v43 + 1) < v36 )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, v36, 1);
        v38 = ptr;
      }
      *(_QWORD *)&v43 = v36;
      v38[v37] = 23;
      *((_BYTE *)ptr + v37 + 1) = 0;
      goto LABEL_58;
    }
  }
  return 0;
}
