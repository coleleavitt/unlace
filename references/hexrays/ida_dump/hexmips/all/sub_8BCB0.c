unsigned __int64 __fastcall sub_8BCB0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int128 v3; // rt0
  __int64 v4; // rax
  __int64 v5; // rax
  __int128 v6; // rt0
  __int64 v8; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v9[4]; // [rsp+8h] [rbp-20h] BYREF

  v9[0] = __readfsqword(0x28u);
  sub_8B480((__int64)a2, 4, "gva_reg_attrs.gp");
  v2 = -*(_QWORD *)(a1 + 16);
  if ( *(__int64 *)(a1 + 16) > 0 )
    v2 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)&v3 = *(_QWORD *)(a1 + 16);
  *((_QWORD *)&v3 + 1) = v2;
  sub_7B740(a2, v3 >> 63);
  v4 = pack_dd(&v8, v9, (unsigned int)(*(_DWORD *)(a1 + 24) + 1));
  sub_7B560(a2, (__int64)&v8, v4 - (_QWORD)&v8);
  sub_8B480((__int64)a2, 4, "gva_reg_attrs.fp");
  v5 = -*(_QWORD *)(a1 + 40);
  if ( *(__int64 *)(a1 + 40) > 0 )
    v5 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)&v6 = *(_QWORD *)(a1 + 40);
  *((_QWORD *)&v6 + 1) = v5;
  sub_7B740(a2, v6 >> 63);
  return sub_7B6E0(a2, *(_DWORD *)(a1 + 48) + 1);
}
