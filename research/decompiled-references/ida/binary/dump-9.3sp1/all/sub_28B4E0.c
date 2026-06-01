__int64 __fastcall sub_28B4E0(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v4; // rbp
  int v5; // edx
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // [rsp+0h] [rbp-38h] BYREF
  __int64 *v9; // [rsp+8h] [rbp-30h]
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  v2 = a1[3];
  if ( v2 <= 1 )
    return 0;
  if ( *(_DWORD *)(*(_QWORD *)(a1[2] + 8 * v2 - 8) + 8LL) != 71 )
    return 0;
  sub_283C00(&v8, a1, a2);
  v4 = v8;
  if ( *(_QWORD *)(v8 + 16) <= 1u )
    return 0;
  v5 = *(_DWORD *)(a2 + 12);
  v6 = (__int64)v9;
  v7 = *v9;
  if ( v5 != -1 )
  {
    if ( v7 != v8 && *(_DWORD *)(v7 + 28) == -1 )
    {
      *(_DWORD *)(v7 + 28) = v5;
      v7 = *(_QWORD *)v6;
      goto LABEL_9;
    }
    return 0;
  }
LABEL_9:
  **(_QWORD **)(v6 + 8) = v7;
  *(_QWORD *)(v7 + 8) = *(_QWORD *)(v6 + 8);
  sub_255050(v6 + 16);
  qfree(v6);
  --*(_QWORD *)(v4 + 16);
  return 1;
}
