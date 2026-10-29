char __fastcall sub_C5E1C0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdi
  __int64 *v8; // rbp
  __int64 v9; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int128 v15; // [rsp+0h] [rbp-28h] BYREF
  __int64 v16; // [rsp+10h] [rbp-18h]
  __int64 v17; // [rsp+18h] [rbp-10h]
  int v18; // [rsp+20h] [rbp-8h]

  v7 = *a1;
  if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x3Fu) <= 1 )
    return sub_C5E0F0(v7, a2, a1[1], 1u, a5, a6) != 0;
  if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x3F) == 0x20 )
  {
    sub_C3FAF0(v7, *(_QWORD *)(a2 + 16), a3, a4, a5);
    return sub_C5E260(a1, *(_QWORD *)(a2 + 24), v11, v12, v13, v14, v15, *((_QWORD *)&v15 + 1), v16, v17, v18);
  }
  else
  {
    v8 = (__int64 *)sub_E33C10(v7, a2, 108, 0);
    v9 = sub_EEC8C0(a2);
    if ( v8 )
    {
      *(_QWORD *)((char *)&v15 + 4) = v9;
      BYTE12(v15) = 1;
      sub_AEC610(v8, (__int64 *)((char *)&v15 + 4));
    }
    return 0;
  }
}
