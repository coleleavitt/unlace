/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_526F0
// Address: 0x00000000000526F0

//----- (00000000000526F0) ----------------------------------------------------
char __fastcall sub_526F0(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rcx
  _DWORD *v7; // rsi
  _DWORD *v8; // rbx
  void *ptr[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v11; // [rsp+10h] [rbp-38h]
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a2 + 8) )
  {
    sub_5C790((__int64 *)(a2 + 8), 0);
    qfree(*(void **)(a2 + 8));
    *(_QWORD *)(a2 + 8) = 0;
    *(_QWORD *)(a2 + 24) = 0;
  }
  if ( *(_BYTE *)(a1 + 248) )
  {
    v3 = *(_QWORD *)(a1 + 120);
    if ( v3 << 6 )
    {
      v4 = *(_QWORD *)(a1 + 112);
      v5 = v4;
      do
      {
        if ( *(_DWORD *)(v5 + 4) == 7 )
        {
          *(_OWORD *)ptr = 0;
          v11 = 0;
          sub_52920((__int64 *)(a1 + 80), (__int64)ptr, v5);
          sub_52C40((__int64 *)a2, ptr);
          if ( ptr[0] )
          {
            ptr[1] = nullptr;
            qfree(ptr[0]);
            ptr[0] = nullptr;
            v11 = 0;
          }
          v4 = *(_QWORD *)(a1 + 112);
          v3 = *(_QWORD *)(a1 + 120);
        }
        v5 += 64;
      }
      while ( v5 != v4 + (v3 << 6) );
    }
  }
  if ( *(_BYTE *)(a1 + 72) )
  {
    v6 = *(_QWORD *)(a1 + 40);
    if ( 56 * v6 )
    {
      v7 = *(_DWORD **)(a1 + 32);
      v8 = v7;
      do
      {
        if ( *v8 == 4 )
        {
          *(_OWORD *)ptr = 0;
          v11 = 0;
          sub_52E80(a1, (__int64)ptr, (__int64)v8);
          sub_52C40((__int64 *)a2, ptr);
          if ( ptr[0] )
          {
            ptr[1] = nullptr;
            qfree(ptr[0]);
            ptr[0] = nullptr;
            v11 = 0;
          }
          v7 = *(_DWORD **)(a1 + 32);
          v6 = *(_QWORD *)(a1 + 40);
        }
        v8 += 14;
      }
      while ( v8 != &v7[14 * v6] );
    }
  }
  *(_BYTE *)(a2 + 32) = 1;
  return 1;
}
