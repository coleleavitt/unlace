/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002A890
// Address: 0x000000014002A890

//----- (000000014002A890) ----------------------------------------------------
__int64 __fastcall sub_14002A890(__int64 a1, char *a2, char *a3, char a4)
{
  char *v8; // rax
  size_t v10; // rbp
  void *v11; // rax
  char *v12; // rax
  unsigned int v13; // ebx
  unsigned __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rax
  int v17; // r8d
  char *v18; // rax
  void *Block[2]; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v20; // [rsp+40h] [rbp-C8h]
  _BYTE v21[8]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+58h] [rbp-B0h]

  if ( !a1 )
  {
    v8 = (char *)sub_14002EAD0(a2);
    if ( v8 )
    {
      sub_140028E70(v8, a3);
      return 0;
    }
    else
    {
      sub_140063F70(0, a2);
      return sub_1400640B0(0x602u);
    }
  }
  if ( *(_BYTE *)a1 != 5 )
    return sub_1400640B0(0x5FCu);
  *(_OWORD *)Block = 0;
  v20 = 0;
  if ( a2 )
  {
    v10 = strlen(a2);
    v11 = nullptr;
    if ( v10 != -1 )
    {
      v11 = sub_14005ABE0((__int64)Block, nullptr, v10 + 1, 1u);
      Block[0] = v11;
    }
    Block[1] = (void *)(v10 + 1);
    memcpy(v11, a2, v10);
    *((_BYTE *)Block[0] + v10) = 0;
  }
  if ( a4 )
  {
    sub_1400210A0((__int64)v21, 0, 1u);
    v14 = *(_QWORD *)(a1 + 8);
    v15 = *(_DWORD *)(v14 + 20);
    if ( v15 )
    {
      while ( 1 )
      {
        v16 = sub_14002D9C0(v22, v15);
        v17 = *(_DWORD *)(v16 + 52);
        if ( v17 != -1 )
          break;
        v15 = *(_DWORD *)(v16 + 16);
        if ( !v15 )
          goto LABEL_16;
      }
      if ( !sub_140023CA0((__int64)v21, v14, v17, (__int64)Block, a3, 0) )
      {
        v13 = sub_140063DE0();
        goto LABEL_18;
      }
    }
    else
    {
LABEL_16:
      v18 = (char *)sub_1400214F0((__int64 *)v14, (__int64)Block);
      sub_140028E70(v18, a3);
    }
    v13 = 0;
LABEL_18:
    sub_140021420((__int64)v21);
    goto LABEL_19;
  }
  v12 = (char *)sub_1400214F0(*(__int64 **)(a1 + 8), (__int64)Block);
  sub_140028E70(v12, a3);
  v13 = 0;
LABEL_19:
  if ( Block[0] )
  {
    Block[1] = nullptr;
    j_free(Block[0]);
  }
  return v13;
}
