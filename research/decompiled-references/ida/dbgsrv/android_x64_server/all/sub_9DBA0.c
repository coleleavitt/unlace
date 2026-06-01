/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9DBA0
// Address: 0x000000000009DBA0

//----- (000000000009DBA0) ----------------------------------------------------
unsigned __int64 __fastcall sub_9DBA0(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int128 v4; // xmm0
  void *v5; // r12
  void *v6; // r12
  __int64 v8; // [rsp+0h] [rbp-1D8h] BYREF
  void *v9[2]; // [rsp+8h] [rbp-1D0h]
  void *v10; // [rsp+18h] [rbp-1C0h]
  int v11; // [rsp+20h] [rbp-1B8h]
  void *ptr[2]; // [rsp+28h] [rbp-1B0h]
  void *v13; // [rsp+38h] [rbp-1A0h]
  _BYTE dest[368]; // [rsp+40h] [rbp-198h] BYREF
  unsigned __int64 v15; // [rsp+1B0h] [rbp-28h]

  v15 = __readfsqword(0x28u);
  if ( a1[1] <= a2 )
  {
    if ( a1[1] < a2 )
    {
      if ( *a1 > a3 || 432 * a1[2] + *a1 <= a3 )
      {
        sub_9DDF0(a1, a2, a3);
      }
      else
      {
        v8 = *(_QWORD *)a3;
        v4 = 0;
        *(_OWORD *)v9 = 0;
        v10 = nullptr;
        v5 = *(void **)(a3 + 16);
        if ( v5 )
        {
          v9[0] = qalloc_or_throw(*(_QWORD *)(a3 + 16));
          v10 = v5;
          memcpy(v9[0], *(const void **)(a3 + 8), (size_t)v5);
          v4 = 0;
          v9[1] = v5;
        }
        v11 = *(_DWORD *)(a3 + 32);
        *(_OWORD *)ptr = v4;
        v13 = nullptr;
        v6 = *(void **)(a3 + 48);
        if ( v6 )
        {
          ptr[0] = qalloc_or_throw(*(_QWORD *)(a3 + 48));
          v13 = v6;
          memcpy(ptr[0], *(const void **)(a3 + 40), (size_t)v6);
          ptr[1] = v6;
        }
        memcpy(dest, (const void *)(a3 + 64), sizeof(dest));
        sub_9DDF0(a1, a2, (__int64)&v8);
        if ( ptr[0] )
        {
          ptr[1] = nullptr;
          qfree(ptr[0]);
          ptr[0] = nullptr;
          v13 = nullptr;
        }
        if ( v9[0] )
        {
          v9[1] = nullptr;
          qfree(v9[0]);
          v9[0] = nullptr;
          v10 = nullptr;
        }
      }
    }
  }
  else
  {
    sub_9DAE0(a1, a2);
  }
  return __readfsqword(0x28u);
}
