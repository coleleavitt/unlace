/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000B8F0
// Address: 0x000000010000B8F0

//----- (000000010000B8F0) ----------------------------------------------------
__int64 __fastcall sub_10000B8F0(__int64 a1, size_t a2, unsigned int a3, const char *a4, __int64 a5)
{
  __int64 v5; // r13
  size_t v8; // rax
  size_t v9; // r15
  size_t v10; // r13
  void *v11; // rdi
  size_t v12; // r15
  size_t v13; // r15
  __int64 **v14; // r15
  size_t v15; // rbx
  size_t v16; // rbx
  char *v17; // rcx
  char **v18; // r12
  char **v19; // r14
  size_t v20; // rcx
  char *v21; // rax
  __int128 v22; // xmm1
  __int64 *v23; // rcx
  size_t __n[6]; // [rsp+10h] [rbp-C0h] BYREF
  __int128 v28; // [rsp+40h] [rbp-90h]
  size_t v29; // [rsp+50h] [rbp-80h]
  __int128 v30; // [rsp+60h] [rbp-70h]
  size_t v31[2]; // [rsp+70h] [rbp-60h]
  size_t v32; // [rsp+80h] [rbp-50h]
  size_t v33[2]; // [rsp+88h] [rbp-48h]
  size_t v34; // [rsp+98h] [rbp-38h]

  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1072LL) != a2 )
  {
    v5 = a5;
    memset(__n, 0, 24);
    if ( a4 )
    {
      v8 = strlen(a4);
      v9 = v8;
      v10 = v8 + 1;
      if ( v8 == -1 )
      {
        v11 = nullptr;
      }
      else
      {
        v11 = qvector_reserve((__int64)__n, nullptr, v8 + 1, 1u);
        __n[0] = (size_t)v11;
      }
      __n[1] = v10;
      memmove(v11, a4, v9);
      *(_BYTE *)(__n[0] + v9) = 0;
      v12 = __n[1];
      *(_QWORD *)&v30 = a2;
      *((_QWORD *)&v30 + 1) = a3;
      *(_OWORD *)v31 = 0;
      v32 = 0;
      v5 = a5;
      if ( __n[1] )
      {
        v31[0] = (size_t)qalloc_or_throw(__n[1]);
        v32 = v12;
        memcpy((void *)v31[0], (const void *)__n[0], v12);
        v31[1] = v12;
      }
    }
    else
    {
      *(_QWORD *)&v30 = a2;
      *((_QWORD *)&v30 + 1) = a3;
      *(_OWORD *)v31 = 0;
      v32 = 0;
    }
    *(_OWORD *)v33 = 0;
    v34 = 0;
    v13 = *(_QWORD *)(v5 + 8);
    if ( v13 )
    {
      v33[0] = (size_t)qalloc_or_throw(*(_QWORD *)(v5 + 8));
      v34 = v13;
      memcpy((void *)v33[0], *(const void **)v5, v13);
      v33[1] = v13;
    }
    if ( __n[0] )
    {
      __n[1] = 0;
      qfree((void *)__n[0]);
    }
    v14 = *(__int64 ***)(a1 + 8);
    __n[0] = a2;
    *(_OWORD *)&__n[1] = v30;
    memset(&__n[3], 0, 24);
    v15 = v31[1];
    if ( v31[1] )
    {
      __n[3] = (size_t)qalloc_or_throw(v31[1]);
      __n[5] = v15;
      memcpy((void *)__n[3], (const void *)v31[0], v15);
      __n[4] = v15;
    }
    v28 = 0;
    v29 = 0;
    v16 = v33[1];
    if ( v33[1] )
    {
      *(_QWORD *)&v28 = qalloc_or_throw(v33[1]);
      v29 = v16;
      memcpy((void *)v28, (const void *)v33[0], v16);
      *((_QWORD *)&v28 + 1) = v16;
    }
    v17 = (char *)v14[1];
    if ( v17 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v19 = (char **)v17;
          v20 = *((_QWORD *)v17 + 4);
          if ( __n[0] >= v20 )
            break;
          v17 = *v19;
          v18 = v19;
          if ( !*v19 )
            goto LABEL_25;
        }
        if ( __n[0] <= v20 )
          break;
        v17 = v19[1];
        if ( !v17 )
        {
          v18 = v19 + 1;
          goto LABEL_25;
        }
      }
    }
    else
    {
      v18 = (char **)(v14 + 1);
      v19 = (char **)(v14 + 1);
LABEL_25:
      v21 = (char *)operator new(0x68u);
      *((_QWORD *)v21 + 4) = __n[0];
      *(_OWORD *)(v21 + 40) = *(_OWORD *)&__n[1];
      *((_QWORD *)v21 + 7) = __n[3];
      v22 = *(_OWORD *)&__n[4];
      *(_OWORD *)&__n[3] = 0;
      *((_OWORD *)v21 + 4) = v22;
      __n[5] = 0;
      *((_QWORD *)v21 + 10) = v28;
      *(_QWORD *)&v28 = 0;
      *((_QWORD *)v21 + 11) = v16;
      *((_QWORD *)&v28 + 1) = 0;
      *((_QWORD *)v21 + 12) = v29;
      v29 = 0;
      *(_OWORD *)v21 = 0;
      *((_QWORD *)v21 + 2) = v19;
      *v18 = v21;
      v23 = (__int64 *)**v14;
      if ( v23 )
      {
        *v14 = v23;
        v21 = *v18;
      }
      sub_10000C830(v14[1], (__int64 *)v21);
      v14[2] = (__int64 *)((char *)v14[2] + 1);
    }
    if ( (_QWORD)v28 )
    {
      *((_QWORD *)&v28 + 1) = 0;
      qfree((void *)v28);
      *(_QWORD *)&v28 = 0;
      v29 = 0;
    }
    if ( __n[3] )
    {
      __n[4] = 0;
      qfree((void *)__n[3]);
    }
    if ( v33[0] )
    {
      v33[1] = 0;
      qfree((void *)v33[0]);
      v33[0] = 0;
      v34 = 0;
    }
    if ( v31[0] )
    {
      v31[1] = 0;
      qfree((void *)v31[0]);
      v31[0] = 0;
    }
  }
  return __stack_chk_guard;
}
