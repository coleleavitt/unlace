void __fastcall sub_4D50B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  const void *v3; // r12
  size_t v4; // rbx
  unsigned __int64 v5; // rax
  __int64 v6; // r9
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v8; // [rsp+8h] [rbp-40h]
  unsigned __int64 v9; // [rsp+18h] [rbp-30h]

  v2 = *(_QWORD *)(a2 + 8);
  v3 = *(const void **)a2;
  v9 = __readfsqword(0x28u);
  if ( v2 )
  {
    v4 = v2 - 1;
    v5 = sub_4C7500((unsigned __int64)v3, (unsigned __int64)v3 + v2 - 1, 0);
    if ( v4 != v5 )
    {
      if ( v4 > v5 )
        v4 = v5;
      ptr = nullptr;
      v8 = 0;
      if ( v4 )
      {
        ptr = (void *)qvector_reserve(&ptr, 0, v4 + 1, 1);
        *(_QWORD *)&v8 = v4 + 1;
        memmove(ptr, v3, v4);
        *((_BYTE *)ptr + v4) = 0;
      }
      goto LABEL_7;
    }
LABEL_11:
    sub_4D4FF0(a1 + 8, v6);
    return;
  }
  if ( !sub_4C7500((unsigned __int64)v3, (unsigned __int64)v3, 0) )
    goto LABEL_11;
  ptr = nullptr;
  v8 = 0;
LABEL_7:
  sub_4D4FF0(a1 + 8, (__int64)&ptr);
  if ( ptr )
  {
    *(_QWORD *)&v8 = 0;
    qfree(ptr);
  }
}
