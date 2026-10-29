__int64 __fastcall sub_5A1E30(__int64 a1, _QWORD **a2)
{
  unsigned int v2; // ebx
  __int64 v4; // [rsp+8h] [rbp-30h] BYREF
  __int64 v5; // [rsp+10h] [rbp-28h] BYREF
  int v6; // [rsp+18h] [rbp-20h]

  v5 = 0;
  v6 = 0;
  v4 = 0;
  sub_5A1C30(a1, a2, &v5, &v4);
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 40) + 24LL))(*(_QWORD *)(a1 + 40), &v4);
  if ( (_BYTE)v2 )
    LOBYTE(v2) = sub_4C3CD0(*(_QWORD *)(a1 + 24), (__int64)&v5) != 0;
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  return v2;
}

