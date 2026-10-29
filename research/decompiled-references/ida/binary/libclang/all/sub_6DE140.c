unsigned __int64 __fastcall sub_6DE140(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rdx
  __int64 v6; // rax
  unsigned __int64 result; // rax
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // rbx
  __int64 v14; // rax
  __int64 *v15; // rdx
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // [rsp+8h] [rbp-E0h]
  __int64 v18; // [rsp+18h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-C8h] BYREF
  _OWORD v20[11]; // [rsp+30h] [rbp-B8h] BYREF

  v4 = a3;
  v5 = a3 & 0xFFFFFFFFFFFFFFF8LL;
  v6 = *(_QWORD *)(a2 + 48);
  if ( v6 )
  {
    if ( v5 <= 0xF )
      return v6 & 0xFFFFFFFFFFFFFFF0LL;
    v8 = (_QWORD *)(*(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF8LL);
    v9 = (*(_QWORD *)(a2 + 80) & 4) != 0 ? v8[1] : *v8;
    if ( a3 == v9 )
    {
      return v6 & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v18 = 0;
      ptr[0] = v20;
      ptr[1] = (void *)0x2000000004LL;
      v20[0] = _mm_shuffle_ps(
                 (__m128)_mm_unpacklo_epi64((__m128i)a2, (__m128i)HIDWORD(a2)),
                 (__m128)_mm_unpacklo_epi64((__m128i)a3, (__m128i)HIDWORD(a3)),
                 136);
      v10 = sub_25AC3A0(a1 + 592, ptr, &v18, &off_47D0980);
      if ( v10 )
      {
        result = (v10 - 24) & 0xFFFFFFFFFFFFFFF0LL;
      }
      else
      {
        v16 = sub_6A77E0(a1 + 2192, 56, 4);
        sub_B0CAA0(v16, 52, a2, a3, *(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] | a3 & 7);
        sub_25AC200(a1 + 592, v16 + 24, v18, &off_47D0980);
        sub_6D95F0(a1 + 8, v16);
        result = v16 & 0xFFFFFFFFFFFFFFF0LL;
      }
      if ( ptr[0] != v20 )
      {
        v17 = result;
        free(ptr[0]);
        return v17;
      }
    }
  }
  else
  {
    if ( v5 <= 0xF )
    {
      v15 = (__int64 *)(*(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a2 + 80) & 4) != 0 )
        v4 = v15[1];
      else
        v4 = *v15;
    }
    v11 = *(_QWORD *)(a1 + 2192);
    *(_QWORD *)(a1 + 2272) += 48LL;
    v12 = (v11 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    if ( *(_QWORD *)(a1 + 2200) >= v12 + 48 && v11 )
    {
      *(_QWORD *)(a1 + 2192) = v12 + 48;
      v13 = (v11 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v13 = sub_6A76A0(a1 + 2192, 48, 4);
      v12 = v13;
    }
    sub_B0CAA0(v13, 52, a2, 0, *(_QWORD *)&byte_8[v4 & 0xFFFFFFFFFFFFFFF0LL] | v4 & 7);
    *(_QWORD *)(a2 + 48) = v13;
    v14 = *(unsigned int *)(a1 + 16);
    if ( *(unsigned int *)(a1 + 20) < (unsigned __int64)(v14 + 1) )
    {
      sub_25D6060(a1 + 8, a1 + 24, v14 + 1, 8);
      v14 = *(unsigned int *)(a1 + 16);
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v14) = v12;
    ++*(_DWORD *)(a1 + 16);
    return v13 & 0xFFFFFFFFFFFFFFF0LL;
  }
  return result;
}

