__int64 __fastcall sub_36F810(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  void *v5; // rax
  bool v6; // zf
  const char *v7; // rcx
  __int64 (__fastcall **v9)(); // [rsp+0h] [rbp-68h] BYREF
  int v10; // [rsp+8h] [rbp-60h]
  __int64 v11; // [rsp+10h] [rbp-58h]
  __int128 v12; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+30h] [rbp-38h]
  int v14; // [rsp+38h] [rbp-30h]
  __int16 v15; // [rsp+3Ch] [rbp-2Ch]
  __int16 v16; // [rsp+3Eh] [rbp-2Ah]
  int v17; // [rsp+40h] [rbp-28h]
  void *ptr; // [rsp+48h] [rbp-20h]
  unsigned __int64 v19; // [rsp+58h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 40);
  v2 = *(_QWORD *)(a1 + 8);
  v19 = __readfsqword(0x28u);
  v9 = off_2B25850;
  v10 = v1;
  v3 = *(_QWORD *)(a1 + 72);
  v11 = v2;
  v4 = *(_QWORD *)(a1 + 104);
  v13 = 0;
  v14 = -1;
  v15 = v3;
  v16 = v4;
  v17 = 1;
  ptr = &v9;
  v12 = 0;
  v5 = (void *)((__int64 (__fastcall *)(__int64 (__fastcall ***)()))idaplace_t__clone)(&v9);
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
