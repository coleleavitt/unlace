__int64 __fastcall sub_36C030(__int64 a1)
{
  int v1; // edx
  int v2; // eax
  int v3; // edx
  int v4; // eax
  void *v5; // rax
  bool v6; // zf
  const char *v7; // rcx
  __int64 (**v9)(void); // [rsp+0h] [rbp-58h] BYREF
  int v10; // [rsp+8h] [rbp-50h]
  int v11; // [rsp+Ch] [rbp-4Ch]
  __int128 v12; // [rsp+10h] [rbp-48h] BYREF
  __int64 v13; // [rsp+20h] [rbp-38h]
  int v14; // [rsp+28h] [rbp-30h]
  __int16 v15; // [rsp+2Ch] [rbp-2Ch]
  __int16 v16; // [rsp+2Eh] [rbp-2Ah]
  int v17; // [rsp+30h] [rbp-28h]
  void *ptr; // [rsp+38h] [rbp-20h]
  unsigned __int64 v19; // [rsp+48h] [rbp-10h]

  v1 = *(_DWORD *)(a1 + 40);
  v2 = *(_DWORD *)(a1 + 8);
  v19 = __readfsqword(0x28u);
  v9 = off_2AFC770;
  v10 = v1;
  v3 = *(_DWORD *)(a1 + 72);
  v11 = v2;
  v4 = *(_DWORD *)(a1 + 104);
  v13 = 0;
  v14 = -1;
  v15 = v3;
  v16 = v4;
  v17 = 1;
  ptr = &v9;
  v12 = 0;
  v5 = (void *)((__int64 (__fastcall *)(__int64 (***)(void)))idaplace_t__clone)(&v9);
  v6 = *(_QWORD *)(a1 + 176) == 0;
  v7 = haystack;
  ptr = v5;
  if ( !v6 )
    v7 = *(const char **)(a1 + 168);
  bookmarks_t_mark(&v12, *(unsigned int *)(a1 + 136), 0, v7, 0);
  if ( ptr )
    qfree(ptr);
  return 0;
}

