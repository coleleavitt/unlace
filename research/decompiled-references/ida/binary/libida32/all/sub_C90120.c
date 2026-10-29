__int64 __fastcall sub_C90120(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  _QWORD *v4; // rbx
  void *v5; // r15
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned int v10; // eax
  __int64 v11; // [rsp+18h] [rbp-70h] BYREF
  void *v12; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v13; // [rsp+28h] [rbp-60h]
  void *v14; // [rsp+30h] [rbp-58h] BYREF
  size_t v15; // [rsp+38h] [rbp-50h]
  __int64 v16; // [rsp+40h] [rbp-48h] BYREF

  v2 = *(unsigned __int8 *)(a1 + 1360);
  if ( !(_BYTE)v2 )
  {
    v4 = **(_QWORD ***)(a1 + 1264);
    sub_BE05F0((__int64)&v14, a2, (__int64)v4);
    v5 = (void *)(v15 + 1);
    v6 = v4[2331] | 1LL;
    v7 = sub_A3FFA0(v4);
    v13 = sub_A73FE0((__int64)v4, *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL));
    if ( v13 > 0x40 )
      sub_21E1730(&v12, v5, 0);
    else
      v12 = v5;
    v8 = sub_A4D230((__int64)v4, v6, (__int64)&v12, nullptr, 0, 0);
    LODWORD(v11) = *(_DWORD *)(a2 + 16);
    v9 = sub_BE5AD0(v4, v14, v15, 0, 0, v8, (__int64)&v11, 1);
    v10 = sub_E05720(*(_QWORD *)(a1 + 1272), v9, 0);
    v11 = a2 | 4;
    v2 = sub_CE25C0(a1, v10, &v11);
    if ( v13 > 0x40 && v12 )
      operator delete[](v12);
    if ( v14 != &v16 )
      operator delete(v14);
  }
  return v2;
}

