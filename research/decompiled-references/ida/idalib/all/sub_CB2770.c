__int64 __fastcall sub_CB2770(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rbp
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r14
  void *p_dest; // rbx
  __int64 v11; // rdi
  unsigned int v12; // eax
  __int64 result; // rax
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  size_t v17; // rbx
  const void *p_src; // rsi
  unsigned __int8 v19; // [rsp+Fh] [rbp-59h]
  __int64 v20; // [rsp+18h] [rbp-50h] BYREF
  void *dest; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v22; // [rsp+28h] [rbp-40h]
  void *src; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v24; // [rsp+38h] [rbp-30h]

  v4 = a3 | 4;
  v5 = *a2;
  v6 = (unsigned int)sub_21F9130(*a2);
  v8 = sub_21F90D0(v5, a2, v7);
  v9 = v8;
  if ( (unsigned __int64)(v6 + 63) >> 6 == 1 )
  {
    v14 = *a2;
    v20 = v4;
    dest = nullptr;
    v22 = sub_21F8E40(v14);
    v15 = sub_21F8CF0(v22);
    if ( ((unsigned __int64)(unsigned int)sub_21F9120(v15) + 63) >> 6 == 1 )
    {
      if ( v9 == *a2 )
        sub_22010F0(&src, a2);
      else
        sub_21FEE00(&src, a2);
      if ( v24 <= 0x40 )
      {
        dest = src;
      }
      else
      {
        dest = *(void **)src;
        operator delete[](src);
      }
    }
    else
    {
      v16 = sub_21F8CF0(v22);
      v17 = 8 * (((unsigned __int64)(unsigned int)sub_21F9120(v16) + 63) >> 6);
      if ( v9 == *a2 )
        sub_22010F0(&src, a2);
      else
        sub_21FEE00(&src, a2);
      p_src = &src;
      if ( v24 > 0x40 )
        p_src = src;
      memcpy(dest, p_src, v17);
      if ( v24 > 0x40 && src )
        operator delete[](src);
    }
    return sub_CA8980(a1, (__int64)&dest, &v20);
  }
  else
  {
    p_dest = &dest;
    if ( v8 == *a2 )
      sub_22010F0(&dest, a2);
    else
      sub_21FEE00(&dest, a2);
    v11 = *a2;
    v20 = v4;
    v12 = sub_21F8E40(v11);
    if ( v22 > 0x40 )
      p_dest = dest;
    v24 = v12;
    src = p_dest;
    result = sub_CA8980(a1, (__int64)&src, &v20);
    if ( v22 > 0x40 )
    {
      if ( dest )
      {
        v19 = result;
        operator delete[](dest);
        return v19;
      }
    }
  }
  return result;
}
