/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_55D60
// Address: 0x0000000000055D60

//----- (0000000000055D60) ----------------------------------------------------
__int64 __fastcall sub_55D60(__int64 a1, __int64 a2, __int64 *a3, unsigned int a4)
{
  __int64 v4; // x8
  __int64 v6; // x10
  __int64 v7; // x0
  unsigned __int64 v8; // x21
  size_t v9; // x20
  void *v10; // x0

  v4 = *a3;
  if ( *a3 >= 1 && (v6 = a3[2]) != 0 )
  {
    if ( v6 - 1 >= (unsigned __int64)a4 )
      return sub_52750(a1, a2, v4 + a4);
    sub_3C748(a2, "bad offset %08x", v4 + a4);
  }
  else
  {
    v7 = __strlen_chk("{no string table}", 18);
    if ( v7 )
    {
      v8 = v7 + 1;
      v9 = v7;
      if ( *(_QWORD *)(a2 + 16) >= (unsigned __int64)(v7 + 1) )
      {
        v10 = *(void **)a2;
      }
      else
      {
        v10 = qvector_reserve((pthread_mutex_t *)a2, *(void **)a2, v8, 1u);
        *(_QWORD *)a2 = v10;
      }
      *(_QWORD *)(a2 + 8) = v8;
      memmove(v10, "{no string table}", v9);
      *(_BYTE *)(*(_QWORD *)a2 + v9) = 0;
    }
    else
    {
      *(_QWORD *)(a2 + 8) = 0;
    }
  }
  return 0;
}
// 37590: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
