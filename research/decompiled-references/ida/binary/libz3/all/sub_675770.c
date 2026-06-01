_QWORD *__fastcall sub_675770(_QWORD *a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rax
  _QWORD *v5; // rbx
  _QWORD *i; // r13
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rdi
  bool v11; // zf
  _QWORD v13[7]; // [rsp+0h] [rbp-38h] BYREF

  v4 = *a2;
  v5 = (_QWORD *)a2[7];
  *a1 = 0;
  a1[1] = v4;
  if ( v5 )
  {
    for ( i = &v5[*((unsigned int *)v5 - 1)]; i != v5; ++v5 )
    {
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*(_QWORD *)*v5 + 32LL))(v13, *v5, a3);
      v9 = v13[0];
      v13[0] = *a1;
      v8 = v13[0];
      *a1 = v9;
      if ( v8 && (v10 = v13[1], v11 = *(_DWORD *)(v8 + 8) == 1, --*(_DWORD *)(v8 + 8), v11) )
      {
        sub_15D7BC0(v10, v8);
        if ( *a1 )
          return a1;
      }
      else if ( v9 )
      {
        return a1;
      }
    }
  }
  return a1;
}

