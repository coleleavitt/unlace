/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001F270
// Address: 0x000000010001F270

//----- (000000010001F270) ----------------------------------------------------
bool __fastcall sub_10001F270(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rax
  thread_act_t v4; // edi
  thread_state_flavor_t v5; // esi
  mach_msg_type_number_t v6; // ecx
  __int64 v7; // rax
  natural_t new_state[4]; // [rsp+0h] [rbp-B0h] BYREF
  __m128 v10; // [rsp+10h] [rbp-A0h]
  __m256i v11; // [rsp+20h] [rbp-90h]
  __int128 v12; // [rsp+40h] [rbp-70h]
  __int128 v13; // [rsp+50h] [rbp-60h]
  __int128 v14; // [rsp+60h] [rbp-50h]
  __int128 v15; // [rsp+70h] [rbp-40h]
  __int64 v16; // [rsp+80h] [rbp-30h]
  __int64 v17; // [rsp+88h] [rbp-28h]
  __int64 v18; // [rsp+90h] [rbp-20h]
  __int128 v19; // [rsp+98h] [rbp-18h]

  if ( *(_BYTE *)(a1 + 1233) == 1 )
  {
    *(_OWORD *)new_state = *(_OWORD *)a3;
    v10 = *(__m128 *)(a3 + 16);
    v11 = *(__m256i *)(a3 + 32);
    v16 = *(_QWORD *)(a3 + 64);
    v12 = *(_OWORD *)(a3 + 72);
    v13 = *(_OWORD *)(a3 + 88);
    v14 = *(_OWORD *)(a3 + 104);
    v15 = *(_OWORD *)(a3 + 120);
    v17 = *(_QWORD *)(a3 + 136);
    v18 = *(_QWORD *)(a3 + 152);
    v19 = *(_OWORD *)(a3 + 176);
    v3 = sub_100001D80(a1, a2);
    if ( v3 )
    {
      v4 = *(_DWORD *)(v3 + 4);
      v5 = 4;
      v6 = 42;
      return thread_set_state(v4, v5, new_state, v6) == 0;
    }
  }
  else
  {
    *(__m128 *)new_state = _mm_shuffle_ps(*(__m128 *)a3, *(__m128 *)(a3 + 16), 136);
    v10 = _mm_shuffle_ps(*(__m128 *)(a3 + 32), *(__m128 *)(a3 + 48), 136);
    v11.i32[2] = *(_DWORD *)(a3 + 64);
    v11.i32[1] = *(_DWORD *)(a3 + 136);
    v11.i32[0] = *(_DWORD *)(a3 + 144);
    *(__m128 *)((char *)v11.u128 + 12) = _mm_shuffle_ps(*(__m128 *)(a3 + 152), *(__m128 *)(a3 + 168), 136);
    v11.i32[7] = *(_DWORD *)(a3 + 184);
    v7 = sub_100001D80(a1, a2);
    if ( v7 )
    {
      v4 = *(_DWORD *)(v7 + 4);
      v5 = 1;
      v6 = 16;
      return thread_set_state(v4, v5, new_state, v6) == 0;
    }
  }
  return 0;
}
