__int64 __fastcall add_sourcefile(unsigned int a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // r13
  unsigned int v5; // ebx
  _DWORD v7[2]; // [rsp+0h] [rbp-48h] BYREF
  void *ptr; // [rsp+8h] [rbp-40h]
  unsigned __int64 v9; // [rsp+18h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  if ( !a3 || a1 >= a2 )
    return 0;
  v4 = *(_QWORD *)(qword_2CA1698 + 1480) + 1288LL;
  sub_4EF6E0(v4, a1, a2, 1);
  v7[1] = a2;
  v7[0] = a1;
  ptr = (void *)qstrdup(a3);
  v5 = sub_4EE3F0(v4, v7);
  if ( !(_BYTE)v5 )
  {
    qfree(ptr);
    return 0;
  }
  sub_4ED600(v4);
  return v5;
}

