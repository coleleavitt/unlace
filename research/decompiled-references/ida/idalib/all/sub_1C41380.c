__int64 __fastcall sub_1C41380(__int64 a1, __m128 a2, __m128 a3)
{
  unsigned __int64 **v4; // rsi
  const __m128i *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rsi
  unsigned int v10; // eax
  unsigned int v11; // ebp
  __int64 *v13; // r13
  unsigned int v14; // eax
  int *v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r13
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rdi
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r14
  __int64 v30; // rax
  _QWORD *v31; // rax
  unsigned __int64 *v32; // [rsp-8h] [rbp-E0h]
  __int64 v33; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v34; // [rsp+10h] [rbp-C8h] BYREF
  char v35; // [rsp+18h] [rbp-C0h]
  _QWORD v36[2]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v37; // [rsp+30h] [rbp-A8h]
  unsigned __int8 *v38[11]; // [rsp+40h] [rbp-98h] BYREF
  char v39; // [rsp+98h] [rbp-40h]
  unsigned int v40; // [rsp+A0h] [rbp-38h]
  char v41; // [rsp+A4h] [rbp-34h]

  v4 = *(unsigned __int64 ***)(a1 + 56);
  v5 = *(const __m128i **)(a1 + 24);
  v6 = *(_QWORD *)(a1 + 32);
  v7 = **(_QWORD **)(a1 + 40);
  ***(_DWORD ***)a1 = 1;
  v32 = *v4;
  v8 = **(unsigned int **)(a1 + 16);
  v9 = (unsigned int)v8;
  v10 = sub_1C03A60(*(__m128 **)(a1 + 8), v8, a2, a3, v8, v5, v6, v7, **(_QWORD **)(a1 + 48), v32);
  v11 = v10;
  if ( v10 )
  {
    if ( v10 != 2 )
      return v11;
    v13 = (__int64 *)(*(_QWORD *)(a1 + 8) + 8LL);
    v14 = sub_EEB7E0(**(_QWORD **)(a1 + 48), v9, *(double *)a2.m128_u64);
    sub_168B9F0((__int64)v36, v13, v14, 0x1794u, 0);
    v15 = *(int **)(a1 + 16);
    if ( v39 )
    {
      v24 = *v15;
      v35 = 1;
      LODWORD(v34) = v24;
      HIDWORD(v34) = v24;
      sub_AEC610((__int64 *)v38, &v34);
    }
    else
    {
      if ( !v41 )
      {
LABEL_8:
        v34 = *(_QWORD *)(**(_QWORD **)(a1 + 48) + 8LL);
        sub_162B6D0((__int64)v36, &v34);
        sub_15F7200(v36);
        return v11;
      }
      v20 = sub_168B9E0(v36);
      v21 = v37;
      if ( v37 )
        v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 32LL))(v37);
      v33 = v21;
      v22 = sub_1587BC0(v20, &v33, v16, v17, v18, v19);
      v23 = *v22 + 32LL * v40;
      LODWORD(v22) = *v15;
      v35 = 1;
      LODWORD(v34) = (_DWORD)v22;
      HIDWORD(v34) = (_DWORD)v22;
      sub_AEC610((__int64 *)(v23 + 8), &v34);
    }
    if ( v39 )
    {
      sub_1C2FE50(v38, 1);
    }
    else if ( v41 )
    {
      v29 = sub_168B9E0(v36);
      v30 = v37;
      if ( v37 )
        v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 32LL))(v37);
      v34 = v30;
      v31 = sub_1587BC0(v29, &v34, v25, v26, v27, v28);
      sub_1C2FE50((unsigned __int8 **)(*v31 + 32LL * v40 + 8), 1);
    }
    goto LABEL_8;
  }
  if ( (unsigned __int8)sub_1C3B150(
                          *(_QWORD *)(a1 + 8),
                          **(_QWORD **)(a1 + 64),
                          ***(_QWORD ***)(a1 + 56) & 0xFFFFFFFFFFFFFFFELL,
                          **(_DWORD **)(a1 + 16),
                          0xEFEu,
                          *(double *)a2.m128_u64,
                          *(double *)a3.m128_u64) )
  {
    v11 = 2;
    sub_1C40DB0(*(_QWORD *)(a1 + 8), ***(_QWORD ***)(a1 + 56) & 0xFFFFFFFFFFFFFFFELL, ***(_DWORD ***)a1);
  }
  return v11;
}
