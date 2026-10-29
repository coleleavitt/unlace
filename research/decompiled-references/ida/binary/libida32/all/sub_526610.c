__int64 __fastcall sub_526610(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 tinfo_property; // rax
  __int64 v5; // rdx
  int tinfo_size; // r12d
  int v7; // edx
  int v8; // ecx
  unsigned int appended; // ebx
  int v10; // r8d
  int v11; // r9d
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  void *v17; // rdi
  int v18; // [rsp+0h] [rbp-98h]
  int v19; // [rsp+0h] [rbp-98h]
  void *v20; // [rsp+8h] [rbp-90h] BYREF
  void *v21; // [rsp+10h] [rbp-88h] BYREF
  int v22[4]; // [rsp+18h] [rbp-80h]
  int v23[2]; // [rsp+28h] [rbp-70h]
  __int64 v24; // [rsp+30h] [rbp-68h]
  void *v25; // [rsp+38h] [rbp-60h]
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  int v27[4]; // [rsp+48h] [rbp-50h]
  int v28[2]; // [rsp+58h] [rbp-40h]
  __int64 v29; // [rsp+60h] [rbp-38h]
  unsigned __int64 v30; // [rsp+68h] [rbp-30h]

  v30 = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  tinfo_property = get_tinfo_property(a3, 2);
  if ( !(_BYTE)tinfo_property || (v5 = 0x20020002000LL, _bittest64(&v5, tinfo_property)) )
  {
    tinfo_size = get_tinfo_size(0, a3, 0);
    if ( tinfo_size != -1 )
    {
      LODWORD(v24) = -1;
      v21 = nullptr;
      *(_QWORD *)v23 = 0;
      *(_OWORD *)v22 = 0;
      appended = append_tinfo_covered(&v21, a3, 0);
      if ( (_BYTE)appended )
      {
        HIDWORD(v20) = tinfo_size;
        LODWORD(v29) = -1;
        ptr = nullptr;
        *(_QWORD *)v28 = 0;
        LODWORD(v20) = 0;
        *(_OWORD *)v27 = 0;
        rangeset_t_add((int)&ptr, (int)&v20, v7, v8, v10, v11, v18, v20, (__int64)v21, v22[0], v22[2], v23[0], v24);
        rangeset_t_sub2((int)&ptr);
        rangeset_t_swap(
          a2,
          (int)&ptr,
          v13,
          v14,
          v15,
          v16,
          v19,
          (int)v20,
          (int)v21,
          v22[0],
          v22[2],
          v23[0],
          v24,
          v25,
          (__int64)ptr,
          v27[0],
          v27[2],
          v28[0],
          v29);
        if ( ptr )
        {
          *(_QWORD *)v27 = 0;
          qfree(ptr);
        }
      }
      if ( v21 )
      {
        *(_QWORD *)v22 = 0;
        qfree(v21);
      }
      return appended;
    }
    return 0;
  }
  v17 = *(void **)a2;
  if ( *(_QWORD *)a2 )
  {
    *(_QWORD *)(a2 + 8) = 0;
    qfree(v17);
    *(_QWORD *)a2 = 0;
    *(_QWORD *)(a2 + 16) = 0;
  }
  *(_QWORD *)(a2 + 24) = 0;
  return 1;
}

