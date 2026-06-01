__int64 __fastcall sub_2177AB0(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        unsigned __int64 a4,
        void (__fastcall *a5)(__int64 *, __int64, __m128i *),
        __int64 a6)
{
  unsigned __int32 v6; // eax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r13
  __int64 v13; // rbp
  __int64 v15; // rdx
  __int64 v16; // rax
  __m128i v17[2]; // [rsp+0h] [rbp-118h] BYREF
  __int16 v18; // [rsp+20h] [rbp-F8h]
  __m128i v19[2]; // [rsp+30h] [rbp-E8h] BYREF
  __int16 v20; // [rsp+50h] [rbp-C8h]
  __m128i v21[3]; // [rsp+60h] [rbp-B8h] BYREF
  __m128i v22[2]; // [rsp+90h] [rbp-88h] BYREF
  __int16 v23; // [rsp+B0h] [rbp-68h]
  __m128i v24[2]; // [rsp+C0h] [rbp-58h] BYREF
  __int16 v25; // [rsp+E0h] [rbp-38h]

  v6 = *(unsigned __int16 *)(*a2 + 62LL);
  if ( v6 == 0xFFFF )
  {
    if ( !a4 )
    {
      v25 = 259;
      v24[0].m128i_i64[0] = (__int64)"e_shstrndx == SHN_XINDEX, but the section header table is empty";
      sub_2162BF0(v22, (__int64)v24, a3, 0);
      v16 = v22[0].m128i_i64[0];
      *(_BYTE *)(a1 + 16) |= 1u;
      *(_QWORD *)a1 = v16;
      return a1;
    }
    v6 = *(_DWORD *)(a3 + 40);
  }
  if ( v6 )
  {
    if ( v6 < a4 )
    {
      sub_21777E0(a1, a2, ((unsigned __int64)v6 << 6) + a3, a5, a6, a6);
    }
    else
    {
      v17[0].m128i_i32[0] = v6;
      v22[0].m128i_i64[0] = (__int64)" does not exist";
      v20 = 259;
      v23 = 259;
      v18 = 265;
      v19[0].m128i_i64[0] = (__int64)"section header string table index ";
      sub_A41580(v21, v19, v17, 265, (__int64)a5, a6);
      sub_A41580(v24, v21, v22, v7, v8, v9);
      v12 = sub_2195B10(v24, v21, v10, v11);
      v13 = operator new(0x40u);
      sub_2220590(v13, v24, 3, v12);
      *(_BYTE *)(a1 + 16) |= 1u;
      *(_QWORD *)a1 = v13;
    }
  }
  else
  {
    *(_BYTE *)(a1 + 16) &= ~1u;
    v15 = a2[5];
    *(_QWORD *)(a1 + 8) = a2[6];
    *(_QWORD *)a1 = v15;
  }
  return a1;
}
