unsigned __int64 __fastcall sub_2B2830(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  const void *v4; // rdi
  size_t v5; // rdx
  const void *v7; // [rsp+0h] [rbp-28h] BYREF
  __int128 v8; // [rsp+8h] [rbp-20h]
  unsigned __int64 v9; // [rsp+18h] [rbp-10h]

  v2 = *a1;
  v9 = __readfsqword(0x28u);
  v7 = nullptr;
  v8 = 0;
  (*(void (__fastcall **)(__int64 *, const void **))(v2 + 8))(a1, &v7);
  v3 = v8;
  v4 = v7;
  a2[1] = 0;
  if ( v3 )
  {
    v5 = v3 - 1;
    if ( v5 )
    {
      sub_2AEB90(a2, v4, v5);
      v4 = v7;
    }
  }
  if ( v4 )
  {
    *(_QWORD *)&v8 = 0;
    qfree(v4);
  }
  return v9 - __readfsqword(0x28u);
}
