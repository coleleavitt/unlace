__int64 __fastcall sub_2EE890(__int64 *a1, _DWORD **a2, unsigned int a3)
{
  char **exception; // rbx
  __int64 v4; // rax
  _DWORD *v5; // rbp
  _DWORD *v6; // r12
  __int64 v8; // rax
  __int64 v10[7]; // [rsp+10h] [rbp-38h] BYREF

  v4 = a1[34];
  if ( !v4 || a3 >= *(_DWORD *)(v4 - 4) )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_2EB560(v10, "index into models is out of bounds");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v10);
    sub_233E40((__int64)v10);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v5 = *(_DWORD **)(v4 + 8LL * a3);
  if ( v5 )
    ++v5[4];
  v6 = *a2;
  if ( *a2 )
  {
    if ( v6[4]-- == 1 )
    {
      (**(void (__fastcall ***)(_DWORD *))v6)(v6);
      sub_186B220(v6);
    }
  }
  v8 = *a1;
  *a2 = v5;
  return (*(__int64 (__fastcall **)(__int64 *))(v8 + 176))(a1);
}

