__int64 __fastcall sub_A5D450(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned __int8 a6)
{
  __int16 v6; // r15
  __int16 v8; // bp
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbp
  unsigned __int64 v13; // rax
  char v14; // dl
  unsigned int v15; // edx
  __int16 v16; // [rsp+8h] [rbp-E0h]
  unsigned __int64 v17; // [rsp+8h] [rbp-E0h]
  __int64 v18; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v19; // [rsp+18h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v21[184]; // [rsp+30h] [rbp-B8h] BYREF

  v6 = a6;
  v8 = a5;
  v16 = a4;
  ptr[0] = v21;
  ptr[1] = (void *)0x2000000000LL;
  sub_EFE6A0(ptr, a2, a3, a4, a5, a6);
  v18 = 0;
  v9 = sub_21FF620(a1 + 960, ptr, &v18, &off_2B16E80);
  if ( !v9 || (v10 = v9 - 8) == 0 )
  {
    v13 = sub_A55760((__int64 *)(a1 + 2352), 32, 3u);
    v14 = *(_BYTE *)v13;
    *(_QWORD *)(v13 + 16) = a2;
    *(_QWORD *)(v13 + 8) = 0;
    *(_QWORD *)(v13 + 24) = a3;
    *(_BYTE *)v13 = v14 & 0xF8 | 3;
    v15 = (8 * (v16 & 0x3FFF)) | *(_DWORD *)v13 & 0xFFFE0007;
    *(_DWORD *)v13 = v15;
    v17 = v13;
    *(_WORD *)(v13 + 2) = (2 * ((2 * v8) | v6)) | BYTE2(v15) & 1;
    sub_21FF4D0(a1 + 960, v13 + 8, v18, &off_2B16E80);
    v10 = v17;
  }
  sub_EFED90(&v19, v10);
  v11 = v19;
  if ( ptr[0] != v21 )
    free(ptr[0]);
  return v11;
}

