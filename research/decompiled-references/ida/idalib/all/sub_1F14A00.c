__int64 __fastcall sub_1F14A00(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  __int64 (__fastcall *v5)(__int64); // rax
  int v6; // eax
  int v7; // r12d
  __int64 v8; // rdi
  char v9; // al
  void **v10; // rcx
  int v11; // esi
  unsigned int *v12; // rax
  __int64 v13; // r8
  unsigned __int8 *v14; // rax
  unsigned __int8 *i; // r8
  int v16; // edi
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 (__fastcall *v20)(__int64, __int64, unsigned __int64, __int64, __int64, __int64); // rdx
  __int64 (__fastcall *v21)(__int64, __int64, unsigned __int64, __int64, __int64, __int64); // rax
  int v22; // eax
  __int64 result; // rax
  __int64 v24; // r9
  __int64 v25; // rdi
  __int64 v26; // rcx
  _DWORD *v27; // rdx
  int v28; // eax
  __int64 v29; // r8
  bool v30; // zf
  __int64 v31; // rax
  __int64 *v32; // [rsp+8h] [rbp-C0h] BYREF
  __int64 v33; // [rsp+18h] [rbp-B0h] BYREF
  __int64 v34[2]; // [rsp+20h] [rbp-A8h] BYREF
  int v35; // [rsp+30h] [rbp-98h]
  int v36; // [rsp+34h] [rbp-94h]
  __m128 v37; // [rsp+38h] [rbp-90h]
  __int64 v38; // [rsp+48h] [rbp-80h]
  void *ptr[2]; // [rsp+50h] [rbp-78h] BYREF
  int v40; // [rsp+60h] [rbp-68h]
  char v41; // [rsp+64h] [rbp-64h]
  __int64 v42; // [rsp+68h] [rbp-60h] BYREF

  v3 = a1 + 24;
  v5 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 24) + 184LL);
  if ( v5 == sub_1EA8950 )
  {
    v6 = *(_DWORD *)(a1 + 9408) + 1;
    *(_DWORD *)(a1 + 9408) = v6;
    if ( v6 == 1 )
    {
      v25 = *(_QWORD *)(a1 + 496);
      if ( v25 )
        sub_224E010(v25);
    }
  }
  else
  {
    v5(a1 + 24);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 144) + 2320LL) + 21LL) & 2) == 0 )
  {
    v7 = 0;
    goto LABEL_5;
  }
  v33 = a2;
  v32 = &v33;
  if ( (unsigned __int8)sub_1EB0D20((__int64 *)(a1 + 10376), &v33, v34) )
  {
    v7 = *(_DWORD *)(v34[0] + 8);
    goto LABEL_5;
  }
  v26 = *(unsigned int *)(a1 + 10392);
  v27 = (_DWORD *)v34[0];
  v28 = *(_DWORD *)(a1 + 10384) + 1;
  v29 = (unsigned int)(4 * v28);
  ptr[0] = (void *)v34[0];
  if ( (unsigned int)v29 >= 3 * (int)v26 )
  {
    sub_1EDA030((__int64 *)(a1 + 10376), 2 * v26, v34[0], v26, v29, v24);
LABEL_32:
    sub_1EB0D20((__int64 *)(a1 + 10376), v32, ptr);
    v27 = ptr[0];
    v28 = *(_DWORD *)(a1 + 10384) + 1;
    goto LABEL_28;
  }
  if ( (int)v26 - *(_DWORD *)(a1 + 10388) - v28 <= (unsigned int)v26 >> 3 )
  {
    sub_1EDA030((__int64 *)(a1 + 10376), v26, v34[0], v26, v29, v24);
    goto LABEL_32;
  }
LABEL_28:
  v30 = *(_QWORD *)v27 == -4096;
  *(_DWORD *)(a1 + 10384) = v28;
  if ( !v30 )
    --*(_DWORD *)(a1 + 10388);
  v31 = v33;
  v27[2] = 0;
  v7 = 0;
  *(_QWORD *)v27 = v31;
LABEL_5:
  v8 = *(_QWORD *)(a1 + 520);
  ptr[1] = &byte_4;
  ptr[0] = &v42;
  v40 = 0;
  v41 = 1;
  if ( v8 )
    goto LABEL_6;
  if ( !(unsigned __int8)sub_1EBF210(a1) )
  {
    v8 = *(_QWORD *)(a1 + 520);
LABEL_6:
    v9 = sub_1FD1440(v8, *(_QWORD *)(a2 + 16) + 16LL, **(unsigned int **)(a2 + 16));
    v10 = ptr;
    if ( v9 )
      goto LABEL_7;
  }
  v10 = nullptr;
LABEL_7:
  v11 = 5381;
  v32 = (__int64 *)(a1 + 9328);
  v12 = *(unsigned int **)(a2 + 16);
  v13 = *v12;
  v14 = (unsigned __int8 *)(v12 + 4);
  v34[0] = (__int64)v14;
  v34[1] = v13;
  for ( i = &v14[v13]; v14 != i; v11 += v16 + 32 * v11 )
    v16 = *v14++;
  v32 = (__int64 *)(a1 + 9332);
  v35 = v11;
  v36 = v7;
  v38 = 0;
  v37 = _mm_loadh_ps((const double *)&v32);
  sub_1FDD8F0(a1 + 160, sub_1EE3570, v34, v10);
  sub_1EDA230(a1, a2);
  if ( !v41 )
    free(ptr[0]);
  v20 = sub_1F14160;
  v21 = *(__int64 (__fastcall **)(__int64, __int64, unsigned __int64, __int64, __int64, __int64))(*(_QWORD *)(a1 + 24)
                                                                                                + 192LL);
  if ( v21 != sub_1F14160 )
    return ((__int64 (__fastcall *)(__int64))v21)(v3);
  v22 = *(_DWORD *)(a1 + 9408);
  if ( v22 == 1 )
  {
    sub_1F10680((std::_V2 *)a1);
    v22 = *(_DWORD *)(a1 + 9408);
  }
  result = (unsigned int)(v22 - 1);
  *(_DWORD *)(a1 + 9408) = result;
  if ( !(_DWORD)result )
    return sub_1ED6E50(a1, a2, (unsigned __int64)v20, v17, v18, v19);
  return result;
}
