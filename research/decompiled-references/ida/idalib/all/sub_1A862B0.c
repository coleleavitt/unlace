__int64 __fastcall sub_1A862B0(
        _QWORD *a1,
        int a2,
        _BYTE *a3,
        __int64 a4,
        __int64 a5,
        double a6,
        double a7,
        __int64 a8,
        int a9)
{
  _QWORD *v12; // r13
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r14
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rax
  __int64 v19; // rcx
  char *v20; // rbp
  unsigned int v21; // eax
  _BOOL8 v22; // rbx
  char *v23; // rtt
  __int64 v24; // rbp
  unsigned __int64 v25; // rbx
  unsigned int v26; // eax
  __int64 v27; // rdx
  int v28; // ecx
  __int64 v30; // [rsp+0h] [rbp-58h]
  unsigned __int64 v31; // [rsp+0h] [rbp-58h]
  _QWORD *v32; // [rsp+8h] [rbp-50h]

  v12 = (_QWORD *)sub_168B6C0((__int64)a1);
  v13 = sub_A750A0((__int64)v12, v12[2392], nullptr, 0, a3, a4, 0);
  v14 = sub_A74EC0((__int64)v12, v13);
  v18 = sub_A81BC0(v12, v14, 0, v15, v16, v17);
  v19 = *v18;
  *((_DWORD *)v18 + 2) = 0;
  v20 = (char *)v18 + 12;
  v32 = v18;
  v30 = v19;
  v21 = sub_F6C520(*(_QWORD *)(v19 + 32));
  v22 = v20 != nullptr;
  v23 = &v20[-v22];
  v24 = *(_QWORD *)(v30 + 32);
  v25 = v21 * ((unsigned __int64)v23 / v21 + v22);
  *(_BYTE *)(v25 + 16) = 0;
  v31 = v25 + 8 * ((4 * ((*(_BYTE *)(v24 + 19) >> 2) + 2 * ((*(_WORD *)(v24 + 18) >> 3) & 0x7Fu)) + 23) >> 3) + 8;
  v26 = sub_F6C520(*(_QWORD *)(v24 + 24));
  sub_F6DC70(v12, *(_QWORD *)(v24 + 24), v26 * ((v31 - (v31 != 0)) / v26 + (v31 != 0)), 0);
  *(_QWORD *)v25 = 0;
  *(_DWORD *)(v25 + 8) = a2;
  *(_DWORD *)(v25 + 12) = a9;
  if ( (_DWORD)a4 )
  {
    v27 = 0;
    do
    {
      v28 = *(_DWORD *)(a5 + v27);
      v27 += 4;
      *(_DWORD *)(v27 + v25 + (*(_WORD *)(v24 + 18) & 0x3F8) + 20) = v28;
    }
    while ( 4LL * (unsigned int)(a4 - 1) + 4 != v27 );
  }
  return sub_1E61050(*a1, v14, v32, a6, a7);
}
