void __fastcall sub_181C420(__int64 *a1, __int64 a2, const __m128i *a3)
{
  unsigned int v4; // eax
  __int64 v5; // r9
  __m128i *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  void (*v12)(); // rax
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbp
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // [rsp+8h] [rbp-B0h] BYREF
  _BYTE v23[168]; // [rsp+10h] [rbp-A8h] BYREF

  if ( (*(_BYTE *)(a1[29] + 1) & 8) != 0 )
  {
    v4 = sub_15D8710((__int64)a3);
    v6 = sub_181BF30((__int64)a1, a2, a3, (_BYTE *)&dword_0 + 1, v4, v5);
    if ( v6 )
    {
      sub_B8CC60(a2, (__int64)v6, v7, v8, v9, v10);
      v11 = a1[32];
      v12 = *(void (**)())(*(_QWORD *)v11 + 112LL);
      if ( v12 != nullsub_155 )
        ((void (__fastcall *)(__int64, __int64))v12)(v11, a2);
    }
  }
  else
  {
    sub_168B9F0((__int64)v23, a1 + 1, a3[1].m128i_u32[2], 0xC85u, 0);
    v13 = sub_15DD120((__int64)v23, (__int64)a3);
    v14 = v13;
    if ( *(_BYTE *)(v13 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v13 + 32), 0, 2u);
      sub_15F7200(v23);
    }
    else
    {
      if ( *(_BYTE *)(v13 + 132) )
      {
        v17 = sub_168B9E0((_QWORD *)v13);
        v20 = *(_QWORD *)(v14 + 16);
        if ( v20 )
          v20 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v20 + 32LL))(*(_QWORD *)(v14 + 16));
        v22 = v20;
        v21 = sub_1587BC0(v17, &v22, v15, v16, v18, v19);
        sub_AE9DF0((unsigned __int8 **)(*v21 + 32LL * *(unsigned int *)(v14 + 128) + 8), 0, 2u);
      }
      sub_15F7200(v23);
    }
  }
}
