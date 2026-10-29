__int64 __fastcall sub_216E3E0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rcx
  unsigned __int32 v7; // eax
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int16 v11; // dx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r13
  __int64 v15; // rbp
  __int64 v16; // rdx
  unsigned __int64 v17; // rsi
  __int64 v18; // r8
  unsigned __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // [rsp+E0h] [rbp-118h] BYREF
  __int64 v25[6]; // [rsp+110h] [rbp-E8h] BYREF
  __m128i v26; // [rsp+140h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+150h] [rbp-A8h]
  __int16 v28; // [rsp+160h] [rbp-98h]
  __m128i v29[2]; // [rsp+170h] [rbp-88h] BYREF
  __int16 v30; // [rsp+190h] [rbp-68h]
  __m128i v31[2]; // [rsp+1A0h] [rbp-58h] BYREF
  __int16 v32; // [rsp+1C0h] [rbp-38h]

  v6 = *a2;
  v7 = _byteswap_ulong(*(_DWORD *)(*a2 + 32));
  if ( v7 )
  {
    v11 = __ROL2__(*(_WORD *)(v6 + 46), 8);
    if ( v11 == 40 )
    {
      v16 = v7;
      v17 = a2[1];
      if ( (unsigned __int64)v7 + 40 > v17 || v7 > 0xFFFFFFD7 )
      {
        v24 = v7;
        v26.m128i_i64[0] = (__int64)&v24;
        v28 = 271;
        v29[0].m128i_i64[0] = (__int64)"section header table goes past the end of the file: e_shoff = 0x";
        v30 = 259;
        v27 = 0;
        sub_A41580(v31, v29, &v26, 259, a5, a6);
        sub_2162BF0(v25, (__int64)v31, v20, v21);
        v22 = v25[0];
        *(_BYTE *)(a1 + 16) |= 1u;
        *(_QWORD *)a1 = v22;
      }
      else
      {
        v18 = v6 + v7;
        LOWORD(v7) = __ROL2__(*(_WORD *)(v6 + 48), 8);
        if ( (_WORD)v7 )
          v7 = (unsigned __int16)v7;
        else
          v7 = sub_2162B90(*(_DWORD *)(v18 + 20));
        v19 = v16 + 40LL * v7;
        if ( v19 > v17 )
        {
          v31[0].m128i_i64[0] = (__int64)"section table goes past the end of file";
          v32 = 259;
          sub_2162BF0(v29, (__int64)v31, v19, 5LL * v7);
          v23 = v29[0].m128i_i64[0];
          *(_BYTE *)(a1 + 16) |= 1u;
          *(_QWORD *)a1 = v23;
        }
        else
        {
          *(_BYTE *)(a1 + 16) &= ~1u;
          *(_QWORD *)a1 = v18;
          *(_QWORD *)(a1 + 8) = v7;
        }
      }
    }
    else
    {
      v28 = 266;
      v26.m128i_i32[0] = v11;
      v30 = 259;
      v29[0].m128i_i64[0] = (__int64)"invalid e_shentsize in ELF header: ";
      sub_A41580(v31, v29, &v26, v6, a5, a6);
      v14 = sub_2195B10(v31, v29, v12, v13);
      v15 = operator new(0x40u);
      sub_2220590(v15, v31, 3, v14);
      *(_BYTE *)(a1 + 16) |= 1u;
      *(_QWORD *)a1 = v15;
    }
  }
  else
  {
    v8 = a2[3];
    v9 = a2[2];
    *(_BYTE *)(a1 + 16) &= ~1u;
    if ( v9 == v8 )
    {
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 8) = 0;
    }
    else
    {
      *(_QWORD *)a1 = v9;
      *(_QWORD *)(a1 + 8) = 0xCCCCCCCCCCCCCCCDLL * ((v8 - v9) >> 3);
    }
  }
  return a1;
}
