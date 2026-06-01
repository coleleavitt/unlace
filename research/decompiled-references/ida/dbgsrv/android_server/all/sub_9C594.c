/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9C594
// Address: 0x000000000009C594

//----- (000000000009C594) ----------------------------------------------------
__int64 __fastcall sub_9C594(_BYTE *a1, pthread_mutex_t *a2, __int64 a3, int a4)
{
  unsigned int v4; // w19
  __int64 v6; // x22
  __int64 align; // x0
  __int64 v10; // x8
  char v12[4]; // [xsp+4h] [xbp-4Ch] BYREF
  __int64 v13; // [xsp+8h] [xbp-48h]

  v4 = a4;
  v6 = a4;
  v13 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *(&a2->__align + 1) = 0;
  if ( (a1[672] & 0x10) != 0 )
  {
    v12[0] = 0;
    sub_5BBF4(a2, a4, v12);
  }
  else
  {
    if ( a4 )
    {
      if ( *(&a2->__align + 2) >= (unsigned __int64)a4 )
      {
        align = a2->__align;
        v10 = 0;
      }
      else
      {
        align = (__int64)qvector_reserve(a2, (void *)a2->__align, a4, 1u);
        v10 = *(&a2->__align + 1);
        a2->__align = align;
      }
      memset((void *)(align + v10), 0, v6 - v10);
      *(&a2->__align + 1) = v6;
    }
    if ( (*(__int64 (__fastcall **)(_BYTE *, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a1 + 288LL))(
           a1,
           a3,
           a2->__align,
           v6,
           0) < 1 )
      return (unsigned int)-1;
  }
  return v4;
}
