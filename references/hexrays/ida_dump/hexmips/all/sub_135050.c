unsigned __int64 __fastcall sub_135050(__int64 a1)
{
  __int64 *v2; // r14
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v8; // [rsp+10h] [rbp-48h] BYREF
  __int128 v9; // [rsp+18h] [rbp-40h]
  unsigned __int64 v10; // [rsp+28h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  if ( (*(_BYTE *)a1 & 0x20) == 0 )
  {
    v2 = (__int64 *)(a1 + 360);
    sub_1349B0(a1, 0, (__int64 *)(a1 + 360), 0, -1, 0);
    v4 = *(_QWORD *)(a1 + 520);
    v7[1] = 0;
    v8 = 0;
    v9 = 0;
    v5 = *(_QWORD *)(v4 + 8);
    for ( v7[0] = 0; v5; v5 = *(_QWORD *)(v5 + 8) )
    {
      sub_60080(v7, (__int64 *)(v5 + 240));
      sub_311F30(&v8, v5 + 256);
    }
    sub_60500(v2, v7);
    sub_313340(a1 + 376, &v8);
    sub_1331E0(*(_QWORD *)(a1 + 1504), v2, *(_QWORD *)(a1 + 920));
    v6 = v8;
    *(_DWORD *)a1 |= 0x20u;
    if ( v6 )
    {
      *(_QWORD *)&v9 = 0;
      qfree(v6);
    }
    qfree(v7[0]);
  }
  return v10 - __readfsqword(0x28u);
}
