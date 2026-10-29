/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_417370
// Address: 0x0000000000417370

//----- (0000000000417370) ----------------------------------------------------
__int64 __fastcall sub_417370(__int64 a1, char **a2, int a3)
{
  int v5; // edx
  const char *v6; // rdi
  FILE *v7; // rax
  FILE *v8; // rbx
  unsigned int v9; // ebx
  int *v11; // rax
  const char *v12; // rcx
  const char *v13; // rdx
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v15; // [rsp+8h] [rbp-30h]
  unsigned __int64 v16; // [rsp+18h] [rbp-20h]

  v5 = *(_DWORD *)(a1 + 1340);
  v16 = __readfsqword(0x28u);
  ptr = nullptr;
  v15 = 0;
  sub_4172B0((__int64)&ptr, "/proc/%d/task/%d/comm", v5, a3);
  v6 = s1;
  if ( (_QWORD)v15 )
    v6 = (const char *)ptr;
  v7 = sub_47FA20(v6);
  v8 = v7;
  if ( v7 )
  {
    sub_481160(a2, v7);
    sub_480D70(v8);
    v9 = 1;
  }
  else
  {
    v11 = __errno_location();
    v12 = (const char *)sub_481FB0(*v11);
    v13 = s1;
    if ( (_QWORD)v15 )
      v13 = (const char *)ptr;
    sub_411B10(a1, "%s: %s\n", v13, v12);
    v9 = 0;
  }
  if ( ptr )
  {
    *(_QWORD *)&v15 = 0;
    j__free(ptr);
  }
  return v9;
}
