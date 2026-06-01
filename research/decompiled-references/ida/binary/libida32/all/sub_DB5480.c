__int64 __fastcall sub_DB5480(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbp
  _QWORD *v5; // rbp
  unsigned int v6; // ebx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __m128i v12; // [rsp+0h] [rbp-78h] BYREF
  __m128i v13; // [rsp+10h] [rbp-68h]
  _QWORD v14[3]; // [rsp+20h] [rbp-58h] BYREF
  int v15; // [rsp+38h] [rbp-40h]
  __int64 v16; // [rsp+40h] [rbp-38h]
  unsigned int v17; // [rsp+48h] [rbp-30h]

  v4 = *(_QWORD *)(a1 + 176);
  v12 = _mm_loadu_si128((const __m128i *)sub_DFDA20(v4, 16));
  sub_DFDA50(v4, 16);
  v5 = (_QWORD *)sub_DFDA20(*(_QWORD *)(a1 + 176), 48);
  v6 = sub_DA5070(a1, a2, v5, 2);
  if ( !(_BYTE)v6 )
    return v6;
  sub_DFF4E0(v14, v5[4], (unsigned int)(a3 + *(_DWORD *)v5), (unsigned int)(a3 + *(_DWORD *)v5));
  if ( v15 )
  {
    v9 = v14[0];
    v10 = v16;
  }
  else
  {
    v8 = sub_CDA220((__int64)v14);
    v9 = v14[0];
    v10 = v16;
    if ( *(_BYTE *)(v8 + 60) && v17 == v14[0] )
    {
      v11 = v16 + v17 + 72;
      goto LABEL_6;
    }
  }
  v11 = v10 + v9 + 40;
LABEL_6:
  v13 = _mm_load_si128(&v12);
  *(_QWORD *)v11 = v13.m128i_i64[0];
  *(_DWORD *)(v11 + 8) = v13.m128i_i32[2];
  sub_DFFFB0(v14);
  sub_E00FC0(v14);
  sub_DFF560(v14);
  return v6;
}

