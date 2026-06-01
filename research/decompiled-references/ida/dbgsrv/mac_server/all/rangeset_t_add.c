/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_add
// Address: 0x0000000100080890

//----- (0000000100080890) ----------------------------------------------------
__int64 __fastcall rangeset_t_add(__int64 a1, __int64 a2)
{
  int v2; // eax
  char v3; // al
  unsigned int v4; // ebx
  unsigned int v5; // eax
  __int128 v7; // [rsp+0h] [rbp-40h] BYREF
  __int64 v8; // [rsp+10h] [rbp-30h]
  int v9; // [rsp+18h] [rbp-28h]
  char v10; // [rsp+1Ch] [rbp-24h]

  if ( a1 && *(_QWORD *)a2 < *(_QWORD *)(a2 + 8) )
  {
    v2 = *(_DWORD *)(a1 + 32);
    v7 = 0;
    v8 = 0;
    v9 = v2;
    if ( v2 == -1 )
      v3 = 0;
    else
      v3 = must_journal();
    v10 = v3;
    LOBYTE(v5) = sub_100080530((char **)a1, (char *)a2, (unsigned __int64 *)&v7);
    v4 = v5;
    if ( (_BYTE)v5 )
      sub_100080980((__int64)&v7);
    if ( (_QWORD)v7 )
    {
      *((_QWORD *)&v7 + 1) = 0;
      qfree((void *)v7);
    }
  }
  else
  {
    return 0;
  }
  return v4;
}
// 1000808F6: variable 'v5' is possibly undefined
