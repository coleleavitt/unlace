/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5F4CC
// Address: 0x000000000005F4CC

//----- (000000000005F4CC) ----------------------------------------------------
__int64 __fastcall sub_5F4CC(_QWORD *a1)
{
  __int64 v2; // x19
  __int64 v3; // x8
  __int64 v4; // x19
  __int64 v5; // t1
  __int64 v6; // x23
  __int64 v7; // x9
  __int64 v8; // x25
  const char *v9; // x21
  _QWORD *v10; // x26
  const char *v11; // x0
  char *v12; // x1
  void *ptr[3]; // [xsp+0h] [xbp-90h] BYREF
  __int64 v15[5]; // [xsp+18h] [xbp-78h] BYREF

  v15[4] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = a1[13];
  v5 = *(_QWORD *)(v2 + 88);
  v4 = v2 + 88;
  v3 = v5;
  v6 = a1[6];
  v7 = *(_QWORD *)(v4 + 8);
  if ( 56 * v7 )
  {
    v8 = 56 * v7;
    if ( v6 )
      v9 = (const char *)a1[5];
    else
      v9 = &byte_F154B;
    v10 = (_QWORD *)(v3 + 8);
    while ( 1 )
    {
      v11 = *v10 ? (const char *)*(v10 - 1) : &byte_F154B;
      if ( !strcmp(v11, v9) )
        break;
      v8 -= 56;
      v10 += 7;
      if ( !v8 )
        goto LABEL_11;
    }
  }
  else
  {
LABEL_11:
    if ( v6 )
      v12 = (char *)a1[5];
    else
      v12 = &byte_F154B;
    sub_39140(ptr, v12);
    LOBYTE(v15[0]) = 2;
    memset(&v15[1], 0, 24);
    sub_5F628((char **)v4, (unsigned __int64)ptr);
    free_idcv(v15);
    if ( ptr[0] )
    {
      ptr[1] = nullptr;
      qfree(ptr[0]);
      ptr[0] = nullptr;
      ptr[2] = nullptr;
    }
  }
  return 0;
}
// F154B: using guessed type char byte_F154B;
