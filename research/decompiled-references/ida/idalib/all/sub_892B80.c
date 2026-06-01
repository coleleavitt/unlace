__int64 __fastcall sub_892B80(__int64 a1, __int64 a2, __int64 a3, char *a4, unsigned int a5, __int64 a6, __int64 a7)
{
  __int64 v8; // rdx
  __int64 v12; // rbp
  __int64 v13; // rsi
  bool v14; // zf
  unsigned int v15; // r8d
  unsigned int v17; // edi
  __int64 (__fastcall *v18)(__int64); // rcx
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 (__fastcall *v22)(_QWORD); // rsi
  __int64 result; // rax
  int v24; // ecx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rdx
  int v29; // [rsp+8h] [rbp-C0h]
  int v30; // [rsp+8h] [rbp-C0h]
  unsigned int v31; // [rsp+10h] [rbp-B8h]
  __int64 v32; // [rsp+10h] [rbp-B8h]
  __int64 v33; // [rsp+10h] [rbp-B8h]
  __int64 v34; // [rsp+18h] [rbp-B0h]
  _QWORD v35[5]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v36; // [rsp+48h] [rbp-80h]
  __int64 v37; // [rsp+50h] [rbp-78h]
  __int64 v38; // [rsp+58h] [rbp-70h]
  __int64 v39; // [rsp+60h] [rbp-68h]
  __int64 v40; // [rsp+68h] [rbp-60h]
  unsigned int v41; // [rsp+70h] [rbp-58h]
  int v42; // [rsp+74h] [rbp-54h]
  unsigned int v43; // [rsp+78h] [rbp-50h]
  unsigned __int64 v44; // [rsp+88h] [rbp-40h]

  v8 = (__int64)a4;
  v12 = (a5 >> 4) & 1;
  v13 = *(_QWORD *)(a1 + 32);
  v14 = (a5 & 0x20) == 0;
  v15 = *(unsigned __int16 *)(a6 + 106);
  v44 = __readfsqword(0x28u);
  if ( !v14 )
    v12 = 2;
  if ( !v13 || !*(_QWORD *)(v13 + 8 * v12) )
  {
    *(_DWORD *)(a6 + 112) = -45;
    return 4294967251LL;
  }
  v35[2] = a2;
  v35[1] = &a4[a2];
  v35[3] = a2 + a3;
  LODWORD(a4) = *(_DWORD *)(a1 + 112);
  v35[4] = a6;
  v36 = a2;
  v37 = 0;
  v43 = a5;
  if ( !a7 )
  {
    v40 = -1;
    v38 = 0;
    v39 = 0;
    if ( (unsigned int)a4 > (unsigned int)&loc_989680 )
      a4 = (char *)&loc_989680;
    v41 = (unsigned int)a4;
    v21 = *(unsigned int *)(v13 + 72);
    if ( v15 <= (unsigned int)v21 )
      v21 = v15;
    v42 = 2 * v21;
    v22 = *(__int64 (__fastcall **)(_QWORD))(v13 + 8 * v12);
    goto LABEL_24;
  }
  v38 = *(_QWORD *)(a7 + 40);
  v39 = *(_QWORD *)(a7 + 48);
  v40 = *(_QWORD *)(a7 + 88);
  v17 = *(_DWORD *)(a7 + 100);
  if ( v17 > (unsigned int)a4 )
    v17 = (unsigned int)a4;
  v18 = *(__int64 (__fastcall **)(__int64))(a7 + 24);
  v41 = v17;
  v19 = *(_QWORD *)(a7 + 32);
  if ( v18 )
  {
    v34 = v8;
    v31 = v15;
    v20 = v18(v19);
    v15 = v31;
    v8 = v34;
    v19 = v20;
  }
  v21 = *(unsigned int *)(v13 + 72);
  if ( v15 <= (unsigned int)v21 )
    v21 = v15;
  v42 = 2 * v21;
  v22 = *(__int64 (__fastcall **)(_QWORD))(v13 + 8 * v12);
  if ( !v19 )
  {
LABEL_24:
    v33 = v8;
    v30 = v21;
    result = sub_8677D0(v35, (__int64 (__fastcall *)(_QWORD *, _QWORD, __int64, __int64))v22, v8, v21);
    v25 = v33;
    v24 = v30;
    goto LABEL_14;
  }
  v32 = v8;
  v29 = v21;
  v35[0] = *(_QWORD *)(v19 + 24);
  result = v22(v35);
  v24 = v29;
  v25 = v32;
LABEL_14:
  if ( v24 < (int)result )
  {
    v26 = a2;
    result = 0;
  }
  else
  {
    v26 = 0;
    if ( (int)result >= -2 )
      v26 = a2;
  }
  *(_QWORD *)(a6 + 72) = v25;
  v27 = v36;
  *(_QWORD *)(a6 + 24) = a1;
  *(_QWORD *)(a6 + 32) = v26;
  *(_QWORD *)(a6 + 96) = v27 - a2;
  v28 = v37;
  *(_QWORD *)(a6 + 64) = a3;
  *(_DWORD *)(a6 + 112) = result;
  *(_QWORD *)(a6 + 40) = v28;
  *(_BYTE *)(a6 + 104) = 2;
  *(_DWORD *)(a6 + 108) = a5;
  *(_OWORD *)(a6 + 80) = 0;
  return result;
}
