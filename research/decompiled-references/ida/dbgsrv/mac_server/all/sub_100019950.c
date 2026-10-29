/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100019950
// Address: 0x0000000100019950

//----- (0000000100019950) ----------------------------------------------------
__int64 __fastcall sub_100019950(__int64 a1, const char *a2)
{
  size_t v3; // rax
  size_t v4; // r15
  size_t v5; // r12
  void *v6; // rdi
  const char *v7; // rcx
  const char *v8; // rdx
  unsigned __int64 v9; // r15
  __int64 v10; // r14
  const char *v11; // r12
  size_t v12; // r15
  void *v13; // rdi
  size_t v14; // rax
  size_t v15; // r15
  size_t v16; // r12
  void *v17; // rdi
  char *v19; // rax
  char *v20; // r14
  size_t v21; // rax
  size_t v22; // r15
  size_t v23; // r12
  void *v24; // rdi
  const char *v25; // [rsp+8h] [rbp-498h]
  __int128 v26; // [rsp+10h] [rbp-490h] BYREF
  __int64 v27; // [rsp+20h] [rbp-480h]
  __int128 v28; // [rsp+30h] [rbp-470h] BYREF
  __int64 v29; // [rsp+40h] [rbp-460h]
  __int128 v30; // [rsp+50h] [rbp-450h] BYREF
  __int64 v31; // [rsp+60h] [rbp-440h]
  char v32[1024]; // [rsp+70h] [rbp-430h] BYREF

  v30 = 0;
  v31 = 0;
  v28 = 0;
  v29 = 0;
  if ( a2 )
  {
    v3 = strlen(a2);
    v4 = v3;
    v5 = v3 + 1;
    if ( v3 == -1 )
    {
      v6 = nullptr;
    }
    else
    {
      v6 = qvector_reserve((__int64)&v28, nullptr, v3 + 1, 1u);
      *(_QWORD *)&v28 = v6;
    }
    *((_QWORD *)&v28 + 1) = v5;
    memmove(v6, a2, v4);
    *(_BYTE *)(v28 + v4) = 0;
    if ( *((_QWORD *)&v28 + 1) >= 2u && *(_BYTE *)v28 == 126 && (unsigned __int8)qgetenv("HOME", (__int64)&v30) )
    {
      v7 = _s1;
      v8 = _s1;
      if ( *((_QWORD *)&v30 + 1) )
        v8 = (const char *)v30;
      v9 = 0;
      v10 = 0;
      if ( *((_QWORD *)&v28 + 1) )
        v9 = *((_QWORD *)&v28 + 1) - 1LL;
      v11 = _s1;
      if ( *((_QWORD *)&v28 + 1) )
        v11 = (const char *)v28;
      v26 = 0;
      v27 = 0;
      if ( v9 >= 2 )
      {
        v25 = v8;
        LOBYTE(v10) = *((_QWORD *)&v28 + 1) > 1u;
        v12 = v9 - v10;
        if ( v12 == -1 )
        {
          v13 = nullptr;
        }
        else
        {
          v13 = qvector_reserve((__int64)&v26, nullptr, v12 + 1, 1u);
          *(_QWORD *)&v26 = v13;
        }
        *((_QWORD *)&v26 + 1) = v12 + 1;
        memmove(v13, &v11[v10], v12);
        *(_BYTE *)(v26 + v12) = 0;
        if ( *((_QWORD *)&v26 + 1) )
          v7 = (const char *)v26;
        else
          v7 = _s1;
        v8 = v25;
      }
      v19 = qmakepath(v32, 1024, (__int64)v8, v7, 0);
      v20 = v19;
      *(_OWORD *)a1 = 0;
      *(_QWORD *)(a1 + 16) = 0;
      if ( v19 )
      {
        v21 = strlen(v19);
        v22 = v21;
        v23 = v21 + 1;
        if ( v21 == -1 )
        {
          v24 = nullptr;
        }
        else
        {
          v24 = qvector_reserve(a1, nullptr, v21 + 1, 1u);
          *(_QWORD *)a1 = v24;
        }
        *(_QWORD *)(a1 + 8) = v23;
        memmove(v24, v20, v22);
        *(_BYTE *)(*(_QWORD *)a1 + v22) = 0;
      }
      if ( (_QWORD)v26 )
      {
        *((_QWORD *)&v26 + 1) = 0;
        qfree((void *)v26);
      }
    }
    else
    {
      *(_OWORD *)a1 = 0;
      *(_QWORD *)(a1 + 16) = 0;
      v14 = strlen(a2);
      v15 = v14;
      v16 = v14 + 1;
      if ( v14 == -1 )
      {
        v17 = nullptr;
      }
      else
      {
        v17 = qvector_reserve(a1, nullptr, v14 + 1, 1u);
        *(_QWORD *)a1 = v17;
      }
      *(_QWORD *)(a1 + 8) = v16;
      memmove(v17, a2, v15);
      *(_BYTE *)(*(_QWORD *)a1 + v15) = 0;
    }
  }
  else
  {
    *(_OWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
  if ( (_QWORD)v28 )
  {
    *((_QWORD *)&v28 + 1) = 0;
    qfree((void *)v28);
  }
  if ( (_QWORD)v30 )
  {
    *((_QWORD *)&v30 + 1) = 0;
    qfree((void *)v30);
  }
  return a1;
}
