__int64 __fastcall sub_5D8E60(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // edx
  int v6; // ecx
  unsigned int v7; // ebp
  int v8; // r8d
  int v9; // r9d
  void *v11; // rdi
  int v12; // [rsp-8h] [rbp-68h]
  void *v13; // [rsp+0h] [rbp-60h] BYREF
  void *ptr; // [rsp+8h] [rbp-58h] BYREF
  int v15[4]; // [rsp+10h] [rbp-50h]
  int v16[2]; // [rsp+20h] [rbp-40h]
  __int64 v17; // [rsp+28h] [rbp-38h]
  unsigned __int64 v18; // [rsp+30h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  LODWORD(v17) = -1;
  *(_OWORD *)v15 = 0;
  ptr = nullptr;
  *(_QWORD *)v16 = 0;
  v7 = sub_5D8CB0(a1, (__int64)&ptr, a3);
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
    LODWORD(v13) = 0;
    HIDWORD(v13) = a4;
    rangeset_t_add(a2, (int)&v13, v5, v6, v8, v9, v12, v13, (__int64)ptr, v15[0], v15[2], v16[0], v17);
    rangeset_t_sub2(a2);
  }
  if ( ptr )
  {
    *(_QWORD *)v15 = 0;
    qfree(ptr);
  }
  return v7;
}

