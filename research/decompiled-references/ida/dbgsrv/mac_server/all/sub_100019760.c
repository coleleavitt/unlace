/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100019760
// Address: 0x0000000100019760

//----- (0000000100019760) ----------------------------------------------------
__int64 __fastcall sub_100019760(__int64 a1, _DWORD *a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v8; // r14d
  size_t v9; // r15
  void *v10; // r12
  void *v11; // rdi
  __int64 (__fastcall **v13)(); // [rsp+8h] [rbp-88h] BYREF
  int v14; // [rsp+10h] [rbp-80h]
  _BYTE v15[24]; // [rsp+14h] [rbp-7Ch] BYREF
  void *__src[2]; // [rsp+30h] [rbp-60h]
  size_t __n[2]; // [rsp+40h] [rbp-50h]
  __int128 v18; // [rsp+50h] [rbp-40h]

  v13 = off_1000A7540;
  v14 = 1;
  memset(v15, 0, sizeof(v15));
  *(_OWORD *)__src = 0;
  *(_OWORD *)__n = 0;
  v18 = 0;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 (__fastcall ***)()))(*(_QWORD *)a1 + 32LL))(
         a1,
         a5,
         a6,
         &v13);
  if ( (_BYTE)v8 )
  {
    if ( a2 )
      *a2 = *(_DWORD *)&v15[8];
    if ( a3 )
      *a3 = *(_QWORD *)&v15[12];
    if ( a4 )
    {
      v9 = __n[0];
      if ( __n[0] )
      {
        v10 = qalloc_or_throw(__n[0]);
        memcpy(v10, __src[1], v9);
      }
      else
      {
        v10 = nullptr;
      }
      v11 = *(void **)a4;
      if ( *(_QWORD *)a4 )
      {
        *(_QWORD *)(a4 + 8) = 0;
        qfree(v11);
      }
      *(_QWORD *)a4 = v10;
      *(_QWORD *)(a4 + 8) = v9;
      *(_QWORD *)(a4 + 16) = v9;
    }
  }
  v13 = off_1000A7540;
  if ( __src[1] )
  {
    __n[0] = 0;
    qfree(__src[1]);
  }
  return v8;
}
// 1000A7540: using guessed type __int64 (__fastcall *off_1000A7540[7])();
