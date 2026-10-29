/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3D568
// Address: 0x000000000003D568

//----- (000000000003D568) ----------------------------------------------------
__int64 __fastcall sub_3D568(__int64 a1, __int64 a2, int a3)
{
  const char *v5; // x0
  FILE *v6; // x21
  unsigned int v7; // w19
  void *v8; // x0
  __int64 v9; // x20
  const char *v10; // x21
  int *v11; // x0
  const char *v12; // x3
  const char *v13; // x2
  void *ptr; // [xsp+80h] [xbp-50h] BYREF
  __int64 v16; // [xsp+88h] [xbp-48h]
  __int64 v17; // [xsp+90h] [xbp-40h]
  __int64 v18; // [xsp+98h] [xbp-38h]

  v18 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v16 = 0;
  v17 = 0;
  ptr = nullptr;
  sub_3C748((__int64)&ptr, "/proc/%d/task/%d/comm", *(_DWORD *)(a1 + 1844), a3);
  if ( v16 )
    v5 = (const char *)ptr;
  else
    v5 = &byte_F154B;
  v6 = fopenRT(v5);
  if ( v6 )
  {
    qgetline(a2, v6);
    qfclose(v6);
    v7 = 1;
    v8 = ptr;
    if ( !ptr )
      return v7;
    goto LABEL_11;
  }
  v10 = (const char *)ptr;
  v9 = v16;
  v11 = (int *)__errno(0);
  v12 = (const char *)winerr(*v11);
  if ( v9 )
    v13 = v10;
  else
    v13 = &byte_F154B;
  sub_3A0D8(a1, "%s: %s\n", v13, v12);
  v7 = 0;
  v8 = ptr;
  if ( ptr )
  {
LABEL_11:
    v16 = 0;
    qfree(v8);
    ptr = nullptr;
    v17 = 0;
  }
  return v7;
}
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
// F154B: using guessed type char byte_F154B;
