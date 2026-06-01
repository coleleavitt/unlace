char __fastcall sub_1589210(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 v8; // r13
  __int64 v9; // r12
  unsigned int v10; // ebp
  int v11; // eax
  int v12; // edx
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // r13d
  size_t v18; // rax
  __int64 v19; // r14
  size_t v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v26; // [rsp+0h] [rbp-148h] BYREF
  __int64 v27; // [rsp+8h] [rbp-140h] BYREF
  _DWORD v28[6]; // [rsp+10h] [rbp-138h] BYREF
  void *v29; // [rsp+28h] [rbp-120h]
  __int64 v30; // [rsp+38h] [rbp-110h] BYREF
  _DWORD v31[6]; // [rsp+50h] [rbp-F8h] BYREF
  void *v32; // [rsp+68h] [rbp-E0h]
  __int64 v33; // [rsp+78h] [rbp-D0h] BYREF
  _BYTE v34[184]; // [rsp+90h] [rbp-B8h] BYREF

  v8 = HIDWORD(a4);
  v9 = a2;
  v10 = a4;
  v27 = a5;
  v26 = a6;
  if ( a7 )
  {
    LOBYTE(v11) = sub_FD3830(
                    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 264LL) + 32LL),
                    0x1D4Bu,
                    0,
                    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 264LL),
                    a5,
                    a6);
    if ( (_BYTE)v11 != 1 )
      return v11;
  }
  v11 = *(_DWORD *)(a1 + 16);
  if ( !v11 || (v12 = *(_DWORD *)(a1 + 20)) == 0 )
  {
    v21 = *(_QWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 16) = v10;
    v15 = 7495;
    *(_DWORD *)(a1 + 20) = v8;
    v14 = v21 + 8;
    if ( (unsigned int)v9 > 2 )
    {
LABEL_11:
      sub_168B9F0(v34, v14, a3, v15, 0);
      v16 = sub_15884C0((__int64)v34, &v27);
      sub_15884C0(v16, &v26);
      LOBYTE(v11) = sub_15F7200(v34);
      if ( !v10 )
        return v11;
      goto LABEL_12;
    }
LABEL_10:
    v15 = dword_261B890[v9];
    goto LABEL_11;
  }
  if ( !v10 )
  {
    v22 = *(_QWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 16) = 0;
    *(_DWORD *)(a1 + 20) = v8;
    v14 = v22 + 8;
    if ( (unsigned int)v9 > 2 )
    {
      sub_168B9F0(v34, v14, a3, 7495, 0);
      v23 = sub_15884C0((__int64)v34, &v27);
      sub_15884C0(v23, &v26);
      LOBYTE(v11) = sub_15F7200(v34);
      return v11;
    }
    goto LABEL_10;
  }
  LOBYTE(v11) = v11 == v10;
  if ( ((unsigned __int8)v11 & (v12 == (_DWORD)v8)) != 0 && v8 )
    return v11;
  v13 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 16) = v10;
  *(_DWORD *)(a1 + 20) = v8;
  v14 = v13 + 8;
  if ( (unsigned int)v9 <= 2 )
    goto LABEL_10;
  sub_168B9F0(v34, v14, a3, 7495, 0);
  v24 = sub_15884C0((__int64)v34, &v27);
  sub_15884C0(v24, &v26);
  sub_15F7200(v34);
LABEL_12:
  v11 = sub_15F0EF0(*(_QWORD *)(a1 + 8), (unsigned int)v8, 0);
  v17 = v11;
  if ( v11 )
  {
    sub_168B9F0(v34, *(_QWORD *)(a1 + 8) + 8LL, v10, 6439, 0);
    v18 = j__strlen("/* DISABLES CODE */ (");
    sub_9EC740((__int64)v28, v10, "/* DISABLES CODE */ (", v18, 0);
    v19 = sub_1589170((__int64)v34, v28);
    v20 = j__strlen(")");
    sub_9EC740((__int64)v31, v17, ")", v20, 0);
    sub_1589170(v19, v31);
    if ( v32 != &v33 )
      operator delete(v32);
    if ( v29 != &v30 )
      operator delete(v29);
    LOBYTE(v11) = sub_15F7200(v34);
  }
  return v11;
}
