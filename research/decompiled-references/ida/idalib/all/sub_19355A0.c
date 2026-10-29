unsigned __int64 __fastcall sub_19355A0(__int64 a1, __int64 a2, double a3, __m128 a4)
{
  __int64 v4; // rbx
  char v5; // r14
  __int64 v6; // rax
  char v7; // al
  __int64 v8; // rax
  char v9; // si
  unsigned __int64 result; // rax
  void *v11; // [rsp+0h] [rbp-B8h] BYREF
  int v12; // [rsp+8h] [rbp-B0h]
  __int64 v13; // [rsp+10h] [rbp-A8h] BYREF
  void *ptr; // [rsp+40h] [rbp-78h] BYREF
  __int64 v15; // [rsp+48h] [rbp-70h]
  _BYTE v16[48]; // [rsp+50h] [rbp-68h] BYREF
  char v17; // [rsp+80h] [rbp-38h]

  v4 = *(_QWORD *)(a1 + 24);
  v5 = *(_BYTE *)(a2 + 40);
  sub_1935320(
    (__int64)&v11,
    (__int64 **)a1,
    (unsigned __int8 **)(a1 + 24),
    *(unsigned __int64 **)(a2 + 24),
    *(_QWORD *)(a2 + 32),
    a3,
    a4);
  ptr = v16;
  v15 = 0x600000000LL;
  if ( v12 )
    sub_1576230((char ***)&ptr, (char ***)&v11);
  v6 = *(unsigned __int8 *)(v4 + 144);
  v17 = v5;
  if ( (_BYTE)v6 != 0xFF )
  {
    if ( (_BYTE)v6 == 4 )
    {
      sub_1576230((char ***)(v4 + 16), (char ***)&ptr);
      *(_BYTE *)(v4 + 80) = v17;
      goto LABEL_9;
    }
    funcs_1576A39[v6]();
  }
  *(_QWORD *)(v4 + 16) = v4 + 32;
  *(_QWORD *)(v4 + 24) = 0x600000000LL;
  if ( (_DWORD)v15 )
    sub_1576230((char ***)(v4 + 16), (char ***)&ptr);
  v7 = v17;
  *(_BYTE *)(v4 + 144) = 4;
  *(_BYTE *)(v4 + 80) = v7;
LABEL_9:
  if ( ptr != v16 )
    free(ptr);
  if ( v11 != &v13 )
    free(v11);
  v8 = *(_QWORD *)(a1 + 24);
  v9 = *(_BYTE *)(v8 + 1);
  if ( v9 == 41 || *(_BYTE *)(v8 + 144) != 4 )
    abort();
  result = sub_EB46D0(
             *(_QWORD **)(**(_QWORD **)a1 + 248LL),
             v9,
             *(_DWORD *)(v8 + 4),
             *(_DWORD *)(v8 + 12),
             *(unsigned __int8 *)(v8 + 80),
             *(unsigned int *)(v8 + 8),
             *(void **)(v8 + 16),
             *(unsigned int *)(v8 + 24));
  *(_QWORD *)(a1 + 32) = result;
  return result;
}
