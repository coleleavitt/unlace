unsigned __int64 __fastcall sub_1DC88F0(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rbx
  char v9; // r14
  __int64 v10; // rax
  char v11; // al
  __int64 v12; // rax
  char v13; // si
  unsigned __int64 result; // rax
  void *v15; // [rsp+0h] [rbp-B8h] BYREF
  int v16; // [rsp+8h] [rbp-B0h]
  __int64 v17; // [rsp+10h] [rbp-A8h] BYREF
  void *ptr; // [rsp+40h] [rbp-78h] BYREF
  __int64 v19; // [rsp+48h] [rbp-70h]
  _BYTE v20[48]; // [rsp+50h] [rbp-68h] BYREF
  char v21; // [rsp+80h] [rbp-38h]

  v8 = *(_QWORD *)(a1 + 24);
  v9 = *(_BYTE *)(a2 + 40);
  sub_1DC8800((__int64)&v15, (__int64 **)a1, a1 + 24, *(_QWORD *)(a2 + 24), *(_QWORD *)(a2 + 32), a8, a3, a4);
  ptr = v20;
  v19 = 0x600000000LL;
  if ( v16 )
    sub_1576230((char ***)&ptr, (char ***)&v15);
  v10 = *(unsigned __int8 *)(v8 + 144);
  v21 = v9;
  if ( (_BYTE)v10 != 0xFF )
  {
    if ( (_BYTE)v10 == 4 )
    {
      sub_1576230((char ***)(v8 + 16), (char ***)&ptr);
      *(_BYTE *)(v8 + 80) = v21;
      goto LABEL_9;
    }
    funcs_1576A39[v10]();
  }
  *(_QWORD *)(v8 + 16) = v8 + 32;
  *(_QWORD *)(v8 + 24) = 0x600000000LL;
  if ( (_DWORD)v19 )
    sub_1576230((char ***)(v8 + 16), (char ***)&ptr);
  v11 = v21;
  *(_BYTE *)(v8 + 144) = 4;
  *(_BYTE *)(v8 + 80) = v11;
LABEL_9:
  if ( ptr != v20 )
    free(ptr);
  if ( v15 != &v17 )
    free(v15);
  v12 = *(_QWORD *)(a1 + 24);
  v13 = *(_BYTE *)(v12 + 1);
  if ( v13 == 41 || *(_BYTE *)(v12 + 144) != 4 )
    abort();
  result = sub_EB47D0(
             *(_QWORD **)(**(_QWORD **)a1 + 248LL),
             v13,
             *(_DWORD *)(v12 + 4),
             *(_DWORD *)(v12 + 12),
             *(unsigned __int8 *)(v12 + 80),
             *(unsigned int *)(v12 + 8),
             *(void **)(v12 + 16),
             *(unsigned int *)(v12 + 24));
  *(_QWORD *)(a1 + 32) = result;
  return result;
}
