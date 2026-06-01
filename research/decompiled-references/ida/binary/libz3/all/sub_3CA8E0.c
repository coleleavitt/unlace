void __fastcall sub_3CA8E0(size_t a1, size_t a2, __m128i a3)
{
  __int64 v3; // rax
  size_t v4; // rbp
  __int64 v5; // rdx
  size_t v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  _BYTE *v9; // rdi
  char *v10; // rsi
  int v11; // eax
  char *v12; // rdi
  __int64 v13; // r12
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r13
  __int64 v18; // rax
  _BYTE v19[16]; // [rsp+0h] [rbp-58h] BYREF
  _BYTE v20[72]; // [rsp+10h] [rbp-48h] BYREF

  v3 = 0x7FFFFFFF8LL;
  v4 = a1;
  v5 = *(_QWORD *)(a1 + 3056);
  if ( v5 )
    v3 = 8LL * (unsigned int)(*(_DWORD *)(v5 - 4) - 1);
  v6 = *(_QWORD *)(v5 + v3);
  if ( v6 )
  {
    ++*(_DWORD *)(v6 + 76);
    a1 = v6;
    sub_3BE360((__int64 *)v6);
  }
  v7 = *(_QWORD *)(v6 + 24);
  if ( !v7 || !*(_DWORD *)(v7 - 4) )
  {
    *(_DWORD *)(v4 + 3068) = 4;
    if ( (unsigned int)sub_180B130(a1) <= 1 )
      return;
    if ( !(unsigned __int8)sub_186A530(*(double *)a3.m128i_i64) )
    {
      v16 = sub_180B150(a1, a2);
      sub_3C8CD0(v6, v16);
      return;
    }
    sub_186A4C0(*(double *)a3.m128i_i64);
    v8 = sub_180B150(a1, a2);
    v9 = (_BYTE *)v6;
    v10 = (char *)v8;
    sub_3C8CD0(v6, v8);
LABEL_11:
    sub_186A500(v9, v10);
    return;
  }
  v11 = *(_DWORD *)(v4 + 1392);
  v12 = (char *)(v4 + 1320);
  *(_DWORD *)(v4 + 3068) = 0;
  if ( v11 == 2 )
  {
    v13 = 0;
  }
  else
  {
    a2 = v6;
    if ( v11 == 3 )
    {
      v13 = (unsigned int)sub_3BF840(v12, v6, *(double *)a3.m128i_i64);
    }
    else if ( v11 == 1 )
    {
      v13 = (unsigned int)sub_3BE580((unsigned __int64)v12, (char *)v6, *(double *)a3.m128i_i64);
    }
    else
    {
      v13 = (unsigned int)sub_3C0EC0(v12, (char *)v6, a3);
    }
  }
  *(_DWORD *)(v6 + 60) = v13;
  if ( (unsigned int)sub_180B130(v12) > 1 )
  {
    if ( !(unsigned __int8)sub_186A530(*(double *)a3.m128i_i64) )
    {
      v17 = sub_180B150(v12, a2);
      sub_1606360(v19, *(_QWORD *)(*(_QWORD *)(v6 + 24) + 8 * v13), *(_QWORD *)(v4 + 8), 0, 0, 0);
      v18 = sub_160E8B0(v17, v19);
      sub_3BCC00(v18, "\n");
      sub_18572D0(v20);
      return;
    }
    sub_186A4C0(*(double *)a3.m128i_i64);
    v14 = sub_180B150(v12, a2);
    sub_1606360(v19, *(_QWORD *)(*(_QWORD *)(v6 + 24) + 8 * v13), *(_QWORD *)(v4 + 8), 0, 0, 0);
    v15 = sub_160E8B0(v14, v19);
    v10 = "\n";
    sub_3BCC00(v15, "\n");
    v9 = v20;
    sub_18572D0(v20);
    goto LABEL_11;
  }
}

