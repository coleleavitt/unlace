__int64 __fastcall sniplist_chooser_t__::vfunc_6(__int64 a1, __int64 **a2, _DWORD *a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rax
  __int64 *v7; // r12
  __int64 v8; // rbx
  unsigned __int64 v9; // r13
  const char *v10; // rdx
  __int64 result; // rax
  const char *v12; // r15
  void *v13; // rdi
  __int64 v14; // rax

  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(***(_QWORD ***)(a1 + 184) + 24LL))(**(_QWORD **)(a1 + 184), a5);
  v7 = *a2;
  v8 = v6;
  if ( *(_BYTE *)(v6 + 64) || *(_QWORD *)(v6 + 56) == -1 )
  {
    v10 = &s1;
    if ( *(_QWORD *)(v6 + 8) )
      v10 = *(const char **)v6;
    sub_169A50(v7, (__int64)"%s *", v10);
  }
  else if ( (__int64 *)v6 != v7 )
  {
    v9 = *(_QWORD *)(v6 + 8);
    if ( v9 > 1 )
    {
      v12 = *(const char **)v6;
      v13 = (void *)*v7;
      if ( v7[2] < v9 )
      {
        v14 = qvector_reserve(v7, *v7, *(_QWORD *)(v6 + 8), 1);
        *v7 = v14;
        v13 = (void *)v14;
      }
      v7[1] = v9;
      memmove(v13, v12, v9 - 1);
      *(_BYTE *)(*v7 + v9 - 1) = 0;
    }
    else
    {
      v7[1] = 0;
    }
  }
  result = (unsigned int)(strncasecmp(*(const char **)(*(_QWORD *)(v8 + 24) + 16LL), "idc", 4u) == 0) + 201;
  *a3 = result;
  return result;
}
