__int64 __fastcall sub_5C9AB0(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // ebp
  int v3; // r12d
  __int64 v4; // rdx
  void *v5; // r13
  int v6; // eax
  void *v7; // rdi
  int v9; // ebp
  int v10; // [rsp+4h] [rbp-54h] BYREF
  void *v11; // [rsp+8h] [rbp-50h] BYREF
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  __int128 v13; // [rsp+18h] [rbp-40h]
  unsigned __int64 v14; // [rsp+28h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v1 = **(_QWORD **)(*(_QWORD *)(a1 + 104) + 120LL)
     + 24LL * *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 120LL) + 8LL)
     - 24;
  if ( !*(_DWORD *)v1 )
  {
    v9 = *(_DWORD *)(a1 + 68);
    cleanup_argloc(v1);
    *(_DWORD *)v1 = 1;
    *(_DWORD *)(v1 + 8) = v9;
    return 0;
  }
  if ( *(_DWORD *)v1 != 3 || (v2 = *(_DWORD *)(v1 + 8), HIWORD(v2)) )
  {
    if ( !under_debugger )
      interr(642);
    BUG();
  }
  v3 = *(_DWORD *)(a1 + 68);
  v13 = 0;
  v4 = *(unsigned __int16 *)(v1 + 18);
  ptr = nullptr;
  if ( get_reg_name(&ptr, v2, v4, 0xFFFFFFFFLL) > 0 )
  {
    v5 = ptr;
    v10 = 0;
    v6 = sub_375980(0x3F0u, &v11, &v10, ptr);
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        v5 = v11;
LABEL_8:
        if ( v5 )
        {
          if ( (v10 & 7) == 0 )
          {
            v2 = str2reg(v5);
            if ( v2 != -1 )
              v3 += (unsigned __int16)v10 >> 3;
          }
        }
      }
    }
    else if ( (unsigned int)str2reg(v5) != -1 )
    {
      v10 = 0;
      goto LABEL_8;
    }
  }
  cleanup_argloc(v1);
  *(_DWORD *)v1 = 3;
  v7 = ptr;
  *(_DWORD *)(v1 + 8) = v2 | (v3 << 16);
  if ( v7 )
  {
    *(_QWORD *)&v13 = 0;
    qfree(v7);
  }
  return 0;
}

