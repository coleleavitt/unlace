__int64 __fastcall sub_114D820(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __m128i *v5; // rbp
  __int8 *v6; // r13
  int v7; // r12d
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10[6]; // [rsp+8h] [rbp-30h] BYREF

  if ( *(_DWORD *)(a1 + 12) <= *(_DWORD *)(a1 + 8) )
  {
    v5 = (__m128i *)sub_22136C0(a1, a1 + 16, 0, 40, v10);
    v6 = &v5->m128i_i8[40 * *(unsigned int *)(a1 + 8)];
    *(_QWORD *)v6 = v6 + 16;
    sub_11482A0(v6, *(_BYTE **)a2, *(_QWORD *)a2 + *(_QWORD *)(a2 + 8));
    v6[32] = *(_BYTE *)(a2 + 32);
    sub_114D730(a1, v5);
    v7 = v10[0];
    if ( a1 + 16 != *(_QWORD *)a1 )
      free(*(void **)a1);
    v8 = *(_DWORD *)(a1 + 8);
    *(_QWORD *)a1 = v5;
    *(_DWORD *)(a1 + 12) = v7;
    v9 = (unsigned int)(v8 + 1);
    *(_DWORD *)(a1 + 8) = v9;
    return (__int64)&v5[-2] + 40 * v9 - 8;
  }
  else
  {
    v2 = *(_QWORD *)a1 + 40LL * *(unsigned int *)(a1 + 8);
    *(_QWORD *)v2 = v2 + 16;
    sub_11482A0((_QWORD *)v2, *(_BYTE **)a2, *(_QWORD *)a2 + *(_QWORD *)(a2 + 8));
    *(_BYTE *)(v2 + 32) = *(_BYTE *)(a2 + 32);
    v3 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
    *(_DWORD *)(a1 + 8) = v3;
    return *(_QWORD *)a1 + 40 * v3 - 40;
  }
}

