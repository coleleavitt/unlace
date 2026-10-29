__int64 __fastcall sub_8F7360(__int64 a1, char *a2, char a3)
{
  _WORD *v4; // rax
  __int64 v5; // r12
  char *v6; // rsi
  __int64 v7; // r14
  __int64 v8; // rax
  size_t v9; // rdx
  __int64 v10; // r12
  unsigned __int64 v11; // r14
  __int64 v12; // r15
  char *v13; // rsi
  __int64 v14; // rax
  size_t v15; // rdx
  __int64 *v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v21; // rax
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int128 v23; // [rsp+8h] [rbp-50h]
  unsigned __int64 v24; // [rsp+18h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_8FDB30(a2) )
  {
    ptr = nullptr;
    v23 = 0;
    if ( a3 )
    {
      ptr = (void *)qvector_reserve(&ptr, 0, 6, 1);
      memset((char *)ptr + v23, 0, 6 - v23);
      v4 = ptr;
      *(_QWORD *)&v23 = 6;
      *(_DWORD *)ptr = 1380533308;
      v4[2] = 62;
    }
    else
    {
      if ( (unsigned int)sub_8F41B0(*(__int64 **)(a1 + 24), (__int64 *)&ptr, (__int64)a2, 0) )
      {
        v5 = v23;
        if ( (_QWORD)v23 == -1 )
        {
          v7 = 0x7FFFFFFFFFFFFFFFLL;
        }
        else
        {
          v6 = (char *)ptr;
          v7 = v23 + 1;
          v8 = v23;
          v9 = 1;
          if ( *((_QWORD *)&v23 + 1) < (unsigned __int64)(v23 + 1) )
          {
            ptr = (void *)qvector_reserve(&ptr, ptr, v23 + 1, 1);
            v6 = (char *)ptr;
            v8 = v23;
            v9 = v7 - v23;
          }
          memset(&v6[v8], 0, v9);
        }
        *(_QWORD *)&v23 = v7;
        *((_BYTE *)ptr + v5) = 63;
      }
      v10 = v23;
      v11 = v23 + 1;
      v12 = v23 + 1;
      if ( (_QWORD)v23 == -1 )
      {
        v12 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else
      {
        v13 = (char *)ptr;
        v14 = v23;
        v15 = 1;
        if ( *((_QWORD *)&v23 + 1) < v11 )
        {
          ptr = (void *)qvector_reserve(&ptr, ptr, v23 + 1, 1);
          v13 = (char *)ptr;
          v14 = v23;
          v15 = v11 - v23;
        }
        memset(&v13[v14], 0, v15);
      }
      *(_QWORD *)&v23 = v12;
      *((_BYTE *)ptr + v10) = 0;
    }
    v16 = *(__int64 **)(a1 + 16);
    v17 = v16[1];
    v18 = *v16;
    if ( v16[2] < (unsigned __int64)(v17 + 1) )
    {
      v21 = qvector_reserve(v16, v18, v17 + 1, 24);
      *v16 = v21;
      v17 = v16[1];
      v18 = v21;
    }
    v19 = v18 + 24 * v17;
    *(_QWORD *)v19 = 0;
    *(_OWORD *)(v19 + 8) = 0;
    ++v16[1];
    sub_35A790((char **)v19);
    if ( ptr )
    {
      *(_QWORD *)&v23 = 0;
      qfree(ptr);
    }
  }
  return 0;
}
