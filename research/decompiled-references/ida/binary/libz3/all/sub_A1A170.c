__int64 __fastcall sub_A1A170(__int64 a1, __int64 *a2, __int64 a3, double a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  _BOOL4 v9; // ecx
  void (__fastcall *v10)(__int64 *, __int64 *, __int64 *, _BOOL4); // rax
  void *v11; // r15
  void *v12; // rdi
  _BOOL4 v13; // r15d
  void *v14; // r13
  __int64 ***v15; // r8
  unsigned int *v16; // rdx
  unsigned int v17; // ecx
  unsigned int v18; // esi
  __int64 result; // rax
  void (__fastcall *v20)(__int64 *, __int64 *, __int64 *, _BOOL4); // [rsp+8h] [rbp-78h]
  void (__fastcall *v21)(__int64, __int64 *, __int64 *, _BOOL4); // [rsp+8h] [rbp-78h]
  _BOOL4 v22; // [rsp+18h] [rbp-68h]
  __int64 v23; // [rsp+20h] [rbp-60h] BYREF
  unsigned int **v24; // [rsp+28h] [rbp-58h]
  __int64 v25; // [rsp+30h] [rbp-50h] BYREF
  __int64 v26; // [rsp+38h] [rbp-48h]
  __int64 v27; // [rsp+40h] [rbp-40h] BYREF
  __int64 v28; // [rsp+48h] [rbp-38h]

  v6 = *(unsigned int *)(a1 + 1224);
  v23 = a1;
  v24 = (unsigned int **)(a1 + 48 * v6 + 1080);
  sub_998560((__int64)v24);
  v7 = *(_QWORD *)(a1 + 24);
  v8 = *a2;
  v9 = 1;
  ++*(_DWORD *)(a1 + 1224);
  v10 = *(void (__fastcall **)(__int64 *, __int64 *, __int64 *, _BOOL4))(v8 + 24);
  if ( !*(_DWORD *)(v7 + 712) )
    v9 = *(_DWORD *)(a1 + 1536) != 0x7FFFFFFF;
  v22 = v9;
  v20 = v10;
  v25 = 1;
  v26 = 0;
  v27 = 1;
  v28 = 0;
  sub_182CBA0(qword_1C7F2C0, &v27);
  BYTE4(v27) &= ~1u;
  LODWORD(v27) = 1;
  v20(a2, &v23, &v25, v22);
  v11 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v25);
  v12 = v11;
  v13 = 1;
  sub_182CBA0(v12, &v27);
  if ( !*(_DWORD *)(*(_QWORD *)(a1 + 24) + 712LL) )
    v13 = *(_DWORD *)(a1 + 1536) != 0x7FFFFFFF;
  v21 = *(void (__fastcall **)(__int64, __int64 *, __int64 *, _BOOL4))(*(_QWORD *)a3 + 24LL);
  v25 = 1;
  v26 = 0;
  v27 = 1;
  v28 = 0;
  sub_182CBA0(qword_1C7F2C0, &v27);
  BYTE4(v27) &= ~1u;
  LODWORD(v27) = 1;
  v21(a3, &v23, &v25, v13);
  v14 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v25);
  sub_182CBA0(v14, &v27);
  v15 = (__int64 ***)v24[1];
  if ( !v15 )
  {
    v16 = *v24;
    v17 = 0;
    if ( *v24 )
      goto LABEL_7;
LABEL_10:
    v18 = 0;
    goto LABEL_8;
  }
  v16 = *v24;
  v17 = *((_DWORD *)v15 - 1);
  if ( !*v24 )
    goto LABEL_10;
LABEL_7:
  v18 = *(v16 - 1);
LABEL_8:
  sub_A19BC0(a1, v18, v16, v17, v15, (__int64)&v23, a4, (__int64)"farkas");
  result = v23;
  --*(_DWORD *)(v23 + 1224);
  return result;
}

