int __fastcall sub_B68180(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  char **exception; // rbx
  __int64 v14; // rdx
  unsigned int v17; // eax
  char *v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // r10d
  unsigned int v22; // edi
  __int64 v23; // rax
  int v24; // edx
  char *v25; // rsi
  __int64 v26; // rdx
  char *i; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 *v30; // rdi
  __int64 v32; // rax
  __int64 v33[7]; // [rsp+0h] [rbp-38h] BYREF

  if ( *(_WORD *)(a2 + 4) != 2 || *(_DWORD *)(a2 + 16) )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_14E142(v33, "internalization of exists is not supported", v14);
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v33);
    sub_233E40((__int64)v33);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v17 = sub_B67520(a1, (_DWORD *)a2);
  v21 = *(_DWORD *)(a1 + 9496);
  v22 = v17;
  if ( *(_DWORD *)(a1 + 9044) )
  {
    v23 = *(unsigned int *)(a1 + 9040);
    v19 = *(unsigned int *)(a2 + 12);
    v18 = *(char **)(a1 + 9032);
    v24 = v23 - 1;
    v23 *= 16;
    v25 = &v18[v23];
    v26 = 16LL * ((unsigned int)v19 & v24);
    v20 = (__int64)&v18[v26];
    if ( v26 != v23 )
    {
      for ( i = &v18[v26]; v25 != i; i += 16 )
      {
        v28 = *(_QWORD *)i;
        if ( *(_QWORD *)i > 1u )
        {
          if ( *(_DWORD *)(v28 + 12) == (_DWORD)v19 && a2 == v28 )
          {
LABEL_21:
            v21 = *((_DWORD *)i + 2);
            goto LABEL_11;
          }
        }
        else if ( !v28 )
        {
          goto LABEL_11;
        }
      }
    }
    for ( ; (char *)v20 != v18; v18 += 16 )
    {
      v32 = *(_QWORD *)v18;
      if ( *(_QWORD *)v18 > 1u )
      {
        if ( *(_DWORD *)(v32 + 12) == (_DWORD)v19 && a2 == v32 )
        {
          i = v18;
          goto LABEL_21;
        }
      }
      else if ( !v32 )
      {
        break;
      }
    }
  }
LABEL_11:
  v29 = v22;
  v30 = *(__int64 **)(a1 + 7472);
  *(_QWORD *)(*(_QWORD *)(a1 + 8872) + 16 * v29 + 8) |= 0x80000080000000uLL;
  return sub_953D90(v30, a2, v21, (__int64)v18, v19, v20, a7, a8, a9, a10, a11, a12, a13);
}

