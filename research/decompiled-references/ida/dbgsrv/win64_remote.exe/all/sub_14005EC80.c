/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005EC80
// Address: 0x000000014005EC80

//----- (000000014005EC80) ----------------------------------------------------
char __fastcall sub_14005EC80(__int8 *a1, __int64 a2, char *a3, char a4)
{
  char *v9; // rax
  char v10; // bl
  const char *v11; // [rsp+30h] [rbp-168h] BYREF
  void *Block[2]; // [rsp+38h] [rbp-160h] BYREF
  __int64 v13; // [rsp+48h] [rbp-150h]
  char v14[272]; // [rsp+50h] [rbp-148h] BYREF

  if ( !a3 || !*a3 )
    return 0;
  if ( sub_14005DC40((unsigned __int8 *)a3) )
  {
    sub_1400621E0(a1, a3, a2);
    return 1;
  }
  *(_OWORD *)Block = 0;
  v13 = 0;
  if ( sub_14005D470("PATH", (__int64)Block) && (v9 = (char *)sub_140062340((char *)Block[0], ";", &v11)) != nullptr )
  {
    while ( 1 )
    {
      if ( *v9 )
      {
        sub_14005DE20(a1, a2, v9, a3, 0);
        if ( sub_14005EF30(a1) )
          break;
      }
      v9 = (char *)sub_140062340(nullptr, ";", &v11);
      if ( !v9 )
        goto LABEL_10;
    }
  }
  else
  {
LABEL_10:
    if ( !a4 || (sub_14005DB20(v14, 260), sub_14005DE20(a1, a2, v14, a3, 0), !sub_14005EF30(a1)) )
    {
      v10 = 0;
      goto LABEL_14;
    }
  }
  v10 = 1;
LABEL_14:
  if ( Block[0] )
  {
    Block[1] = nullptr;
    j_free(Block[0]);
  }
  return v10;
}
