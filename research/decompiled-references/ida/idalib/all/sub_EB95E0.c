void __fastcall sub_EB95E0(const __m128i **a1, __int64 a2, char a3)
{
  _QWORD *v3; // rbx
  __int64 v4; // rbp
  _QWORD *i; // r15
  const __m128i *v7; // rdi
  unsigned __int8 v8; // si
  char v9; // dl
  char *v10; // rax
  _WORD *v11; // rdi
  const __m128i *v12; // rsi
  const __m128i *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // [rsp-8h] [rbp-60h]

  v3 = (_QWORD *)(a2 + 96);
  v4 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 96;
  if ( a2 + 96 != v4 )
  {
    for ( i = (_QWORD *)(a2 + 96); (_QWORD *)v4 != i; ++i )
    {
      while ( 1 )
      {
        v7 = *a1;
        v8 = 44;
        v9 = 44;
        if ( v3 == i )
        {
          v8 = a3;
          v9 = a3;
        }
        v10 = (char *)v7[2].m128i_i64[0];
        if ( (unsigned __int64)v10 >= v7[1].m128i_i64[1] )
        {
          sub_227BA10(v7, v8);
        }
        else
        {
          v7[2].m128i_i64[0] = (__int64)(v10 + 1);
          *v10 = v9;
        }
        v11 = (_WORD *)*i;
        v12 = *a1;
        if ( (*(_WORD *)*i & 0x1FF) == 0x47 )
          break;
        v13 = a1[1];
        v15 = 1;
LABEL_11:
        ++i;
        sub_F07C00((_DWORD)v11, (_DWORD)v12, 0, (_DWORD)v13, 0, 0, (__int64)"\n", v15);
        if ( (_QWORD *)v4 == i )
          return;
      }
      if ( (*(_BYTE *)(*((_QWORD *)v11 + 2) + 28LL) & 0x7F) == 0x2C )
      {
        v14 = sub_EB4C50();
        v13 = a1[1];
        v15 = v14;
        goto LABEL_11;
      }
      sub_B76F90(*((_QWORD **)v11 + 2), v12);
    }
  }
}
