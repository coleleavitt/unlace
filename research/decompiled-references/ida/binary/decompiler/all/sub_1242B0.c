__int64 __fastcall sub_1242B0(__int64 a1)
{
  unsigned __int16 **v1; // rax
  unsigned __int16 *v2; // rdx
  unsigned int v3; // ecx
  unsigned __int16 *v5; // rbp
  int v6; // edx
  _QWORD *v7; // r12
  __int64 v8; // rbp
  int v9[6]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  if ( *(_BYTE *)a1 != 15 )
  {
    if ( !under_debugger )
      sub_37EA20(51129);
    BUG();
  }
  v1 = *(unsigned __int16 ***)(*(_QWORD *)(a1 + 8) + 8LL);
  v2 = v1[1];
  if ( v2 == (unsigned __int16 *)&byte_1 )
  {
    v9[0] = 0;
    copy_argloc();
    sub_123F20(a1, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), (__int64)v9, *(_DWORD *)(a1 + 4));
    cleanup_argloc();
    return 1;
  }
  else
  {
    v3 = 0;
    if ( v2 == &word_2 )
    {
      v5 = *v1;
      if ( !(*v1)[8] )
      {
        v6 = v5[9];
        if ( v6 == *(_DWORD *)(a1 + 4) / 2 && v6 == v5[20] && v6 == v5[21] )
        {
          v7 = (_QWORD *)j__qalloc_or_throw();
          *v7 = 0xFFFFFFFF00000000LL;
          v7[1] = 0;
          v7[2] = 0xFFFFFFFF00000000LL;
          v7[3] = 0;
          sub_123F20((__int64)v7, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), (__int64)v5, v5[9]);
          sub_123F20((__int64)(v7 + 2), *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), (__int64)(v5 + 12), v5[21]);
          v8 = *(_QWORD *)(a1 + 8);
          if ( v8 )
          {
            clear_tinfo_t();
            if ( *(_QWORD *)(v8 + 24) )
            {
              *(_QWORD *)(v8 + 32) = 0;
              qfree();
            }
            cleanup_argloc();
            qfree();
          }
          *(_BYTE *)a1 = 14;
          *(_QWORD *)(a1 + 8) = v7;
        }
      }
      return 1;
    }
  }
  return v3;
}
