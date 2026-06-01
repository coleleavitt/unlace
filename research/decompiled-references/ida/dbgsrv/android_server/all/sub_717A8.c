/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_717A8
// Address: 0x00000000000717A8

//----- (00000000000717A8) ----------------------------------------------------
__int64 __fastcall sub_717A8(__int64 a1, _DWORD *a2, const char **a3, unsigned __int8 **a4)
{
  int v6; // w25
  unsigned __int8 *v7; // x22
  int v10; // w8
  __int64 v11; // x0
  __int64 v12; // x0
  const char *v13; // x2
  const char *v15; // x3
  const char *v16; // x1
  void *ptr; // [xsp+0h] [xbp-60h] BYREF
  __int64 v18; // [xsp+8h] [xbp-58h]
  __int64 v19; // [xsp+10h] [xbp-50h]
  __int64 v20; // [xsp+18h] [xbp-48h]

  v20 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = a2[7];
  if ( v6 )
  {
    v7 = *a4;
    v10 = a2[7];
    while ( 1 )
    {
      v11 = sub_6A248(*(_QWORD *)(a1 + 8), v10);
      if ( *(_DWORD *)(v11 + 56) != -1 )
        break;
      v10 = *(_DWORD *)(v11 + 24);
      if ( !v10 )
        goto LABEL_5;
    }
    *a4 = nullptr;
    return sub_732B0(a1, a2, *(_DWORD *)(v11 + 56), (__int64)a3, v7, 1) & 1;
  }
  else
  {
LABEL_5:
    v18 = 0;
    v19 = 0;
    ptr = nullptr;
    v12 = sub_6A248(*(_QWORD *)(a1 + 8), v6);
    if ( *(_QWORD *)(v12 + 40) )
      v13 = *(const char **)(v12 + 32);
    else
      v13 = &byte_F154B;
    if ( a3[1] )
      v15 = *a3;
    else
      v15 = &byte_F154B;
    sub_3C748((__int64)&ptr, "%s.%s", v13, v15);
    if ( v18 )
      v16 = (const char *)ptr;
    else
      v16 = &byte_F154B;
    set_error_string(nullptr, v16);
    set_qerrno(0x602u);
    sub_71E4C(a1);
    if ( ptr )
    {
      v18 = 0;
      qfree(ptr);
      ptr = nullptr;
      v19 = 0;
    }
    return 0;
  }
}
// 71E4C: using guessed type __int64 __fastcall sub_71E4C(_QWORD);
// F154B: using guessed type char byte_F154B;
