/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5F970
// Address: 0x000000000005F970

//----- (000000000005F970) ----------------------------------------------------
__int64 __fastcall sub_5F970(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r15
  unsigned __int64 v4; // rax
  __int64 v5; // rbx
  __int128 v6; // xmm0
  signed __int64 v7; // rbx
  __int64 v8; // rax
  const void *v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  void *dest[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v15; // [rsp+10h] [rbp-38h]
  unsigned __int64 v16; // [rsp+20h] [rbp-28h]

  v16 = __readfsqword(0x28u);
  v2 = a1[2];
  v3 = a1[5];
  v4 = v2 - 1;
  if ( !v2 )
    v4 = 0;
  v5 = a1[9];
  if ( v3 >= 0 )
  {
    if ( v5 >= 0 )
      goto LABEL_5;
    goto LABEL_16;
  }
  v10 = v4 + v3 + 1;
  v3 = 0;
  if ( v10 >= 0 )
    v3 = v10;
  if ( v3 > v4 )
    v3 = v4;
  if ( v5 < 0 )
  {
LABEL_16:
    v11 = v4 + v5 + 1;
    v5 = 0;
    if ( v11 >= 0 )
      v5 = v11;
    if ( v5 > v4 )
      v5 = v4;
  }
LABEL_5:
  v6 = 0;
  *(_OWORD *)dest = 0;
  v15 = 0;
  v7 = v5 - v3;
  if ( v7 <= 0 || (v8 = v4 - v3, v8 <= 0) )
  {
    v12 = 0;
  }
  else
  {
    if ( v7 > v8 )
      v7 = v8;
    v9 = (const void *)(a1[1] + v3);
    dest[0] = qvector_reserve((__int64)dest, nullptr, v7 + 1, 1u);
    dest[1] = (void *)(v7 + 1);
    *((_BYTE *)dest[0] + v7) = 0;
    memmove(dest[0], v9, v7);
    v6 = *(_OWORD *)dest;
    v12 = v15;
  }
  *(_BYTE *)a2 = 7;
  *(_OWORD *)(a2 + 8) = v6;
  *(_QWORD *)(a2 + 24) = v12;
  return 0;
}
// 5F9DF: conditional instruction was optimized away because rbx.8>=1
