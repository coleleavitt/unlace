void __fastcall sub_1264A30(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rax
  __m128i si128; // xmm0
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 (__fastcall *v9)(__int64 *, void *, __int64); // r13
  __int64 v10; // r12
  __int64 v11; // rcx
  _QWORD v12[4]; // [rsp+0h] [rbp-1D8h] BYREF
  __int16 v13; // [rsp+20h] [rbp-1B8h]
  _QWORD v14[4]; // [rsp+30h] [rbp-1A8h] BYREF
  __int16 v15; // [rsp+50h] [rbp-188h]
  _QWORD v16[4]; // [rsp+60h] [rbp-178h] BYREF
  __int16 v17; // [rsp+80h] [rbp-158h]
  void *ptr; // [rsp+90h] [rbp-148h] BYREF
  __m128i v19; // [rsp+98h] [rbp-140h]
  _BYTE v20[304]; // [rsp+A8h] [rbp-130h] BYREF

  if ( *(_BYTE *)(a1 + 2384) )
  {
    v4 = *(unsigned int *)(a3 + 8);
    if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_2237220(a3, a3 + 16, v4 + 1, 8);
      v4 = *(unsigned int *)(a3 + 8);
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v4) = "-isystem";
    ++*(_DWORD *)(a3 + 8);
    v6 = *(_QWORD *)(a1 + 2496);
    v7 = *(_QWORD *)(a1 + 2488);
    v14[2] = a1 + 2392;
    v16[1] = v6;
    v16[2] = "/../";
    v14[0] = v16;
    v12[0] = v14;
    v15 = 1026;
    v12[2] = "/include";
    v8 = *a2;
    v13 = 770;
    v17 = 773;
    v9 = *(__int64 (__fastcall **)(__int64 *, void *, __int64))(v8 + 16);
    v16[0] = v7;
    v19 = si128;
    ptr = v20;
    sub_22538C0(v12, &ptr);
    v10 = v9(a2, ptr, v19.m128i_i64[0]);
    if ( ptr != v20 )
      free(ptr);
    v11 = *(unsigned int *)(a3 + 8);
    if ( v11 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_2237220(a3, a3 + 16, v11 + 1, 8);
      v11 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v11) = v10;
    ++*(_DWORD *)(a3 + 8);
  }
}
