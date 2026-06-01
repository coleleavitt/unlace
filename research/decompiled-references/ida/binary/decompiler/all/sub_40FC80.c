__int64 __fastcall sub_40FC80(__int64 a1)
{
  __int64 v1; // rax
  __m128i v2; // xmm0
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __m128i v8; // xmm0
  unsigned __int64 v9; // [rsp+0h] [rbp-88h] BYREF
  __m128i v10; // [rsp+8h] [rbp-80h] BYREF
  __int64 v11; // [rsp+20h] [rbp-68h] BYREF
  __int64 v12; // [rsp+28h] [rbp-60h] BYREF
  __int128 v13; // [rsp+30h] [rbp-58h]
  unsigned __int64 v14; // [rsp+48h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  sub_40C7C0((__int64)&v11);
  if ( BYTE8(v13) )
  {
    v1 = v11;
    v2 = _mm_loadu_si128((const __m128i *)&v12);
    *(_BYTE *)(a1 + 24) = 1;
    *(_QWORD *)a1 = v1;
    *(__m128i *)(a1 + 8) = v2;
  }
  else
  {
    v9 = 0;
    v10 = 0;
    v4 = netnode_altval();
    v5 = v4 - 1;
    if ( v4 )
    {
      do
      {
        v11 = v5;
        v12 = 0;
        v13 = 0;
        netnode_qsupstr();
        sub_40FA00(&v9, (unsigned __int64)&v11);
        if ( v12 )
        {
          *(_QWORD *)&v13 = 0;
          qfree();
        }
        v6 = netnode_altval();
        v5 = v6 - 1;
      }
      while ( v6 );
    }
    v7 = v9;
    v8 = _mm_loadu_si128(&v10);
    *(_BYTE *)(a1 + 24) = 0;
    *(_QWORD *)a1 = v7;
    *(__m128i *)(a1 + 8) = v8;
  }
  return a1;
}
