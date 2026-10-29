__m128i *__fastcall sub_87A220(__m128i *a1, __int64 a2, __int64 a3)
{
  char *v3; // rax
  int v4; // edx
  int v5; // ecx
  unsigned int v6; // r14d
  unsigned __int64 v7; // r13
  unsigned int v8; // eax
  __int64 v9; // rax
  void *v10; // rbx
  _QWORD v12[2]; // [rsp+0h] [rbp-58h] BYREF
  _QWORD v13[9]; // [rsp+10h] [rbp-48h] BYREF

  v3 = (char *)(a3 + 88);
  v4 = *(_DWORD *)(a3 + 88);
  v5 = *(_DWORD *)(a2 + 12);
  v12[0] = 0;
  v12[1] = 0;
  v13[0] = 1;
  v13[1] = 0;
  if ( v4 >> 8 == -1 )
  {
LABEL_11:
    v6 = -1;
  }
  else
  {
    while ( *v3 != v5 )
    {
      v3 = *((char **)v3 + 1);
      if ( !v3 )
        goto LABEL_11;
    }
    v6 = *(int *)v3 >> 8;
  }
  if ( !(unsigned __int8)sub_811B30(a2, v6, (__int64)v12) )
  {
    sub_1872CE0("");
    sub_1873130(114, 71);
  }
  v7 = *(_QWORD *)(a2 + 72);
  v8 = sub_86B310(a2, v6);
  v9 = sub_1674520(a2 + 128, v12, v8);
  *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v9, (__m128i)v7);
  if ( v9 )
    ++*(_DWORD *)(v9 + 8);
  v10 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v12);
  sub_182CBA0(v10, v13);
  return a1;
}

