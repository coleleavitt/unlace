unsigned __int64 __fastcall sub_3C5AF0(__int64 a1, __int64 a2, __int16 a3)
{
  void *v4; // rdi
  void *v6; // rdi
  void *v8; // rdi
  __int64 v9; // rbp
  void *v10; // rdi
  unsigned __int64 v11; // rax
  unsigned int v12; // eax
  unsigned __int64 v13; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v14; // [rsp+8h] [rbp-30h]

  v4 = *(void **)a1;
  v14 = __readfsqword(0x28u);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v4);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
  v6 = *(void **)(a1 + 24);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 32) = 0;
    qfree(v6);
    *(_QWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 40) = 0;
  }
  *(_BYTE *)(a1 + 48) = 0;
  if ( (a3 & 0x800) != 0 )
  {
    v8 = *(void **)a1;
    v9 = qword_2CCB598;
    if ( *(_QWORD *)a1 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      qfree(v8);
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 16) = 0;
    }
    v10 = *(void **)(a1 + 24);
    if ( v10 )
    {
      *(_QWORD *)(a1 + 32) = 0;
      qfree(v10);
      *(_QWORD *)(a1 + 24) = 0;
      *(_QWORD *)(a1 + 40) = 0;
    }
    v11 = -1;
    if ( a2 != -1 )
      v11 = sub_3B9DC0(*(_QWORD **)(v9 + 1672), a2);
    v13 = v11;
    sub_7BEA80(&v13, v9, a1, 0, 83);
    sub_7BEA80(&v13, v9, a1 + 24, 1, 83);
    LOBYTE(v12) = 0;
    if ( *(_QWORD *)(a1 + 8) > 1u )
      v12 = ((unsigned int)get_aflags(a2) >> 15) & 1;
    *(_BYTE *)(a1 + 48) = v12;
  }
  return v14 - __readfsqword(0x28u);
}
