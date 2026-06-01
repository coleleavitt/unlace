/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46FAA0
// Address: 0x000000000046FAA0

//----- (000000000046FAA0) ----------------------------------------------------
__int64 __fastcall sub_46FAA0(_BYTE *a1, int a2, const char *a3, const __m128i *a4)
{
  unsigned int v6; // r12d
  const char *v7; // r15
  size_t v8; // rax
  __int64 v9; // rbx
  size_t v10; // r8
  unsigned __int64 v11; // r13
  char *v12; // rsi
  unsigned __int64 v13; // rax
  void *v14; // rax
  __int64 v15; // rbx
  size_t na; // [rsp+8h] [rbp-80h]
  size_t n; // [rsp+8h] [rbp-80h]
  void *v19; // [rsp+10h] [rbp-78h] BYREF
  unsigned __int64 v20; // [rsp+18h] [rbp-70h]
  unsigned __int64 v21; // [rsp+20h] [rbp-68h]
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __int128 v23; // [rsp+38h] [rbp-50h]
  unsigned __int64 v24; // [rsp+48h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  if ( a1[68] )
  {
    if ( !byte_4C94E1 )
      sub_481AC0(1621);
    BUG();
  }
  v6 = 53;
  if ( a2 )
    v6 = 2 * (a2 > 0) + 52;
  sub_470050((__int64)&v19, v6);
  v23 = 0;
  ptr = nullptr;
  sub_4171E0((__int64)&ptr, a3, a4);
  v7 = s1;
  if ( !(_QWORD)v23 )
  {
    if ( s1 )
      goto LABEL_6;
LABEL_17:
    v9 = v20;
    v10 = 1;
    v7 = "";
    v11 = v20 + 1;
    if ( v20 == -1 )
    {
      v9 = -1;
      v7 = "";
      v20 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_10;
    }
    goto LABEL_7;
  }
  v7 = (const char *)ptr;
  if ( !ptr )
    goto LABEL_17;
LABEL_6:
  v8 = strlen(v7);
  v9 = v20;
  v10 = v8 + 1;
  v11 = v8 + 1 + v20;
  if ( !__CFADD__(v8 + 1, v20) )
  {
LABEL_7:
    v12 = (char *)v19;
    v13 = v9;
    if ( v21 < v11 )
    {
      n = v10;
      v19 = sub_481540((__int64)&v19, v19, v11, 1u);
      v12 = (char *)v19;
      v10 = n;
      v13 = v20;
    }
    na = v10;
    memset(&v12[v13], 0, v11 - v13);
    v20 = v11;
    v10 = na;
    goto LABEL_10;
  }
  if ( v20 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v11 = 0x7FFFFFFFFFFFFFFFLL;
    goto LABEL_7;
  }
  if ( v20 != 0x7FFFFFFFFFFFFFFFLL )
    v20 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_10:
  memcpy((char *)v19 + v9, v7, v10);
  v14 = (void *)(*(__int64 (__fastcall **)(_BYTE *, _QWORD, void **))(*(_QWORD *)a1 + 16LL))(a1, v6, &v19);
  j__free(v14);
  if ( v6 == 52 )
    exit(1);
  v15 = ((_QWORD)v23 == 0) + (_QWORD)v23 - 1LL;
  if ( ptr )
  {
    *(_QWORD *)&v23 = 0;
    j__free(ptr);
  }
  if ( v19 )
  {
    v20 = 0;
    j__free(v19);
  }
  return v15;
}
// 4C94E1: using guessed type char byte_4C94E1;
