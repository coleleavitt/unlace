/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_ACC50
// Address: 0x00000000000ACC50

//----- (00000000000ACC50) ----------------------------------------------------
bool __fastcall sub_ACC50(__int64 a1, const struct sockaddr *a2, socklen_t a3, char a4)
{
  __int64 v5; // rax
  unsigned __int64 v6; // r15
  size_t v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rbp
  size_t v10; // rdx
  unsigned __int64 v11; // r13
  char *v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rbp
  _BYTE *v15; // rax
  size_t v16; // r14
  __int64 v17; // rax
  __int64 v18; // rbp
  unsigned __int64 v19; // r12
  _BYTE *v20; // rax
  size_t v21; // r14
  __int64 v22; // rax
  __int64 v23; // rbp
  unsigned __int64 v24; // r12
  _BYTE *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rbp
  _BYTE *v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // rcx
  size_t v32; // [rsp+10h] [rbp-448h]
  size_t n; // [rsp+18h] [rbp-440h]
  char host[1024]; // [rsp+20h] [rbp-438h] BYREF
  unsigned __int64 v35; // [rsp+420h] [rbp-38h]

  v35 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 8);
  v6 = v5 - 1;
  if ( !v5 )
    v6 = 0;
  if ( a4 && !getnameinfo(a2, a3, host, 0x400u, nullptr, 0, 4) )
  {
    v7 = __strlen_chk(host, 1024);
    v8 = *(_QWORD *)(a1 + 8);
    v9 = v8 - 1;
    if ( !v8 )
      v9 = 0;
    v10 = v7 + v9;
    v11 = v7 + v9 + 1;
    if ( *(_QWORD *)(a1 + 16) >= v11 )
    {
      v12 = *(char **)a1;
    }
    else
    {
      n = v7;
      v32 = v7 + v9;
      v12 = (char *)qvector_reserve(a1, *(char **)a1, v11, 1u);
      v10 = v32;
      v7 = n;
      *(_QWORD *)a1 = v12;
    }
    *(_QWORD *)(a1 + 8) = v11;
    v12[v10] = 0;
    memmove((void *)(*(_QWORD *)a1 + v9), host, v7);
  }
  if ( !getnameinfo(a2, a3, host, 0x400u, nullptr, 0, 2) )
  {
    v13 = *(_QWORD *)(a1 + 8);
    v14 = v13 - 1;
    if ( !v13 )
      v14 = 0;
    if ( v14 <= v6 )
    {
      v16 = __strlen_chk(host, 1024);
      v17 = *(_QWORD *)(a1 + 8);
      v18 = v17 - 1;
      if ( !v17 )
        v18 = 0;
      v19 = v16 + v18 + 1;
      if ( *(_QWORD *)(a1 + 16) >= v19 )
      {
        v20 = *(_BYTE **)a1;
      }
      else
      {
        v20 = qvector_reserve(a1, *(char **)a1, v16 + v18 + 1, 1u);
        *(_QWORD *)a1 = v20;
      }
      *(_QWORD *)(a1 + 8) = v19;
      v20[v16 + v18] = 0;
      memmove((void *)(*(_QWORD *)a1 + v18), host, v16);
    }
    else
    {
      if ( *(_QWORD *)(a1 + 16) >= v14 + 2 )
      {
        v15 = *(_BYTE **)a1;
      }
      else
      {
        v15 = qvector_reserve(a1, *(char **)a1, v14 + 2, 1u);
        *(_QWORD *)a1 = v15;
      }
      *(_QWORD *)(a1 + 8) = v14 + 2;
      v15[v14] = 40;
      *(_BYTE *)(*(_QWORD *)a1 + v14 + 1) = 0;
      v21 = __strlen_chk(host, 1024);
      v22 = *(_QWORD *)(a1 + 8);
      v23 = v22 - 1;
      if ( !v22 )
        v23 = 0;
      v24 = v21 + v23 + 1;
      if ( *(_QWORD *)(a1 + 16) >= v24 )
      {
        v25 = *(_BYTE **)a1;
      }
      else
      {
        v25 = qvector_reserve(a1, *(char **)a1, v21 + v23 + 1, 1u);
        *(_QWORD *)a1 = v25;
      }
      *(_QWORD *)(a1 + 8) = v24;
      v25[v21 + v23] = 0;
      memmove((void *)(*(_QWORD *)a1 + v23), host, v21);
      v26 = *(_QWORD *)(a1 + 8);
      v27 = v26 - 1;
      if ( !v26 )
        v27 = 0;
      if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v27 + 2) )
      {
        v28 = *(_BYTE **)a1;
      }
      else
      {
        v28 = qvector_reserve(a1, *(char **)a1, v27 + 2, 1u);
        *(_QWORD *)a1 = v28;
      }
      *(_QWORD *)(a1 + 8) = v27 + 2;
      v28[v27] = 41;
      *(_BYTE *)(*(_QWORD *)a1 + v27 + 1) = 0;
    }
  }
  v29 = *(_QWORD *)(a1 + 8);
  v30 = v29 - 1;
  if ( !v29 )
    v30 = 0;
  return v30 > v6;
}
// 33AE0: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
