/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400577F0
// Address: 0x00000001400577F0

//----- (00000001400577F0) ----------------------------------------------------
char *__fastcall sub_1400577F0(char *Block, char a2)
{
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx

  *(_QWORD *)Block = &off_140099B48;
  *((_QWORD *)Block + 8) = 0;
  if ( Block[220] )
  {
    sub_1400593C0((__int64)Block);
    DeleteSecurityContext((PCtxtHandle)(Block + 120));
    Block[220] = 0;
  }
  sub_1400545F0((_QWORD *)Block + 4);
  v4 = *((void **)Block + 21);
  if ( v4 )
  {
    *((_QWORD *)Block + 22) = 0;
    j_free(v4);
    *((_QWORD *)Block + 21) = 0;
    *((_QWORD *)Block + 23) = 0;
  }
  v5 = *((void **)Block + 18);
  if ( v5 )
  {
    *((_QWORD *)Block + 19) = 0;
    j_free(v5);
    *((_QWORD *)Block + 18) = 0;
    *((_QWORD *)Block + 20) = 0;
  }
  v6 = *((void **)Block + 10);
  if ( v6 )
  {
    *((_QWORD *)Block + 11) = 0;
    j_free(v6);
    *((_QWORD *)Block + 10) = 0;
    *((_QWORD *)Block + 12) = 0;
  }
  v7 = *((void **)Block + 5);
  if ( v7 )
  {
    *((_QWORD *)Block + 6) = 0;
    j_free(v7);
    *((_QWORD *)Block + 5) = 0;
    *((_QWORD *)Block + 7) = 0;
  }
  *(_QWORD *)Block = &off_1400996E8;
  if ( (a2 & 1) != 0 )
    j_j_free(Block);
  return Block;
}
// 1400996E8: using guessed type __int64 (__fastcall *off_1400996E8)();
// 140099B48: using guessed type __int64 (__fastcall *off_140099B48)(void *Block);
