/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3D474
// Address: 0x000000000003D474

//----- (000000000003D474) ----------------------------------------------------
__int64 __fastcall sub_3D474(__int64 a1, unsigned int a2, int a3)
{
  __int64 result; // x0
  __int64 v7; // x8
  pthread_mutex_t *v8; // x0
  __int64 (__fastcall **v9)(); // [xsp+8h] [xbp-48h] BYREF
  unsigned int v10; // [xsp+10h] [xbp-40h]
  int v11; // [xsp+14h] [xbp-3Ch]
  __int64 v12; // [xsp+18h] [xbp-38h]

  v12 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v9 = &off_156608;
  v10 = a2;
  v11 = a3;
  result = sub_9DBF0((__int64 (__fastcall ***)(_QWORD, __int64))&v9);
  if ( !(_DWORD)result )
  {
    if ( (~(_BYTE)a3 & 0x7F) != 0 )
    {
      if ( ((a3 + 1) & 0x7E) == 0 )
      {
        sub_39FA0((__int64)"  %d: failed to store pending status %x, killing unknown thread\n", a2, a3);
        return ptrace(PTRACE_KILL, a2, 0, 0);
      }
    }
    else
    {
      v7 = *(_QWORD *)(a1 + 1792);
      v8 = (pthread_mutex_t *)(a1 + 1784);
      if ( *(_QWORD *)(a1 + 1800) >= (unsigned __int64)(v7 + 1) )
      {
        result = v8->__align;
      }
      else
      {
        result = (__int64)qvector_reserve(v8, *(void **)(a1 + 1784), v7 + 1, 4u);
        v7 = *(_QWORD *)(a1 + 1792);
        *(_QWORD *)(a1 + 1784) = result;
      }
      *(_DWORD *)(result + 4 * v7) = a2;
      ++*(_QWORD *)(a1 + 1792);
    }
  }
  return result;
}
// 156608: using guessed type __int64 (__fastcall *off_156608)();
