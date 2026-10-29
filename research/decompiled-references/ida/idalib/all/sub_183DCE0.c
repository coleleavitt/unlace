unsigned __int64 __fastcall sub_183DCE0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, unsigned __int64 a5)
{
  __int64 v9; // rdi
  int v10; // eax
  unsigned __int64 result; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __m128i v14; // [rsp+0h] [rbp-A8h] BYREF
  int v15; // [rsp+10h] [rbp-98h]
  int v16; // [rsp+18h] [rbp-90h]
  __int64 v17; // [rsp+20h] [rbp-88h]
  __int64 v18; // [rsp+28h] [rbp-80h]
  __int64 v19; // [rsp+30h] [rbp-78h]
  __int64 v20; // [rsp+38h] [rbp-70h]
  __int64 v21; // [rsp+40h] [rbp-68h]
  __int64 v22; // [rsp+48h] [rbp-60h]
  int v23; // [rsp+50h] [rbp-58h]
  __int64 v24; // [rsp+58h] [rbp-50h]
  __int64 v25; // [rsp+60h] [rbp-48h]
  __int64 v26; // [rsp+68h] [rbp-40h]
  __int64 v27; // [rsp+70h] [rbp-38h]

  v9 = *(_QWORD *)(a1 + 248);
  v20 = a2;
  v14.m128i_i16[1] &= 0xF000u;
  v14.m128i_i64[1] = 0;
  v15 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v16 = 9;
  v14.m128i_i16[0] = sub_A64670(v9, 0, 1, 0);
  v10 = sub_15F1720(a1);
  if ( v10 )
    v14.m128i_i64[1] = v14.m128i_i64[1] & 0xFFFFFFFF000001FFLL | (unsigned int)(v10 << 9);
  *(_QWORD *)(a2 + 48) = sub_A73610(*(_QWORD *)(a1 + 248), a3, a4, a5, &v14, 0);
  result = *(unsigned int *)(a1 + 12596);
  if ( *(_DWORD *)(a1 + 11320) > (unsigned int)result )
  {
    result = (*(_BYTE *)(a2 + 80) & 0x7Fu) - 35;
    if ( (unsigned int)result <= 3 )
    {
      v12 = sub_B72690(a2 + 72);
      if ( !v12 )
        BUG();
      result = *(_QWORD *)(v12 + 64);
      if ( result && (*(_BYTE *)(result + 10) & 0x20) != 0 )
      {
        result = (unsigned __int64)sub_A81910(*(_QWORD **)(a1 + 248), *(_QWORD *)(a2 + 48), 0);
        v13 = *(_QWORD *)(a2 + 56);
        if ( (v13 & 4) != 0 )
        {
          *(_QWORD *)((v13 & 0xFFFFFFFFFFFFFFF8LL) + 32) = result;
        }
        else
        {
          result &= ~4uLL;
          *(_QWORD *)(a2 + 56) = result;
        }
      }
    }
  }
  return result;
}
