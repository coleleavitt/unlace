void __fastcall sub_BBB890(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rax
  __int64 *v4; // rbp
  __int64 *v5; // r13
  __int64 v6; // r12
  __int64 v7; // r14
  _DWORD *v8; // rax
  _DWORD *v9; // rax
  _DWORD *v10; // rax
  __int64 v11; // rax

  v3 = *(_QWORD *)(a1 + 32);
  v4 = *(__int64 **)(v3 + 8LL * a2);
  v5 = *(__int64 **)(v3 + 8LL * a3);
  v6 = *v4;
  v7 = *v5;
  v8 = *(_DWORD **)(sub_15D1F10(*v4) + 24);
  if ( v8 && *(_DWORD *)(a1 + 1720) == *v8 && !v8[1]
    || (v9 = *(_DWORD **)(sub_15D1F10(v6) + 24)) != nullptr && *(_DWORD *)(a1 + 1720) == *v9 && v9[1] == 1 )
  {
    v10 = *(_DWORD **)(sub_15D1F10(v6) + 24);
    if ( v10 && *(_DWORD *)(a1 + 1720) == *v10 && v10[1] == 1 )
    {
      sub_BE79E0(a1 + 3624, v6, v7);
    }
    else
    {
      v11 = sub_180C100(*(_QWORD *)(a1 + 120), 32);
      *(_QWORD *)v11 = 0x80000000LL;
      *(_DWORD *)(v11 + 24) = -2;
      *(__m128i *)(v11 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v4, (__m128i)(unsigned __int64)v5);
      sub_BBB5D0(a1, v11, v4, v5);
    }
  }
}

