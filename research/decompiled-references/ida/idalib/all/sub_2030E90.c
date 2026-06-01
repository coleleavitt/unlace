__int64 __fastcall sub_2030E90(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax
  char v4; // r14
  const char *v5; // r12
  size_t v6; // rdx
  size_t v7; // rbx
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rbx
  __int64 v11; // r13
  size_t v12; // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rbx
  __int64 v17; // rax
  __int64 v18; // rbx
  const char *v19; // rsi
  size_t v20; // rdx
  __int64 *v21; // r12
  __int64 *v22; // rbx
  __int64 v23; // rsi
  __int64 *v24; // rbx
  __int64 v25; // rax
  _QWORD *v26; // [rsp+8h] [rbp-50h]
  _QWORD v27[8]; // [rsp+18h] [rbp-40h] BYREF

  sub_995540(a1, "!DIExpression(");
  if ( (unsigned __int8)sub_206DBB0(a2) )
  {
    v3 = *(_QWORD **)(a2 + 16);
    v4 = 1;
    v26 = *(_QWORD **)(a2 + 24);
    for ( v27[0] = v3; v26 != v3; v27[0] = v3 )
    {
      v5 = sub_201C2B0(*v3);
      v7 = v6;
      if ( v4 )
      {
        v8 = a1;
        v4 = 0;
      }
      else
      {
        v8 = sub_995540(a1, ", ");
      }
      sub_9954E0(v8, v5, v7);
      if ( *(_QWORD *)v27[0] == 4097 )
      {
        v17 = sub_995540(a1, ", ");
        sub_227B910(v17, *(_QWORD *)(v27[0] + 8LL));
        v18 = sub_995540(a1, ", ");
        v19 = sub_201E290(*(_QWORD *)(v27[0] + 16LL));
        sub_9954E0(v18, v19, v20);
      }
      else
      {
        v9 = sub_206DAF0(v27);
        if ( v9 != 1 )
        {
          v10 = 8;
          v11 = 8LL * (unsigned int)(v9 - 2) + 16;
          do
          {
            v12 = j__strlen(", ");
            v13 = sub_9954E0(a1, ", ", v12);
            v14 = *(_QWORD *)(v27[0] + v10);
            v10 += 8;
            sub_227B910(v13, v14);
          }
          while ( v11 != v10 );
        }
      }
      v15 = v27[0];
      v3 = (_QWORD *)(v15 + 8LL * (unsigned int)sub_206DAF0(v27));
    }
  }
  else
  {
    v21 = *(__int64 **)(a2 + 24);
    v22 = *(__int64 **)(a2 + 16);
    if ( v22 != v21 )
    {
      v23 = *v22;
      v24 = v22 + 1;
      sub_227B910(a1, v23);
      while ( v21 != v24 )
      {
        ++v24;
        v25 = sub_995540(a1, ", ");
        sub_227B910(v25, *(v24 - 1));
      }
    }
  }
  return sub_995540(a1, ")");
}
