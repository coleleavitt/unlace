void __fastcall sub_1F92B40(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 *v3; // rbx
  __int64 *v4; // r12
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  _QWORD *v8; // rdx
  __int64 v9; // [rsp+0h] [rbp-240h]
  void *ptr; // [rsp+8h] [rbp-238h] BYREF
  __int64 v11; // [rsp+10h] [rbp-230h]
  _BYTE v12[552]; // [rsp+18h] [rbp-228h] BYREF

  v2 = *(unsigned int *)(a2 + 17376);
  if ( (_DWORD)v2 )
  {
    v3 = *(__int64 **)(a2 + 17368);
    v11 = 0x4000000000LL;
    v4 = &v3[v2];
    ptr = v12;
    do
    {
      v5 = sub_1F92240(a1, *v3);
      v6 = (unsigned int)v11;
      v7 = (unsigned int)v11 + 1LL;
      if ( v7 > HIDWORD(v11) )
      {
        v9 = v5;
        sub_2237220(&ptr, v12, v7, 8);
        v6 = (unsigned int)v11;
        v8 = ptr;
        v5 = v9;
      }
      else
      {
        v8 = ptr;
      }
      ++v3;
      v8[v6] = v5;
      LODWORD(v11) = v11 + 1;
    }
    while ( v4 != v3 );
    sub_1F6EB90(*(_QWORD *)(a1 + 16), 0x48u, (__int64)&ptr);
    if ( ptr != v12 )
      free(ptr);
  }
}
