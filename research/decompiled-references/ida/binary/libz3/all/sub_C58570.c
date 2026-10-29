__int64 __fastcall sub_C58570(__int64 *a1, __int64 a2, unsigned int a3, __int64 *a4, struct _Unwind_Exception *a5)
{
  char **exception; // rbx
  unsigned __int64 v10; // r15
  _DWORD *v11; // rax
  int v12; // eax
  unsigned int v13; // r15d
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // r15
  _Unwind_Exception_Class exception_class; // rsi
  _Unwind_Exception_Cleanup_Fn exception_cleanup; // rdi
  __int64 *v22; // r12
  unsigned int v23; // ebp
  __int64 v24; // rdx
  __int64 v25[11]; // [rsp+10h] [rbp-58h] BYREF

  v10 = *(_QWORD *)(a1[1] + 264);
  if ( Z3_get_estimated_alloc_size_0(a1, a2) >= v10 )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v25, "bv2real-memory exceeded");
    *exception = (char *)off_1C63670;
    sub_2333C0(exception + 1, v25);
    sub_233E40((__int64)v25);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
  }
  v11 = *(_DWORD **)(a2 + 24);
  if ( !v11 )
    goto LABEL_9;
  if ( *v11 == 5 )
  {
    switch ( v11[1] )
    {
      case 2:
        v16 = a4[1];
        v17 = *a4;
        return sub_C54860(a1, v17, v16, a5);
      case 3:
        v16 = *a4;
        v17 = a4[1];
        return sub_C54860(a1, v17, v16, a5);
      case 4:
        sub_C4FB30(a1, *a4, a4[1], (__int64 *)a5);
        return 1;
      case 5:
        sub_C4FBC0(a1, *a4, a4[1], (__int64 *)a5);
        return 1;
      case 6:
        v18 = *a4;
        if ( *a4 )
          ++*(_DWORD *)(v18 + 8);
        exception_class = a5->exception_class;
        if ( a5->exception_class )
        {
          exception_cleanup = a5->exception_cleanup;
          if ( (*(_DWORD *)(exception_class + 8))-- == 1 )
            sub_15D7BC0(exception_cleanup, exception_class);
        }
        a5->exception_class = v18;
        if ( a3 <= 1 )
        {
          return 4;
        }
        else
        {
          v22 = a4 + 1;
          v23 = 1;
          while ( 1 )
          {
            v24 = *v22;
            ++v23;
            ++v22;
            v13 = sub_C57020(a1, v18, v24, (__int64 *)a5);
            if ( v13 != 4 || v23 >= a3 )
              break;
            v18 = a5->exception_class;
          }
        }
        return v13;
      case 7:
        return sub_C584B0(a1, a3, a4, (__int64 *)a5);
      case 8:
        return sub_C56DB0((__int64)a1, *a4, (__int64 *)a5);
      case 9:
        return sub_C57E60(a1, a3, a4, (__int64 *)a5);
      default:
        return 5;
    }
  }
  if ( *v11 )
  {
LABEL_9:
    v15 = a1[1];
    if ( a2 == *(_QWORD *)(v15 + 80) )
    {
      return 5 - (unsigned int)(unsigned __int8)sub_C53830(a1, a4[1], *a4, 0, 1, (int)a5);
    }
    else
    {
      v13 = 5;
      if ( a2 == *(_QWORD *)(v15 + 64) )
        return 5 - (unsigned int)(unsigned __int8)sub_C53830(a1, *a4, a4[1], 1, 0, (int)a5);
    }
    return v13;
  }
  v12 = v11[1];
  if ( v12 == 2 )
    return sub_C531F0(a1, *a4, a4[1], (__int64 *)a5);
  if ( v12 != 4 )
    return 5;
  return sub_C56770(a1, *a4, a4[1], a4[2], (__int64 *)a5);
}

