/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5FCC0
// Address: 0x000000000005FCC0

//----- (000000000005FCC0) ----------------------------------------------------
__int64 __fastcall sub_5FCC0(__int64 a1, __int64 a2)
{
  __int128 v2; // xmm0
  __int64 v3; // rbx
  char v4; // al
  __int64 v5; // rax
  void *ptr[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v8; // [rsp+10h] [rbp-28h]
  char v9; // [rsp+1Fh] [rbp-19h] BYREF
  unsigned __int64 v10; // [rsp+20h] [rbp-18h]

  v10 = __readfsqword(0x28u);
  v2 = 0;
  *(_OWORD *)ptr = 0;
  v8 = 0;
  v3 = *(_QWORD *)(a1 + 40);
  if ( v3 <= 0 )
  {
    v5 = 0;
  }
  else
  {
    v4 = *(_BYTE *)(a1 + 8);
    ptr[1] = nullptr;
    v9 = v4;
    sub_5F0D0((__int64)ptr, v3 + 1, &v9);
    *((_BYTE *)ptr[0] + v3) = 0;
    v2 = *(_OWORD *)ptr;
    v5 = v8;
  }
  *(_BYTE *)a2 = 7;
  *(_OWORD *)(a2 + 8) = v2;
  *(_QWORD *)(a2 + 24) = v5;
  return 0;
}
