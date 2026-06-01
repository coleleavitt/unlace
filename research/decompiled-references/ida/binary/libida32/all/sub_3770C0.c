__int64 __fastcall sub_3770C0(__int64 a1, __int64 a2)
{
  const char *v2; // rbx
  bool v3; // zf
  unsigned int v4; // r13d
  size_t v5; // rax
  size_t v6; // r13
  unsigned __int64 v7; // rbx
  size_t v9; // r15
  __int64 v10; // [rsp+8h] [rbp-D0h] BYREF
  __int128 v11; // [rsp+10h] [rbp-C8h] BYREF
  void *v12; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v13; // [rsp+28h] [rbp-B0h]
  void *ptr; // [rsp+38h] [rbp-A0h]
  __int128 v15; // [rsp+40h] [rbp-98h]
  __int128 v16; // [rsp+50h] [rbp-88h] BYREF
  __int64 v17; // [rsp+70h] [rbp-68h]
  int v18; // [rsp+78h] [rbp-60h]
  __int64 v19; // [rsp+80h] [rbp-58h]
  char v20; // [rsp+88h] [rbp-50h]
  unsigned __int64 v21; // [rsp+98h] [rbp-40h]

  v2 = haystack;
  v3 = *(_QWORD *)(a1 + 48) == 0;
  v4 = *(_DWORD *)(a1 + 8);
  v21 = __readfsqword(0x28u);
  if ( !v3 )
  {
    v2 = *(const char **)(a1 + 40);
    if ( *v2 == 32 && v2[1] == 114 && !v2[2] )
    {
      v2 = "__return_address";
    }
    else if ( !strcmp(*(const char **)(a1 + 40), " s") )
    {
      v2 = "__saved_registers";
    }
  }
  v10 = 0;
  get_type_by_tid(&v10, v4);
  v12 = nullptr;
  ptr = nullptr;
  v17 = 1;
  v18 = -1;
  v19 = 0;
  v20 = 0;
  v11 = 0;
  v13 = 0;
  v15 = 0;
  v16 = 0;
  if ( v2 )
  {
    v5 = strlen(v2);
    v6 = v5;
    if ( v5 )
    {
      v9 = v5 + 1;
      v12 = (void *)qvector_reserve(&v12, 0, v5 + 1, 1);
      *(_QWORD *)&v13 = v9;
      memmove(v12, v2, v6);
      *((_BYTE *)v12 + v6) = 0;
    }
  }
  LODWORD(v7) = find_tinfo_udt_member((int)&v11);
  if ( (_DWORD)v7 != -1 )
    v7 = (unsigned __int64)v11 >> 3;
  clear_tinfo_t(&v16);
  if ( ptr )
  {
    *(_QWORD *)&v15 = 0;
    qfree(ptr);
  }
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree(v12);
  }
  clear_tinfo_t(&v10);
  *(_DWORD *)(a2 + 8) = v7;
  return 0;
}

