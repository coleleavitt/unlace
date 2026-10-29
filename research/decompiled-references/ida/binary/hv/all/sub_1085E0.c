unsigned __int64 __fastcall sub_1085E0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // [rsp+0h] [rbp-8h]
  __int128 vars0; // [rsp+8h] [rbp+0h] BYREF
  __int64 vars10; // [rsp+18h] [rbp+10h]
  __int128 vars18; // [rsp+20h] [rbp+18h]
  __int128 vars28; // [rsp+30h] [rbp+28h]
  __int64 vars38; // [rsp+40h] [rbp+38h]
  unsigned __int64 vars40; // [rsp+48h] [rbp+40h]
  __int128 *vars58; // [rsp+60h] [rbp+58h]

  vars58 = &vars0;
  v6 = *(_QWORD *)(a1 + 30192);
  vars40 = __readfsqword(0x28u);
  vars0 = 0;
  LODWORD(v14) = 10506;
  vars18 = 0;
  vars28 = 0;
  vars38 = 0;
  HIDWORD(v14) = a4;
  if ( v6 )
  {
    v7 = sub_128230(v6, a2, a3);
    v8 = *(_QWORD *)(a1 + 30192);
    LODWORD(vars0) = v7;
    *((_QWORD *)&vars0 + 1) = sub_1280F0(v8, a2, v9, v10, v11, v12, v14, vars0, *((_QWORD *)&vars0 + 1));
    DWORD1(vars0) = *(_DWORD *)(a1 + 30204);
  }
  vars10 = a2;
  *(_QWORD *)&vars18 = a3;
  *((_QWORD *)&vars28 + 1) = a1;
  ZSTD_trace_decompress_end();
  return __readfsqword(0x28u) ^ vars40;
}

