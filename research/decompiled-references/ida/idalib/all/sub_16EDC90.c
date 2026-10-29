__int64 __fastcall sub_16EDC90(__int64 a1, unsigned __int64 a2, unsigned int a3, unsigned __int8 a4, double a5)
{
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // [rsp+8h] [rbp-C0h] BYREF
  _BYTE v23[184]; // [rsp+10h] [rbp-B8h] BYREF

  if ( (unsigned __int8)sub_16EC930(a1, a2, 3u, a5) )
    return 1;
  v8 = sub_EEC8C0(a2, a2, a5);
  v12 = sub_C00A40(a2, a2, v9, v10, v11);
  v15 = *(_QWORD *)(a1 + 232);
  v22 = v8;
  if ( *(char *)(v15 + 15) >= 0 )
  {
    sub_168B9F0((__int64)v23, (__int64 *)(a1 + 8), v12, 0x1307u, 0);
    sub_15884C0((__int64)v23, &v22);
    sub_15F7200(v23);
    return 1;
  }
  if ( (unsigned __int8)sub_16CF8E0(a1, a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32, a3, a4, v13, v14, a5)
    || (unsigned __int8)sub_16CECE0(
                          a1,
                          (_DWORD **)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 40),
                          a5,
                          v16,
                          v17,
                          v18,
                          v19)
    || (unsigned __int8)sub_16CF8E0(a1, a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 48, 4, a4, v20, v21, a5) )
  {
    return 1;
  }
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32) + 8LL);
  return a2;
}
