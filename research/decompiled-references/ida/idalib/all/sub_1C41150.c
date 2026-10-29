__int64 __fastcall sub_1C41150(__int64 a1, __m128 a2, __m128 a3)
{
  unsigned __int64 **v4; // rsi
  const __m128i *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // eax
  unsigned int v9; // ebp
  __int64 *v10; // rdi
  __int64 *v11; // r12
  unsigned __int32 *v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 *v16; // r12
  unsigned int v17; // eax
  __int64 v18; // rax
  __int64 v19; // r12
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r15
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // [rsp-10h] [rbp-E8h]
  __int64 v28; // [rsp+8h] [rbp-D0h] BYREF
  _BYTE v29[200]; // [rsp+10h] [rbp-C8h] BYREF

  v4 = *(unsigned __int64 ***)(a1 + 56);
  v5 = *(const __m128i **)(a1 + 24);
  v6 = *(_QWORD *)(a1 + 32);
  v7 = **(_QWORD **)(a1 + 40);
  ***(_DWORD ***)a1 = 0;
  v8 = sub_1C03A60(
         *(__m128 **)(a1 + 8),
         **(_DWORD **)(a1 + 16),
         a2,
         a3,
         **(unsigned int **)(a1 + 16),
         v5,
         v6,
         v7,
         **(_QWORD **)(a1 + 48),
         *v4);
  v9 = v8;
  if ( v8 )
  {
    if ( v8 == 2 )
    {
      v16 = (__int64 *)(*(_QWORD *)(a1 + 8) + 8LL);
      v17 = sub_EEB7E0(**(_QWORD **)(a1 + 48), v27, *(double *)a2.m128_u64);
      sub_168B9F0((__int64)v29, v16, v17, 0x1794u, 0);
      v18 = sub_1C3B6A0((__int64)v29, *(int **)(a1 + 16));
      v19 = v18;
      if ( *(_BYTE *)(v18 + 120) )
      {
        sub_1C2FE50((unsigned __int8 **)(v18 + 32), 0);
      }
      else if ( *(_BYTE *)(v18 + 132) )
      {
        v24 = sub_168B9E0((_QWORD *)v18);
        v25 = *(_QWORD *)(v19 + 16);
        if ( v25 )
          v25 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v25 + 32LL))(*(_QWORD *)(v19 + 16));
        v28 = v25;
        v26 = sub_1587BC0(v24, &v28, v20, v21, v22, v23);
        sub_1C2FE50((unsigned __int8 **)(*v26 + 32LL * *(unsigned int *)(v19 + 128) + 8), 0);
      }
      v28 = *(_QWORD *)(**(_QWORD **)(a1 + 48) + 8LL);
      sub_162B6D0(v19, &v28);
      sub_15F7200(v29);
    }
  }
  else
  {
    v10 = *(__int64 **)(a1 + 8);
    v11 = **(__int64 ***)(a1 + 56);
    v12 = *(unsigned __int32 **)(a1 + 16);
    v13 = *v11 & 0xFFFFFFFFFFFFFFFELL;
    if ( **(_DWORD **)(a1 + 64) )
    {
      *v11 = sub_178D8A0(v10, v10[76], *v12, *v11 & 0xFFFFFFFFFFFFFFFELL, (__m128i)a2);
      v14 = ***(_QWORD ***)(a1 + 56);
      if ( v14 == 1 )
        return 2;
      v12 = *(unsigned __int32 **)(a1 + 16);
      v10 = *(__int64 **)(a1 + 8);
      v13 = v14 & 0xFFFFFFFFFFFFFFFELL;
    }
    if ( (unsigned __int8)sub_1C3B150(
                            (__int64)v10,
                            **(_QWORD **)(a1 + 72),
                            v13,
                            *v12,
                            0xEFEu,
                            *(double *)a2.m128_u64,
                            *(double *)a3.m128_u64) )
    {
      v9 = 2;
      sub_1C40DB0(*(_QWORD *)(a1 + 8), ***(_QWORD ***)(a1 + 56) & 0xFFFFFFFFFFFFFFFELL, ***(_DWORD ***)a1);
    }
  }
  return v9;
}
