__int64 __fastcall sub_2090B40(int *a1, __int64 a2, __int64 a3)
{
  int *v4; // rbx
  __int64 v5; // rax
  void *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // r12
  int *v11; // rbp
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 **v18; // rdi
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rsi
  char **v22; // rdi
  __int64 v23; // [rsp+8h] [rbp-D0h]
  __int64 v24; // [rsp+8h] [rbp-D0h]
  void *ptr; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v26; // [rsp+18h] [rbp-C0h]
  _BYTE v27[184]; // [rsp+20h] [rbp-B8h] BYREF

  v4 = a1;
  v5 = sub_20C31F0(*(_QWORD *)a3);
  v10 = (_QWORD *)v5;
  if ( *(_BYTE *)(a3 + 8) == 18 )
  {
    LODWORD(ptr) = a2;
    BYTE4(ptr) = 1;
    v18 = (__int64 **)sub_20C5270(v5, ptr, v6, v7, v8, v9);
    if ( *v4 )
      return sub_2058290(v18, (__int64)ptr, v16, v17, v19, v20);
    else
      return sub_205FC70(v18, (__int64)ptr, v16, v17, v19, v20);
  }
  else
  {
    v11 = &a1[a2];
    v26 = 0x1000000000LL;
    ptr = v27;
    if ( a1 == v11 )
    {
      v21 = 0;
      v22 = (char **)v27;
    }
    else
    {
      do
      {
        v14 = *v4;
        if ( (_DWORD)v14 == -1 )
          v12 = sub_2058290(v10, v14, (__int64)v6, v7, v8, v9);
        else
          v12 = sub_205FB40((__int64)v10, v14, 0);
        v7 = (unsigned int)v26;
        v13 = (unsigned int)v26 + 1LL;
        if ( v13 > HIDWORD(v26) )
        {
          v24 = v12;
          sub_2237220(&ptr, v27, v13, 8);
          v7 = (unsigned int)v26;
          v12 = v24;
        }
        v6 = ptr;
        ++v4;
        *((_QWORD *)ptr + v7) = v12;
        v21 = (unsigned int)(v26 + 1);
        LODWORD(v26) = v26 + 1;
      }
      while ( v11 != v4 );
      v22 = (char **)ptr;
    }
    result = sub_205D2F0(v22, v21);
    if ( ptr != v27 )
    {
      v23 = result;
      free(ptr);
      return v23;
    }
  }
  return result;
}
