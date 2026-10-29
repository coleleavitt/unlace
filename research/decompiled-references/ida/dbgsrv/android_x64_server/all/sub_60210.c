/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_60210
// Address: 0x0000000000060210

//----- (0000000000060210) ----------------------------------------------------
__int64 __fastcall sub_60210(__int64 a1, _BYTE *a2, double a3, __m128 a4)
{
  char *v4; // rdx
  char *v5; // r14
  char *v6; // r12
  char *v7; // rax
  char *v8; // rbx
  char *v9; // rbx
  size_t v10; // rdx
  char *s; // [rsp+8h] [rbp-60h] BYREF
  char *v13; // [rsp+10h] [rbp-58h]
  char *v14; // [rsp+18h] [rbp-50h]
  void *src[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v16; // [rsp+30h] [rbp-38h]
  unsigned __int64 v17; // [rsp+40h] [rbp-28h]

  v17 = __readfsqword(0x28u);
  *(_OWORD *)src = 0;
  v16 = 0;
  if ( *(_QWORD *)(a1 + 16) )
    v4 = *(char **)(a1 + 8);
  else
    v4 = (char *)s1;
  if ( (unsigned __int8)eval_expr((__int64)a2, -1, v4, (__int64)src, 0.0, a4) )
    goto LABEL_19;
  sub_37F60((__int64)&s, "IDC_FAILURE: ");
  if ( src[1] )
  {
    v5 = (char *)src[1] - 1;
    if ( src[1] != (char *)&dword_0 + 1 )
    {
      v6 = v13 - 1;
      if ( !v13 )
        v6 = nullptr;
      v7 = s;
      v8 = &v6[(unsigned __int64)src[1]];
      if ( v14 < &v6[(unsigned __int64)src[1]] )
      {
        v7 = (char *)qvector_reserve((__int64)&s, s, (unsigned __int64)v8, 1u);
        s = v7;
      }
      v13 = v8;
      v7[(unsigned __int64)&v5[(_QWORD)v6]] = 0;
      memcpy(&v6[(_QWORD)s], src[0], (size_t)v5);
    }
  }
  if ( v13 )
  {
    v9 = s;
    if ( !s )
    {
      v9 = nullptr;
      v10 = 0;
      goto LABEL_17;
    }
  }
  else
  {
    v9 = (char *)s1;
  }
  v10 = strlen(v9);
LABEL_17:
  *a2 = 7;
  sub_4ABC0((__int64)(a2 + 8), v9, v10);
  if ( s )
  {
    v13 = nullptr;
    qfree(s);
    s = nullptr;
    v14 = nullptr;
  }
LABEL_19:
  if ( src[0] )
  {
    src[1] = nullptr;
    qfree(src[0]);
    src[0] = nullptr;
    v16 = 0;
  }
  return 0;
}
// 0: using guessed type int dword_0;
