__int64 __fastcall sub_17408F0(int a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rcx
  unsigned int v4; // ebp
  void *ptr; // [rsp+20h] [rbp-98h] BYREF
  int v7; // [rsp+28h] [rbp-90h]
  _DWORD v8[34]; // [rsp+30h] [rbp-88h] BYREF

  v2 = *(_QWORD *)(a2 + 16);
  v3 = v2 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v2 & 4) != 0 )
    v3 = *(_QWORD *)(v3 + 8);
  sub_1DBA4B0((unsigned int)&ptr, a1, a2, v3, 0, 1);
  v4 = v7 + v8[24];
  if ( ptr != v8 )
    free(ptr);
  return v4;
}
