__int64 __fastcall sub_2219520(unsigned int *src, __int64 a2, __int64 *a3)
{
  signed __int64 v3; // r15
  unsigned int v5; // edx
  unsigned int *v6; // rax
  unsigned int *v7; // r14
  unsigned int *v8; // r13
  _BYTE *v9; // rax
  __int64 result; // rax
  __int64 v11; // rbp
  _BYTE *v12; // rax
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rdx
  _BYTE *v15; // rax
  __int64 v16; // rax
  unsigned int *v17; // rax
  unsigned int v18; // edx
  unsigned __int8 v19; // [rsp+Fh] [rbp-49h]
  unsigned int *v20; // [rsp+10h] [rbp-48h] BYREF
  __int64 v21[8]; // [rsp+18h] [rbp-40h] BYREF

  v3 = 4 * a2;
  if ( !(4 * a2) )
    return 1;
  v5 = *src;
  v6 = src;
  v20 = src;
  v7 = &src[(unsigned __int64)v3 / 4];
  v8 = nullptr;
  if ( v5 == -131072 )
  {
    if ( src == v7 )
    {
      v7 = nullptr;
    }
    else
    {
      if ( v3 >> 2 )
      {
        if ( (unsigned __int64)(v3 >> 2) > 0x3FFFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_range_insert");
        v8 = (unsigned int *)operator new(4 * a2);
        memcpy(v8, src, 4 * a2);
        v7 = &v8[(unsigned __int64)v3 / 4];
      }
      else
      {
        v7 = (unsigned int *)(4 * a2);
        memmove(nullptr, src, v3);
      }
      if ( v7 != v8 )
      {
        v17 = v8;
        do
        {
          v18 = *v17++;
          *(v17 - 1) = _byteswap_ulong(v18);
        }
        while ( v7 != v17 );
      }
    }
    v20 = v8;
    v5 = *v8;
    v6 = v8;
  }
  if ( v5 == 65279 )
    v20 = v6 + 1;
  sub_C05030(a3, 16 * a2 + 1, 0);
  v21[0] = *a3;
  if ( (unsigned int)sub_22185F0(&v20, (unsigned __int64)v7, v21, a3[1] + v21[0], 0) )
  {
    v9 = (_BYTE *)*a3;
    a3[1] = 0;
    *v9 = 0;
    result = 0;
  }
  else
  {
    sub_C05030(a3, v21[0] - *a3, 0);
    v11 = a3[1];
    v12 = (_BYTE *)*a3;
    v13 = v11 + 1;
    if ( (__int64 *)*a3 == a3 + 2 )
      v14 = 15;
    else
      v14 = a3[2];
    if ( v13 > v14 )
    {
      sub_998B30((__int64)a3, a3[1], 0, nullptr, 1u);
      v12 = (_BYTE *)*a3;
    }
    v12[v11] = 0;
    v15 = (_BYTE *)*a3;
    a3[1] = v13;
    v15[v11 + 1] = 0;
    v16 = a3[1];
    a3[1] = v16 - 1;
    *(_BYTE *)(*a3 + v16 - 1) = 0;
    result = 1;
  }
  if ( v8 )
  {
    v19 = result;
    operator delete(v8);
    return v19;
  }
  return result;
}
