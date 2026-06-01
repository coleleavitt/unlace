unsigned __int64 __fastcall sub_11D1B0(_QWORD *a1)
{
  __int64 v2; // rax
  size_t v3; // r12
  __int64 v4; // rbp
  char *v6; // r13
  size_t v7; // rax
  size_t v8; // r12
  void *v9; // rdi
  size_t v10; // r14
  __int64 v11; // rax
  char *s; // [rsp+0h] [rbp-48h] BYREF
  __int128 v13; // [rsp+8h] [rbp-40h]
  unsigned __int64 v14; // [rsp+18h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 24LL))(*a1, **(_QWORD **)(*a1 + 16LL));
  s = nullptr;
  v13 = 0;
  v3 = *(_QWORD *)(v2 + 8);
  v4 = v2;
  if ( v3 )
  {
    *((_QWORD *)&v13 + 1) = *(_QWORD *)(v2 + 8);
    s = (char *)qalloc_or_throw();
    memcpy(s, *(const void **)v4, v3);
    *(_QWORD *)&v13 = v3;
  }
  if ( (unsigned __int8)sub_11D0A0(a1, (__int64)&s, 0) )
  {
    sub_11C830(a1, 1);
    if ( (_QWORD)v13 && (v6 = s) != nullptr && (v7 = strlen(s), (v8 = v7) != 0) )
    {
      v9 = *(void **)v4;
      v10 = v7 + 1;
      if ( *(_QWORD *)(v4 + 16) < v7 + 1 )
      {
        v11 = qvector_reserve();
        *(_QWORD *)v4 = v11;
        v9 = (void *)v11;
      }
      *(_QWORD *)(v4 + 8) = v10;
      memmove(v9, v6, v8);
      *(_BYTE *)(*(_QWORD *)v4 + v8) = 0;
    }
    else
    {
      *(_QWORD *)(v4 + 8) = 0;
    }
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1 + 64LL))(*a1, 1);
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)a1[1] + 56LL))(a1[1], 45);
  }
  if ( s )
  {
    *(_QWORD *)&v13 = 0;
    qfree();
  }
  return v14 - __readfsqword(0x28u);
}

