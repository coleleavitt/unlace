/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002EF00
// Address: 0x000000014002EF00

//----- (000000014002EF00) ----------------------------------------------------
__int64 __fastcall sub_14002EF00(__int64 a1)
{
  __int16 v1; // r8
  char v3; // dl
  __int64 v4; // rdi
  unsigned __int64 v5; // r8
  __int64 v6; // rax
  const char *v7; // rcx
  __int8 *v8; // rax
  __int8 *v9; // rdi

  v1 = *(_WORD *)(a1 + 112);
  *(_BYTE *)(a1 + 212) = 0;
  sub_14002E3E0(*(__int64 **)(a1 + 192), 1, v1);
  if ( *(_BYTE *)(a1 + 204) != 0xAF )
  {
    v3 = -32;
    if ( *(_DWORD *)(a1 + 208) == 1 )
      v3 = 112;
    sub_1400347C0(a1, v3);
    v4 = *(_QWORD *)(a1 + 192);
    *(_BYTE *)(a1 + 204) = -81;
    v5 = *(_QWORD *)(v4 + 8) + 1LL;
    if ( v5 > *(_QWORD *)(v4 + 16) )
      *(_QWORD *)v4 = sub_14005ABE0(v4, *(void **)v4, v5, 1u);
    *(_BYTE *)(*(_QWORD *)v4 + (*(_QWORD *)(v4 + 8))++) = -81;
    ++*(_DWORD *)(a1 + 200);
  }
  sub_14002CC50((void **)(*(_QWORD *)(a1 + 184) + 32LL), (_QWORD *)(a1 + 384));
  if ( *(_QWORD *)(a1 + 176) )
  {
    v6 = *(_QWORD *)(a1 + 184);
    v7 = Str1;
    if ( *(_QWORD *)(v6 + 8) )
      v7 = *(const char **)v6;
    v8 = sub_14006CA14((__int64)v7, 0x2Eu);
    v9 = v8;
    if ( v8 )
    {
      if ( !strcmp(v8 + 1, "__getattr__") )
      {
        *(_DWORD *)(*(_QWORD *)(a1 + 176) + 48LL) = sub_14002D000(*(_QWORD *)(a1 + 96), *(_QWORD *)(a1 + 184));
      }
      else if ( !strcmp(v9 + 1, "__setattr__") )
      {
        *(_DWORD *)(*(_QWORD *)(a1 + 176) + 52LL) = sub_14002D000(*(_QWORD *)(a1 + 96), *(_QWORD *)(a1 + 184));
      }
    }
  }
  sub_140034610(a1);
  return 0;
}
