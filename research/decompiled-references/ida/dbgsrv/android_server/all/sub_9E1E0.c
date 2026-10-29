/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9E1E0
// Address: 0x000000000009E1E0

//----- (000000000009E1E0) ----------------------------------------------------
__int64 __fastcall sub_9E1E0(__int64 a1, __int64 a2)
{
  __int64 v4; // x0
  __int64 v5; // x21
  char *v6; // x1
  __int64 v7; // x0
  unsigned int v8; // w23
  unsigned int v9; // w20
  unsigned int v10; // w0
  int v12; // [xsp+8h] [xbp-68h] BYREF
  void *ptr; // [xsp+10h] [xbp-60h]
  __int64 v14; // [xsp+18h] [xbp-58h]
  __int64 v15; // [xsp+20h] [xbp-50h]
  __int64 v16; // [xsp+28h] [xbp-48h]
  int8x16x2_t v17; // 0:q0.32

  v16 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = sub_9DBD8();
  v5 = v4;
  if ( *(_QWORD *)(a1 + 48) )
    v6 = *(char **)(a1 + 40);
  else
    v6 = &byte_F154B;
  v7 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD))(*(_QWORD *)v4 + 488LL))(v4, v6, 0);
  if ( (v7 & 0x80000000) != 0 )
  {
    if ( !under_debugger )
      interr(30055);
    __break(1u);
    sub_39134((void *)v7);
  }
  v8 = v7;
  v9 = idcv_int64(a1, v17);
  if ( !v9 )
  {
    v12 = -2;
    v14 = 0;
    v15 = 0;
    ptr = *(void **)(a1 + 8);
    v10 = sub_9DBE4();
    *(_QWORD *)(a2 + 8) = (*(int (__fastcall **)(__int64, _QWORD, _QWORD, int *, _QWORD))(*(_QWORD *)v5 + 232LL))(
                            v5,
                            v10,
                            v8,
                            &v12,
                            0);
    if ( v12 >= -1 )
    {
      if ( ptr )
      {
        v14 = 0;
        qfree(ptr);
        ptr = nullptr;
        v15 = 0;
      }
      v12 = -2;
    }
  }
  return v9;
}
// 9E248: variable 'v17' is possibly undefined
// F154B: using guessed type char byte_F154B;
// 168DF0: using guessed type char under_debugger;
