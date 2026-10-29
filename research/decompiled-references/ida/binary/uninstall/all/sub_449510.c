__int64 __fastcall sub_449510(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 **v6; // r12
  __int64 result; // rax
  __int64 *v8; // rbp
  __int64 *v9; // rbx
  __int64 *v10; // rdx
  bool v11; // zf

  if ( !a1 )
    return Tcl_Free(a2);
  v6 = *(__int64 ***)(a1 + 456);
  if ( !v6 )
    return Tcl_Free(a2);
  v8 = *v6;
  v9 = (__int64 *)(*v6)[2];
  if ( &v9[(int)((16 - (unsigned __int64)((unsigned __int8)v9 & 0xF)) >> 3)] != (__int64 *)a2 )
    sub_47D740(
      (unsigned int)"TclStackFree: incorrect freePtr. Call out of sequence?",
      a2,
      (unsigned __int8)v9 & 0xF,
      a4,
      a5,
      a6);
  result = *v9;
  v10 = v9 - 1;
  v11 = *v9 == 0;
  v8[2] = *v9;
  if ( v11 )
  {
    v8[4] = (__int64)(v8 + 4);
    if ( *v8 )
      *v6 = (__int64 *)*v8;
    result = v8[1];
    if ( result )
    {
      if ( !*v8 )
        *v6 = (__int64 *)result;
      return sub_4490F0(v8, a2, (int)v10, a4, a5, a6);
    }
  }
  else
  {
    v8[4] = (__int64)v10;
  }
  return result;
}

