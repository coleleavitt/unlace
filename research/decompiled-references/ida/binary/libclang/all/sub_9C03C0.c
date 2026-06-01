void __fastcall sub_9C03C0(__int64 a1, __int64 (__fastcall *a2)(__int64, _QWORD), __int64 a3)
{
  __int64 v4; // r14
  _QWORD *v5; // rax
  __int64 v6; // r13
  _QWORD *v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rsi
  __int64 v16; // rbp
  unsigned int v17; // eax
  char v18; // r12
  __int64 *v19; // r12
  __int64 *v20; // rbp
  __int64 v21; // rsi
  __int64 *v22; // rbp
  __int64 *v23; // rbx
  __int64 v24; // rsi
  __int64 v26; // [rsp+10h] [rbp-78h] BYREF
  __int64 *v27; // [rsp+18h] [rbp-70h]
  __int64 v28; // [rsp+30h] [rbp-58h] BYREF
  __int64 *v29; // [rsp+38h] [rbp-50h]

  v4 = *(_QWORD *)(a1 + 184);
  v5 = (_QWORD *)sub_A1A5A0(v4, 24);
  v6 = *v5;
  v7 = v5;
  v11 = sub_2575D20(v4, 24, v8);
  if ( v6 == v11 )
    sub_257D000(&v28, v7, v9, v10);
  else
    sub_2576960(&v28, v7);
  sub_A1A5E0(v4, 24);
  v12 = *(_QWORD *)(a1 + 184);
  v15 = (_QWORD *)sub_A1A5A0(v12, 24);
  if ( v11 == *v15 )
    sub_257D000(&v26, v15, v13, v14);
  else
    sub_2576960(&v26, v15);
  sub_A1A5E0(v12, 24);
  v16 = *(_QWORD *)(a1 + 184);
  if ( v26 == v11 )
    v17 = sub_257E370(&v26, &v28);
  else
    v17 = sub_2577560(&v26, &v28);
  v18 = a2(a3, *((unsigned __int8 *)&dword_3C9CDC4 + v17));
  *(_BYTE *)sub_A1A4E0(v16, 8) = v18;
  if ( v11 == v26 )
  {
    v19 = v27;
    if ( v27 )
    {
      v20 = &v27[3 * *(v27 - 1)];
      if ( v27 == v20 )
      {
        v21 = 0;
      }
      else
      {
        do
        {
          v20 -= 3;
          sub_5FF3B0(v20);
        }
        while ( v19 != v20 );
        v21 = 24 * *(v19 - 1);
      }
      operator delete[](v19 - 1, v21 + 8);
    }
    v27 = nullptr;
    if ( v11 != v28 )
      goto LABEL_9;
  }
  else
  {
    sub_25769A0(&v26);
    if ( v11 != v28 )
    {
LABEL_9:
      sub_25769A0(&v28);
      return;
    }
  }
  v22 = v29;
  if ( v29 )
  {
    v23 = &v29[3 * *(v29 - 1)];
    if ( v29 == v23 )
    {
      v24 = 0;
    }
    else
    {
      do
      {
        v23 -= 3;
        sub_5FF3B0(v23);
      }
      while ( v22 != v23 );
      v24 = 24 * *(v22 - 1);
    }
    operator delete[](v22 - 1, v24 + 8);
  }
}

