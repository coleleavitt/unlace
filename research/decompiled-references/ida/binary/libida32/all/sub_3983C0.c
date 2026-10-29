__int64 __fastcall sub_3983C0(__int64 a1, char *a2)
{
  __int64 v2; // r14
  const char *v3; // rax
  __int64 v5; // r15
  __int64 v6; // rbp
  __int64 v7; // r12
  __int64 v8; // r14
  const char *v9; // rdi
  void *v10; // rdi
  char *v11; // rdi
  __int64 v12; // rbp
  __int64 v13; // r14
  __int64 i; // r13
  char *v15; // r15
  void *v16; // rdi
  void *v17; // rdi
  bool v18; // zf
  const char **v19; // r12
  const char *v20; // rdx
  const char **v21; // rbx
  size_t v22; // rax
  size_t v23; // rbp
  __int64 v24; // rax
  void *v25; // rdi
  size_t v26; // r13
  __int64 v27; // rax
  __int64 v28; // [rsp+10h] [rbp-F8h]
  unsigned int v30; // [rsp+64h] [rbp-A4h]
  _QWORD v31[10]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v32; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v33; // [rsp+C8h] [rbp-40h]

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1336LL);
  v33 = __readfsqword(0x28u);
  v28 = v2;
  v3 = (const char *)qbasename(a2);
  if ( strcmp("script32.so", v3) && !(unsigned int)qstat(a2) )
  {
    v5 = *(_QWORD *)(v2 + 16);
    v6 = *(_QWORD *)(v2 + 8);
    v7 = v6;
    if ( 88 * v5 )
    {
      v8 = 0;
      do
      {
        v9 = haystack;
        if ( *(_QWORD *)(v7 + 8) )
          v9 = *(const char **)v7;
        if ( !strcmp(v9, a2) )
        {
          if ( *(_QWORD *)(v7 + 24) >= (__int64)v30 )
          {
            *(_BYTE *)(v7 + 81) = 1;
            return 0;
          }
          v10 = *(void **)(v7 + 32);
          if ( v10 )
          {
            *(_QWORD *)(v7 + 40) = 0;
            qfree(v10);
            *(_QWORD *)(v7 + 32) = 0;
            *(_QWORD *)(v7 + 48) = 0;
          }
          v11 = *(char **)(v7 + 56);
          if ( v11 )
          {
            v12 = *(_QWORD *)(v7 + 64);
            if ( v12 )
            {
              v13 = 0;
              for ( i = 0; i != v12; ++i )
              {
                v15 = &v11[v13];
                v16 = *(void **)&v11[v13 + 24];
                if ( v16 )
                {
                  *((_QWORD *)v15 + 4) = 0;
                  qfree(v16);
                }
                v17 = *(void **)v15;
                if ( *(_QWORD *)v15 )
                {
                  *((_QWORD *)v15 + 1) = 0;
                  qfree(v17);
                }
                v11 = *(char **)(v7 + 56);
                v13 += 56;
              }
            }
            *(_QWORD *)(v7 + 64) = 0;
            qfree(v11);
            *(_QWORD *)(v7 + 56) = 0;
            *(_QWORD *)(v7 + 72) = 0;
          }
          v8 = v7;
          v6 = *(_QWORD *)(v28 + 8);
          v5 = *(_QWORD *)(v28 + 16);
        }
        v7 += 88;
      }
      while ( v7 != v6 + 88 * v5 );
      if ( !v8 )
        goto LABEL_39;
    }
    else
    {
LABEL_39:
      if ( *(_QWORD *)(v28 + 24) < (unsigned __int64)(v5 + 1) )
      {
        v24 = qvector_reserve(v28 + 8, v6, v5 + 1, 88);
        v5 = *(_QWORD *)(v28 + 16);
        *(_QWORD *)(v28 + 8) = v24;
        v6 = v24;
      }
      v8 = v6 + 88 * v5;
      *(_WORD *)(v8 + 80) = 0;
      *(_QWORD *)v8 = 0;
      *(_QWORD *)(v8 + 24) = -1;
      *(_QWORD *)(v8 + 32) = 0;
      *(_QWORD *)(v8 + 56) = 0;
      *(_OWORD *)(v8 + 8) = 0;
      *(_OWORD *)(v8 + 40) = 0;
      *(_OWORD *)(v8 + 64) = 0;
      ++*(_QWORD *)(v28 + 16);
      if ( a2 && (v22 = strlen(a2), (v23 = v22) != 0) )
      {
        v25 = *(void **)v8;
        v26 = v22 + 1;
        if ( *(_QWORD *)(v8 + 16) < v22 + 1 )
        {
          v27 = qvector_reserve(v8, *(_QWORD *)v8, v22 + 1, 1);
          *(_QWORD *)v8 = v27;
          v25 = (void *)v27;
        }
        *(_QWORD *)(v8 + 8) = v26;
        memmove(v25, a2, v23);
        *(_BYTE *)(*(_QWORD *)v8 + v23) = 0;
      }
      else
      {
        *(_QWORD *)(v8 + 8) = 0;
      }
    }
    *(_QWORD *)(v8 + 24) = v30;
    if ( (debug & 8) != 0 )
      sub_383DA0();
    v18 = *(_QWORD *)(a1 + 16) == 0;
    *(_BYTE *)(v8 + 80) = *(_QWORD *)(a1 + 16) != 0;
    if ( v18 )
    {
      v31[0] = 0;
      v32 = 0;
      if ( (unsigned int)sub_622890(v31, a2, "LPH") )
        return 0;
      v19 = *(const char ***)(v32 + 24);
      if ( !v19 )
      {
        free_dll(v31);
        return 0;
      }
      if ( *(_DWORD *)v32 != 900 )
        sub_398250(0, (__int64)"IDA kernel and IDP module '%s' are not compatible", a2);
      v20 = *v19;
      v21 = *(const char ***)(v32 + 32);
      if ( *v19 )
      {
        if ( v21 )
        {
          do
          {
            while ( 1 )
            {
              sub_3963A0((_QWORD *)v8, *v21, v20);
              if ( !*v21 )
                break;
              v20 = v19[1];
              ++v19;
              ++v21;
              if ( !v20 )
                goto LABEL_37;
            }
            v20 = v19[1];
            ++v19;
          }
          while ( v20 );
        }
        else
        {
          do
          {
            ++v19;
            sub_3963A0((_QWORD *)v8, nullptr, v20);
            v20 = *v19;
          }
          while ( *v19 );
        }
      }
LABEL_37:
      free_dll(v31);
    }
    else if ( !(unsigned __int8)sub_396860((_QWORD *)v8, a2, *(_QWORD *)(a1 + 16)) )
    {
      return 0;
    }
    if ( (debug & 8) != 0 )
      sub_383DA0();
    sub_394D60((_QWORD *)v8);
    *(_BYTE *)(v8 + 81) = 1;
    *(_BYTE *)(v28 + 68) = 1;
  }
  return 0;
}

