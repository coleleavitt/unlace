__int64 __fastcall sub_1B03D20(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        unsigned __int8 a7)
{
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // r12
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r9
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rbx
  _BYTE *v22; // r12
  unsigned __int8 v23; // al
  unsigned int v24; // ebp
  unsigned __int8 v25; // r14
  unsigned __int64 v26; // r15
  __int64 v28; // [rsp+18h] [rbp-60h] BYREF
  __int64 v29[11]; // [rsp+20h] [rbp-58h] BYREF

  v28 = a3;
  v9 = sub_F22F50(&v28);
  v10 = v9;
  if ( v9 )
  {
    v29[0] = *(_QWORD *)(v9 + 16);
    v11 = sub_F22BD0(v29, 0);
    v12 = sub_1B03C10((__int64)a1, v11);
    if ( v12 )
    {
      v13 = *(_QWORD *)(v10 + 8);
      if ( *(_DWORD *)(*a1 + 12632) || *(_QWORD *)(a2 + 8) != (v13 & 0xFFFFFFFFFFFFFFF8LL) || v12 != v11 )
      {
        v14 = *(_QWORD *)(*a1 + 248);
        sub_F22AA0((unsigned __int64 *)v29, v12);
        return sub_A80CA0(v14, *(_QWORD *)(a2 + 8), (v13 >> 2) & 1, v29[0]);
      }
      return v28;
    }
    return 0;
  }
  v16 = (_QWORD *)sub_F22F70(&v28);
  if ( v16 )
  {
    v17 = *(_QWORD *)(a2 + 8);
    v18 = a5;
    if ( v17 )
      v18 = 0;
    else
      LODWORD(v10) = a6;
    if ( *(_DWORD *)(*a1 + 12632) || v17 != (*v16 & 0xFFFFFFFFFFFFFFF8LL) || (v18 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      return sub_1AEA0F0(a1, a2, a4, v16[1], a4, v18, v10, a7);
    return v28;
  }
  v19 = sub_F22BD0(&v28, 0);
  if ( v19 )
  {
    v20 = sub_1B03C10((__int64)a1, v19);
    if ( !v20 )
      return 0;
    v21 = *(_QWORD *)(*a1 + 248);
    sub_F22AA0((unsigned __int64 *)v29, v20);
    return sub_A80CA0(v21, *(_QWORD *)(a2 + 8), 0, v29[0]);
  }
  else
  {
    v22 = sub_F22F10(&v28);
    v23 = sub_F227A0((__int64)v22);
    v24 = *(_DWORD *)v22;
    v25 = v23;
    v26 = sub_F22790((__int64)v22);
    sub_F22160((__int64)v29, (__int64)v22);
    return sub_A80A10(*(_QWORD *)(*a1 + 248), (__int64)v29, v26, (v24 >> 3) & 0x3FFF, v25);
  }
}
