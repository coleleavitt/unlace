__int64 *__fastcall sub_38D80(__int64 *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  const char *v8; // rbp
  int v9; // eax
  int v10; // r9d
  const char *v11; // rax
  const char *v12; // rbp
  size_t v13; // rax
  size_t v14; // r15
  size_t v15; // r14
  void *v16; // rax
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // r13
  int v20; // ebp
  unsigned __int64 v21; // r15
  const char *v22; // rdx
  _BYTE *v23; // rdi
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  char v27[4104]; // [rsp+0h] [rbp-1048h] BYREF
  unsigned __int64 v28; // [rsp+1008h] [rbp-40h]

  v6 = *a2;
  v28 = __readfsqword(0x28u);
  v8 = (const char *)(*(__int64 (__fastcall **)(__int64 *, char *, __int64))(v6 + 152))(a2, v27, 4096);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, const char *))(*a2 + 88))(a2, v8) )
    v8 = ".";
  v9 = sub_94E50(a3);
  sub_94CC0((unsigned int)v27, 4096, (_DWORD)v8, v9, 0, v10, v27[0]);
  v11 = (const char *)sub_99F60(v27, 4096, v27, a4);
  *a1 = 0;
  *(_OWORD *)(a1 + 1) = 0;
  if ( !v11
    || (v12 = v11,
        v13 = strlen(v11),
        v14 = v13 + 1,
        v15 = v13,
        v16 = (void *)sub_96080(a1, 0, v13 + 1, 1),
        *a1 = (__int64)v16,
        a1[1] = v14,
        memmove(v16, v12, v15),
        *(_BYTE *)(*a1 + v15) = 0,
        v17 = a1[1],
        v18 = v17 - 1,
        !v17) )
  {
    v18 = 0;
  }
  v19 = sub_910F0(a3);
  v20 = 1;
  v21 = v18 + 1;
  while ( 1 )
  {
    if ( v19 )
      sub_21D30(a1);
    v22 = haystack;
    if ( a1[1] )
      v22 = (const char *)*a1;
    if ( (*(unsigned int (__fastcall **)(__int64 *, _QWORD, const char *))(*a2 + 96))(a2, 0, v22) )
      break;
    v23 = (_BYTE *)*a1;
    v24 = *a1;
    if ( v18 )
    {
      v25 = a1[1];
      if ( v25 < v21 )
      {
        if ( a1[2] < v21 )
        {
          v24 = sub_96080(a1, *a1, v18 + 1, 1);
          *a1 = v24;
          v25 = a1[1];
        }
        memset((void *)(v24 + v25), 0, v21 - v25);
        a1[1] = v21;
        v23 = (_BYTE *)*a1;
      }
      else if ( v21 != v25 )
      {
        a1[1] = v21;
      }
      v23[v18] = 0;
    }
    else if ( v23 )
    {
      a1[1] = 0;
      j__free(v23);
      *a1 = 0;
      a1[2] = 0;
    }
    sub_21D30(a1);
    ++v20;
  }
  return a1;
}

