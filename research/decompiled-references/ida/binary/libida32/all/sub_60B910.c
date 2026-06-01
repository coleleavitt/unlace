unsigned __int64 __fastcall sub_60B910(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rax
  unsigned int v5; // r15d
  unsigned int v6; // r12d
  char v7; // dl
  int v8; // eax
  const char *v9; // rcx
  char v10; // dl
  int v11; // eax
  int v13; // [rsp+Ch] [rbp-5Ch] BYREF
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v15; // [rsp+18h] [rbp-50h]
  unsigned __int64 v16; // [rsp+28h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  v3 = *(unsigned int *)(a1 + 64);
  if ( a3 >= v3 )
  {
    if ( !under_debugger )
      interr(1901);
    BUG();
  }
  v5 = a3;
  v6 = v3 - 1;
  v7 = sub_79BBD0(a1, a2, &ptr, (unsigned int)a3, 65);
  v8 = -1;
  if ( v7 )
    v8 = (int)ptr;
  LODWORD(ptr) = v8;
  sub_79BCF0((int)&ptr);
  sub_79B4D0(a1, a2, v5, 83);
  sub_79B4D0(a1, a2, v5, 65);
  if ( v6 != a3 )
  {
    v15 = 0;
    ptr = nullptr;
    sub_79B6F0(a1, a2, &ptr, v6, 83);
    v9 = haystack;
    if ( (_QWORD)v15 )
      v9 = (const char *)ptr;
    sub_79B440(a1, a2, v5, v9, 0, 83);
    v10 = sub_79BBD0(a1, a2, &v13, v6, 65);
    v11 = -1;
    if ( v10 )
      v11 = v13;
    v13 = v11;
    sub_79B440(a1, a2, v5, &v13, 4, 65);
    sub_79B4D0(a1, a2, v6, 83);
    sub_79B4D0(a1, a2, v6, 65);
    if ( ptr )
    {
      *(_QWORD *)&v15 = 0;
      qfree(ptr);
    }
  }
  LODWORD(ptr) = *(_DWORD *)(a1 + 64) - 1;
  sub_60A150((_DWORD *)(a1 + 64), &ptr, 165);
  LODWORD(ptr) = *(_DWORD *)(a1 + 64);
  sub_79B440(a1, a2, 0xFFFFFFFFLL, &ptr, 4, 65);
  return v16 - __readfsqword(0x28u);
}

