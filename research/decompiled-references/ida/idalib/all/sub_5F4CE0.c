__int64 __fastcall sub_5F4CE0(__int64 a1, __int64 a2, __int64 a3, void *a4)
{
  int v5; // edx
  int v6; // ecx
  unsigned int v7; // ebp
  int v8; // r8d
  int v9; // r9d
  void *v11; // rdi
  int v12[2]; // [rsp+0h] [rbp-68h] BYREF
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  int v14[4]; // [rsp+18h] [rbp-50h]
  int v15[2]; // [rsp+28h] [rbp-40h]
  __int64 v16; // [rsp+30h] [rbp-38h]
  unsigned __int64 v17; // [rsp+38h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  LODWORD(v16) = -1;
  *(_OWORD *)v14 = 0;
  ptr = nullptr;
  *(_QWORD *)v15 = 0;
  v7 = sub_5F4B30(a1, (__int64)&ptr, a3);
  if ( (_BYTE)v7 )
  {
    v11 = *(void **)a2;
    if ( *(_QWORD *)a2 )
    {
      *(_QWORD *)(a2 + 8) = 0;
      qfree(v11);
      *(_QWORD *)a2 = 0;
      *(_QWORD *)(a2 + 16) = 0;
    }
    *(_QWORD *)(a2 + 24) = 0;
    rangeset_t_add(a2, (int)v12, v5, v6, v8, v9, 0, a4, (__int64)ptr, v14[0], v14[2], v15[0], v16);
    rangeset_t_sub2(a2);
  }
  if ( ptr )
  {
    *(_QWORD *)v14 = 0;
    qfree(ptr);
  }
  return v7;
}
