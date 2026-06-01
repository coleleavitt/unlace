/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140028A60
// Address: 0x0000000140028A60

//----- (0000000140028A60) ----------------------------------------------------
__int64 __fastcall sub_140028A60(__int64 *a1)
{
  unsigned __int64 v2; // rdi
  unsigned __int8 v3; // bl
  char *v4; // rsi
  int v5; // eax
  __int64 v6; // rax
  int v7; // r8d
  char *v8; // rax
  void *Block[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]

  *(_OWORD *)Block = 0;
  v11 = 0;
  v2 = sub_140025910((__int64)a1, (__int64 *)Block);
  if ( v2 )
  {
    sub_140028BA0((__int64)a1);
    v4 = (char *)(32 * a1[4] + a1[3] - 32);
    v5 = *(_DWORD *)(v2 + 20);
    if ( v5 )
    {
      while ( 1 )
      {
        v6 = sub_14002D9C0(a1[1], v5);
        v7 = *(_DWORD *)(v6 + 52);
        if ( v7 != -1 )
          break;
        v5 = *(_DWORD *)(v6 + 16);
        if ( !v5 )
          goto LABEL_6;
      }
      v3 = sub_140023CA0((__int64)a1, v2, v7, (__int64)Block, v4, 0);
    }
    else
    {
LABEL_6:
      v8 = (char *)sub_1400214F0((__int64 *)v2, (__int64)Block);
      sub_140028E70(v8, v4);
      v3 = 1;
    }
  }
  else
  {
    sub_140024990((__int64)a1);
    v3 = 0;
  }
  if ( Block[0] )
  {
    Block[1] = nullptr;
    j_free(Block[0]);
  }
  return v3;
}
