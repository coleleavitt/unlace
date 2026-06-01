__int64 __fastcall sub_1E07FD0(unsigned __int64 *a1, __int64 a2, __m128 a3)
{
  __int64 *v3; // r12
  unsigned __int64 (__fastcall *v4)(__int64); // rax
  __int64 *v5; // r14
  unsigned __int64 (__fastcall *v6)(__int64); // rax
  void *v7; // r14
  __int64 v8; // r15
  __int64 *v9; // rbp
  unsigned __int64 (__fastcall *v10)(__int64); // rdx
  unsigned __int64 v11; // r8
  int v12; // ecx
  int v13; // edx
  __int64 v14; // rbx
  unsigned int v16; // eax
  unsigned __int64 v17; // rax
  unsigned __int64 (__fastcall *v18)(__int64); // rdx
  int v19; // eax
  char *v20; // [rsp+0h] [rbp-88h]
  int v21; // [rsp+0h] [rbp-88h]
  __int64 v22; // [rsp+8h] [rbp-80h]
  int v23; // [rsp+8h] [rbp-80h]
  void *ptr; // [rsp+10h] [rbp-78h] BYREF
  unsigned int v25; // [rsp+18h] [rbp-70h]
  __int64 v26; // [rsp+20h] [rbp-68h] BYREF

  v3 = *(__int64 **)(*a1 + 744);
  v4 = *(unsigned __int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL);
  if ( v4 != sub_BB0C60 )
    v4(a2);
  sub_1AA24E0(v3);
  sub_1E06AB0(&ptr, *a1, a1[4], *(_BYTE *)(a2 + 33), *(__int64 **)(a2 + 48), *(_QWORD *)(a2 + 56));
  v5 = *(__int64 **)(*a1 + 744);
  v6 = *(unsigned __int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL);
  if ( v6 == sub_BB0C60 )
  {
    if ( !(unsigned __int8)sub_1AA8D90(
                             *(__int64 **)(*a1 + 744),
                             *(unsigned __int8 *)(a2 + 33),
                             *(_DWORD *)(a2 + 24),
                             (char *)ptr,
                             v25,
                             a3) )
      goto LABEL_5;
  }
  else
  {
    v22 = v25;
    v20 = (char *)ptr;
    *(double *)a3.m128_u64 = ((double (__fastcall *)(__int64))v6)(a2);
    if ( !(unsigned __int8)sub_1AA8D90(v5, *(unsigned __int8 *)(a2 + 33), v16, v20, v22, a3) )
    {
LABEL_5:
      v7 = ptr;
      v8 = v25;
      v9 = *(__int64 **)(*a1 + 744);
      v10 = *(unsigned __int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL);
      if ( v10 == sub_BB0C60 )
      {
        LODWORD(v11) = *(_DWORD *)(a2 + 40);
        v12 = *(_DWORD *)(a2 + 36);
      }
      else
      {
        v17 = v10(a2);
        v12 = *(_DWORD *)(a2 + 36);
        v11 = HIDWORD(v17);
        v18 = *(unsigned __int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL);
        if ( v18 != sub_BB0C60 )
        {
          v23 = *(_DWORD *)(a2 + 36);
          v21 = HIDWORD(v17);
          v19 = v18(a2);
          v12 = v23;
          LODWORD(v11) = v21;
          v13 = v19;
          goto LABEL_8;
        }
      }
      v13 = *(_DWORD *)(a2 + 24);
LABEL_8:
      v14 = sub_1AA2DC0(v9, *(_BYTE *)(a2 + 33), v13, v12, 0, 0, v11, v7, v8);
      goto LABEL_9;
    }
  }
  v14 = 0;
LABEL_9:
  if ( ptr != &v26 )
    free(ptr);
  return v14;
}
