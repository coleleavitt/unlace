__int64 __fastcall sub_812AB0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  unsigned int v5; // ebx
  void *v7; // rax
  const void *v8; // rsi
  __int64 (__fastcall **v9)(); // [rsp+0h] [rbp-58h] BYREF
  char v10; // [rsp+8h] [rbp-50h]
  void *v11; // [rsp+10h] [rbp-48h]
  __int128 v12; // [rsp+18h] [rbp-40h]
  unsigned __int64 v13; // [rsp+28h] [rbp-30h]

  v3 = *(_QWORD *)(a2 + 8);
  v13 = __readfsqword(0x28u);
  v10 = 22;
  v12 = 0;
  v9 = &off_2B3C5F0;
  v11 = nullptr;
  if ( v3 )
  {
    v7 = (void *)qalloc_or_throw(6 * v3);
    v8 = *(const void **)a2;
    *((_QWORD *)&v12 + 1) = v3;
    v11 = v7;
    memcpy(v7, v8, 6 * v3);
    *(_QWORD *)&v12 = v3;
  }
  v5 = ((__int64 (__fastcall *)(__int64, __int64 (__fastcall ***)(), __int64))sub_812E50)(a1, &v9, a3);
  sub_80A6E0(&v9);
  return v5;
}
