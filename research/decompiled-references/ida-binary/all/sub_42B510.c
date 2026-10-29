__int64 __fastcall sub_42B510(__int64 a1, const char *a2, __int64 a3, __int64 a4, const char *a5, __int64 a6)
{
  const char *v7; // rbp
  _QWORD *v9; // rax
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // r12
  unsigned __int8 v13; // r13
  unsigned __int8 v14; // bl
  _QWORD *v15; // rax
  int v16; // edx
  int v17; // ecx
  _QWORD *v18; // rax
  __int64 *v20; // r15
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  size_t v24; // r9
  unsigned __int64 v25; // r13
  __int64 v26; // r8
  size_t v27; // r10
  __int64 v28; // rsi
  _QWORD *v29; // rax
  __int64 v30; // rdx
  __int64 *v31; // r13
  unsigned __int64 v32; // rbx
  size_t v33; // r15
  __int64 v34; // r14
  size_t v35; // r8
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rax
  size_t v39; // [rsp+8h] [rbp-70h]
  size_t v40; // [rsp+8h] [rbp-70h]
  __int64 v41; // [rsp+10h] [rbp-68h]
  size_t v42; // [rsp+18h] [rbp-60h]
  void *src; // [rsp+20h] [rbp-58h] BYREF
  __int128 v44; // [rsp+28h] [rbp-50h]
  unsigned __int64 v45; // [rsp+38h] [rbp-40h]

  v7 = a2;
  v45 = __readfsqword(0x28u);
  v9 = sub_426230(a1, a2);
  v10 = (__int64)v9;
  if ( a6 )
  {
    v11 = *(unsigned int *)(a6 + 64);
    v12 = a6;
    v13 = 1;
    if ( (_DWORD)v11 )
    {
      a2 = (const char *)*(unsigned int *)(a6 + 60);
      v20 = *(__int64 **)v7;
      src = nullptr;
      v44 = 0;
      vault_get_revision_postfix(&src, a2, v11);
      v25 = v44;
      if ( (_QWORD)v44 )
      {
        v24 = v44 - 1;
        if ( (_QWORD)v44 != 1 )
        {
          v26 = v20[1];
          v27 = v44 - 1;
          if ( v26 )
          {
            --v26;
            v27 = v24 + v26;
            v25 = v44 + v26;
          }
          v28 = *v20;
          if ( v20[2] < v25 )
          {
            v42 = v27;
            v41 = v26;
            v39 = v44 - 1;
            v37 = qvector_reserve(v20, v28, v25, 1);
            v27 = v42;
            v26 = v41;
            *v20 = v37;
            v28 = v37;
            v24 = v39;
          }
          v20[1] = v25;
          *(_BYTE *)(v28 + v27) = 0;
          a2 = (const char *)src;
          memcpy((void *)(v26 + *v20), src, v24);
        }
      }
      a1 = (__int64)src;
      if ( src )
      {
        *(_QWORD *)&v44 = 0;
        qfree(src, a2, v21, v22, v23, v24);
      }
      v13 = *(_DWORD *)(a6 + 60) == *(_DWORD *)(a6 + 64);
    }
    if ( *(_BYTE *)(a6 + 72) == 2 )
    {
      *((_DWORD *)v7 + 33) |= 2u;
      v14 = 2;
    }
    else
    {
      if ( *(_DWORD *)(a6 + 60) != *(_DWORD *)(a6 + 64) )
        *((_DWORD *)v7 + 33) |= 2u;
      a2 = (const char *)a6;
      a1 = v10;
      v14 = 0;
      v15 = sub_41E260(v10, a2);
      if ( v15 )
      {
        v16 = *((_DWORD *)v7 + 33);
        *((_DWORD *)v7 + 33) = v16 | 1;
        v17 = *((_DWORD *)v15 + 18);
        if ( v17 && v17 != *((_DWORD *)v15 + 19) )
          *((_DWORD *)v7 + 33) = v16 | 3;
        v14 = *((_BYTE *)v15 + 84);
      }
    }
  }
  else
  {
    *((_DWORD *)a2 + 33) |= 0x10u;
    a2 = a5;
    a1 = (__int64)v9;
    v29 = sub_41E260((__int64)v9, a5);
    v12 = (__int64)v29;
    if ( v29 )
    {
      *((_DWORD *)v7 + 33) |= 1u;
      v30 = *((unsigned int *)v29 + 19);
      a2 = (const char *)*((unsigned int *)v29 + 18);
      v31 = *(__int64 **)v7;
      v44 = 0;
      src = nullptr;
      vault_get_revision_postfix(&src, a2, v30);
      v32 = v44;
      if ( (_QWORD)v44 )
      {
        v33 = v44 - 1;
        if ( (_QWORD)v44 != 1 )
        {
          v34 = v31[1];
          v35 = v44 - 1;
          if ( v34 )
          {
            --v34;
            v35 = v33 + v34;
            v32 = v44 + v34;
          }
          v36 = *v31;
          if ( v31[2] < v32 )
          {
            v40 = v35;
            v38 = qvector_reserve(v31, v36, v32, 1);
            *v31 = v38;
            v35 = v40;
            v36 = v38;
          }
          v31[1] = v32;
          *(_BYTE *)(v36 + v35) = 0;
          a2 = (const char *)src;
          memcpy((void *)(v34 + *v31), src, v33);
        }
      }
      a1 = (__int64)src;
      if ( src )
      {
        *(_QWORD *)&v44 = 0;
        qfree(src, a2);
      }
      v12 += 48;
      v14 = 1;
      v13 = 1;
    }
    else
    {
      v14 = 0;
      v13 = 1;
    }
  }
  v18 = sub_426230(a1, a2);
  *((_DWORD *)v7 + 35) = sub_41F810((__int64)v18, v14, v13, v12);
  return 1;
}
