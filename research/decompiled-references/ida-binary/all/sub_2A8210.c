unsigned __int64 __fastcall grcb_toggle_contents(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdi
  __int64 v21; // [rsp+0h] [rbp-58h] BYREF
  __int64 v22; // [rsp+8h] [rbp-50h]
  __int64 v23; // [rsp+10h] [rbp-48h]
  __int64 v24; // [rsp+18h] [rbp-40h]
  __int64 v25; // [rsp+20h] [rbp-38h]
  __int128 v26; // [rsp+28h] [rbp-30h]
  unsigned __int64 v27; // [rsp+38h] [rbp-20h]

  v7 = *(_QWORD *)(a1 + 8);
  v8 = *(unsigned int *)(a2 + 4);
  v27 = __readfsqword(0x28u);
  v21 = 56;
  v10 = *(_QWORD *)(v7 + 440);
  v26 = 0;
  v22 = -1;
  LODWORD(v23) = 0;
  v24 = -1;
  v25 = 0;
  if ( v10 )
    v10 = *(_QWORD *)(v10 + 8);
  get_node_info(&v21, *(_QWORD *)(v10 + 72), v8, a4, a5, a6);
  v11 = *(_QWORD *)(a1 + 8);
  v12 = *(_QWORD *)(v11 + 440);
  v13 = v23 | 1;
  v14 = *(unsigned int *)(a2 + 4);
  if ( (v23 & 1) != 0 )
    v13 = v23 & 0xFFFFFFFE;
  LODWORD(v23) = v13;
  if ( v12 )
    v12 = *(_QWORD *)(v12 + 8);
  ((void (__fastcall *)(__int64, __int64, __int64, __int64 *, __int64))sub_2B54C0)(v11, v12, v14, &v21, 16);
  v19 = v25;
  ++*(_DWORD *)(a1 + 16);
  if ( v19 )
  {
    *(_QWORD *)&v26 = 0;
    qfree(v19, (const char *)v12, v15, v16, v17, v18, v21, v22, v23, v24);
  }
  return v27 - __readfsqword(0x28u);
}
