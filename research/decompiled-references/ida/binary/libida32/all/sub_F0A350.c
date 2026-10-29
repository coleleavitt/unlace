void __fastcall sub_F0A350(__int64 a1, __int64 a2)
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
    sub_22581D0(v4, " selector=", v5);
  }
  else if ( v5 )
  {
    memcpy(v6, " selector=", v5);
    *(_QWORD *)(v4 + 32) += v5;
  }
  v7 = sub_C76ED0(a2);
  v8 = *(_QWORD *)(a1 + 1096);
  v12[0] = v7;
  sub_FBB170(v12, v8);
  v9 = *(_BYTE *)(a2 + 26);
  switch ( v9 )
  {
    case 2:
      sub_971800(*(_QWORD *)(a1 + 1096), " super (class)");
      break;
    case 3:
      sub_971800(*(_QWORD *)(a1 + 1096), " super (instance)");
      break;
    case 0:
      sub_971800(*(_QWORD *)(a1 + 1096), " class=");
      v10 = 0;
      if ( !*(_BYTE *)(a2 + 26) )
      {
        v11 = *(__int64 **)(a2 + 40);
        if ( v11 )
          v10 = *v11;
      }
      sub_F065D0(a1, v10, 1);
      break;
  }
}

