/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_add
// Address: 0x00000001000783D0

//----- (00000001000783D0) ----------------------------------------------------
__int64 __fastcall rangeset_t_add(__int64 a1, __int64 a2)
{
  int v4; // w8
  char v5; // w0
  __int64 v6; // x19
  void *v8; // [xsp+8h] [xbp-38h] BYREF
  __int64 v9; // [xsp+10h] [xbp-30h]
  __int64 v10; // [xsp+18h] [xbp-28h]
  int v11; // [xsp+20h] [xbp-20h]
  char v12; // [xsp+24h] [xbp-1Ch]

  if ( !a1 || *(_QWORD *)a2 >= *(_QWORD *)(a2 + 8) )
    return 0;
  v4 = *(_DWORD *)(a1 + 32);
  v9 = 0;
  v10 = 0;
  v8 = nullptr;
  v11 = v4;
  if ( v4 == -1 )
    v5 = 0;
  else
    v5 = must_journal();
  v12 = v5;
  v6 = sub_1000780B8((char **)a1, (char *)a2, (__int64)&v8);
  if ( (_DWORD)v6 )
    sub_1000784D4((__int64)&v8);
  if ( v8 )
  {
    v9 = 0;
    qfree(v8);
  }
  return v6;
}
