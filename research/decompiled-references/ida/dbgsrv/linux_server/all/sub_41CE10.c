/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41CE10
// Address: 0x000000000041CE10

//----- (000000000041CE10) ----------------------------------------------------
unsigned __int64 __fastcall sub_41CE10(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  int v10; // edx
  const char *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  DIR *v14; // rbx
  __int64 v15; // r8
  __int64 v16; // r9
  __m128 v17; // xmm4
  __m128 v18; // xmm5
  int v19; // ebp
  char v20; // r13
  const char *d_name; // r15
  unsigned __int64 v22; // r14
  struct dirent *v23; // rax
  double v24; // xmm4_8
  double v25; // xmm5_8
  char v26; // al
  void *v27; // rdi
  char v29; // [rsp-8h] [rbp-68h]
  char v30; // [rsp+7h] [rbp-59h]
  void *ptr; // [rsp+8h] [rbp-58h] BYREF
  __int128 v32; // [rsp+10h] [rbp-50h]
  unsigned __int64 v33; // [rsp+20h] [rbp-40h]

  v10 = *(_DWORD *)(a1 + 1340);
  v33 = __readfsqword(0x28u);
  v32 = 0;
  ptr = nullptr;
  sub_4172B0((__int64)&ptr, "/proc/%d/task", v10);
  v11 = s1;
  if ( (_QWORD)v32 )
    v11 = (const char *)ptr;
  v14 = opendir(v11);
  v19 = 0;
  if ( !v14 )
  {
    sub_410EA0(
      (int)"Could not open /proc/%d/task",
      *(unsigned int *)(a1 + 1340),
      v12,
      v13,
      v15,
      v16,
      (__m128)0LL,
      a3,
      a4,
      a5,
      v17,
      v18,
      a8,
      a9,
      v29);
    v27 = ptr;
    if ( !ptr )
      return v33 - __readfsqword(0x28u);
    goto LABEL_13;
  }
  do
  {
    while ( 1 )
    {
      v20 = 0;
      while ( 1 )
      {
        v23 = readdir(v14);
        if ( !v23 )
          break;
        d_name = v23->d_name;
        v22 = strtoul(v23->d_name, nullptr, 10);
        if ( v22 )
        {
          sub_4563D0(a1, "DBG: %d found %s thread\n", v19, d_name);
          v26 = sub_41CD80(a1, v22, (__m128)0LL, a3, a4, a5, v24, v25, a8, a9);
          if ( v26 )
          {
            v30 = v26;
            sub_4563D0(a1, "DBG: %d collected %s thread\n", v19, d_name);
            v20 = v30;
          }
        }
      }
      if ( !v20 )
        break;
      v19 = 0;
      rewinddir(v14);
    }
    ++v19;
    rewinddir(v14);
  }
  while ( v19 != 2 );
  closedir(v14);
  v27 = ptr;
  if ( ptr )
  {
LABEL_13:
    *(_QWORD *)&v32 = 0;
    j__free(v27);
  }
  return v33 - __readfsqword(0x28u);
}
// 41CEF4: variable 'v24' is possibly undefined
// 41CEF4: variable 'v25' is possibly undefined
// 41CF84: variable 'v12' is possibly undefined
// 41CF84: variable 'v13' is possibly undefined
// 41CF84: variable 'v15' is possibly undefined
// 41CF84: variable 'v16' is possibly undefined
// 41CF84: variable 'v17' is possibly undefined
// 41CF84: variable 'v18' is possibly undefined
// 41CF84: variable 'v29' is possibly undefined
