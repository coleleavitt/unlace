void __fastcall sub_181FC60(__int64 a1, __int64 a2, const __m128i *a3, char a4, __m128i a5, double a6)
{
  unsigned __int8 v8; // al
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __m128i *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 (*v17)(void); // rax
  char v18; // al
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned int v22; // [rsp+8h] [rbp-D0h] BYREF
  unsigned int v23; // [rsp+Ch] [rbp-CCh] BYREF
  __int64 v24; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+18h] [rbp-C0h]
  _BYTE v26[184]; // [rsp+20h] [rbp-B8h] BYREF

  v8 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (unsigned int)v8 - 64 <= 2 )
  {
    sub_168B9F0((__int64)v26, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0x7Fu, 0);
    sub_15DD120((__int64)v26, (__int64)a3);
    sub_15F7200(v26);
  }
  else if ( a4 && ((v8 + 108) & 0x7B) != 0 && (unsigned int)v8 - 58 > 4 )
  {
    sub_168B9F0((__int64)v26, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0xCA8u, 0);
    v19 = sub_15DD120((__int64)v26, (__int64)a3);
    LOBYTE(v23) = (a3[2].m128i_i8[3] & 2) != 0;
    v20 = sub_1588420(v19, (unsigned __int8 *)&v23);
    LODWORD(v24) = 9;
    sub_180E4C0(v20, (int *)&v24);
    sub_15F7200(v26);
  }
  else
  {
    v22 = 0;
    v24 = 0;
    v25 = 0;
    if ( (unsigned __int8)sub_181F2D0(a1, (__int64)a3, &v24, &v22, a5, a6) )
    {
      if ( (unsigned __int8)sub_B1B4B0(v24, v25, (int *)&v23) )
      {
        v11 = v23;
        if ( v23 == 2 )
        {
          v17 = *(__int64 (**)(void))(**(_QWORD **)(*(_QWORD *)(a1 + 248) + 17448LL) + 408LL);
          if ( v17 != sub_102B950 )
          {
            v18 = v17();
            v11 = v23;
            if ( !v18 )
            {
              sub_168B9F0((__int64)v26, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0x19B9u, 0);
              sub_15F7200(v26);
              v23 = 0;
              v11 = 0;
            }
          }
        }
        if ( a4 )
          v12 = sub_1807A70(a1, a2, a3, v11, v9, v10);
        else
          v12 = sub_1807680(a1, a2, a3, v11, v9, v10);
        if ( v12 )
          sub_B8CC60(a2, (__int64)v12, v13, v14, v15, v16);
      }
      else
      {
        sub_168B9F0((__int64)v26, (__int64 *)(a1 + 8), v22, 0x19C0u, 0);
        v21 = sub_15DD120((__int64)v26, (__int64)a3);
        sub_1682BA0(v21, (__int64)&v24);
        sub_15F7200(v26);
      }
    }
  }
}
