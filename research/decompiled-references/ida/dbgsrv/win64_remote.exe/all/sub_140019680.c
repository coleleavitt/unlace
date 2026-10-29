/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140019680
// Address: 0x0000000140019680

//----- (0000000140019680) ----------------------------------------------------
bool __fastcall sub_140019680(_QWORD *a1, __int64 a2, char a3)
{
  int v6; // edx
  int v7; // ecx
  int v8; // eax
  int v9; // ebp
  struct _CONTEXT *v10; // rdi
  int v11; // edx
  int v12; // ecx
  int v14; // [rsp+30h] [rbp-328h] BYREF
  void *Block[2]; // [rsp+38h] [rbp-320h] BYREF
  LPCONTEXT lpContext[2]; // [rsp+48h] [rbp-310h]
  unsigned int v17[180]; // [rsp+60h] [rbp-2F8h] BYREF

  v6 = (2 * (a3 & 2)) | 0x10000B;
  if ( (a3 & 0xC) == 0 )
    v6 = (2 * (a3 & 2)) | 0x100003;
  v7 = v6 | 0x100008;
  if ( (a3 & 0x10) == 0 )
    v7 = v6;
  v8 = v7 | 0x100048;
  v9 = a3 & 0x20;
  if ( (a3 & 0x20) == 0 )
    v8 = v7;
  v14 = v8;
  if ( !sub_14000E880(a1[3] + 1256LL, a2, &v14) )
    return 0;
  v10 = *(struct _CONTEXT **)(a2 + 24);
  if ( (a1[6] & 2) != 0 && qword_1400CAE80 )
  {
    v11 = v14 | 0x10020;
    if ( (v14 & 0x100008) == 0 )
      v11 = v14;
    v12 = v11 | 0x10008;
    if ( (v11 & 0x100040) != 0x100040 )
      v12 = v11;
    v17[0] = v12 & 0xFFEEFFBF | 0x10000;
    if ( !(unsigned int)qword_1400CAE80(*a1, v17) )
      return 0;
    *(_OWORD *)Block = 0;
    *(_OWORD *)lpContext = 0;
    if ( v9 )
    {
      v14 = 1048640;
      if ( !sub_14000E880(a1[3] + 1256LL, (__int64)Block, &v14) || !GetThreadContext((HANDLE)*a1, lpContext[1]) )
      {
        if ( Block[0] )
        {
          Block[1] = nullptr;
          j_free(Block[0]);
        }
        return 0;
      }
    }
    sub_14000BF70((__int64)v10, v17, a3, (__int64)lpContext[1], a1[3] + 1256LL);
    if ( Block[0] )
    {
      Block[1] = nullptr;
      j_free(Block[0]);
    }
    return 1;
  }
  else
  {
    v10->ContextFlags = v14;
    return GetThreadContext((HANDLE)*a1, v10);
  }
}
// 1400CAE80: using guessed type __int64 (__fastcall *qword_1400CAE80)(_QWORD, _QWORD);
