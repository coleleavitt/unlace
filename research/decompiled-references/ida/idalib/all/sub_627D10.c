unsigned __int64 __fastcall sub_627D10(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // r15
  int v6; // r12d
  char v7; // dl
  __int64 v8; // rax
  const char *v9; // rcx
  char v10; // dl
  __int64 v11; // rax
  __int64 v13; // [rsp+8h] [rbp-60h] BYREF
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
  v4 = (int)a3;
  v6 = v3 - 1;
  v7 = sub_7BEFD0(a1, a2, &ptr, (int)a3, 65);
  v8 = -1;
  if ( v7 )
    v8 = (__int64)ptr;
  ptr = (void *)v8;
  sub_7BF0F0((int)&ptr);
  sub_7BE850(a1, a2, v4, 83);
  sub_7BE850(a1, a2, v4, 65);
  if ( v6 != a3 )
  {
    v15 = 0;
    ptr = nullptr;
    sub_7BEA80(a1, a2, &ptr, v6, 83);
    v9 = haystack;
    if ( (_QWORD)v15 )
      v9 = (const char *)ptr;
    sub_7BE7C0(a1, a2, v4, v9, 0, 83);
    v10 = sub_7BEFD0(a1, a2, &v13, v6, 65);
    v11 = -1;
    if ( v10 )
      v11 = v13;
    v13 = v11;
    sub_7BE7C0(a1, a2, v4, &v13, 8, 65);
    sub_7BE850(a1, a2, v6, 83);
    sub_7BE850(a1, a2, v6, 65);
    if ( ptr )
    {
      *(_QWORD *)&v15 = 0;
      qfree(ptr);
    }
  }
  LODWORD(ptr) = *(_DWORD *)(a1 + 64) - 1;
  sub_626510((_DWORD *)(a1 + 64), &ptr, 165);
  ptr = (void *)*(unsigned int *)(a1 + 64);
  sub_7BE7C0(a1, a2, -1, &ptr, 8, 65);
  return v16 - __readfsqword(0x28u);
}
