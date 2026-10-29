unsigned __int64 __fastcall sub_3E3300(__int64 a1, unsigned __int8 *a2, __int64 a3)
{
  int v3; // ebp
  unsigned __int8 *v4; // rax
  __int64 i; // rbx
  unsigned __int8 *v7; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-40h]
  unsigned __int64 v9; // [rsp+18h] [rbp-30h]

  v3 = 0;
  v9 = __readfsqword(0x28u);
  v7 = a2;
  *(_OWORD *)(a1 + 2) = -1;
  v8 = (unsigned __int64)&a2[a3];
  *(_WORD *)a1 = unpack_dw(&v7, &a2[a3]);
  v4 = v7;
  if ( (unsigned __int64)v7 < v8 )
  {
    v3 = *v7;
    v4 = v7 + 1;
  }
  v7 = v4;
  for ( i = 0; i != 8; ++i )
  {
    while ( !_bittest(&v3, i) )
    {
      if ( ++i == 8 )
        return v9 - __readfsqword(0x28u);
    }
    *(_WORD *)(a1 + 2 * i + 2) = unpack_dw(&v7, v8);
  }
  return v9 - __readfsqword(0x28u);
}

