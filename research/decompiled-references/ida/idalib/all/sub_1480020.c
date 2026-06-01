__int64 __fastcall sub_1480020(__int64 a1)
{
  _WORD *v1; // rax
  __int64 v2; // rdx
  __int64 result; // rax
  char v4; // [rsp+Fh] [rbp-39h] BYREF
  _QWORD v5[2]; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int8 v6; // [rsp+20h] [rbp-28h]
  unsigned __int8 v7; // [rsp+21h] [rbp-27h]

  v1 = sub_1479360((_WORD *)(*(_QWORD *)(a1 + 16) + 16LL), **(unsigned int **)(a1 + 16));
  v5[1] = v2;
  v5[0] = v1;
  v7 = 0;
  v4 = 1;
  sub_B7E0A0((__int64)v5, &v4, "acquire_capability", 18);
  v4 = 1;
  sub_B7E0A0((__int64)v5, &v4, "acquire_shared_capability", 25);
  v4 = 1;
  sub_B7E0A0((__int64)v5, &v4, "acquired_after", 14);
  v4 = 1;
  sub_B7E0A0((__int64)v5, &v4, "acquired_before", 15);
  v4 = 1;
  sub_B7E0A0((__int64)v5, &v4, "assert_capability", 17);
  v4 = 1;
  sub_B7E0A0((__int64)v5, &v4, "assert_exclusive_lock", 21);
  v4 = 1;
  sub_B7E0A0((__int64)v5, &v4, "assert_shared_capability", 24);
  v4 = 1;
  sub_B7E0A0((__int64)v5, &v4, "assert_shared_lock", 18);
  v4 = 1;
  sub_B7E0A0((__int64)v5, &v4, "counted_by", 10);
  v4 = 1;
  sub_B7E0A0((__int64)v5, &v4, "counted_by_or_null", 18);
  v4 = 1;
  sub_B7E0A0((__int64)v5, &v4, "exclusive_lock_function", 23);
  v4 = 1;
  sub_B7E0A0((__int64)v5, &v4, "exclusive_locks_required", 24);
  v4 = 1;
  sub_B7E0A0((__int64)v5, &v4, "exclusive_trylock_function", 26);
  v4 = 1;
  sub_B7E0A0((__int64)v5, &v4, "guarded_by", 10);
  v4 = 1;
  sub_B7E0A0((__int64)v5, &v4, "lock_returned", 13);
  v4 = 1;
  sub_B7E0A0((__int64)v5, &v4, "locks_excluded", 14);
  v4 = 1;
  sub_B7E0A0((__int64)v5, &v4, "pt_guarded_by", 13);
  v4 = 1;
  sub_B7E0A0((__int64)v5, &v4, "release_capability", 18);
  v4 = 1;
  sub_B7E0A0((__int64)v5, &v4, "release_generic_capability", 26);
  v4 = 1;
  sub_B7E0A0((__int64)v5, &v4, "release_shared_capability", 25);
  v4 = 1;
  sub_B7E0A0((__int64)v5, &v4, "requires_capability", 19);
  v4 = 1;
  sub_B7E0A0((__int64)v5, &v4, "requires_shared_capability", 26);
  v4 = 1;
  sub_B7E0A0((__int64)v5, &v4, "shared_lock_function", 20);
  v4 = 1;
  sub_B7E0A0((__int64)v5, &v4, "shared_locks_required", 21);
  v4 = 1;
  sub_B7E0A0((__int64)v5, &v4, "shared_trylock_function", 23);
  v4 = 1;
  sub_B7E0A0((__int64)v5, &v4, "sized_by", 8);
  v4 = 1;
  sub_B7E0A0((__int64)v5, &v4, "sized_by_or_null", 16);
  v4 = 1;
  sub_B7E0A0((__int64)v5, &v4, "try_acquire_capability", 22);
  v4 = 1;
  sub_B7E0A0((__int64)v5, &v4, "try_acquire_shared_capability", 29);
  v4 = 1;
  sub_B7E0A0((__int64)v5, &v4, "unlock_function", 15);
  result = v7;
  if ( v7 )
    return v6;
  return result;
}
