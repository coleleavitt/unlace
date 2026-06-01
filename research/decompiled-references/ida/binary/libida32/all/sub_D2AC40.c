__int64 __fastcall sub_D2AC40(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rbx
  unsigned int v6; // ebp
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // rdx
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v13; // rax
  __m128i v14; // [rsp+0h] [rbp-58h] BYREF
  __int64 v15; // [rsp+10h] [rbp-48h]
  __int64 v16; // [rsp+18h] [rbp-40h]
  __m128i v17; // [rsp+20h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 176);
  v14 = _mm_loadu_si128((const __m128i *)sub_DFDA20(v3, 16));
  sub_DFDA50(v3, 16);
  v4 = *(_QWORD *)(a1 + 176);
  v17 = _mm_load_si128(&v14);
  v5 = sub_DFDA20(v4, 48);
  v6 = sub_DA8220(a1, a2, v5);
  if ( !(_BYTE)v6 )
    return v6;
  if ( !*(_DWORD *)(v5 + 24) && *(_QWORD *)(v5 + 32) )
  {
    if ( *(_DWORD *)(v5 + 40) )
    {
      sub_E00FC0(v5);
      sub_DFFFB0(v5);
    }
  }
  v7 = sub_CDA870(v5);
  if ( v7 )
  {
    sub_B54430(v7);
    v8 = sub_D2AB80((__int64)&v17);
    v10 = v9;
    v11 = sub_CEA4F0(v5);
    v16 = v10;
    v15 = v8;
    *(_QWORD *)v11 = v8;
    *(_DWORD *)(v11 + 8) = v16;
    return v6;
  }
  v13 = sub_CEA4F0(v5);
  *(_QWORD *)v13 = v17.m128i_i64[0];
  *(_DWORD *)(v13 + 8) = v17.m128i_i32[2];
  return v6;
}

