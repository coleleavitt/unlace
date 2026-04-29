__int64 __fastcall sub_2537B0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v5; // r14
  __int64 i; // rbx
  __int64 *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rdx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rdi
  __int64 v15; // [rsp+10h] [rbp-98h] BYREF
  __int128 v16; // [rsp+18h] [rbp-90h]
  __int64 (__fastcall **v17)(int, int, int, int, int, int, char); // [rsp+30h] [rbp-78h] BYREF
  __int64 v18; // [rsp+38h] [rbp-70h]
  __int128 v19; // [rsp+40h] [rbp-68h]
  unsigned int v20; // [rsp+50h] [rbp-58h]
  __int64 v21; // [rsp+58h] [rbp-50h]
  char v22; // [rsp+60h] [rbp-48h]
  char v23; // [rsp+61h] [rbp-47h]
  __int64 *v24; // [rsp+68h] [rbp-40h]
  unsigned __int64 v25; // [rsp+78h] [rbp-30h]

  v3 = a1 + 128;
  v5 = *(_QWORD *)(a1 + 136);
  v25 = __readfsqword(0x28u);
  v16 = 0;
  v15 = 0;
  if ( v5 )
  {
    for ( i = 0; i != v5; ++i )
    {
      v7 = (__int64 *)(*(_QWORD *)(a1 + 128) + 32 * i);
      v8 = *v7;
      if ( *v7 )
      {
        v7[1] = 0;
        qfree(v8);
      }
    }
  }
  *(_QWORD *)(a1 + 136) = 0;
  v22 = 0;
  v18 = 0;
  v20 = 0;
  v21 = 0;
  v17 = &off_4C06F8;
  v23 = 1;
  v24 = &v15;
  v19 = 0;
  sub_264720(a1, &v17, a3);
  v9 = v20;
  *(_DWORD *)(a1 + 152) = v20;
  sub_32DC00(a1, &v15, v9, v3);
  *(_DWORD *)(a1 + 108) |= 2u;
  sub_339220(*(_QWORD *)(a1 + 216), 14, a1, v10, v11, v12);
  v13 = *(_QWORD *)(a1 + 216);
  if ( (*(_BYTE *)(v13 + 452) & 0xC0) == 0 )
    sub_3B0420(v13, a1);
  sub_3A0EF0(a1);
  v17 = &off_4C3D58;
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree(v18);
  }
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(v15);
  }
  return 1;
}
