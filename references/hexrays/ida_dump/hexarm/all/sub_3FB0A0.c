unsigned __int64 __fastcall sub_3FB0A0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v9; // [rsp+8h] [rbp-30h] BYREF
  __int128 v10; // [rsp+10h] [rbp-28h]
  unsigned __int64 v11; // [rsp+20h] [rbp-18h]

  v11 = __readfsqword(0x28u);
  v9 = 0;
  v10 = 0;
  if ( sub_CF9B0(0x7D5u, &v9, a2, 0, 1, 0, 0) <= 0 )
  {
    if ( !under_debugger )
      sub_3835A0(0xCEEBu, (__int64)&v9, 0.0);
    BUG();
  }
  v3 = v9;
  v4 = *a1;
  *a1 = *(_QWORD *)(v9 + 8);
  *(_QWORD *)(v3 + 8) = v4;
  if ( v3 )
  {
    v5 = v10;
    if ( (_QWORD)v10 )
    {
      v6 = 0;
      do
      {
        v7 = 3 * v6++;
        clear_tinfo_t(v3 + 8 * v7 + 8);
        v3 = v9;
      }
      while ( v5 != v6 );
    }
    *(_QWORD *)&v10 = 0;
    qfree(v3);
  }
  return v11 - __readfsqword(0x28u);
}
