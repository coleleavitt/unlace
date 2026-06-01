unsigned __int64 __fastcall sub_BA6160(__int64 a1)
{
  unsigned int v1; // ebx
  _QWORD *v2; // rax
  _QWORD *v3; // rdx
  _QWORD v5[3]; // [rsp+0h] [rbp-18h] BYREF

  v1 = *(_DWORD *)(a1 + 92);
  if ( !v1 )
    v1 = *(_DWORD *)(a1 + 24);
  if ( !*(_DWORD *)(a1 + 96) )
    return ((unsigned __int64)v1 << 32) | v1;
  v2 = (_QWORD *)(*(_QWORD *)(a1 + 80) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a1 + 80) & 4) != 0 )
    v2 = (_QWORD *)*v2;
  v3 = (_QWORD *)*v2;
  v5[1] = v2 + 1;
  v5[0] = v3;
  return (sub_F6CE20(v5) << 32) | v1;
}
