__int64 __fastcall sub_390480(__int64 a1, char a2)
{
  __int64 v2; // rax
  unsigned int v3; // edx
  int v4; // ecx
  int v6; // edx
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // rax
  int v10; // ecx
  _QWORD *v11; // rax
  int v12; // ebx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 (__fastcall **v20)(); // [rsp+0h] [rbp-48h] BYREF
  __int64 v21; // [rsp+8h] [rbp-40h]
  __m128i v22; // [rsp+10h] [rbp-38h]
  unsigned __int64 v23; // [rsp+28h] [rbp-20h]

  v23 = __readfsqword(0x28u);
  sub_38B9D0(a1, 0);
  v2 = *(_QWORD *)(a1 + 32);
  v3 = 0;
  if ( *(_DWORD *)(v2 + 152) > *(_DWORD *)(a1 + 44) )
  {
    v4 = *(_DWORD *)(a1 + 56);
    if ( v4 == 2 || !v4 && !*(_DWORD *)(a1 + 80) )
    {
      v6 = *(_DWORD *)(v2 + 108);
      if ( a2 )
      {
        *(_DWORD *)(v2 + 108) = v6 | 4;
        sub_2585D0(*(__int64 **)(a1 + 32));
        sub_38FB60(a1, 1u, v7);
        v9 = *(_QWORD *)(a1 + 32);
        v10 = *(_DWORD *)(v9 + 152);
        if ( v10 > 0 )
        {
          v11 = *(_QWORD **)(v9 + 128);
          v12 = 0;
          while ( !v11[1] || *(_BYTE *)*v11 != 32 || *(_BYTE *)(*v11 + 1LL) != 32 )
          {
            ++v12;
            v11 += 4;
            if ( v12 == v10 )
              return 1;
          }
          if ( *(_DWORD *)(a1 + 44) != v12 )
          {
            v13 = callui(56, *(_QWORD *)(a1 + 8), 0, 0, 0, v8, v20, v21, v22.m128i_i64[0], v22.m128i_i64[1]);
            v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 128LL))(v13);
            HIDWORD(v21) = v12;
            v20 = off_4E0BF8;
            v15 = *(_QWORD *)(a1 + 8);
            v16 = *(unsigned int *)(a1 + 48);
            v17 = *(unsigned int *)(a1 + 52);
            LODWORD(v21) = 0;
            v22 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v14, (__m128i)(unsigned __int64)v14);
            ((void (__fastcall *)(__int64, __int64, __int64 (__fastcall ***)(), __int64, __int64, __int64))callui)(
              69,
              v15,
              &v20,
              v16,
              v17,
              v18);
          }
        }
      }
      else
      {
        *(_DWORD *)(v2 + 108) = v6 & 0xFFFFFFFB;
        sub_2585D0(*(__int64 **)(a1 + 32));
        sub_38FB60(a1, 1u, v19);
      }
      return 1;
    }
  }
  return v3;
}
