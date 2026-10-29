__int64 __fastcall sub_86F200(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6, __int64 a7)
{
  __int64 v8; // rdx
  __int64 v12; // rbp
  __int64 v13; // rsi
  bool v14; // zf
  unsigned int v15; // r8d
  unsigned int v17; // ecx
  unsigned int v18; // edi
  __int64 (__fastcall *v19)(__int64); // rcx
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 (__fastcall *v23)(_QWORD); // rsi
  __int64 result; // rax
  int v25; // ecx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rdx
  int v30; // [rsp+8h] [rbp-C0h]
  int v31; // [rsp+8h] [rbp-C0h]
  unsigned int v32; // [rsp+10h] [rbp-B8h]
  __int64 v33; // [rsp+10h] [rbp-B8h]
  __int64 v34; // [rsp+10h] [rbp-B8h]
  __int64 v35; // [rsp+18h] [rbp-B0h]
  _QWORD v36[5]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+48h] [rbp-80h]
  __int64 v38; // [rsp+50h] [rbp-78h]
  __int64 v39; // [rsp+58h] [rbp-70h]
  __int64 v40; // [rsp+60h] [rbp-68h]
  __int64 v41; // [rsp+68h] [rbp-60h]
  unsigned int v42; // [rsp+70h] [rbp-58h]
  int v43; // [rsp+74h] [rbp-54h]
  unsigned int v44; // [rsp+78h] [rbp-50h]
  unsigned __int64 v45; // [rsp+88h] [rbp-40h]

  v8 = a4;
  v12 = (a5 >> 4) & 1;
  v13 = *(_QWORD *)(a1 + 32);
  v14 = (a5 & 0x20) == 0;
  v15 = *(unsigned __int16 *)(a6 + 106);
  v45 = __readfsqword(0x28u);
  if ( !v14 )
    v12 = 2;
  if ( !v13 || !*(_QWORD *)(v13 + 8 * v12) )
  {
    *(_DWORD *)(a6 + 112) = -45;
    return 4294967251LL;
  }
  v36[2] = a2;
  v36[1] = a2 + a4;
  v36[3] = a2 + a3;
  v17 = *(_DWORD *)(a1 + 112);
  v36[4] = a6;
  v37 = a2;
  v38 = 0;
  v44 = a5;
  if ( !a7 )
  {
    v41 = -1;
    v39 = 0;
    v40 = 0;
    if ( v17 > 0x989680 )
      v17 = 10000000;
    v42 = v17;
    v22 = *(unsigned int *)(v13 + 72);
    if ( v15 <= (unsigned int)v22 )
      v22 = v15;
    v43 = 2 * v22;
    v23 = *(__int64 (__fastcall **)(_QWORD))(v13 + 8 * v12);
    goto LABEL_24;
  }
  v39 = *(_QWORD *)(a7 + 40);
  v40 = *(_QWORD *)(a7 + 48);
  v41 = *(_QWORD *)(a7 + 88);
  v18 = *(_DWORD *)(a7 + 100);
  if ( v18 > v17 )
    v18 = v17;
  v19 = *(__int64 (__fastcall **)(__int64))(a7 + 24);
  v42 = v18;
  v20 = *(_QWORD *)(a7 + 32);
  if ( v19 )
  {
    v35 = v8;
    v32 = v15;
    v21 = v19(v20);
    v15 = v32;
    v8 = v35;
    v20 = v21;
  }
  v22 = *(unsigned int *)(v13 + 72);
  if ( v15 <= (unsigned int)v22 )
    v22 = v15;
  v43 = 2 * v22;
  v23 = *(__int64 (__fastcall **)(_QWORD))(v13 + 8 * v12);
  if ( !v20 )
  {
LABEL_24:
    v34 = v8;
    v31 = v22;
    result = sub_843E50(v36, (__int64 (__fastcall *)(_QWORD *, _QWORD, __int64, __int64))v23, v8, v22);
    v26 = v34;
    v25 = v31;
    goto LABEL_14;
  }
  v33 = v8;
  v30 = v22;
  v36[0] = *(_QWORD *)(v20 + 24);
  result = v23(v36);
  v25 = v30;
  v26 = v33;
LABEL_14:
  if ( v25 < (int)result )
  {
    v27 = a2;
    result = 0;
  }
  else
  {
    v27 = 0;
    if ( (int)result >= -2 )
      v27 = a2;
  }
  *(_QWORD *)(a6 + 72) = v26;
  v28 = v37;
  *(_QWORD *)(a6 + 24) = a1;
  *(_QWORD *)(a6 + 32) = v27;
  *(_QWORD *)(a6 + 96) = v28 - a2;
  v29 = v38;
  *(_QWORD *)(a6 + 64) = a3;
  *(_DWORD *)(a6 + 112) = result;
  *(_QWORD *)(a6 + 40) = v29;
  *(_BYTE *)(a6 + 104) = 2;
  *(_DWORD *)(a6 + 108) = a5;
  *(_OWORD *)(a6 + 80) = 0;
  return result;
}

