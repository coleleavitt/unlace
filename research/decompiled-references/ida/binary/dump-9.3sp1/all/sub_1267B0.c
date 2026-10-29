__int64 __fastcall sub_1267B0(__int64 a1, __int64 a2)
{
  unsigned __int16 **v3; // rax
  unsigned __int16 *v4; // rdx
  unsigned int v5; // ecx
  unsigned __int16 *v7; // rbp
  __int64 v8; // rdx
  _QWORD *v9; // r12
  __int64 v10; // rbp
  __int64 v11; // rdi
  int v12[6]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  if ( *(_BYTE *)a1 != 15 )
  {
    if ( !under_debugger )
      sub_383060(51129);
    BUG();
  }
  v3 = *(unsigned __int16 ***)(*(_QWORD *)(a1 + 8) + 8LL);
  v4 = v3[1];
  if ( v4 == (unsigned __int16 *)&byte_1 )
  {
    v12[0] = 0;
    copy_argloc();
    sub_126420(a1, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), (__int64)v12, *(_DWORD *)(a1 + 4));
    cleanup_argloc();
    return 1;
  }
  else
  {
    v5 = 0;
    if ( v4 == &word_2 )
    {
      v7 = *v3;
      if ( !(*v3)[8] )
      {
        v8 = v7[9];
        if ( (_DWORD)v8 == *(_DWORD *)(a1 + 4) / 2 && (_DWORD)v8 == v7[20] && (_DWORD)v8 == v7[21] )
        {
          v9 = (_QWORD *)j__qalloc_or_throw(32, a2, v8, 0);
          *v9 = 0xFFFFFFFF00000000LL;
          v9[1] = 0;
          v9[2] = 0xFFFFFFFF00000000LL;
          v9[3] = 0;
          sub_126420((__int64)v9, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), (__int64)v7, v7[9]);
          sub_126420((__int64)(v9 + 2), *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), (__int64)(v7 + 12), v7[21]);
          v10 = *(_QWORD *)(a1 + 8);
          if ( v10 )
          {
            clear_tinfo_t();
            v11 = *(_QWORD *)(v10 + 24);
            if ( v11 )
            {
              *(_QWORD *)(v10 + 32) = 0;
              qfree(v11);
            }
            cleanup_argloc();
            qfree(v10);
          }
          *(_BYTE *)a1 = 14;
          *(_QWORD *)(a1 + 8) = v9;
        }
      }
      return 1;
    }
  }
  return v5;
}
