unsigned __int64 __fastcall sub_4C6950(_QWORD *a1)
{
  __int64 v1; // rax
  int v4; // ebp
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-20h]

  v1 = *a1;
  v11 = __readfsqword(0x28u);
  v10 = v1;
  if ( (unsigned __int8)netnode_exist(&v10) )
  {
    v4 = (_DWORD)a1 + 24;
    v5 = netnode_altval(v10, 1, 65);
    v6 = v10;
    a1[1] = v5;
    v7 = netnode_altval(v6, 2, 65);
    v8 = a1[1];
    v9 = *a1;
    a1[2] = v7;
    if ( netnode_supval(v9, v8, a1 + 3, 1024, 83) <= 0 )
    {
      a1[3] = -1;
      a1[130] = -1;
      memset(
        (void *)((unsigned __int64)(a1 + 4) & 0xFFFFFFFFFFFFFFF8LL),
        0xFFu,
        8LL * ((v4 - (((_DWORD)a1 + 32) & 0xFFFFFFF8) + 1024) >> 3));
      *(_OWORD *)(a1 + 1) = 0;
    }
  }
  return v11 - __readfsqword(0x28u);
}
