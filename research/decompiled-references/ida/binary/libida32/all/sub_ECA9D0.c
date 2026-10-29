__int64 __fastcall sub_ECA9D0(__int64 a1, __int64 a2, size_t a3, __int64 a4, int a5, int a6)
{
  size_t v7; // r13
  unsigned int v8; // r15d
  __int64 *v9; // r12
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // rax
  unsigned int i; // ebp
  _DWORD *v14; // rdi
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rax
  size_t v18; // rax
  __int64 result; // rax
  int v20; // ebx
  unsigned int v21; // ebx
  __int64 v22; // rax
  _DWORD *v23; // rdi
  int v24; // edx
  __int64 v25; // rbp
  int v26; // ebx
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  _DWORD *v29; // rax
  __int64 v30; // rdx
  unsigned int v31; // ebx
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  void *s2; // [rsp+0h] [rbp-48h]
  __int64 v36; // [rsp+8h] [rbp-40h]

  v7 = a3;
  v8 = *(_DWORD *)(a1 + 16);
  s2 = (void *)a2;
  if ( !v8 )
  {
    v20 = *(_DWORD *)(a1 + 20);
    if ( v20 )
    {
      v9 = *(__int64 **)(a1 + 72);
      if ( !a3 )
      {
LABEL_32:
        v31 = v8 + v20;
        while ( 1 )
        {
          v32 = v9[v8];
          if ( !v32 || !**(_DWORD **)(v32 + 16) )
            return v8;
          if ( v31 == ++v8 )
          {
            v24 = *(_DWORD *)(a1 + 80);
            result = 0xFFFFFFFFLL;
            if ( !v24 )
              return result;
            v25 = *(_QWORD *)(a1 + 32);
            v8 = v31;
            goto LABEL_38;
          }
        }
      }
LABEL_16:
      v21 = v8 + v20;
      while ( 1 )
      {
        v22 = v9[v8];
        if ( v22 )
        {
          v23 = *(_DWORD **)(v22 + 16);
          if ( *v23 == v7 && !memcmp(v23 + 4, (const void *)a2, v7) )
            return v8;
        }
        if ( v21 == ++v8 )
        {
          v24 = *(_DWORD *)(a1 + 80);
          if ( !v24 )
            return 0xFFFFFFFFLL;
          v25 = *(_QWORD *)(a1 + 32);
          v8 = v21;
          goto LABEL_23;
        }
      }
    }
    v24 = *(_DWORD *)(a1 + 80);
    if ( v24 )
    {
      v25 = *(_QWORD *)(a1 + 32);
      if ( !v7 )
      {
LABEL_38:
        v30 = v8 + v24;
        while ( 1 )
        {
          v33 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v25 + 8LL * v8) + 24LL) + 40LL);
          if ( (v33 & 7) != 0 )
            break;
          v34 = v33 & 0xFFFFFFFFFFFFFFF8LL;
          if ( !v34 || !**(_DWORD **)(v34 + 16) )
            break;
          if ( (_DWORD)v30 == ++v8 )
            return 0xFFFFFFFFLL;
        }
        return v8 + (unsigned int)sub_ECA910((unsigned __int16 *)a1, a2, v30, a4, a5, a6);
      }
LABEL_23:
      v26 = v24 + v8;
      while ( 1 )
      {
        v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v25 + 8LL * v8) + 24LL) + 40LL);
        if ( (v27 & 7) == 0 )
        {
          v28 = v27 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v28 )
          {
            v29 = *(_DWORD **)(v28 + 16);
            if ( v7 == *v29 )
            {
              a2 = (__int64)s2;
              if ( !memcmp(v29 + 4, s2, v7) )
                break;
            }
          }
        }
        if ( v26 == ++v8 )
          return 0xFFFFFFFFLL;
      }
      return v8 + (unsigned int)sub_ECA910((unsigned __int16 *)a1, a2, v30, a4, a5, a6);
    }
    return 0xFFFFFFFFLL;
  }
  v9 = *(__int64 **)(a1 + 72);
  if ( a3 )
  {
    v10 = 0;
    v11 = v8 - 1;
    v12 = *v9;
    i = 0;
    if ( !*v9 )
      goto LABEL_6;
LABEL_4:
    v14 = *(_DWORD **)(v12 + 16);
    if ( *v14 != v7 || (v36 = v11, v15 = memcmp(v14 + 4, (const void *)a2, v7), v11 = v36, v15) )
    {
LABEL_6:
      while ( 1 )
      {
        v16 = v10 + 1;
        if ( v11 == v10 )
          break;
        ++v10;
        v12 = v9[v16];
        i = v10;
        if ( v12 )
          goto LABEL_4;
      }
      v20 = *(_DWORD *)(a1 + 20);
      if ( v20 )
        goto LABEL_16;
      v24 = *(_DWORD *)(a1 + 80);
      if ( v24 )
      {
        v25 = *(_QWORD *)(a1 + 32);
        goto LABEL_23;
      }
      return 0xFFFFFFFFLL;
    }
  }
  else
  {
    v17 = *v9;
    a4 = v8 - 1;
    for ( i = 0; v17; i = a3 )
    {
      a2 = **(unsigned int **)(v17 + 16);
      if ( !(_DWORD)a2 )
        break;
      v18 = a3 + 1;
      if ( a4 == a3 )
      {
        v20 = *(_DWORD *)(a1 + 20);
        if ( v20 )
          goto LABEL_32;
        v24 = *(_DWORD *)(a1 + 80);
        if ( v24 )
        {
          v25 = *(_QWORD *)(a1 + 32);
          goto LABEL_38;
        }
        return 0xFFFFFFFFLL;
      }
      ++a3;
      v17 = v9[v18];
    }
  }
  return i;
}

