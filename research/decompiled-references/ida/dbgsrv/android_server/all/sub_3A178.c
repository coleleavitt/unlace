/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3A178
// Address: 0x000000000003A178

//----- (000000000003A178) ----------------------------------------------------
__int64 __fastcall sub_3A178(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  unsigned __int8 *v4; // x3
  unsigned __int64 v5; // x21
  size_t v6; // x20
  void *v7; // x0
  char src[4096]; // [xsp+8h] [xbp-1038h] BYREF
  __int64 v9; // [xsp+1008h] [xbp-38h]

  v9 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_QWORD *)(a2 + 8) )
  {
    result = qisabspath(*(unsigned __int8 **)a2);
    if ( (result & 1) != 0 )
      return result;
  }
  else
  {
    result = qisabspath((unsigned __int8 *)&byte_F154B);
    if ( (result & 1) != 0 )
      return result;
  }
  if ( *(_QWORD *)(a2 + 8) )
    v4 = *(unsigned __int8 **)a2;
  else
    v4 = (unsigned __int8 *)&byte_F154B;
  qmakepath((size_t)src, 0x1000u, "/system/lib", v4, 0);
  result = qfileexist(src);
  if ( (result & 1) != 0 )
  {
    result = __strlen_chk(src, 4096);
    if ( result )
    {
      v5 = result + 1;
      v6 = result;
      if ( *(_QWORD *)(a2 + 16) >= (unsigned __int64)(result + 1) )
      {
        v7 = *(void **)a2;
      }
      else
      {
        v7 = qvector_reserve((pthread_mutex_t *)a2, *(void **)a2, v5, 1u);
        *(_QWORD *)a2 = v7;
      }
      *(_QWORD *)(a2 + 8) = v5;
      result = (__int64)memmove(v7, src, v6);
      *(_BYTE *)(*(_QWORD *)a2 + v6) = 0;
    }
    else
    {
      *(_QWORD *)(a2 + 8) = 0;
    }
  }
  return result;
}
// 37590: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
// F154B: using guessed type char byte_F154B;
