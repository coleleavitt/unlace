__int64 __fastcall sub_7A8C00(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r12
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  __int64 i; // rax
  __int64 v8; // rdx
  __int64 *v9; // rax
  int v11; // [rsp+0h] [rbp-28h]
  __int64 v12; // [rsp+8h] [rbp-20h]
  __int64 v13; // [rsp+10h] [rbp-18h]
  __int64 v14; // [rsp+18h] [rbp-10h]
  void *v15; // [rsp+20h] [rbp-8h]

  v2 = 0;
  v3 = sub_186B270(0x208u);
  sub_7A80B0(v3, a2);
  for ( i = *(_QWORD *)(a1 + 88); i; i = *(_QWORD *)(a1 + 88) )
  {
    if ( v2 >= *(_DWORD *)(i - 4) )
      break;
    v8 = v2++;
    v9 = (__int64 *)sub_7CC270(
                      *(_QWORD *)(a1 + 80),
                      (int)a2,
                      *(_QWORD *)(i + 8 * v8),
                      v4,
                      v5,
                      v6,
                      v11,
                      v12,
                      v13,
                      v14,
                      v15);
    sub_7A87E0(v3, *v9);
  }
  return v3;
}

