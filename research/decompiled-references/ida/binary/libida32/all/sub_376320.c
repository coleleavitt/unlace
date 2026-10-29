__int64 __fastcall sub_376320(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rsi
  unsigned __int64 v5; // rbx
  __int64 v7; // [rsp+8h] [rbp-B0h] BYREF
  __int64 v8; // [rsp+10h] [rbp-A8h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-A0h]
  void *v10; // [rsp+20h] [rbp-98h]
  __int128 v11; // [rsp+28h] [rbp-90h]
  void *ptr; // [rsp+38h] [rbp-80h]
  __int128 v13; // [rsp+40h] [rbp-78h]
  __int128 v14; // [rsp+50h] [rbp-68h] BYREF
  __int64 v15; // [rsp+70h] [rbp-48h]
  int v16; // [rsp+78h] [rbp-40h]
  __int64 v17; // [rsp+80h] [rbp-38h]
  char v18; // [rsp+88h] [rbp-30h]
  unsigned __int64 v19; // [rsp+98h] [rbp-20h]

  v2 = *(_DWORD *)(a1 + 40);
  v19 = __readfsqword(0x28u);
  v4 = *(unsigned int *)(a1 + 8);
  v7 = 0;
  get_type_by_tid(&v7, v4);
  v9 = 0;
  v10 = nullptr;
  ptr = nullptr;
  v15 = 1;
  v16 = -1;
  v17 = 0;
  v18 = 0;
  v8 = v2;
  v11 = 0;
  v13 = 0;
  v14 = 0;
  LODWORD(v5) = find_tinfo_udt_member((int)&v8);
  if ( (_DWORD)v5 != -1 )
    v5 = v9 >> 3;
  clear_tinfo_t(&v14);
  if ( ptr )
  {
    *(_QWORD *)&v13 = 0;
    qfree(ptr);
  }
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree(v10);
  }
  clear_tinfo_t(&v7);
  *(_DWORD *)(a2 + 8) = v5;
  return 0;
}

