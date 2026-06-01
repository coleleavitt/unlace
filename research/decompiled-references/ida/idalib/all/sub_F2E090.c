void __fastcall sub_F2E090(__int64 a1, __int64 a2)
{
  __int64 v4; // rbp
  size_t v5; // r12
  void *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rsi
  char v9; // al
  __int64 v10; // rsi
  __int64 *v11; // rax
  __int64 v12[6]; // [rsp+8h] [rbp-30h] BYREF

  v4 = *(_QWORD *)(a1 + 1096);
  v5 = j__strlen(" selector=");
  v6 = *(void **)(v4 + 32);
  if ( v5 > *(_QWORD *)(v4 + 24) - (_QWORD)v6 )
  {
    sub_227BF10(v4, " selector=", v5);
  }
  else if ( v5 )
  {
    memcpy(v6, " selector=", v5);
    *(_QWORD *)(v4 + 32) += v5;
  }
  v7 = sub_C9AC10(a2);
  v8 = *(_QWORD *)(a1 + 1096);
  v12[0] = v7;
  sub_FDEEB0(v12, v8);
  v9 = *(_BYTE *)(a2 + 26);
  switch ( v9 )
  {
    case 2:
      sub_995540(*(_QWORD *)(a1 + 1096), " super (class)");
      break;
    case 3:
      sub_995540(*(_QWORD *)(a1 + 1096), " super (instance)");
      break;
    case 0:
      sub_995540(*(_QWORD *)(a1 + 1096), " class=");
      v10 = 0;
      if ( !*(_BYTE *)(a2 + 26) )
      {
        v11 = *(__int64 **)(a2 + 40);
        if ( v11 )
          v10 = *v11;
      }
      sub_F2A310(a1, v10, 1);
      break;
  }
}
