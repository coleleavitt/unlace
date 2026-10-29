__int64 __fastcall sub_36D3F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v9; // [rsp+0h] [rbp-E8h] BYREF
  char v10; // [rsp+28h] [rbp-C0h]
  char v11; // [rsp+29h] [rbp-BFh]
  char v12; // [rsp+2Bh] [rbp-BDh]
  __int64 v13; // [rsp+30h] [rbp-B8h]
  unsigned __int64 v14; // [rsp+C8h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  v6 = setup_selector(
         *(_QWORD *)(a1 + 72),
         a2,
         a3,
         a4,
         a5,
         a6,
         *(_QWORD *)(a1 + 8),
         *(_QWORD *)(a1 + 40),
         0,
         0,
         0,
         0,
         0,
         -1,
         -1,
         -1,
         -1,
         -1,
         -1,
         -1,
         -1,
         -1,
         -1,
         -1,
         -1,
         -1,
         -1,
         -1,
         -1,
         0xFFFFFFFF00000000LL);
  v7 = *(unsigned int *)(a1 + 200);
  v13 = v6;
  v12 = *(_QWORD *)(a1 + 104);
  v10 = *(_QWORD *)(a1 + 136);
  v11 = *(_QWORD *)(a1 + 168);
  *(_QWORD *)(a2 + 8) = (unsigned __int8)add_segm_ex(&v9, 0, 0, v7);
  return 0;
}
