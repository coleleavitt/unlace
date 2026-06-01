__int64 __fastcall sub_B45000(__int64 *a1)
{
  __int64 v1; // r14
  __int64 v2; // r12
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // r8
  unsigned int v6; // esi
  __int64 result; // rax
  __int64 v9; // [rsp-10h] [rbp-30h]
  int v10; // [rsp-8h] [rbp-28h]
  int v11; // [rsp+0h] [rbp-20h]
  int v12; // [rsp+8h] [rbp-18h]
  int v13; // [rsp+10h] [rbp-10h]
  void *v14; // [rsp+18h] [rbp-8h]

  v1 = *a1;
  v2 = *(_QWORD *)(*(_QWORD *)*a1 + 24LL);
  v3 = sub_15E1B70(v2);
  v4 = v3;
  if ( v3 )
    ++*(_DWORD *)(v3 + 8);
  v5 = *(_QWORD *)(*(_QWORD *)(v1 + 40) + 8LL);
  if ( v5 )
    v6 = *(_DWORD *)(v5 - 4);
  else
    v6 = 0;
  sub_966750(
    *(_QWORD *)v1,
    v3,
    **(_DWORD **)(v1 + 24) + 3 * **(_DWORD **)(v1 + 32),
    v6,
    v5,
    **(_DWORD **)(v1 + 24) - 3,
    *(__int64 ****)(v1 + 48),
    v10,
    v11,
    v12,
    v13,
    v14);
  result = v9;
  if ( v4 )
  {
    if ( (*(_DWORD *)(v4 + 8))-- == 1 )
      return sub_15D7BC0(v2, v4);
  }
  return result;
}

