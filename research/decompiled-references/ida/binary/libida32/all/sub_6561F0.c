unsigned __int64 __fastcall sub_6561F0(__int64 *a1, __int64 a2, int a3, _BYTE *a4, _BYTE *a5)
{
  bool v5; // zf
  _BYTE *v8; // r13
  void *v9; // r15
  int v10; // edx
  __int64 v11; // rdi
  __int64 v12; // rbp
  int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // [rsp+Ch] [rbp-5Ch]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v19; // [rsp+18h] [rbp-50h]
  unsigned __int64 v20; // [rsp+28h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  if ( !a2 || *(char *)(a2 + 9) < 0 )
    return v20 - __readfsqword(0x28u);
  v5 = *a4 == 0;
  ptr = nullptr;
  v8 = a5;
  v19 = 0;
  if ( v5 )
  {
    if ( !a5 )
      return v20 - __readfsqword(0x28u);
    v9 = nullptr;
    if ( !*a5 )
      return v20 - __readfsqword(0x28u);
    goto LABEL_6;
  }
  serialize_tinfo(&ptr, 0, 0, a4, 272);
  v9 = ptr;
  if ( v8 && *v8 || (v8 = nullptr, ptr) )
  {
    if ( *(char *)(a2 + 9) < 0 )
    {
      v10 = *(_DWORD *)(a2 + 88);
      v11 = *(_QWORD *)(a2 + 96);
      goto LABEL_19;
    }
LABEL_6:
    read_regargs(a2);
    v10 = *(_DWORD *)(a2 + 88);
    v11 = *(_QWORD *)(a2 + 96);
    if ( v10 > 0 )
    {
      v12 = *(_QWORD *)(a2 + 96);
      while ( a3 != *(_DWORD *)v12 )
      {
        v12 += 24;
        if ( v11 + 24LL * v10 == v12 )
          goto LABEL_19;
      }
      if ( v12 )
      {
        free_regarg(v12);
LABEL_12:
        *(_QWORD *)(v12 + 8) = qstrdup(v9);
        *(_QWORD *)(v12 + 16) = qstrdup(v8);
        sub_655CA0(a1, a2, 1);
        if ( ptr )
        {
          *(_QWORD *)&v19 = 0;
          qfree(ptr);
        }
        return v20 - __readfsqword(0x28u);
      }
    }
LABEL_19:
    v14 = v10 + 1;
    if ( 24LL * v14 < (unsigned __int64)v14 || (v17 = v14, (v15 = qrealloc(v11)) == 0) )
      sub_3B74D0((int)"add_regarg");
    v16 = *(int *)(a2 + 88);
    *(_QWORD *)(a2 + 96) = v15;
    v12 = v15 + 24 * v16;
    *(_DWORD *)v12 = a3;
    *(_DWORD *)(a2 + 88) = v17;
    goto LABEL_12;
  }
  return v20 - __readfsqword(0x28u);
}

