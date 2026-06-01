__int64 __fastcall sub_2051F80(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  void **v4; // rdx
  char v5; // al
  void *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rsi
  void *v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rdx
  void *v16; // rax
  void *v17; // rax
  void *v18; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v19; // [rsp+8h] [rbp-30h]

  v3 = *(_QWORD *)(a2 + 24);
  v4 = (void **)(v3 + sub_2051EA0(a2) * a3);
  v5 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 24LL) + 8LL);
  if ( v5 == 1 )
  {
    v17 = (void *)*(unsigned __int16 *)v4;
    v19 = 16;
    v18 = v17;
    v7 = sub_21F9090();
  }
  else if ( v5 )
  {
    if ( v5 != 2 )
    {
      v13 = *v4;
      v19 = 64;
      v18 = v13;
      v14 = sub_21F90B0(a2, a2);
      if ( v14 != sub_21F90D0(a2, a2, v15) )
      {
        v11 = v14;
        goto LABEL_6;
      }
      v11 = v14;
LABEL_14:
      sub_21FFDA0(a1, v11, &v18);
      goto LABEL_7;
    }
    v6 = (void *)*(unsigned int *)v4;
    v19 = 32;
    v18 = v6;
    v7 = sub_21F90A0();
  }
  else
  {
    v16 = (void *)*(unsigned __int16 *)v4;
    v19 = 16;
    v18 = v16;
    v7 = sub_21F9080();
  }
  v9 = v7;
  v10 = sub_21F90D0(a2, a2, v8);
  v11 = v9;
  if ( v9 == v10 )
    goto LABEL_14;
LABEL_6:
  sub_21FF7D0(a1, v11, &v18);
LABEL_7:
  if ( v19 > 0x40 && v18 )
    operator delete[](v18);
  return a1;
}
