unsigned __int64 __fastcall sub_951030(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // rdi
  __int128 vars0; // [rsp+8h] [rbp+0h] BYREF
  __int64 vars10; // [rsp+18h] [rbp+10h]
  __int128 vars18; // [rsp+20h] [rbp+18h]
  __int128 vars28; // [rsp+30h] [rbp+28h]
  __int64 vars38; // [rsp+40h] [rbp+38h]
  unsigned __int64 vars40; // [rsp+48h] [rbp+40h]
  __int128 *vars58; // [rsp+60h] [rbp+58h]

  vars58 = &vars0;
  v5 = *(_QWORD *)(a1 + 30192);
  vars40 = __readfsqword(0x28u);
  vars0 = 0;
  vars18 = 0;
  vars28 = 0;
  vars38 = 0;
  if ( v5 )
  {
    v6 = sub_950DE0(v5);
    v7 = *(_QWORD *)(a1 + 30192);
    LODWORD(vars0) = v6;
    *((_QWORD *)&vars0 + 1) = sub_950CA0(v7);
    DWORD1(vars0) = *(_DWORD *)(a1 + 30204);
  }
  vars10 = a2;
  *(_QWORD *)&vars18 = a3;
  *((_QWORD *)&vars28 + 1) = a1;
  ZSTD_trace_decompress_end();
  return __readfsqword(0x28u) ^ vars40;
}

