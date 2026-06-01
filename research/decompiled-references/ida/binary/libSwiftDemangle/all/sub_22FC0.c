const void **__fastcall sub_22FC0(__int64 *a1, _WORD *a2, size_t a3)
{
  __int64 v4; // rdi
  __int64 v5; // r12
  __m128i v7; // [rsp+0h] [rbp-58h] BYREF
  void (__fastcall *v8)(__m128i *, __m128i *, __int64); // [rsp+10h] [rbp-48h]
  __int64 v9; // [rsp+18h] [rbp-40h]
  unsigned __int64 v10; // [rsp+28h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  if ( !(unsigned int)sub_BE90(a2, a3) )
    return sub_21AE0(a2, a3, (_QWORD *)*a1);
  v4 = *a1;
  v7 = 0;
  v8 = nullptr;
  v9 = 0;
  v5 = sub_1A7B0(v4, a2, a3, &v7);
  if ( v8 )
    v8(&v7, &v7, 3);
  return (const void **)v5;
}

