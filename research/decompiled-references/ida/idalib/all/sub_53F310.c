__int64 __fastcall sub_53F310(__int64 a1, __int64 a2, __int64 a3)
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
  int v18[2]; // [rsp+0h] [rbp-98h] BYREF
  void *v19; // [rsp+8h] [rbp-90h]
  void *v20; // [rsp+10h] [rbp-88h] BYREF
  int v21[4]; // [rsp+18h] [rbp-80h]
  int v22[2]; // [rsp+28h] [rbp-70h]
  __int64 v23; // [rsp+30h] [rbp-68h]
  int v24; // [rsp+38h] [rbp-60h]
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  int v26[4]; // [rsp+48h] [rbp-50h]
  void *v27; // [rsp+58h] [rbp-40h]
  __int64 v28; // [rsp+60h] [rbp-38h]
  int v29[2]; // [rsp+68h] [rbp-30h]
  int v30; // [rsp+70h] [rbp-28h]
  int v31; // [rsp+78h] [rbp-20h]
  __int64 v32; // [rsp+80h] [rbp-18h]

  *(_QWORD *)v29 = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  tinfo_property = get_tinfo_property(a3, 2);
  if ( !(_BYTE)tinfo_property || (v5 = 0x20020002000LL, _bittest64(&v5, tinfo_property)) )
  {
    tinfo_size = get_tinfo_size(0, a3, 0);
    if ( tinfo_size != -1 )
    {
      LODWORD(v23) = -1;
      v20 = nullptr;
      *(_QWORD *)v22 = 0;
      *(_OWORD *)v21 = 0;
      appended = append_tinfo_covered(&v20, a3, 0);
      if ( (_BYTE)appended )
      {
        ptr = nullptr;
        LODWORD(v28) = -1;
        v27 = nullptr;
        *(_OWORD *)v26 = 0;
        rangeset_t_add(
          (int)&ptr,
          (int)v18,
          v7,
          v8,
          v10,
          v11,
          0,
          (void *)tinfo_size,
          (__int64)v20,
          v21[0],
          v21[2],
          v22[0],
          v23);
        rangeset_t_sub2((int)&ptr);
        rangeset_t_swap(
          a2,
          (int)&ptr,
          v13,
          v14,
          v15,
          v16,
          v18[0],
          (int)v19,
          (int)v20,
          v21[0],
          v21[2],
          v22[0],
          v23,
          v24,
          (int)ptr,
          v26[0],
          v26[2],
          v27,
          v28,
          v29[0],
          v30,
          v31,
          v32);
        if ( ptr )
        {
          *(_QWORD *)v26 = 0;
          qfree(ptr);
        }
      }
      if ( v20 )
      {
        *(_QWORD *)v21 = 0;
        qfree(v20);
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
