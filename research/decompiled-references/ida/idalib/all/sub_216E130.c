__int64 __fastcall sub_216E130(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  unsigned int v8; // edx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r13
  __int64 v16; // rbp
  __int64 v17; // rcx
  unsigned __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // [rsp+E0h] [rbp-118h] BYREF
  _QWORD v27[6]; // [rsp+110h] [rbp-E8h] BYREF
  __m128i v28; // [rsp+140h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+150h] [rbp-A8h]
  __int16 v30; // [rsp+160h] [rbp-98h]
  __m128i v31[2]; // [rsp+170h] [rbp-88h] BYREF
  __int16 v32; // [rsp+190h] [rbp-68h]
  __m128i v33[2]; // [rsp+1A0h] [rbp-58h] BYREF
  __int16 v34; // [rsp+1C0h] [rbp-38h]

  v7 = *a2;
  v8 = *(_DWORD *)(*a2 + 32LL);
  if ( v8 )
  {
    v12 = *(unsigned __int16 *)(v7 + 46);
    if ( (_WORD)v12 == 40 )
    {
      v17 = v8;
      v18 = a2[1];
      if ( (unsigned __int64)v8 + 40 > v18 || v8 > 0xFFFFFFD7 )
      {
        v26 = v8;
        v28.m128i_i64[0] = (__int64)&v26;
        v30 = 271;
        v31[0].m128i_i64[0] = (__int64)"section header table goes past the end of the file: e_shoff = 0x";
        v32 = 259;
        v29 = 0;
        sub_A41580(v33, v31, &v28, 259, a5, a6);
        sub_2162BF0(v27, (__int64)v33, v22, v23);
        v24 = v27[0];
        *(_BYTE *)(a1 + 16) |= 1u;
        *(_QWORD *)a1 = v24;
      }
      else
      {
        v19 = v7 + v8;
        v20 = *(unsigned __int16 *)(v7 + 48);
        if ( !(_DWORD)v20 )
          v20 = *(unsigned int *)(v19 + 20);
        v21 = v8 + 40 * v20;
        if ( v21 > v18 )
        {
          v33[0].m128i_i64[0] = (__int64)"section table goes past the end of file";
          v34 = 259;
          sub_2162BF0(v31, (__int64)v33, v21, v17);
          v25 = v31[0].m128i_i64[0];
          *(_BYTE *)(a1 + 16) |= 1u;
          *(_QWORD *)a1 = v25;
        }
        else
        {
          *(_BYTE *)(a1 + 16) &= ~1u;
          *(_QWORD *)a1 = v19;
          *(_QWORD *)(a1 + 8) = v20;
        }
      }
    }
    else
    {
      v28.m128i_i32[0] = *(unsigned __int16 *)(v7 + 46);
      v30 = 266;
      v32 = 259;
      v31[0].m128i_i64[0] = (__int64)"invalid e_shentsize in ELF header: ";
      sub_A41580(v33, v31, &v28, v12, a5, a6);
      v15 = sub_2195B10(v33, v31, v13, v14);
      v16 = operator new(0x40u);
      sub_2220590(v16, v33, 3, v15);
      *(_BYTE *)(a1 + 16) |= 1u;
      *(_QWORD *)a1 = v16;
    }
  }
  else
  {
    v9 = a2[3];
    v10 = a2[2];
    *(_BYTE *)(a1 + 16) &= ~1u;
    if ( v10 == v9 )
    {
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 8) = 0;
    }
    else
    {
      *(_QWORD *)a1 = v10;
      *(_QWORD *)(a1 + 8) = 0xCCCCCCCCCCCCCCCDLL * ((v9 - v10) >> 3);
    }
  }
  return a1;
}
