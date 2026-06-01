void __fastcall sub_20399E0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rbp
  unsigned __int8 v4; // al
  __int64 *v6; // rbx
  __int64 *v7; // r14
  char i; // al
  __int64 v9; // r12
  __int64 v10; // r14
  __m128i *v11; // rbx
  __m128i *v12; // rdi
  int v13; // r15d
  _BYTE *v14; // rax
  void (__fastcall *v15)(void *); // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  _BYTE *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _BYTE *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r15
  char v26; // [rsp+0h] [rbp-48h]
  char *v27; // [rsp+8h] [rbp-40h] BYREF

  v3 = a1;
  v4 = *(_BYTE *)a2;
  if ( *(_BYTE *)a2 == 7 )
  {
    sub_2030E90(a1, a2);
  }
  else if ( v4 == 4 )
  {
    sub_995540(a1, "!DIArgList(");
    v26 = 1;
    v6 = *(__int64 **)(a2 + 128);
    v27 = ", ";
    v7 = &v6[*(unsigned int *)(a2 + 136)];
    if ( v6 != v7 )
    {
      for ( i = 1; ; i = v26 )
      {
        v9 = *v6;
        if ( i )
          v26 = 0;
        else
          sub_202F8E0(a1, (const char **)&v27);
        sub_20399E0(a1, v9, a3, 1);
        if ( v7 == ++v6 )
          break;
      }
    }
    sub_995540(a1, ")");
  }
  else if ( (unsigned int)v4 - 5 > 0x20 )
  {
    if ( v4 )
    {
      sub_2034FF0(a3[1], *(_QWORD *)(*(_QWORD *)(a2 + 128) + 8LL), a1);
      v22 = *(_BYTE **)(a1 + 32);
      if ( (unsigned __int64)v22 >= *(_QWORD *)(a1 + 24) )
      {
        sub_227BA10(a1, 32);
      }
      else
      {
        *(_QWORD *)(a1 + 32) = v22 + 1;
        *v22 = 32;
      }
      sub_2038AA0(a1, *(_QWORD *)(a2 + 128), (__int64)a3, v19, v20, v21);
    }
    else
    {
      sub_995540(a1, "!\"");
      v16 = sub_20A0B40(a2);
      sub_22449A0(v16, v17, a1);
      v18 = *(_BYTE **)(a1 + 32);
      if ( (unsigned __int64)v18 >= *(_QWORD *)(a1 + 24) )
      {
        sub_227BA10(a1, 34);
      }
      else
      {
        *(_QWORD *)(a1 + 32) = v18 + 1;
        *v18 = 34;
      }
    }
  }
  else
  {
    v10 = a3[2];
    v11 = nullptr;
    v12 = (__m128i *)v10;
    if ( !v10 )
    {
      v25 = a3[3];
      v11 = (__m128i *)operator new(0x168u);
      v12 = v11;
      sub_20326F0(v11, v25, 0);
      a3[2] = (__int64)v11;
    }
    v13 = (*(__int64 (__fastcall **)(__m128i *, __int64))(v12->m128i_i64[0] + 32))(v12, a2);
    if ( v13 == -1 )
    {
      if ( *(_BYTE *)a2 == 6 )
      {
        sub_203A1C0(v3, a2, a3);
      }
      else
      {
        v23 = sub_995540(v3, "<");
        v24 = sub_227B9B0(v23, a2);
        sub_995540(v24, ">");
      }
    }
    else
    {
      v14 = *(_BYTE **)(v3 + 32);
      if ( (unsigned __int64)v14 >= *(_QWORD *)(v3 + 24) )
      {
        v3 = sub_227BA10(v3, 33);
      }
      else
      {
        *(_QWORD *)(v3 + 32) = v14 + 1;
        *v14 = 33;
      }
      sub_227B930(v3, v13);
    }
    a3[2] = v10;
    if ( v11 )
    {
      v15 = *(void (__fastcall **)(void *))(v11->m128i_i64[0] + 8);
      if ( v15 == sub_202F1B0 )
      {
        sub_202EF80((__int64)v11);
        operator delete(v11, 0x168u);
      }
      else
      {
        v15(v11);
      }
    }
  }
}
