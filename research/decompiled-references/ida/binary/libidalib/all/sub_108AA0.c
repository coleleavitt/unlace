__int64 __fastcall sub_108AA0(int a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // r13
  __int64 server_connection2; // rax
  unsigned int v7; // ebx
  const char *v8; // rsi
  __int64 v10; // r12
  __int64 v11; // rsi
  __int64 v12; // r15
  __int64 i; // r13
  int v14; // edx
  float v15; // xmm0_4
  float v16; // xmm1_4
  const char *v17; // [rsp+0h] [rbp-58h] BYREF
  __int128 v18; // [rsp+8h] [rbp-50h]
  unsigned __int64 v19; // [rsp+18h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  if ( a1 )
  {
    v5 = *(_QWORD *)(get_current_config() + 640);
    if ( !*(_QWORD *)(v5 + 16) )
      goto LABEL_3;
  }
  else
  {
    v5 = *(_QWORD *)(get_current_config() + 632);
    if ( !*(_QWORD *)(v5 + 16) )
      goto LABEL_3;
  }
  if ( !strcmp(*(const char **)(v5 + 8), "lumina.hex-rays.com")
    && *(_WORD *)(v5 + 32) == 443
    && (int)sub_92580(
              0,
              (__int64)"AUTOHIDE REGISTRY\nHIDECANCEL\nDo you wish to send metadata to the public Lumina server?") <= 0 )
  {
    return 0;
  }
LABEL_3:
  server_connection2 = get_server_connection2();
  if ( !server_connection2 )
    return 0;
  v17 = nullptr;
  v18 = 0;
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64, const char **, _QWORD, _QWORD))(*(_QWORD *)server_connection2
                                                                                            + 80LL))(
         server_connection2,
         a2,
         a3,
         &v17,
         0,
         0);
  if ( (_BYTE)v7 )
  {
    v10 = a2[7];
    v11 = a2[4];
    if ( v10 == v11 && v10 == a2[1] )
    {
      if ( v10 )
      {
        v12 = 0;
        for ( i = 0; i != v10; ++i )
        {
          v14 = *(_DWORD *)(a2[3] + 4 * i);
          if ( v14 )
          {
            if ( v14 == 1 )
              ++v12;
            else
              sub_8F740((__int64)"%a: error %d\n", 0.0, *(_QWORD *)(*a2 + 8 * i));
          }
        }
        if ( v12 < 0 )
          v15 = (float)(v12 & 1 | (unsigned int)((unsigned __int64)v12 >> 1))
              + (float)(v12 & 1 | (unsigned int)((unsigned __int64)v12 >> 1));
        else
          v15 = (float)(int)v12;
        if ( v10 < 0 )
          v16 = (float)(v10 & 1 | (unsigned int)((unsigned __int64)v10 >> 1))
              + (float)(v10 & 1 | (unsigned int)((unsigned __int64)v10 >> 1));
        else
          v16 = (float)(int)v10;
        sub_8F740((__int64)"%zu new out of %zu (%f ratio)\n", v12, v10, (float)(v15 / v16));
        if ( v12 )
          sub_8F740((__int64)"*** Thank you for your contribution! ***\n");
      }
    }
    else
    {
      sub_8F740(
        (__int64)"The reported number of pushed entries (%zu), differs from the amount that had to be pushed (%zu).\n",
        v11,
        a2[7]);
    }
  }
  else
  {
    v8 = s1;
    if ( (_QWORD)v18 )
      v8 = v17;
    sub_8F740((__int64)"lumina: %s\n", v8);
  }
  if ( v17 )
  {
    *(_QWORD *)&v18 = 0;
    qfree();
  }
  return v7;
}

