/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_install_root
// Address: 0x00000000000B72EC

//----- (00000000000B72EC) ----------------------------------------------------
void __fastcall get_install_root(__int128 *a1)
{
  char *v2; // x0
  __int128 v3; // q1
  __int64 v4; // x9
  __int128 v5; // [xsp+0h] [xbp-40h] BYREF
  __int64 v6; // [xsp+10h] [xbp-30h]
  __int64 v7; // [xsp+18h] [xbp-28h]

  v7 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = idadir(nullptr);
  sub_39140(&v5, v2);
  v3 = *a1;
  v4 = *((_QWORD *)a1 + 2);
  *a1 = v5;
  *((_QWORD *)a1 + 2) = v6;
  v5 = v3;
  v6 = v4;
  if ( (_QWORD)v3 )
  {
    *((_QWORD *)&v5 + 1) = 0;
    qfree((void *)v3);
  }
}
