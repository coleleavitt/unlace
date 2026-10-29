void __fastcall sub_1B20D10(__int64 *a1, __int64 a2, double a3)
{
  int v3; // r12d
  int i; // r14d
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdi
  __int64 *v17; // rbx
  unsigned int v18; // eax
  __int64 *v19; // [rsp+18h] [rbp-140h]
  unsigned __int64 v20; // [rsp+30h] [rbp-128h] BYREF
  __int64 v21; // [rsp+38h] [rbp-120h] BYREF
  __m128 v22[2]; // [rsp+40h] [rbp-118h] BYREF
  unsigned int v23[4]; // [rsp+60h] [rbp-F8h] BYREF
  __int64 v24; // [rsp+70h] [rbp-E8h]
  _QWORD v25[25]; // [rsp+90h] [rbp-C8h] BYREF

  v3 = *(_DWORD *)(a2 + 16);
  if ( v3 )
  {
    for ( i = 0; i != v3; ++i )
    {
      sub_EB5BF0(v22, a2, i);
      v6 = v22[0].m128_u64[0];
      v7 = sub_BFBAE0(v22[0].m128_u64[0]);
      if ( (*(_WORD *)v7 & 0x1FF) == 0x47 )
      {
        v8 = *(_QWORD *)(v7 + 16);
        if ( v8 )
        {
          if ( (*(_BYTE *)(v8 + 28) & 0x7Fu) - 40 <= 6 )
          {
            sub_1AFBE90((__int64)v23, *(_QWORD *)(*a1 + 8), v8);
            v20 = 0;
            if ( v24
              || (v16 = *(_QWORD *)(*a1 + 8),
                  v25[0] = v8,
                  v25[1] = &v20,
                  (unsigned __int8)sub_1AEA760(
                                     v16,
                                     v8,
                                     1,
                                     (__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))sub_1AE8020,
                                     (__int64)v25)) )
            {
              v19 = (__int64 *)*a1;
              v12 = sub_C00A40(v6, *a1, v9, v10, v11);
              sub_168B9F0((__int64)v25, v19, v12, 0x1148u, 0);
              v21 = sub_EEC8C0(v6, (__int64)v19, a3);
              sub_1587DB0((__int64)v25, &v21);
              sub_15F7200(v25);
              if ( v24 )
              {
                sub_1B20830(*(_QWORD *)*a1, *(_QWORD *)(*a1 + 8), v8, v23, 0);
              }
              else
              {
                v17 = (__int64 *)*a1;
                v18 = sub_C00A40(v20, (__int64)&v21, v13, v14, v15);
                sub_168B9F0((__int64)v25, v17, v18, 0x1934u, 0);
                v21 = sub_EEC8C0(v20, (__int64)v17, a3);
                sub_1587DB0((__int64)v25, &v21);
                sub_15F7200(v25);
              }
            }
          }
        }
      }
    }
  }
}
