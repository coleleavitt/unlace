__int64 __fastcall sub_18CBF50(
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
  unsigned __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // rbp
  _QWORD *v16; // rax
  __int64 v17; // rsi
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rbp
  _BYTE *v22; // r12
  unsigned __int8 v23; // al
  unsigned int v24; // ebx
  unsigned __int8 v25; // r14
  unsigned __int64 v26; // r15
  __int64 v29; // [rsp+18h] [rbp-60h] BYREF
  __int64 v30[11]; // [rsp+20h] [rbp-58h] BYREF

  v29 = a3;
  v9 = sub_F22F50(&v29);
  v10 = v9;
  if ( v9 )
  {
    v30[0] = *(_QWORD *)(v9 + 16);
    v11 = sub_F22BD0(v30, 0);
    v12 = sub_18CBE40((__int64)a1, v11);
    if ( v12 )
    {
      v13 = *(_QWORD *)(v10 + 8);
      if ( *(_QWORD *)(a2 + 8) != (v13 & 0xFFFFFFFFFFFFFFF8LL) || v12 != v11 )
      {
        v14 = *(_QWORD *)(*a1 + 248);
        sub_F22AA0((unsigned __int64 *)v30, v12);
        return sub_A80CA0(v14, *(_QWORD *)(a2 + 8), (v13 >> 2) & 1, v30[0]);
      }
      return v29;
    }
    return 0;
  }
  v16 = (_QWORD *)sub_F22F70(&v29);
  if ( v16 )
  {
    v17 = *(_QWORD *)(a2 + 8);
    v18 = *v16 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v17 )
    {
      if ( v17 != v18 )
      {
        a5 = 0;
        return sub_18BCA80(a1, a2, a4, v16[1], a4, a5, v10, a7);
      }
    }
    else if ( v18 | a5 & 0xFFFFFFFFFFFFFFF0LL )
    {
      LODWORD(v10) = a6;
      return sub_18BCA80(a1, a2, a4, v16[1], a4, a5, v10, a7);
    }
    return v29;
  }
  v19 = sub_F22BD0(&v29, 0);
  if ( v19 )
  {
    v20 = sub_18CBE40((__int64)a1, v19);
    if ( !v20 )
      return 0;
    v21 = *(_QWORD *)(*a1 + 248);
    sub_F22AA0((unsigned __int64 *)v30, v20);
    return sub_A80CA0(v21, *(_QWORD *)(a2 + 8), 0, v30[0]);
  }
  else
  {
    v22 = sub_F22F10(&v29);
    v23 = sub_F227A0((__int64)v22);
    v24 = *(_DWORD *)v22;
    v25 = v23;
    v26 = sub_F22790((__int64)v22);
    sub_F22160((__int64)v30, (__int64)v22);
    return sub_A80A10(*(_QWORD *)(*a1 + 248), (__int64)v30, v26, (v24 >> 3) & 0x3FFF, v25);
  }
}
