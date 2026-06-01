unsigned __int64 __fastcall sub_4AFCF0(unsigned int *a1)
{
  unsigned int v1; // eax
  int v4; // ebp
  unsigned int v5; // eax
  __int64 v6; // rdi
  unsigned int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // rsi
  unsigned int v10; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-20h]

  v1 = *a1;
  v11 = __readfsqword(0x28u);
  v10 = v1;
  if ( (unsigned __int8)netnode_exist(&v10) )
  {
    v4 = (_DWORD)a1 + 20;
    v5 = netnode_altval(v10, 1, 65);
    v6 = v10;
    *(_QWORD *)(a1 + 1) = v5;
    v7 = netnode_altval(v6, 2, 65);
    v8 = *a1;
    v9 = a1[1];
    *(_QWORD *)(a1 + 3) = v7;
    if ( netnode_supval(v8, v9, a1 + 5, 1024, 83) <= 0 )
    {
      *(_QWORD *)(a1 + 5) = -1;
      *(_QWORD *)(a1 + 259) = -1;
      memset(
        (void *)((unsigned __int64)(a1 + 7) & 0xFFFFFFFFFFFFFFF8LL),
        0xFFu,
        8LL * ((v4 - (((_DWORD)a1 + 28) & 0xFFFFFFF8) + 1024) >> 3));
      *(_OWORD *)(a1 + 1) = 0;
    }
  }
  return v11 - __readfsqword(0x28u);
}

