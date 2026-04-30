__int64 __fastcall strings_chooser_t__::vfunc_13(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 result; // rax

  sub_192AA0(0, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 224) + 16LL) + 16LL * **(_QWORD **)a2), 0, 1u);
  v2 = *(_QWORD *)(a2 + 8);
  result = 0;
  if ( v2 != 1 )
  {
    memmove(*(void **)a2, (const void *)(*(_QWORD *)a2 + 8LL), 8 * v2 - 8);
    --*(_QWORD *)(a2 + 8);
    return 2;
  }
  return result;
}
