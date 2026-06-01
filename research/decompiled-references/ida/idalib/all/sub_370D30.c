__int64 __fastcall sub_370D30(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 func; // rax
  __int64 v4; // rcx
  __int64 v5; // r8

  v2 = *(unsigned int *)(a1 + 40);
  func = get_func(*(_QWORD *)(a1 + 8));
  if ( func )
    *(_QWORD *)(a2 + 8) = sub_370C40((__int64)&unk_23AC540, func, v2, v4, v5);
  else
    *(_QWORD *)(a2 + 8) = -1;
  return 0;
}
