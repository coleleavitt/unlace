unsigned __int64 __fastcall sub_1AC4620(
        __int64 *a1,
        char a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        double a7,
        _BYTE *a8,
        size_t a9,
        __int64 *a10,
        __int64 a11,
        unsigned int a12)
{
  _QWORD *v14; // r9
  __int64 *v15; // rdx
  _BYTE *v16; // rax
  _WORD *v17; // r14
  int v18; // eax
  _QWORD *v19; // r9
  __int64 v20; // rsi
  unsigned int v21; // eax
  void **v22; // rbx
  __int64 v23; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // [rsp+8h] [rbp-100h]
  _QWORD *v27; // [rsp+8h] [rbp-100h]
  _QWORD *v28; // [rsp+8h] [rbp-100h]
  __int64 v29; // [rsp+10h] [rbp-F8h] BYREF
  __int64 v30; // [rsp+18h] [rbp-F0h]
  void **v31; // [rsp+20h] [rbp-E8h]
  int v32; // [rsp+28h] [rbp-E0h]
  char v33[4]; // [rsp+2Ch] [rbp-DCh] BYREF
  void *v34; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v35; // [rsp+38h] [rbp-D0h]
  void *v36; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v37; // [rsp+48h] [rbp-C0h]
  char v38; // [rsp+4Ch] [rbp-BCh]

  v29 = a3;
  v30 = a4;
  v33[0] = a2;
  if ( a2 == 19 )
    goto LABEL_16;
  v14 = sub_1AC0ED0((__int64)&v29);
  if ( v14 == (_QWORD *)(v29 + 8 * v30) )
    goto LABEL_16;
  v15 = a10;
  v16 = a8;
  if ( a8 == &a8[a9] )
    goto LABEL_16;
  if ( *a8 != 1 )
  {
    do
    {
      ++v16;
      ++v15;
      if ( &a8[a9] == v16 )
        goto LABEL_16;
    }
    while ( *v16 != 1 );
  }
  v17 = (_WORD *)*v15;
  if ( (*(_WORD *)*v15 & 0x1FF) != 0x3D )
  {
LABEL_16:
    v25 = (_QWORD *)sub_168B6C0((__int64)a1);
    return sub_EB3870(v25, a5, a6, a8, a9, a12, a10, a11);
  }
  v26 = v14;
  sub_BF7A50((__int64)&v34, *v15);
  v37 = 64;
  v38 = 0;
  v36 = &dword_0 + 1;
  v31 = &v36;
  v18 = sub_98E2D0((__int64 *)&v34, (__int64 *)&v36);
  v19 = v26;
  if ( v37 > 0x40 && v36 )
  {
    v32 = v18;
    operator delete[](v36);
    v18 = v32;
    v19 = v26;
  }
  v20 = v35;
  if ( v18 <= 0 )
  {
    if ( v35 > 0x40 && v34 )
      operator delete[](v34);
    goto LABEL_16;
  }
  if ( v35 > 0x40 )
  {
    if ( v34 )
    {
      v27 = v19;
      operator delete[](v34);
      v19 = v27;
    }
  }
  v28 = v19;
  v21 = sub_EEB7E0(*((_QWORD *)v17 + 2), v20, a7);
  v22 = v31;
  sub_168B9F0((__int64)v31, a1, v21, 0xB52u, 0);
  LODWORD(v34) = 0;
  v23 = sub_1587D10((__int64)v22, (int *)&v34);
  sub_1AA3B30(v23, v33);
  sub_15F7200(v22);
  sub_168B9F0((__int64)v22, a1, *(_DWORD *)(*v28 + 12LL), 0x1675u, 0);
  LOBYTE(v34) = *(_BYTE *)(*v28 + 8LL);
  sub_1AA5620((__int64)v22, (char *)&v34);
  sub_15F7200(v22);
  return 0;
}
