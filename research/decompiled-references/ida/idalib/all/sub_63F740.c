__int64 __fastcall sub_63F740(_QWORD *a1, __int64 a2, unsigned __int64 a3, const char *a4)
{
  __int64 v4; // rbx
  const char *v5; // r12
  int v8; // edx
  __int64 v9; // r15
  void **v10; // rbp
  int v12; // r12d
  __int64 v13; // rax
  void **v14; // rdi
  int v15; // esi
  int v16; // ecx
  int v17; // eax
  unsigned __int64 v18; // rdx
  void **v19; // r15
  int v20; // [rsp+0h] [rbp-3Ch]

  if ( !a2 )
    return 0;
  v4 = a2;
  if ( *(char *)(a2 + 17) < 0 )
    return 0;
  v5 = a4;
  if ( !a4 )
    v5 = &byte_22F0C30;
  sub_63F420(a1, a2);
  v8 = *(_DWORD *)(a2 + 96);
  v9 = *(_QWORD *)(a2 + 104);
  if ( v8 > 0 )
  {
    v10 = *(void ***)(a2 + 104);
    while ( a3 >= (unsigned __int64)*v10 )
    {
      if ( (void *)a3 == *v10 )
      {
        if ( !v10 )
          goto LABEL_14;
        if ( !*v5 )
        {
          v12 = v8 - 1;
          *(_DWORD *)(a2 + 96) = v8 - 1;
          qfree(v10[1]);
          v10[1] = nullptr;
          if ( *(_DWORD *)(a2 + 96) )
          {
            memmove(v10, v10 + 2, 16 * (v12 - (((__int64)v10 - v9) >> 4)));
          }
          else
          {
            qfree(*(void **)(a2 + 104));
            *(_QWORD *)(a2 + 104) = 0;
          }
          return sub_63F270(a1, a2, 1);
        }
        a2 = (__int64)v5;
        if ( !strcmp((const char *)v10[1], v5) )
          return 1;
        goto LABEL_14;
      }
      v10 += 2;
      if ( v10 == (void **)(v9 + 16LL * v8) )
        break;
    }
  }
  v10 = nullptr;
LABEL_14:
  if ( !(unsigned __int8)is_uname(v5)
    || (get_merge_state(v5, a2) & 2) == 0 && sub_4D42D0((__int64)a1, v4, (__int64)v5, 0, -1, -1)
    || (int)sub_5C9B30(a1, (unsigned __int64 *)v4, a3) < 0 )
  {
    return 0;
  }
  if ( v10 )
  {
    qfree(v10[1]);
    v10[1] = nullptr;
  }
  else
  {
    if ( 16LL * (*(_DWORD *)(v4 + 96) + 1) < (unsigned __int64)(*(_DWORD *)(v4 + 96) + 1)
      || (v20 = *(_DWORD *)(v4 + 96) + 1, v13 = qrealloc(*(_QWORD *)(v4 + 104)), (v14 = (void **)v13) == nullptr) )
    {
      sub_3BC000((int)"add_llabel");
    }
    v15 = *(_DWORD *)(v4 + 96);
    v16 = v20;
    *(_QWORD *)(v4 + 104) = v13;
    if ( v15 <= 0 )
    {
      v10 = (void **)v13;
    }
    else
    {
      v10 = (void **)(v13 + 16LL * v15);
      v17 = 0;
      while ( 1 )
      {
        v18 = (unsigned __int64)*v14;
        v19 = v14;
        v14 += 2;
        if ( a3 < v18 )
          break;
        ++v17;
        if ( v14 == v10 )
          goto LABEL_36;
      }
      v10 = v19;
      memmove(v14, v19, 16LL * (v15 - v17));
      v16 = v20;
    }
LABEL_36:
    *(_DWORD *)(v4 + 96) = v16;
  }
  *v10 = (void *)a3;
  v10[1] = (void *)qstrdup(v5);
  sub_63F270(a1, v4, 1);
  return 1;
}
