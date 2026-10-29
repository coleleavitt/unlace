__int64 __fastcall sub_1E08180(unsigned __int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 *v5; // r12
  unsigned __int64 (__fastcall *v6)(__int64); // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int16 *v10; // rsi
  unsigned __int64 v11; // r12
  __int64 *v12; // r15
  unsigned __int64 (__fastcall *v13)(__int64); // rax
  __int64 *v14; // rbp
  unsigned __int64 (__fastcall *v15)(__int64); // r11
  unsigned __int64 v16; // r15
  char *v17; // r9
  __int64 v18; // r10
  unsigned __int64 v19; // r12
  unsigned int v20; // esi
  int v21; // ecx
  unsigned int v22; // edx
  unsigned int v23; // eax
  __int64 v24; // rbx
  unsigned int v26; // eax
  char *v27; // [rsp+8h] [rbp-A0h]
  unsigned int v28; // [rsp+8h] [rbp-A0h]
  __int64 v29; // [rsp+10h] [rbp-98h]
  int v30; // [rsp+10h] [rbp-98h]
  char *v31; // [rsp+20h] [rbp-88h]
  __int64 v32; // [rsp+28h] [rbp-80h]
  void *ptr; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v34; // [rsp+38h] [rbp-70h]
  __int64 v35; // [rsp+40h] [rbp-68h] BYREF

  v5 = *(__int64 **)(*a1 + 744);
  v6 = *(unsigned __int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL);
  if ( v6 != sub_BB0C60 )
    v6(a2);
  sub_1AA24E0(v5);
  sub_1E06AB0(&ptr, *a1, a1[4], *(_BYTE *)(a2 + 33), *(__int64 **)(a2 + 48), *(_QWORD *)(a2 + 56));
  v10 = *(__int16 **)(a2 + 64);
  if ( v10 )
  {
    v11 = sub_1DF2100(*a1, v10, a1[4], v7, v8, v9, a3, a4);
    v12 = *(__int64 **)(*a1 + 744);
    if ( v11 > 1 )
    {
      v11 = sub_1AAA4D0(*(__int64 **)(*a1 + 744), v11 & 0xFFFFFFFFFFFFFFFELL, *(double *)a3.m128_u64);
      v12 = *(__int64 **)(*a1 + 744);
    }
  }
  else
  {
    v11 = 0;
    v12 = *(__int64 **)(*a1 + 744);
  }
  v13 = *(unsigned __int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL);
  if ( v13 == sub_BB0C60 )
  {
    if ( !(unsigned __int8)sub_1AA8D90(v12, *(unsigned __int8 *)(a2 + 33), *(_DWORD *)(a2 + 24), (char *)ptr, v34, a3) )
    {
LABEL_8:
      v14 = *(__int64 **)(*a1 + 744);
      v15 = *(unsigned __int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL);
      if ( v15 == sub_BB0C60 )
      {
        LODWORD(v16) = *(_DWORD *)(a2 + 40);
      }
      else
      {
        v16 = v15(a2) >> 32;
        v15 = *(unsigned __int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL);
      }
      v17 = (char *)ptr;
      v18 = v34;
      v19 = v11 & 0xFFFFFFFFFFFFFFFELL;
      v20 = *(_DWORD *)(a2 + 76);
      v21 = *(_DWORD *)(a2 + 72);
      v22 = *(_DWORD *)(a2 + 36);
      if ( v15 == sub_BB0C60 )
      {
        v23 = *(_DWORD *)(a2 + 24);
      }
      else
      {
        v31 = (char *)ptr;
        v32 = v34;
        v30 = *(_DWORD *)(a2 + 72);
        v28 = *(_DWORD *)(a2 + 36);
        v23 = v15(a2);
        v17 = v31;
        v18 = v32;
        v21 = v30;
        v22 = v28;
      }
      v24 = sub_1AA7910(v14, v23, v22, v21, v19, v20, v17, v18, v16, 0);
      goto LABEL_13;
    }
  }
  else
  {
    v29 = v34;
    v27 = (char *)ptr;
    *(double *)a3.m128_u64 = ((double (__fastcall *)(__int64))v13)(a2);
    if ( !(unsigned __int8)sub_1AA8D90(v12, *(unsigned __int8 *)(a2 + 33), v26, v27, v29, a3) )
      goto LABEL_8;
  }
  v24 = 0;
LABEL_13:
  if ( ptr != &v35 )
    free(ptr);
  return v24;
}
