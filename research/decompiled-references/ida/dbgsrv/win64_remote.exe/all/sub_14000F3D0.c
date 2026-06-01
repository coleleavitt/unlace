/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000F3D0
// Address: 0x000000014000F3D0

//----- (000000014000F3D0) ----------------------------------------------------
__int64 __fastcall sub_14000F3D0(__int64 a1, __int64 a2)
{
  __int64 *v5; // rax
  __int64 v6; // rsi
  void *v7; // r8
  DWORD v8; // r8d
  const char *v9; // r8

  if ( !*(_QWORD *)(a1 + 376) && (*(_DWORD *)(a1 + 632) & 0x80000) != 0 && sub_14005C830() )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(30191);
  }
  if ( !a2 )
    return 0xFFFFFFFFLL;
  if ( !*(_QWORD *)(a1 + 152) )
  {
    v5 = sub_140012840((__int64 **)(a1 + 1088), *(_DWORD *)(a2 + 4));
    v6 = (__int64)v5;
    if ( v5 )
    {
      if ( (v5[6] & 1) != 0 && sub_14001D970(a1, a2, *(_QWORD *)(a1 + 792)) )
      {
        v7 = (void *)(*(_QWORD *)(a2 + 8) + 7LL);
        *(_QWORD *)(v6 + 56) = v7;
        if ( !sub_14001B250(a1, v6, v7) )
        {
          if ( byte_1400CB61C )
            __debugbreak();
          sub_14005A480(637);
        }
      }
    }
    v8 = -2147418111;
    if ( *(_BYTE *)(a2 + 16) )
      v8 = 65538;
    if ( !ContinueDebugEvent(*(_DWORD *)a2, *(_DWORD *)(a2 + 4), v8) )
    {
      sub_140043190(a1, (struct __crt_locale_pointers *)"ContinueDebugEvent");
      return 0xFFFFFFFFLL;
    }
    v9 = "no";
    if ( *(_BYTE *)(a2 + 16) )
      v9 = "yes";
    sub_140043130(a1, (struct __crt_locale_pointers *)"ContinueDebugEvent: handled=%s\n", v9);
    if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) == 2 )
    {
      *(_QWORD *)(a1 + 1120) = -1;
      *(_QWORD *)(a1 + 1128) = -1;
      *(_QWORD *)(a1 + 792) = -1;
      *(_QWORD *)(a1 + 880) = -1;
      sub_14000E2B0(a1);
    }
  }
  *(_QWORD *)(a1 + 1184) = 0;
  return 1;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
