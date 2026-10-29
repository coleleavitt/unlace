/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3C9C0
// Address: 0x000000000003C9C0

//----- (000000000003C9C0) ----------------------------------------------------
__int64 __fastcall sub_3C9C0(__int64 a1, _QWORD *a2, int a3)
{
  unsigned int v3; // ebp
  const char *v5; // rdi
  FILE *v6; // rax
  FILE *v7; // rbx
  const char *v8; // rbx
  void *v9; // rbp
  int *v10; // rax
  char *v11; // rcx
  void *ptr[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v14; // [rsp+10h] [rbp-38h]
  unsigned __int64 v15; // [rsp+20h] [rbp-28h]

  v15 = __readfsqword(0x28u);
  *(_OWORD *)ptr = 0;
  v14 = 0;
  sub_3BBA0((__int64)ptr, "/proc/%d/task/%d/comm", *(_DWORD *)(a1 + 1140), a3);
  if ( ptr[1] )
    v5 = (const char *)ptr[0];
  else
    v5 = s1;
  v6 = fopenRT(v5);
  v7 = v6;
  if ( v6 )
  {
    qgetline(a2, v6);
    LOBYTE(v3) = 1;
    qfclose(v7);
  }
  else
  {
    v8 = (const char *)ptr[0];
    v9 = ptr[1];
    v10 = (int *)__errno(v5);
    v11 = winerr(*v10);
    if ( !v9 )
      v8 = s1;
    v3 = 0;
    sub_391F0(a1, "%s: %s\n", v8, v11);
  }
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    v14 = 0;
  }
  return v3;
}
// 3CAB5: variable 'v3' is possibly undefined
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);
