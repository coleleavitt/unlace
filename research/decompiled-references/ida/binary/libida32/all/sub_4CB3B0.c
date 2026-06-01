unsigned __int64 __fastcall sub_4CB3B0(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v3; // r15d
  unsigned int v4; // eax
  __int64 v5; // rax
  __int64 *v6; // r12
  unsigned int v7; // r14d
  int v10; // [rsp+1Ch] [rbp-5Ch] BYREF
  __m128i v11; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v12; // [rsp+38h] [rbp-40h]

  v3 = 8;
  v12 = __readfsqword(0x28u);
  v10 = ea2node(a2);
  while ( 1 )
  {
    v4 = sub_79B840(&v10, a1, v3, 83);
    v3 = v4;
    if ( v4 > 0x24 )
      return v12 - __readfsqword(0x28u);
    if ( v4 - 27 <= 5 )
    {
      v3 = 32;
    }
    else if ( v4 - 15 <= 5 )
    {
      v3 = 20;
    }
    else
    {
      v5 = v4 - 9;
      if ( (unsigned int)v5 > 0x1B )
      {
        v6 = *(__int64 **)(a1 + 1480);
        v11.m128i_i32[1] = 0;
        if ( (unsigned __int8)sub_4CAB10(v6, &v11, a2, -1) && (v11.m128i_i8[12] & 0x40) == 0 )
        {
          LOBYTE(v7) = -1;
LABEL_8:
          if ( (unsigned int)(v11.m128i_i32[1] - 1) <= 0xFFFFFFFD )
          {
            v11.m128i_i32[1] += a3;
            sub_4CABE0(v6, a2, v7, (unsigned int *)&v11);
          }
          goto LABEL_10;
        }
      }
      else
      {
        v6 = *(__int64 **)(a1 + 1480);
        v7 = dword_2389F00[v5];
        v11.m128i_i32[1] = 0;
        if ( (unsigned __int8)sub_4CAB10(v6, &v11, a2, v7) && (v11.m128i_i8[12] & 0x40) == 0 )
          goto LABEL_8;
LABEL_10:
        if ( v3 == 36 )
          return v12 - __readfsqword(0x28u);
      }
    }
  }
}

