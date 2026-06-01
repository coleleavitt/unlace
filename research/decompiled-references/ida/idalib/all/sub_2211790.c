unsigned __int64 __fastcall sub_2211790(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  size_t v9; // rdx
  size_t v10; // r12
  const void *v11; // r13
  unsigned __int8 v12; // al
  __int64 v13; // rax
  const char *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  _BYTE *v17; // rdx
  int v18; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  _QWORD v26[9]; // [rsp+0h] [rbp-48h] BYREF

  v5 = sub_227D600();
  v6 = *(_QWORD *)(a2 + 16);
  v7 = *(_QWORD *)(a2 + 24);
  v26[2] = 2;
  v26[0] = v6;
  v26[1] = v7;
  sub_2211550(v5, (__int64)v26);
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  if ( !v9 )
    goto LABEL_11;
  v10 = v9;
  v11 = (const void *)v8;
  if ( (*(_BYTE *)(a2 + 11) & 4) != 0 )
  {
    v23 = sub_227D600();
    v24 = sub_995540(v23, " <");
    if ( *(_QWORD *)(a2 + 56) )
    {
      v11 = *(const void **)(a2 + 48);
      v10 = *(_QWORD *)(a2 + 56);
    }
    v25 = sub_9954E0(v24, v11, v10);
    sub_995540(v25, ">...");
  }
  else
  {
    v12 = *(_BYTE *)(a2 + 10);
    if ( (v12 & 0x18) != 0 )
    {
      if ( ((v12 >> 3) & 3) != 1 )
        goto LABEL_5;
    }
    else if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2) != 1 )
    {
LABEL_5:
      v13 = sub_227D600();
      v14 = " <";
      if ( *(_QWORD *)(a2 + 24) != 1 )
        v14 = "=<";
      v15 = sub_995540(v13, v14);
      if ( *(_QWORD *)(a2 + 56) )
      {
        v11 = *(const void **)(a2 + 48);
        v10 = *(_QWORD *)(a2 + 56);
      }
      v16 = sub_9954E0(v15, v11, v10);
      v17 = *(_BYTE **)(v16 + 32);
      if ( (unsigned __int64)v17 >= *(_QWORD *)(v16 + 24) )
      {
        sub_227BA10(v16, 62);
      }
      else
      {
        *(_QWORD *)(v16 + 32) = v17 + 1;
        *v17 = 62;
      }
      goto LABEL_11;
    }
    v20 = sub_227D600();
    v21 = sub_995540(v20, "[=<");
    if ( *(_QWORD *)(a2 + 56) )
    {
      v11 = *(const void **)(a2 + 48);
      v10 = *(_QWORD *)(a2 + 56);
    }
    v22 = sub_9954E0(v21, v11, v10);
    sub_995540(v22, ">]");
  }
LABEL_11:
  v18 = sub_2210F40(a1, a2);
  return sub_2210B20(*(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), a3, v18);
}
