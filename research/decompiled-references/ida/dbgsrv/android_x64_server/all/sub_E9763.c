/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E9763
// Address: 0x00000000000E9763

//----- (00000000000E9763) ----------------------------------------------------
__int64 __fastcall sub_E9763(__int64 a1)
{
  _BYTE *v2; // rdi
  __int64 result; // rax
  __int64 v4; // rbx
  char *v5; // rax
  char *v6; // rax
  _BYTE *v7; // rax
  char *v8; // rbx
  char *v9; // rax
  char v10; // dl
  unsigned __int64 v11; // [rsp+0h] [rbp-30h] BYREF
  __int64 v12; // [rsp+8h] [rbp-28h] BYREF
  _QWORD v13[4]; // [rsp+10h] [rbp-20h] BYREF

  v2 = (_BYTE *)(a1 + 9 + strlen((const char *)(a1 + 9)) + 1);
  if ( *(_BYTE *)(a1 + 8) > 3u )
  {
    result = 255;
    if ( *v2 != 8 || v2[1] )
      return result;
    v2 += 2;
  }
  if ( *(_BYTE *)(a1 + 9) == 122 )
  {
    v4 = a1;
    v5 = sub_E93C5(v2, &v12);
    v6 = sub_E93EB(v5, v13);
    if ( *(_BYTE *)(v4 + 8) == 1 )
      v7 = v6 + 1;
    else
      v7 = sub_E93C5(v6, &v12);
    v8 = (char *)(v4 + 10);
    v9 = sub_E93C5(v7, &v12);
    while ( 1 )
    {
      v10 = *v8;
      if ( *v8 == 82 )
        return (unsigned __int8)*v9;
      if ( v10 == 80 )
      {
        v9 = sub_E961A(*v9 & 0x7F, nullptr, v9 + 1, &v11);
      }
      else
      {
        if ( v10 != 76 )
          return 0;
        ++v9;
      }
      ++v8;
    }
  }
  return 0;
}
