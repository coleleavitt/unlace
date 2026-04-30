unsigned __int64 __fastcall sub_419FD0(__int64 a1)
{
  __int64 v2; // rax
  void *v3; // rdi
  size_t v4; // rbp
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 *v8; // r13
  __int64 v9; // rdi
  __int64 v10; // r14
  __int64 v11; // r12
  __int64 i; // rbp
  __int64 *v13; // r15
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rdi
  void *v25; // rax
  void *v26; // rsi
  __int64 v27; // [rsp+0h] [rbp-60h]
  void *src; // [rsp+8h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+10h] [rbp-50h]
  unsigned __int64 v30; // [rsp+20h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &hvui_common_t___vtable;
  *(_OWORD *)(a1 + 16) = 0;
  v2 = operator new(0x198u);
  *(_QWORD *)v2 = 0;
  *(_QWORD *)(v2 + 32) = 0;
  *(_QWORD *)(v2 + 40) = vault_with_events_t___vtable_at__16;
  *(_QWORD *)(v2 + 24) = &vault_with_events_t___vtable;
  *(_QWORD *)(v2 + 248) = v2 + 232;
  *(_QWORD *)(v2 + 256) = v2 + 232;
  *(_QWORD *)(v2 + 48) = 0;
  *(_QWORD *)(v2 + 72) = 0;
  *(_QWORD *)(v2 + 96) = 0;
  *(_QWORD *)(v2 + 120) = 0;
  *(_WORD *)(v2 + 160) = 0;
  *(_QWORD *)(v2 + 168) = 0;
  *(_DWORD *)(v2 + 232) = 0;
  *(_QWORD *)(v2 + 240) = 0;
  *(_QWORD *)(v2 + 264) = 0;
  *(_BYTE *)(v2 + 272) = 1;
  *(_QWORD *)(v2 + 280) = 0;
  *(_DWORD *)(v2 + 288) = 2;
  *(_DWORD *)(v2 + 296) = -3;
  *(_QWORD *)(v2 + 304) = 0;
  *(_OWORD *)(v2 + 8) = 0;
  *(_OWORD *)(v2 + 56) = 0;
  *(_OWORD *)(v2 + 80) = 0;
  *(_OWORD *)(v2 + 104) = 0;
  *(_OWORD *)(v2 + 128) = 0;
  *(_OWORD *)(v2 + 144) = 0;
  *(_OWORD *)(v2 + 176) = 0;
  *(_OWORD *)(v2 + 192) = 0;
  *(_OWORD *)(v2 + 208) = 0;
  *(_OWORD *)(v2 + 312) = 0;
  *(_OWORD *)(v2 + 344) = 0;
  *(_BYTE *)(v2 + 360) = 0;
  *(_QWORD *)(v2 + 361) = 0;
  *(_BYTE *)(v2 + 400) = 0;
  *(_QWORD *)(v2 + 336) = &hvui_progressor_t___vtable;
  *(_QWORD *)(v2 + 376) = 0;
  *(_QWORD *)(a1 + 32) = v2;
  *(_QWORD *)(a1 + 40) = 0;
  *(_OWORD *)(v2 + 384) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  v27 = a1 + 64;
  src = nullptr;
  *(_OWORD *)n = 0;
  src = (void *)qvector_reserve(&src, 0, 9, 1);
  n[0] = 9;
  strcpy((char *)src, "hexvault");
  v3 = src;
  v4 = n[0];
  *(_QWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  if ( v4 )
  {
    v25 = (void *)qalloc_or_throw(v4);
    *(_QWORD *)(a1 + 72) = v25;
    v26 = src;
    *(_QWORD *)(a1 + 88) = v4;
    memcpy(v25, v26, v4);
    *(_QWORD *)(a1 + 80) = v4;
    v3 = src;
  }
  *(_QWORD *)(a1 + 104) = 0;
  *(_WORD *)(a1 + 96) = -103;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 64) = &login_credentials_t___vtable;
  *(_QWORD *)(a1 + 152) = 0;
  *(_WORD *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 208) = 0;
  *(_DWORD *)(a1 + 232) = 0;
  *(_OWORD *)(a1 + 112) = 0;
  *(_OWORD *)(a1 + 136) = 0;
  *(_OWORD *)(a1 + 160) = 0;
  *(_OWORD *)(a1 + 192) = 0;
  *(_OWORD *)(a1 + 216) = 0;
  if ( v3 )
  {
    n[0] = 0;
    qfree(v3, (const char *)0xFFFFFF99LL);
  }
  *(_QWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 64) = &vault_credentials_t___vtable;
  v5 = *(_QWORD *)(a1 + 32);
  *(_OWORD *)(a1 + 248) = 0;
  v6 = qalloc_or_throw(24);
  *(_QWORD *)v6 = 0;
  v7 = v6;
  *(_OWORD *)(v6 + 8) = 0;
  sub_431330(v6);
  v8 = *(__int64 **)(v5 + 280);
  *(_QWORD *)(v5 + 280) = v7;
  if ( v8 )
  {
    v9 = *v8;
    if ( *v8 )
    {
      v10 = v8[1];
      if ( v10 )
      {
        v11 = 0;
        for ( i = 0; i != v10; ++i )
        {
          v13 = (__int64 *)(v9 + v11);
          v14 = *(_QWORD *)(v9 + v11 + 216);
          if ( v14 )
          {
            v13[28] = 0;
            qfree(v14, (const char *)0xFFFFFF99LL);
          }
          v15 = v13[24];
          if ( v15 )
          {
            v13[25] = 0;
            qfree(v15, (const char *)0xFFFFFF99LL);
          }
          v16 = v13[21];
          if ( v16 )
          {
            v13[22] = 0;
            qfree(v16, (const char *)0xFFFFFF99LL);
          }
          v17 = v13[18];
          if ( v17 )
          {
            v13[19] = 0;
            qfree(v17, (const char *)0xFFFFFF99LL);
          }
          v18 = v13[15];
          if ( v18 )
          {
            v13[16] = 0;
            qfree(v18, (const char *)0xFFFFFF99LL);
          }
          v19 = v13[12];
          if ( v19 )
          {
            v13[13] = 0;
            qfree(v19, (const char *)0xFFFFFF99LL);
          }
          v20 = v13[9];
          if ( v20 )
          {
            v13[10] = 0;
            qfree(v20, (const char *)0xFFFFFF99LL);
          }
          v21 = v13[6];
          if ( v21 )
          {
            v13[7] = 0;
            qfree(v21, (const char *)0xFFFFFF99LL);
          }
          v22 = v13[3];
          if ( v22 )
          {
            v13[4] = 0;
            qfree(v22, (const char *)0xFFFFFF99LL);
          }
          v23 = *v13;
          if ( *v13 )
          {
            v13[1] = 0;
            qfree(v23, (const char *)0xFFFFFF99LL);
          }
          v9 = *v8;
          v11 += 240;
        }
      }
      v8[1] = 0;
      qfree(v9, (const char *)0xFFFFFF99LL);
    }
    qfree(v8, (const char *)0xFFFFFF99LL);
  }
  vcred_init(v27);
  if ( *(_QWORD *)(a1 + 112) <= 1u )
    get_login_name(a1 + 104);
  bind_event_handler(*(_QWORD *)(a1 + 32) + 40LL, a1);
  return v30 - __readfsqword(0x28u);
}
