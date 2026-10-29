__int64 __fastcall sub_19A7C30(__int64 a1, __int64 a2, unsigned int a3, int a4, __m128 a5, __m128 a6)
{
  __int64 v6; // rbx
  __int64 v8; // rsi
  __int64 v11; // rdx
  int v12; // ecx
  __int64 *v13; // rsi
  unsigned int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  int v21; // [rsp+Ch] [rbp-CCh]
  __int64 v22; // [rsp+18h] [rbp-C0h] BYREF
  _QWORD v23[23]; // [rsp+20h] [rbp-B8h] BYREF

  v6 = 1;
  if ( *(char *)(a2 + 28) >= 0 )
  {
    v8 = *(_QWORD *)(a2 + 48);
    v11 = *(unsigned int *)(a2 + 24);
    v12 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                         & 0xFFFFFFFFFFFFFFF0LL)
                             + 16LL);
    if ( (unsigned int)(v12 - 25) <= 1 )
    {
      v13 = (__int64 *)(a1 + 8);
      v14 = 4066;
LABEL_4:
      sub_168B9F0((__int64)v23, v13, v11, v14, 0);
      v15 = *(_QWORD *)a2;
      v16 = a2;
      v6 = 1;
      v22 = (*(__int64 (__fastcall **)(__int64))(v15 + 16))(v16);
      sub_1587DB0((__int64)v23, &v22);
      sub_15F7200(v23);
      return v6;
    }
    v18 = (unsigned int)(v12 - 2);
    if ( (unsigned __int8)v18 <= 4u )
    {
      v13 = (__int64 *)(a1 + 8);
      v14 = 4065;
      goto LABEL_4;
    }
    v21 = *(_DWORD *)(a2 + 24);
    v23[0] = v8;
    v19 = sub_C1BEF0((__int64)v23, v8, v11, v18);
    v20 = sub_190BDA0(a1, a2, v19, 1, v21, 0, *(double *)a5.m128_u64, a6) & 0xFFFFFFFFFFFFFFFELL;
    if ( a4 == 1 )
    {
      return sub_19179E0(a1, a3, v20, 1u, a5, a6);
    }
    else if ( a4 == 2 )
    {
      return sub_1C36A00(a1, a3, v20);
    }
    else
    {
      return sub_19179E0(a1, a3, v20, 0, a5, a6);
    }
  }
  return v6;
}
