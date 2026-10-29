__int64 __fastcall add_sourcefile(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  unsigned int v5; // ebx
  _QWORD v7[2]; // [rsp+0h] [rbp-48h] BYREF
  void *ptr; // [rsp+10h] [rbp-38h]
  unsigned __int64 v9; // [rsp+18h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  if ( !a3 || a1 >= a2 )
    return 0;
  v4 = *(_QWORD *)(qword_2CCB598 + 1672) + 1320LL;
  sub_506C90(v4, a1, a2, 1);
  v7[1] = a2;
  v7[0] = a1;
  ptr = (void *)qstrdup(a3);
  v5 = sub_505940(v4, v7);
  if ( !(_BYTE)v5 )
  {
    qfree(ptr);
    return 0;
  }
  sub_504B40(v4);
  return v5;
}
