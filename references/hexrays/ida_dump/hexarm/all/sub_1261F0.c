__int64 __fastcall sub_1261F0(__int64 a1)
{
  unsigned __int16 **v2; // rax
  unsigned __int16 *v3; // rdx
  unsigned int v4; // ecx
  unsigned __int16 *v6; // rbp
  int v7; // edx
  unsigned __int16 *v8; // rsi
  _QWORD *v9; // r12
  __int64 v10; // rbp
  __int64 v11; // rdi
  _DWORD v12[6]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  if ( *(_BYTE *)a1 != 15 )
  {
    if ( !under_debugger )
      sub_3835A0(51129);
    BUG();
  }
  v2 = *(unsigned __int16 ***)(*(_QWORD *)(a1 + 8) + 8LL);
  v3 = v2[1];
  if ( v3 == (unsigned __int16 *)&byte_1 )
  {
    v8 = *v2;
    v12[0] = 0;
    copy_argloc(v12, v8);
    sub_125E60(a1, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), (__int64)v12, *(_DWORD *)(a1 + 4));
    cleanup_argloc(v12);
    return 1;
  }
  else
  {
    v4 = 0;
    if ( v3 == &word_2 )
    {
      v6 = *v2;
      if ( !(*v2)[8] )
      {
        v7 = v6[9];
        if ( v7 == *(_DWORD *)(a1 + 4) / 2 && v7 == v6[20] && v7 == v6[21] )
        {
          v9 = (_QWORD *)j__qalloc_or_throw(32);
          *v9 = 0xFFFFFFFF00000000LL;
          v9[1] = 0;
          v9[2] = 0xFFFFFFFF00000000LL;
          v9[3] = 0;
          sub_125E60((__int64)v9, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), (__int64)v6, v6[9]);
          sub_125E60((__int64)(v9 + 2), *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), (__int64)(v6 + 12), v6[21]);
          v10 = *(_QWORD *)(a1 + 8);
          if ( v10 )
          {
            clear_tinfo_t(v10 + 48);
            v11 = *(_QWORD *)(v10 + 24);
            if ( v11 )
            {
              *(_QWORD *)(v10 + 32) = 0;
              qfree(v11);
            }
            cleanup_argloc(v10);
            qfree(v10);
          }
          *(_BYTE *)a1 = 14;
          *(_QWORD *)(a1 + 8) = v9;
        }
      }
      return 1;
    }
  }
  return v4;
}
