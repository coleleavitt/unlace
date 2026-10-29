__int64 __fastcall sub_368340(__int64 a1, __int64 a2)
{
  int v2; // eax
  int func_bounds; // edx
  int v4; // eax
  int v6; // [rsp+0h] [rbp-88h] BYREF
  int v7; // [rsp+4h] [rbp-84h]
  __int64 v8; // [rsp+8h] [rbp-80h]
  __int64 v9; // [rsp+10h] [rbp-78h]
  __int16 v10; // [rsp+18h] [rbp-70h]
  __m128i si128; // [rsp+1Ch] [rbp-6Ch]
  __int64 v12; // [rsp+30h] [rbp-58h]
  int v13; // [rsp+38h] [rbp-50h]
  __int64 v14; // [rsp+40h] [rbp-48h]
  int v15; // [rsp+48h] [rbp-40h]
  __int64 v16; // [rsp+50h] [rbp-38h]
  int v17; // [rsp+58h] [rbp-30h]
  __int64 v18; // [rsp+60h] [rbp-28h]
  int v19; // [rsp+68h] [rbp-20h]
  __int64 v20; // [rsp+70h] [rbp-18h]
  unsigned __int64 v21; // [rsp+78h] [rbp-10h]

  v2 = *(_DWORD *)(a1 + 8);
  v21 = __readfsqword(0x28u);
  v7 = 0;
  v6 = v2;
  v8 = 512;
  v9 = 0xFFFFFFFFLL;
  v10 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23836A0);
  func_bounds = find_func_bounds((int)&v6, 1);
  v4 = -1;
  if ( func_bounds )
    v4 = v7;
  *(_DWORD *)(a2 + 8) = v4;
  return 0;
}

