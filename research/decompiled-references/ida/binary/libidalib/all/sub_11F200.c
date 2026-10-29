__int64 __fastcall sub_11F200(__int64 a1, __int64 **a2, _DWORD *a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rax
  __int64 *v7; // r12
  __int64 v8; // rbx
  unsigned __int64 v9; // r13
  __int64 result; // rax
  const void *v11; // r15
  void *v12; // rdi
  __int64 v13; // rax

  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(***(_QWORD ***)(a1 + 184) + 24LL))(**(_QWORD **)(a1 + 184), a5);
  v7 = *a2;
  v8 = v6;
  if ( *(_BYTE *)(v6 + 64) || *(_QWORD *)(v6 + 56) == -1 )
  {
    sub_94440(v7);
  }
  else if ( (__int64 *)v6 != v7 )
  {
    v9 = *(_QWORD *)(v6 + 8);
    if ( v9 > 1 )
    {
      v11 = *(const void **)v6;
      v12 = (void *)*v7;
      if ( v7[2] < v9 )
      {
        v13 = qvector_reserve();
        *v7 = v13;
        v12 = (void *)v13;
      }
      v7[1] = v9;
      memmove(v12, v11, v9 - 1);
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

