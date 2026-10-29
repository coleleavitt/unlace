__int64 __fastcall sub_672AE0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128i a8,
        double a9,
        __m128 a10)
{
  __int64 *v11; // rax
  __int64 *v12; // r12
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  __int64 result; // rax
  __int64 *v16; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v17; // [rsp+8h] [rbp-40h]
  __int64 v18; // [rsp+10h] [rbp-38h]

  if ( !a2 )
    return 1;
  v11 = *(__int64 **)(a2 + 16);
  v12 = *(__int64 **)(a2 + 24);
  if ( v12 == v11 )
  {
    v12 = nullptr;
    v11 = nullptr;
  }
  v16 = v11;
  v13 = 0;
  v17 = 0;
  v18 = 0;
LABEL_5:
  if ( v12 == v11 )
  {
LABEL_11:
    if ( !v13 )
      return 1;
  }
  v14 = v13 & 3;
  if ( (_DWORD)v14 )
    v11 = (__int64 *)sub_ACE280(&v16, a2, v14, a4, a5, a6);
  while ( 1 )
  {
    a2 = *v11;
    result = sub_672860(a1, *v11, a3, a7, a8, a9, a10);
    if ( !(_BYTE)result )
      return result;
    v13 = v17;
    if ( (v17 & 3) != 0 )
    {
      if ( v17 <= 3 )
      {
        a2 = 1;
        sub_ACE0F0(&v16, 1);
      }
      else
      {
        sub_ACE150(&v16);
      }
      v11 = v16;
      v13 = v17;
      goto LABEL_5;
    }
    v11 = v16 + 1;
    v16 = v11;
    if ( v12 == v11 )
      goto LABEL_11;
  }
}

