__int64 __fastcall sub_B71D70(__int64 a1)
{
  unsigned int v1; // ebx
  _QWORD *v2; // rdx
  __int64 v3; // rax
  _QWORD *v4; // rax
  unsigned int v5; // ebp
  _QWORD v7[5]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *(_DWORD *)(a1 + 56);
  v2 = (_QWORD *)(*(_QWORD *)(a1 + 80) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a1 + 80) & 4) != 0 )
    v2 = (_QWORD *)*v2;
  v3 = v1;
  if ( v2 )
  {
    v4 = (_QWORD *)*v2;
    v7[1] = v2 + 1;
    v7[0] = v4;
    v5 = sub_F6CE20(v7);
    sub_F6CCB0(v7);
    v3 = v5;
  }
  return (v3 << 32) | v1;
}
