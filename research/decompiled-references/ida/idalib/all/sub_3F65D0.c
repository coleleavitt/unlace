__int64 __fastcall sub_3F65D0(__int64 a1, char *a2, unsigned __int8 a3, __int64 a4, const void *a5, size_t a6)
{
  __int64 v6; // r13
  const char *v9; // r14
  int v10; // r15d
  const char *v11; // rdx
  unsigned int v12; // ebx
  __int64 v15; // [rsp+20h] [rbp-80h] BYREF
  char *v16; // [rsp+28h] [rbp-78h] BYREF
  void *v17; // [rsp+30h] [rbp-70h] BYREF
  __int128 v18; // [rsp+38h] [rbp-68h]
  void *ptr; // [rsp+50h] [rbp-50h] BYREF
  __int128 v20; // [rsp+58h] [rbp-48h]
  unsigned __int64 v21; // [rsp+68h] [rbp-38h]

  v21 = __readfsqword(0x28u);
  if ( a6 > 0x400 )
    sub_3EE850();
  v6 = a1 + 156;
  memcpy((void *)(a1 + 156), a5, a6);
  if ( (unsigned __int8)sub_3F5F60(a1, a2) )
  {
    return 0;
  }
  else
  {
    v9 = haystack;
    if ( *(_QWORD *)(a4 + 8) )
      v9 = *(const char **)a4;
    v18 = 0;
    v17 = nullptr;
    v10 = sub_3792E0(0x61u, a2, a3, v9, v6, a6, &v17);
    ptr = nullptr;
    v20 = 0;
    if ( v10 == 1 && (unsigned __int64)v18 <= 1 )
      goto LABEL_22;
    if ( a2 != *(char **)(a1 + 16) )
    {
      v16 = a2;
      if ( sub_7BF130(&v16, *(_QWORD *)(a1 + 8), a1 + 24) <= 0 )
        sub_35A790((char **)(a1 + 24));
      *(_QWORD *)(a1 + 16) = a2;
    }
    sub_35A790((char **)&ptr);
    if ( !v10 && !*(_BYTE *)(a1 + 1180) )
    {
      if ( a6 == 4 )
      {
        v15 = *(unsigned int *)(a1 + 156);
        netnode_hashset(a2, v9, &v15, 8, a3);
      }
      else
      {
        netnode_hashset(a2, v9, v6, a6, a3);
      }
    }
    if ( !(_QWORD)v20 )
LABEL_22:
      v11 = haystack;
    else
      v11 = (const char *)ptr;
    v12 = sub_3F5570(a1, v10, v11, (__int64)&v17);
    if ( ptr )
    {
      *(_QWORD *)&v20 = 0;
      qfree(ptr);
    }
    if ( v17 )
    {
      *(_QWORD *)&v18 = 0;
      qfree(v17);
    }
  }
  return v12;
}
