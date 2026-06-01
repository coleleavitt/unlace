/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_412058
// Address: 0x0000000000412058

//----- (0000000000412058) ----------------------------------------------------
__int64 __fastcall sub_412058(__int64 a1)
{
  __int64 v2; // x0
  int v3; // w0
  int **v4; // x0
  __int64 v5; // x1
  int v6; // w19
  __int64 v7; // x21
  const char *v9; // x0
  _QWORD v10[2]; // [xsp+30h] [xbp-30h] BYREF
  void *ptr; // [xsp+40h] [xbp-20h] BYREF
  unsigned __int64 v12; // [xsp+48h] [xbp-18h]
  __int64 v13; // [xsp+50h] [xbp-10h]
  __int64 v14; // [xsp+58h] [xbp-8h]

  v2 = *(_QWORD *)(a1 + 1656);
  if ( v2 )
  {
    v10[0] = a1;
    v10[1] = &ptr;
    ptr = nullptr;
    v12 = 0;
    v13 = 0;
    v3 = off_522078(v2, sub_40B0C8, v10, 0, 4294967276LL, 0, 0xFFFFFFFFLL);
    if ( v3 )
    {
      v9 = sub_4084C0(v3);
      sub_40A690((int)"%s: %s\n", "td_ta_thr_iter", v9);
      v4 = (int **)ptr;
      if ( !ptr )
        return v14 ^ _stack_chk_guard;
      goto LABEL_9;
    }
    v4 = (int **)ptr;
    if ( v12 )
    {
      v5 = *((unsigned int *)ptr + 26);
      v6 = 0;
      while ( 1 )
      {
        sub_4113A8(a1, v5, v4[4]);
        v4 = (int **)ptr;
        if ( v12 <= ++v6 )
          break;
        while ( 1 )
        {
          v7 = 384LL * v6;
          v4 = (int **)((char *)v4 + v7);
          v5 = *((unsigned int *)v4 + 26);
          if ( !v6 )
            break;
          sub_411A98(a1, v5, 0);
          sub_4113A8(a1, *(unsigned int *)((char *)ptr + v7 + 104), *(int **)((char *)ptr + v7 + 32));
          v4 = (int **)ptr;
          if ( v12 <= ++v6 )
            goto LABEL_8;
        }
      }
    }
LABEL_8:
    if ( v4 )
    {
LABEL_9:
      v12 = 0;
      j__free(v4);
    }
  }
  return v14 ^ _stack_chk_guard;
}
// 522078: using guessed type __int64 (__fastcall *off_522078)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
