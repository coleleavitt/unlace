__int64 __fastcall sub_523BD0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 (__fastcall *v5)(__int64); // rax
  unsigned __int64 *v6; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  bool v10; // zf
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // rbp
  const void *v14; // r12
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v16; // [rsp+8h] [rbp-40h]
  unsigned __int64 v17; // [rsp+18h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v5 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL);
  if ( v5 == sub_3DB7B0 )
    v6 = (unsigned __int64 *)(a2 + 16);
  else
    v6 = (unsigned __int64 *)v5(a2);
  if ( a3 >= *v6
    && a3 < v6[1]
    && a3 == (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, a3, 0) )
  {
    if ( a3 )
    {
      if ( a3 != 1 )
      {
        if ( !under_debugger )
          interr(1957);
        BUG();
      }
      sub_35A790((char **)a1);
    }
    else
    {
      v8 = *(int *)(a2 + 8);
      if ( (_DWORD)v8 == -1 )
        v9 = 0;
      else
        v9 = *(_QWORD *)(switch_dbctx(v8) + 1784);
      v10 = *(_DWORD *)(v9 + 64) == 3;
      ptr = nullptr;
      v16 = 0;
      if ( !v10 )
      {
        v11 = *(_QWORD *)(a2 + 40);
        if ( v11 < *(_QWORD *)(v9 + 24) )
        {
          v12 = *(_QWORD *)(v9 + 16) + 72 * v11;
          if ( (void **)v12 != &ptr )
          {
            v13 = *(_QWORD *)(v12 + 8);
            if ( v13 >= 2 )
            {
              v14 = *(const void **)v12;
              ptr = (void *)qvector_reserve(&ptr, 0, *(_QWORD *)(v12 + 8), 1);
              *(_QWORD *)&v16 = v13;
              memmove(ptr, v14, v13 - 1);
              *((char *)ptr + v13 - 1) = 0;
            }
          }
        }
      }
      sub_35A790((char **)a1);
      if ( ptr )
      {
        *(_QWORD *)&v16 = 0;
        qfree(ptr);
      }
    }
  }
  return a1;
}
