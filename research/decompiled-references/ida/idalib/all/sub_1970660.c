__int64 __fastcall sub_1970660(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __m128 a5, __m128 a6)
{
  __int64 v10; // rbx
  unsigned int v11; // eax
  _BOOL8 v12; // rcx
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rax
  __int64 v20; // r15
  unsigned __int64 v21; // rbx
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdi
  unsigned __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rax
  unsigned __int64 v32[8]; // [rsp+8h] [rbp-40h] BYREF

  v10 = a4 + 24;
  v11 = sub_F6C520(*(_QWORD *)(a3 + 40));
  v12 = v10 != 0;
  v13 = v11;
  v14 = v10 - v12;
  v15 = 0;
  v18 = sub_193F4E0(a1, a2, *(_QWORD *)(a3 + 40), (__m128i *)(v13 * (v14 / v13 + v12)), v16, v17, a5, a6);
  if ( (v18 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v20 = *a1;
    v21 = v18;
    sub_18C79E0(*a1, 4, 4);
    v22 = sub_1933BC0(a1, *(_QWORD *)(a3 + 32), *(double *)a5.m128_u64, a6);
    if ( v22 != 1 )
    {
      v27 = *a1;
      if ( v22 )
      {
        v31 = sub_1914520(v27, v22 & 0xFFFFFFFFFFFFFFFELL, v23, v24, v25, v26, a5, a6);
        if ( v31 == 1 )
          goto LABEL_9;
        v27 = *a1;
        v28 = v31 & 0xFFFFFFFFFFFFFFFELL;
      }
      else
      {
        v28 = 0;
      }
      v29 = *(unsigned int *)(a3 + 48);
      v32[0] = v21;
      v15 = sub_1E654F0(v27, v32, v28, v29);
      if ( (v15 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        if ( *(_BYTE *)(*(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 18 )
        {
          sub_1EA6140(a2, v15, 24, 8);
          *(_QWORD *)(v30 + 8) = *(_QWORD *)(a4 + 8);
          *(_QWORD *)v30 = *(_QWORD *)a4;
          *(_DWORD *)(v30 + 16) = *(_DWORD *)(a4 + 16);
        }
        goto LABEL_10;
      }
    }
LABEL_9:
    v15 = 0;
LABEL_10:
    sub_190D5E0(v20, a5);
  }
  return v15;
}
