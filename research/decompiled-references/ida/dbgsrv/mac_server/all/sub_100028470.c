/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100028470
// Address: 0x0000000100028470

//----- (0000000100028470) ----------------------------------------------------
__int64 __fastcall sub_100028470(__int64 a1)
{
  _QWORD *v2; // r14
  char *v3; // rdi
  char *v4; // rax
  const char *v5; // r15

  *(_BYTE *)(a1 + 220) = 0;
  sub_100032C70(*(void ***)(a1 + 200), (__int64 *)1, *(_WORD *)(a1 + 120));
  if ( *(_BYTE *)(a1 + 212) != 0xAF )
    sub_100028570(a1);
  sub_100032E60((void **)(*(_QWORD *)(a1 + 192) + 32LL), (__int64 *)(a1 + 392));
  if ( *(_QWORD *)(a1 + 184) )
  {
    v2 = *(_QWORD **)(a1 + 192);
    v3 = v2[1] ? (char *)*v2 : (char *)_s1;
    v4 = strchr(v3, 46);
    if ( v4 )
    {
      v5 = v4 + 1;
      if ( !strcmp(v4 + 1, "__getattr__") )
      {
        *(_DWORD *)(*(_QWORD *)(a1 + 184) + 56LL) = sub_100033A20(*(__int64 **)(a1 + 104), (__int64)v2);
      }
      else if ( !strcmp(v5, "__setattr__") )
      {
        *(_DWORD *)(*(_QWORD *)(a1 + 184) + 60LL) = sub_100033A20(*(__int64 **)(a1 + 104), (__int64)v2);
      }
    }
  }
  sub_100026780(a1);
  return 0;
}
