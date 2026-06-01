__int64 __fastcall sub_6009C0(__int64 a1, _QWORD *a2, const void *a3, __int64 a4)
{
  __int64 result; // rax
  char *v8; // rdi
  char *v9; // rdx

  result = (unsigned int)a4;
  *(_DWORD *)(a1 + 100) = a4;
  v8 = (char *)a2[274];
  a2[284] += (unsigned int)a4;
  v9 = &v8[(unsigned int)a4];
  if ( a2[275] >= (unsigned __int64)v9 && v8 )
  {
    a2[274] = v9;
  }
  else
  {
    result = sub_5F8390((__int64)(a2 + 274), (unsigned int)a4, 0);
    v8 = (char *)result;
  }
  *(_QWORD *)(a1 + 104) = v8;
  if ( a4 )
    return (__int64)memcpy(v8, a3, *(unsigned int *)(a1 + 100));
  return result;
}

