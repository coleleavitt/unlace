__int64 __fastcall sub_15BAF40(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbp
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v10; // [rsp+8h] [rbp-20h]

  v2 = sub_15BAE70(a1, a2);
  v6 = sub_F68450(*(_QWORD *)(v2[1] & 0xFFFFFFFFFFFFFFF0LL), a2, v3, v4, v5);
  v7 = sub_C09D40(*(_QWORD **)(**(_QWORD **)a1 + 248LL), (__int64)v2, 5, v6, 0, 0, 0, 0, 0);
  v8 = *(unsigned int *)(a1 + 112);
  if ( v8 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 116) )
  {
    v10 = v7;
    sub_2237220(a1 + 104, a1 + 120, v8 + 1, 8);
    v8 = *(unsigned int *)(a1 + 112);
    v7 = v10;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 104) + 8 * v8) = v7;
  ++*(_DWORD *)(a1 + 112);
  return a1;
}
