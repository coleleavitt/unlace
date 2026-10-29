void __fastcall sub_1A064C0(__int64 *a1, __int64 a2, const __m128i *a3, __m128i a4, double a5)
{
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  __m128i *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbp
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rdi
  int v25; // [rsp+0h] [rbp-E8h] BYREF
  unsigned int v26; // [rsp+4h] [rbp-E4h] BYREF
  __int64 v27; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v28; // [rsp+14h] [rbp-D4h] BYREF
  char v29; // [rsp+1Ch] [rbp-CCh]
  __int64 v30; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v31; // [rsp+28h] [rbp-C0h]
  _BYTE v32[184]; // [rsp+30h] [rbp-B8h] BYREF

  v7 = *a1;
  v30 = 0;
  v25 = 0;
  v31 = 0;
  if ( (unsigned __int8)sub_181EB00(v7, (__int64)a3, 0, &v30, &v25, a4, a5) )
  {
    if ( (unsigned __int8)sub_B13810(v30, v31, &v26) )
    {
      v10 = sub_1A06310(a1, a2, a3, v26, v8, v9);
      if ( v10 )
        sub_B8CC60(a2, (__int64)v10, v11, v12, v13, v14);
    }
    else
    {
      sub_168B9F0((__int64)v32, a1, a3[1].m128i_u32[2], 0x19C0u, 0);
      v15 = sub_15DD120((__int64)v32, (__int64)a3);
      v16 = sub_1682BA0(v15, (__int64)&v30);
      v17 = v16;
      if ( *(_BYTE *)(v16 + 120) )
      {
        v29 = 1;
        LODWORD(v28) = v25;
        HIDWORD(v28) = v25;
        sub_AEC610((__int64 *)(v16 + 32), &v28);
      }
      else if ( *(_BYTE *)(v16 + 132) )
      {
        v20 = sub_168B9E0((_QWORD *)v16);
        v23 = *(_QWORD *)(v17 + 16);
        if ( v23 )
          v23 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v23 + 32LL))(*(_QWORD *)(v17 + 16));
        v27 = v23;
        v24 = *sub_1587BC0(v20, &v27, v18, v19, v21, v22) + 32LL * *(unsigned int *)(v17 + 128);
        v29 = 1;
        LODWORD(v28) = v25;
        HIDWORD(v28) = v25;
        sub_AEC610((__int64 *)(v24 + 8), &v28);
      }
      sub_15F7200(v32);
    }
  }
}
