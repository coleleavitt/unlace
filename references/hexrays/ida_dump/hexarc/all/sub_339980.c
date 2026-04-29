__int64 __fastcall sub_339980(__int64 a1)
{
  __int64 (*v2)(); // rax
  unsigned int v3; // r15d
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // r12d
  int v9; // esi
  const char *v10; // r13
  int v11; // edx
  const char *v12; // r14
  int v13; // r9d
  int v14; // r8d
  const char *v15; // rsi
  char *v16; // rax
  const char *v17; // rdi
  const char *v18; // [rsp+0h] [rbp-80h] BYREF
  __int128 v19; // [rsp+8h] [rbp-78h]
  const char *v20; // [rsp+20h] [rbp-60h] BYREF
  __int128 v21; // [rsp+28h] [rbp-58h]
  int v22; // [rsp+42h] [rbp-3Eh]
  __int16 v23; // [rsp+46h] [rbp-3Ah]
  unsigned __int64 v24; // [rsp+48h] [rbp-38h]

  v24 = __readfsqword(0x28u);
  sub_322990(a1, 1);
  sub_3390B0(a1);
  v2 = ***(__int64 (****)())(a1 + 112);
  if ( v2 == sub_331CE0 )
    return 0;
  v3 = v2();
  if ( !(_BYTE)v3 )
  {
    return 0;
  }
  else
  {
    sub_1C7FD0((unsigned __int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 112) + 96LL) + 1408LL));
    sub_323CE0(a1, 1, v5, v6);
    sub_36DFC0(a1);
    sub_3CDD70(a1);
    hook_event_listener(0, a1 + 504, a1, 0);
    if ( (unsigned __int8)is_cvt64(0, a1 + 504) )
    {
      sub_3C67F0(a1);
      *(_BYTE *)(*(_QWORD *)(a1 + 840) + 286LL) |= 1u;
      sub_333FF0(a1);
      sub_382200(a1);
    }
    else
    {
      hook_event_listener(2, a1 + 456, a1, 0);
      hook_event_listener(3, a1 + 480, a1, 0);
      hook_event_listener(1, a1 + 528, a1, 0);
      register_post_event_visitor(3, a1 + 552, a1);
      sub_39E1E0(a1);
      sub_3BD450(1);
      sub_3B95B0(a1);
      sub_3B95F0(a1);
      if ( !(unsigned __int8)register_cfgopts(&off_4B2260, 27, sub_3325F0, a1) )
        sub_332790();
      v18 = nullptr;
      v19 = 0;
      sub_652F0((__int64 *)&v18, (__int64)"The hotkeys are %s: decompile, %s: decompile all.\n", "F5", "Ctrl-F5");
      sub_66B20((__int64)"%s plugin has been loaded (v%s)\n", "Hex-Rays Decompiler", a930260327);
      v7 = *(_QWORD *)(a1 + 840);
      v22 = 0;
      v23 = 0;
      if ( *(_DWORD *)(v7 + 84) || *(_WORD *)(v7 + 88) )
      {
        v8 = *(unsigned __int16 *)(v7 + 62);
        v9 = *(unsigned __int8 *)(v7 + 89);
        v10 = (const char *)&unk_3EF793;
        v11 = *(unsigned __int8 *)(v7 + 84);
        v21 = 0;
        v12 = (const char *)(v7 + 90);
        v13 = *(unsigned __int8 *)(v7 + 87);
        v14 = *(unsigned __int8 *)(v7 + 86);
        v20 = nullptr;
        if ( (unsigned __int16)v8 >= 2u )
          v10 = (const char *)&unk_3F00D3;
        sub_652F0(
          (__int64 *)&v20,
          (__int64)"%02X-%02X%02X-%02X%02X-%02X",
          v11,
          *(unsigned __int8 *)(v7 + 85),
          v14,
          v13,
          *(unsigned __int8 *)(v7 + 88),
          v9);
        v15 = s1;
        if ( (_QWORD)v21 )
          v15 = v20;
        sub_66B20((__int64)"  License: %s %s (%d user%s)\n", v15, v12, v8, v10);
        if ( v20 )
        {
          *(_QWORD *)&v21 = 0;
          qfree(v20);
        }
      }
      sub_66B20((__int64)"  %s\n  Please check the Edit/Plugins menu for more information.\n", v18);
      v16 = (char *)sub_333B90(*(_QWORD *)(a1 + 112), 1u);
      if ( v16 )
        *(_DWORD *)(a1 + 1336) = sub_334400(a1, v16, (__int64 *)(a1 + 1312), nullptr);
      if ( under_debugger )
        *(_DWORD *)(a1 + 1336) |= 0x8000u;
      sub_382200(a1);
      v17 = v18;
      *(_BYTE *)(*(_QWORD *)(a1 + 840) + 286LL) |= 2u;
      if ( v17 )
      {
        *(_QWORD *)&v19 = 0;
        qfree(v17);
      }
    }
  }
  return v3;
}
