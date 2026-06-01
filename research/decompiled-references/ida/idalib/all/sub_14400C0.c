__int64 __fastcall sub_14400C0(__int64 *a1, __int64 a2, bool *a3)
{
  __int64 v4; // rdi
  int v5; // r13d
  unsigned int v6; // ebp
  __int64 v7; // rax
  __int64 v9; // rax
  __int64 v10; // rbp
  void *v11; // [rsp+0h] [rbp-B8h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-B0h]
  _BYTE v13[16]; // [rsp+10h] [rbp-A8h] BYREF
  void *v14[2]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v15[16]; // [rsp+30h] [rbp-88h] BYREF
  void *ptr[2]; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v17[104]; // [rsp+50h] [rbp-68h] BYREF

  v4 = *a1;
  v5 = *(_DWORD *)a2;
  *a3 = *(_WORD *)(a2 + 16) == 14;
  v13[0] = 0;
  v6 = 0;
  v11 = v13;
  v12 = 0;
  if ( (unsigned __int8)sub_1464000(v4, a2, &v11, "'__has_warning'", 0) )
  {
    v7 = *a1;
    if ( v12 > 2 && *(_BYTE *)v11 == 45 && *((_BYTE *)v11 + 1) == 87 )
    {
      ptr[0] = v17;
      ptr[1] = (void *)0xA00000000LL;
      v9 = *(_QWORD *)(v7 + 48);
      v14[0] = v15;
      v10 = *(_QWORD *)(v9 + 32);
      sub_143F4E0(v14, (_BYTE *)v11 + 2, (__int64)v11 + v12);
      v6 = (unsigned __int8)sub_FD40E0(v10, 0, v14[0], (size_t)v14[1], (__int64)ptr) ^ 1;
      if ( v14[0] != v15 )
        operator delete(v14[0]);
      if ( ptr[0] != v17 )
        free(ptr[0]);
    }
    else
    {
      sub_FC70B0((__int64)ptr, *(_QWORD *)(v7 + 48), v5, 1356);
      v6 = 0;
      sub_AEA040((__int64)ptr);
    }
  }
  if ( v11 != v13 )
    operator delete(v11);
  return v6;
}
