__int64 __fastcall sub_1CD6700(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8)
{
  unsigned int v9; // r13d
  unsigned int v10; // r12d
  int v12; // esi
  __int64 *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r15
  __int64 v16; // rcx
  unsigned __int64 v17; // rbx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v21; // rdx
  _QWORD *v22; // rcx
  __int64 v23; // rax
  _QWORD *v24; // r14
  unsigned int v25; // eax
  _QWORD *v26; // [rsp+0h] [rbp-110h]
  _DWORD v27[2]; // [rsp+8h] [rbp-108h] BYREF
  char v28; // [rsp+10h] [rbp-100h]
  __int64 v29; // [rsp+14h] [rbp-FCh]
  char v30; // [rsp+1Ch] [rbp-F4h]
  void *v31; // [rsp+20h] [rbp-F0h]
  __int64 v32; // [rsp+28h] [rbp-E8h]
  _BYTE v33[24]; // [rsp+30h] [rbp-E0h] BYREF
  _BYTE v34[200]; // [rsp+48h] [rbp-C8h] BYREF

  if ( *(_DWORD *)a4 && *(_DWORD *)(a4 + 4) && !*(_QWORD *)(a4 + 8) )
    return 0;
  v9 = a6;
  v10 = a3;
  if ( (_DWORD)a3 )
  {
    if ( a2 && !*(_QWORD *)(a2 + 64) )
    {
      sub_168BB30((__int64)v34, (__int64 *)(a1 + 8), a3, 5u, 0);
      v29 = 0;
      v30 = 0;
      v31 = v33;
      v32 = 0;
      v33[0] = 0;
      v33[16] = 0;
      v27[0] = v10;
      v27[1] = v10;
      v28 = 1;
      sub_1589170((__int64)v34, v27);
      if ( v31 != v33 )
        operator delete(v31);
      sub_15F7200(v34);
    }
    v12 = 5;
    v13 = (__int64 *)sub_15AB9E0(a4, *(_QWORD **)(a1 + 248), a3, a4, a5, a6);
    v15 = v21;
  }
  else
  {
    v12 = 6;
    v13 = (__int64 *)sub_15AB9E0(a4, *(_QWORD **)(a1 + 248), a3, a4, a5, a6);
    v15 = v14;
  }
  v17 = sub_1CD4E00(a1, v12, v10, v13, v15, a5, a7, a8, v9, 1);
  if ( (v17 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v22 = sub_A81BC0(*(_QWORD **)(a1 + 248), v17, 0, v16, v18, v19);
  if ( *(_BYTE *)(*(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 20 )
  {
    *((_DWORD *)v22 + 2) = v10;
    v22[2] = v15;
    *((_DWORD *)v22 + 6) = v9;
  }
  else
  {
    v23 = *v22;
    v24 = v22 + 1;
    if ( (unsigned __int8)(*(_WORD *)(*v22 + 18LL) >> 3) != 6 || *(_QWORD *)(v23 + 32) )
    {
      *((_DWORD *)v22 + 2) = v10;
      if ( (unsigned __int8)(*(_WORD *)(v23 + 18) >> 3) != 6 || *(_QWORD *)(v23 + 32) )
      {
        v22[2] = v15;
        if ( (unsigned __int8)(*(_WORD *)(v23 + 18) >> 3) != 6 || *(_QWORD *)(v23 + 32) )
          v24 = v22 + 3;
      }
    }
    v26 = v22;
    v25 = sub_F6C520(*(_QWORD *)(v23 + 40));
    v22 = v26;
    *(_DWORD *)(v25 * ((v24 != nullptr) + ((unsigned __int64)v24 - (v24 != nullptr)) / v25)) = v9;
  }
  return sub_1E61050(a1, v17, v22, a7, a8);
}
