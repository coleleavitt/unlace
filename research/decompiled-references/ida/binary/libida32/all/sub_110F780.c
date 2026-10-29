_QWORD *__fastcall sub_110F780(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  _QWORD *v4; // r14
  size_t v9; // rbx
  size_t v10; // rax
  const void *v11; // rax
  size_t v12; // rdx
  void *v13; // rdi
  _BYTE *v14; // rsi
  size_t v15; // rax
  __m128i v16; // kr20_16
  __int64 v17; // rax
  const char *v18; // rbx
  size_t v19; // rax
  size_t v20; // r13
  __m128i v21; // [rsp+0h] [rbp-78h] BYREF
  _DWORD v22[9]; // [rsp+10h] [rbp-68h] BYREF
  int v23; // [rsp+34h] [rbp-44h]

  v4 = a1 + 2;
  switch ( *(_DWORD *)(a2 + 48) )
  {
    case 1:
    case 2:
    case 0x23:
    case 0x24:
      sub_10B74D0(&v21, a2 + 16);
      sub_111D440(*(_QWORD *)(a2 + 8), a3, a4, &v21);
      sub_111B740(*(_QWORD *)(a2 + 8), a3, &v21);
      v14 = (_BYTE *)v21.m128i_i64[0];
      *a1 = v4;
      sub_11078F0(a1, v14, (__int64)&v14[v21.m128i_i64[1]]);
      v13 = (void *)v21.m128i_i64[0];
      if ( (_DWORD *)v21.m128i_i64[0] != v22 )
        goto LABEL_11;
      return a1;
    case 3:
      sub_10B74D0(&v21, a2 + 16);
      sub_1114C40(*(_QWORD *)(a2 + 8), a3, &v21);
      if ( v23 == 5 && (v22[4] != 3 || v22[5] != 35) )
      {
        v15 = j__strlen("arm64");
        sub_22971C0(&v21, "arm64", v15);
      }
      goto LABEL_17;
    case 0x1A:
      sub_10B74D0(&v21, a2 + 16);
      v9 = j__strlen("amdgcnspirv");
      v10 = j__strlen(&byte_22CD811);
      v11 = (const void *)sub_2193E80(a3, 2323, &byte_22CD811, v10);
      if ( v12 == v9 && (!v12 || !memcmp(v11, "amdgcnspirv", v12)) )
        sub_2297580(&v21, 51, 0);
      goto LABEL_17;
    case 0x26:
      sub_10B74D0(&v21, a2 + 16);
      if ( v23 != 5 )
      {
        *a1 = v4;
        sub_11078F0(a1, *(_BYTE **)(a2 + 16), *(_QWORD *)(a2 + 16) + *(_QWORD *)(a2 + 24));
        goto LABEL_10;
      }
      v17 = sub_10B8FF0(a3, 0x8D4u);
      if ( !v17 )
        goto LABEL_17;
      v18 = **(const char ***)(v17 + 48);
      v19 = j__strlen("x86_64h");
      v20 = v19;
      if ( v18 )
      {
        if ( j__strlen(v18) == v19 && (!v20 || !memcmp(v18, "x86_64h", v20)) )
          goto LABEL_23;
      }
      else if ( !v19 )
      {
LABEL_23:
        sub_22971C0(&v21, v18, v20);
      }
LABEL_17:
      v16 = v21;
      *a1 = v4;
      sub_11078F0(a1, v16.m128i_i64[0], v16.m128i_i64[0] + v16.m128i_i64[1]);
LABEL_10:
      v13 = (void *)v21.m128i_i64[0];
      if ( (_DWORD *)v21.m128i_i64[0] != v22 )
LABEL_11:
        operator delete(v13);
      return a1;
    default:
      *a1 = v4;
      sub_11078F0(a1, *(_BYTE **)(a2 + 16), *(_QWORD *)(a2 + 16) + *(_QWORD *)(a2 + 24));
      return a1;
  }
}

