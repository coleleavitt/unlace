/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_62FD0
// Address: 0x0000000000062FD0

//----- (0000000000062FD0) ----------------------------------------------------
__int64 __fastcall sub_62FD0(__int64 a1)
{
  _QWORD *v2; // rax
  const char *v3; // rdi
  char *v4; // rax
  const char *v5; // r14

  *(_BYTE *)(a1 + 220) = 0;
  sub_6BEB0(*(_QWORD **)(a1 + 200), 1, *(_WORD *)(a1 + 120));
  if ( *(_BYTE *)(a1 + 212) != 0xAF )
    sub_630D0(a1);
  sub_6C0B0(*(_QWORD *)(a1 + 192) + 32LL, (_QWORD *)(a1 + 392));
  if ( *(_QWORD *)(a1 + 184) )
  {
    v2 = *(_QWORD **)(a1 + 192);
    v3 = v2[1] ? (const char *)*v2 : s1;
    v4 = strchr(v3, 46);
    if ( v4 )
    {
      v5 = v4 + 1;
      if ( !strcmp(v4 + 1, "__getattr__") )
      {
        *(_DWORD *)(*(_QWORD *)(a1 + 184) + 56LL) = sub_6CBA0(*(__int64 **)(a1 + 104), *(_QWORD *)(a1 + 192));
      }
      else if ( !strcmp(v5, "__setattr__") )
      {
        *(_DWORD *)(*(_QWORD *)(a1 + 184) + 60LL) = sub_6CBA0(*(__int64 **)(a1 + 104), *(_QWORD *)(a1 + 192));
      }
    }
  }
  sub_614E0(a1);
  return 0;
}
