__int64 __fastcall sub_7276C0(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  __int64 v7; // rdi
  const char *v8; // rsi
  char *v10; // r13
  __int64 *v11; // rax
  __int64 v12; // rax
  __int64 *v13; // rax
  __int64 v14; // rax
  __int64 *v15; // rax
  __int64 v16; // rax
  __int64 *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // [rsp+8h] [rbp-60h] BYREF
  _BYTE v23[32]; // [rsp+10h] [rbp-58h] BYREF
  __int16 v24; // [rsp+30h] [rbp-38h]

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) != 0 )
    v6 = *(_BYTE *)(a1 + 30) >> 4;
  else
    v6 = sub_C4A760(a1);
  switch ( v6 )
  {
    case 0:
      sub_5FF0F0(a2, "__attribute__((aligned");
      if ( *(_QWORD *)(a1 + 40) )
      {
        sub_5FF0F0(a2, "(");
        sub_5FF0F0(a2, &byte_3B9466E);
        if ( !*(_BYTE *)(a1 + 35)
          || (v20 = *(_QWORD *)(a1 + 40)) != 0 && (sub_AE6C50(v20, a2, 0, a3, 0, 0, "\n", 1u), !*(_BYTE *)(a1 + 35)) )
        {
          v15 = *(__int64 **)(a1 + 40);
          if ( v15 )
          {
            v16 = *v15;
            v24 = 257;
            v22 = v16;
            sub_B2AEC0(&v22, a2, a3, v23, 0);
          }
        }
        sub_5FF0F0(a2, &byte_3B9466E);
        sub_5FF0F0(a2, ")");
      }
      v8 = "))";
      return sub_5FF0F0(a2, v8);
    case 1:
    case 2:
      sub_5FF0F0(a2, "[[gnu::aligned");
      if ( *(_QWORD *)(a1 + 40) )
      {
        sub_5FF0F0(a2, "(");
        sub_5FF0F0(a2, &byte_3B9466E);
        if ( !*(_BYTE *)(a1 + 35)
          || (v7 = *(_QWORD *)(a1 + 40)) != 0 && (sub_AE6C50(v7, a2, 0, a3, 0, 0, "\n", 1u), !*(_BYTE *)(a1 + 35)) )
        {
          v17 = *(__int64 **)(a1 + 40);
          if ( v17 )
          {
            v18 = *v17;
            v24 = 257;
            v22 = v18;
            sub_B2AEC0(&v22, a2, a3, v23, 0);
          }
        }
        sub_5FF0F0(a2, &byte_3B9466E);
        sub_5FF0F0(a2, ")");
      }
      v8 = "]]";
      return sub_5FF0F0(a2, v8);
    case 3:
      v10 = ")";
      sub_5FF0F0(a2, "__declspec(align");
      if ( *(_QWORD *)(a1 + 40) )
      {
        sub_5FF0F0(a2, "(");
        sub_5FF0F0(a2, &byte_3B9466E);
        if ( !*(_BYTE *)(a1 + 35)
          || (v21 = *(_QWORD *)(a1 + 40)) != 0 && (sub_AE6C50(v21, a2, 0, a3, 0, 0, "\n", 1u), !*(_BYTE *)(a1 + 35)) )
        {
          v13 = *(__int64 **)(a1 + 40);
          if ( v13 )
          {
            v14 = *v13;
            v24 = 257;
            v22 = v14;
            sub_B2AEC0(&v22, a2, a3, v23, 0);
          }
        }
        v10 = ")";
        sub_5FF0F0(a2, &byte_3B9466E);
        sub_5FF0F0(a2, ")");
      }
      goto LABEL_18;
    case 4:
      v10 = (char *)&byte_3B9466E;
      sub_5FF0F0(a2, "alignas");
      if ( !*(_QWORD *)(a1 + 40) )
        goto LABEL_18;
      v10 = (char *)&byte_3B9466E;
      sub_5FF0F0(a2, "(");
      break;
    case 5:
      v10 = (char *)&byte_3B9466E;
      sub_5FF0F0(a2, "_Alignas");
      if ( !*(_QWORD *)(a1 + 40) )
        goto LABEL_18;
      sub_5FF0F0(a2, "(");
      break;
  }
  sub_5FF0F0(a2, &byte_3B9466E);
  if ( !*(_BYTE *)(a1 + 35)
    || (v19 = *(_QWORD *)(a1 + 40)) != 0 && (sub_AE6C50(v19, a2, 0, a3, 0, 0, "\n", 1u), !*(_BYTE *)(a1 + 35)) )
  {
    v11 = *(__int64 **)(a1 + 40);
    if ( v11 )
    {
      v12 = *v11;
      v24 = 257;
      v22 = v12;
      sub_B2AEC0(&v22, a2, a3, v23, 0);
    }
  }
  sub_5FF0F0(a2, &byte_3B9466E);
  sub_5FF0F0(a2, ")");
LABEL_18:
  v8 = v10;
  return sub_5FF0F0(a2, v8);
}

