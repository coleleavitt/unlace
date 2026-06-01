/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001FFF0
// Address: 0x000000010001FFF0

//----- (000000010001FFF0) ----------------------------------------------------
bool __fastcall sub_10001FFF0(__int64 a1, int a2, __m128 *a3)
{
  __int64 v3; // rax
  thread_act_t v4; // edi
  thread_state_flavor_t v5; // esi
  mach_msg_type_number_t v6; // ecx
  __int64 v7; // rax
  natural_t new_state[4]; // [rsp+0h] [rbp-50h] BYREF
  __m128 v10; // [rsp+10h] [rbp-40h]
  __m128 v11; // [rsp+20h] [rbp-30h]
  __m128 v12; // [rsp+30h] [rbp-20h]

  if ( *(_BYTE *)(a1 + 1233) == 1 )
  {
    *(__m128 *)new_state = *a3;
    v10 = a3[1];
    v11 = a3[2];
    v12 = a3[3];
    v3 = sub_100001D80(a1, a2);
    if ( v3 )
    {
      v4 = *(_DWORD *)(v3 + 4);
      v5 = 11;
      v6 = 16;
      return thread_set_state(v4, v5, new_state, v6) == 0;
    }
  }
  else
  {
    *(__m128 *)new_state = _mm_shuffle_ps(*a3, a3[1], 136);
    v10 = _mm_shuffle_ps(a3[2], a3[3], 136);
    v7 = sub_100001D80(a1, a2);
    if ( v7 )
    {
      v4 = *(_DWORD *)(v7 + 4);
      v5 = 10;
      v6 = 8;
      return thread_set_state(v4, v5, new_state, v6) == 0;
    }
  }
  return 0;
}
