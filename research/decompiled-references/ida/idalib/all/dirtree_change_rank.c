char __fastcall dirtree_change_rank(_QWORD *a1, __int64 a2, signed __int64 a3)
{
  unsigned __int64 v4; // rax
  int v5; // ebx
  void *v6; // rax
  char v7; // dl
  int v9[2]; // [rsp+8h] [rbp-50h] BYREF
  void *ptr; // [rsp+16h] [rbp-42h] BYREF
  char v11; // [rsp+1Eh] [rbp-3Ah]
  char v12; // [rsp+27h] [rbp-31h]
  int v13[2]; // [rsp+28h] [rbp-30h]

  *(_QWORD *)v13 = __readfsqword(0x28u);
  *(_QWORD *)v9 = a2;
  ptr = (void *)-1LL;
  v11 = 0;
  v4 = sub_778480((__int64)a1, (const char **)v9);
  if ( v4 == -1 )
    return 5;
  v5 = v4;
  v6 = (void *)sub_777000((__int64)a1, v4, *(char **)v9);
  v12 = v7;
  if ( v6 == (void *)-1LL )
    return (v7 == 0) + 2;
  v11 = v7;
  ptr = v6;
  sub_779620(a1, v5, (__int64)&ptr, a3, a2);
  return 0;
}
