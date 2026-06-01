void __fastcall sub_F51670(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // al
  __int64 v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // r12
  const char *v8; // rsi
  _QWORD *v9; // rsi
  const char *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rbp
  unsigned int v13; // eax
  __int64 v14; // rdi
  _BYTE *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // [rsp+0h] [rbp-28h] BYREF
  __int64 v21; // [rsp+8h] [rbp-20h]

  v4 = *(_BYTE *)(a1 + 1104);
  v5 = *(_QWORD *)(a1 + 1096);
  v20 = a2;
  v21 = a3;
  if ( a2 )
  {
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 24LL))(v5, 2, 0, 0);
      v7 = *(_QWORD *)(a1 + 1096);
      if ( (v20 & 7) != 0 || (v20 & 8) != 0 || *(_BYTE *)(*(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 59 )
        v8 = "Qualified";
      else
        v8 = (const char *)sub_F58A30(*(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF0LL), 2, v6);
      v11 = sub_995540(v7, v8);
      sub_995540(v11, "TypeLoc");
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
    }
    else
    {
      if ( (a2 & 7) != 0 || (a2 & 8) != 0 || (v9 = (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(*v9 + 16LL) == 59) )
        v10 = "Qualified";
      else
        v10 = (const char *)sub_F58A30(*v9, v9, a3);
      v19 = sub_995540(v5, v10);
      sub_995540(v19, "TypeLoc");
    }
    v12 = (unsigned int)sub_F6CE20(&v20);
    v13 = sub_F6CCB0(&v20);
    sub_F2A050(a1, (v12 << 32) | v13);
    v14 = *(_QWORD *)(a1 + 1096);
    v15 = *(_BYTE **)(v14 + 32);
    if ( (unsigned __int64)v15 >= *(_QWORD *)(v14 + 24) )
    {
      sub_227BA10(v14, 32);
    }
    else
    {
      *(_QWORD *)(v14 + 32) = v15 + 1;
      *v15 = 32;
    }
    sub_F2A310(a1, v20, 0);
    sub_F51630(a1, v20, v21, v16, v17, v18);
  }
  else if ( v4 )
  {
    (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 24LL))(v5, 4, 0, 0);
    sub_995540(*(_QWORD *)(a1 + 1096), "<<<NULL>>>");
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
  }
  else
  {
    sub_995540(v5, "<<<NULL>>>");
  }
}
