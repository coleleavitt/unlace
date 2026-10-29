unsigned __int64 __fastcall sub_175DB50(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  char v3; // r14
  __int64 v4; // rax
  char v5; // al
  __int64 v6; // rax
  char v7; // si
  unsigned __int64 result; // rax
  void *v9; // [rsp+0h] [rbp-B8h] BYREF
  int v10; // [rsp+8h] [rbp-B0h]
  __int64 v11; // [rsp+10h] [rbp-A8h] BYREF
  void *ptr; // [rsp+40h] [rbp-78h] BYREF
  __int64 v13; // [rsp+48h] [rbp-70h]
  _BYTE v14[48]; // [rsp+50h] [rbp-68h] BYREF
  char v15; // [rsp+80h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 24);
  v3 = *(_BYTE *)(a2 + 40);
  sub_175D740(
    (__int64)&v9,
    (__int64 **)a1,
    (unsigned __int8 **)(a1 + 24),
    *(unsigned __int16 ***)(a2 + 24),
    *(_QWORD *)(a2 + 32));
  ptr = v14;
  v13 = 0x600000000LL;
  if ( v10 )
    sub_1576230((char ***)&ptr, (char ***)&v9);
  v4 = *(unsigned __int8 *)(v2 + 144);
  v15 = v3;
  if ( (_BYTE)v4 != 0xFF )
  {
    if ( (_BYTE)v4 == 4 )
    {
      sub_1576230((char ***)(v2 + 16), (char ***)&ptr);
      *(_BYTE *)(v2 + 80) = v15;
      goto LABEL_9;
    }
    funcs_1576A39[v4]();
  }
  *(_QWORD *)(v2 + 16) = v2 + 32;
  *(_QWORD *)(v2 + 24) = 0x600000000LL;
  if ( (_DWORD)v13 )
    sub_1576230((char ***)(v2 + 16), (char ***)&ptr);
  v5 = v15;
  *(_BYTE *)(v2 + 144) = 4;
  *(_BYTE *)(v2 + 80) = v5;
LABEL_9:
  if ( ptr != v14 )
    free(ptr);
  if ( v9 != &v11 )
    free(v9);
  v6 = *(_QWORD *)(a1 + 24);
  v7 = *(_BYTE *)(v6 + 1);
  if ( v7 == 41 || *(_BYTE *)(v6 + 144) != 4 )
    abort();
  result = sub_EB48D0(
             *(_QWORD **)(**(_QWORD **)a1 + 248LL),
             v7,
             *(_DWORD *)(v6 + 4),
             *(_DWORD *)(v6 + 12),
             *(unsigned __int8 *)(v6 + 80),
             *(unsigned int *)(v6 + 8),
             *(void **)(v6 + 16),
             *(unsigned int *)(v6 + 24));
  *(_QWORD *)(a1 + 32) = result;
  return result;
}
