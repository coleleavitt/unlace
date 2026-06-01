__int64 __fastcall sub_5E5850(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // ebp
  __int64 v3; // r13
  __int64 v4; // rdx
  int v5; // r12d
  void *v6; // r14
  int v7; // eax
  void *v8; // rdi
  __int64 v10; // rbp
  int v11; // [rsp+4h] [rbp-54h] BYREF
  void *v12; // [rsp+8h] [rbp-50h] BYREF
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  __int128 v14; // [rsp+18h] [rbp-40h]
  unsigned __int64 v15; // [rsp+28h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  v1 = **(_QWORD **)(*(_QWORD *)(a1 + 112) + 120LL)
     + 24LL * *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 112) + 120LL) + 8LL)
     - 24;
  if ( !*(_DWORD *)v1 )
  {
    v10 = *(_QWORD *)(a1 + 72);
    cleanup_argloc(v1);
    *(_DWORD *)v1 = 1;
    *(_QWORD *)(v1 + 8) = v10;
    return 0;
  }
  if ( *(_DWORD *)v1 != 3 || (v2 = *(_DWORD *)(v1 + 8), HIWORD(v2)) )
  {
    if ( !under_debugger )
      interr(642);
    BUG();
  }
  v3 = *(_QWORD *)(a1 + 72);
  v14 = 0;
  v4 = *(unsigned __int16 *)(v1 + 18);
  ptr = nullptr;
  v5 = v3;
  if ( get_reg_name(&ptr, v2, v4, 0xFFFFFFFFLL) > 0 )
  {
    v6 = ptr;
    v11 = 0;
    v7 = sub_3792E0(0x3F0u, &v12, &v11, ptr);
    if ( v7 )
    {
      if ( v7 == 1 )
      {
        v6 = v12;
LABEL_8:
        if ( v6 )
        {
          if ( (v11 & 7) == 0 )
          {
            v2 = str2reg(v6);
            if ( v2 != -1 )
              v5 = v3 + ((unsigned __int16)v11 >> 3);
          }
        }
      }
    }
    else if ( (unsigned int)str2reg(v6) != -1 )
    {
      v11 = 0;
      goto LABEL_8;
    }
  }
  cleanup_argloc(v1);
  *(_DWORD *)v1 = 3;
  v8 = ptr;
  *(_DWORD *)(v1 + 8) = v2 | (v5 << 16);
  if ( v8 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v8);
  }
  return 0;
}
