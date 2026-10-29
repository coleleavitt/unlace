/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14004F7A0
// Address: 0x000000014004F7A0

//----- (000000014004F7A0) ----------------------------------------------------
__int64 __fastcall sub_14004F7A0(__int64 a1, int a2)
{
  int v4; // edi
  unsigned int v5; // esi
  __int64 v6; // rbx
  char *v7; // rbp
  _QWORD *v8; // rcx
  bool v9; // bp
  int v10; // edi
  char *v11; // rcx
  _QWORD v13[2]; // [rsp+20h] [rbp-538h] BYREF
  _WORD v14[648]; // [rsp+30h] [rbp-528h] BYREF

  v14[0] = 0;
  memset(&v14[2], 0, 0x50Cu);
  v4 = *(_DWORD *)(a1 + 1144);
  v5 = 0;
  if ( a2 )
    v6 = 0;
  else
    v6 = *(_QWORD *)(a1 + 1136);
  v7 = (char *)(a1 + 8);
  sub_140002CE0((struct __crt_locale_pointers *)"Looking for GNU DWARF file at \"%s\"... ", v7);
  if ( sub_14005EF30(v7) )
  {
    v8 = sub_1400639D0((struct _exception *)v7, 0);
    v13[0] = v8;
    v9 = 0;
    if ( v8 )
    {
      v13[1] = v13;
      v10 = v4 - 10;
      if ( v10 )
      {
        if ( v10 == 1 )
        {
          v9 = sub_14004C5A0((__int64)v14, (__int64)v8);
          v8 = (_QWORD *)v13[0];
        }
      }
      else
      {
        v9 = 0;
      }
      sub_140063970(v8);
      if ( v9
        && (!v6
         || *(_WORD *)(v6 + 8) == v14[4] && !memcmp(&v14[5], (const void *)(v6 + 10), *(unsigned __int16 *)(v6 + 8))) )
      {
        v5 = 1;
      }
    }
  }
  v11 = "no.\n";
  if ( v5 )
    v11 = "found!\n";
  sub_140002CE0((struct __crt_locale_pointers *)v11);
  return v5;
}
