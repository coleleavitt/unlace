__int64 __fastcall sub_18878F0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // r13
  __int64 result; // rax
  __int64 v14; // rdi
  __int64 v15; // rax
  __m128 *v16; // rdx
  __m128 *v17; // rax
  __m128 *v18; // rbx
  __int64 v19; // rdi
  __int64 (__fastcall *v20)(__int64); // rax
  unsigned __int64 v21; // rbx
  int v22; // esi
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r15
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // [rsp+8h] [rbp-F0h]
  unsigned __int8 v39; // [rsp+19h] [rbp-DFh] BYREF
  unsigned __int8 v40; // [rsp+1Ah] [rbp-DEh] BYREF
  unsigned __int8 v41; // [rsp+1Bh] [rbp-DDh] BYREF
  int v42; // [rsp+1Ch] [rbp-DCh] BYREF
  unsigned __int64 v43; // [rsp+20h] [rbp-D8h] BYREF
  unsigned __int64 v44; // [rsp+28h] [rbp-D0h] BYREF
  _QWORD v45[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v46; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v47; // [rsp+50h] [rbp-A8h] BYREF
  char v48; // [rsp+A8h] [rbp-50h]
  unsigned int v49; // [rsp+B0h] [rbp-48h]
  char v50; // [rsp+B4h] [rbp-44h]

  v7 = sub_1839D10(*(__int64 **)(a2 + 16), a2, a3, a4, a5);
  v12 = sub_F63270(*(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL), a2, v8, v9, v10, v11);
  result = 0;
  if ( v12 )
  {
    v14 = a1[3];
    if ( !v14 )
      return sub_1877D00(a1, (int)v12, a2 & 0xFFFFFFFFFFFFFFFBLL, 0);
    v15 = a1[1];
    v16 = nullptr;
    if ( (*(_BYTE *)(v15 + 87) & 0x20) != 0 )
      v16 = *(__m128 **)(v15 + 184);
    v17 = sub_1887770(v14, (__int64)v12, v16);
    v18 = v17;
    if ( !v17 )
      return sub_1877D00(a1, (int)v12, a2 & 0xFFFFFFFFFFFFFFFBLL, 0);
    v19 = (__int64)v17;
    v20 = *(__int64 (__fastcall **)(__int64))(v17->m128_u64[0] + 32);
    if ( v20 == sub_B94CC0 )
      sub_B709C0(v19);
    else
      v20(v19);
    v21 = (unsigned __int64)v18 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v21 )
    {
      if ( (*(_BYTE *)((*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v21 + 32LL))(v21) + 82) & 0x40) != 0
        && *((_BYTE *)a1 + 35) )
      {
        sub_168B9F0((__int64)v45, (__int64 *)(*a1 + 8LL), *(_DWORD *)a2, 0x1714u, 0);
        v22 = 6;
        if ( !a1[3] )
          v22 = *((_DWORD *)a1 + 4);
        if ( v48 )
        {
          sub_AE9DF0(&v47, v22, 2u);
        }
        else if ( v50 )
        {
          v32 = sub_168B9E0(v45);
          v36 = v46;
          if ( v46 )
          {
            v38 = v32;
            v36 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v46 + 32LL))(v46);
            v32 = v38;
          }
          v44 = v36;
          v37 = sub_1587BC0(v32, (__int64 *)&v44, v32, v33, v34, v35);
          sub_AE9DF0((unsigned __int8 **)(*v37 + 32LL * v49 + 8), v22, 2u);
        }
        v23 = sub_B72690(a1[1] + 72LL);
        if ( v23 )
          v23 -= 64LL;
        v43 = v23;
        v24 = sub_1852F10((__int64)v45, (__int64 *)&v43);
        v39 = 0;
        v25 = sub_1588420(v24, &v39);
        v44 = sub_1839D10(*(__int64 **)(a2 + 16), (__int64)&v39, v26, v27, v28);
        v29 = sub_162B6D0(v25, (__int64 *)&v44);
        v42 = 1;
        v30 = sub_1587D10(v29, &v42);
        v40 = 0;
        v31 = sub_1588420(v30, &v40);
        v41 = 0;
        sub_1588420(v31, &v41);
        sub_15F7200(v45);
        sub_18F5080(*a1, v21);
      }
      return (*(_BYTE *)((*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v21 + 32LL))(v21) + 82) & 0x40) != 0;
    }
    else
    {
      return sub_1877D00(a1, (int)v12, a2 & 0xFFFFFFFFFFFFFFFBLL, 0);
    }
  }
  return result;
}
