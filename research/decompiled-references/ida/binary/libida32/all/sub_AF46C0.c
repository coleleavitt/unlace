__int64 __fastcall sub_AF46C0(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  int v3; // eax
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 result; // rax
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 v11; // r12
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 v14; // r13
  __int64 v15; // r12
  __int64 v16; // r13
  __int64 v17; // r12
  __int64 v18; // r13
  __int64 v19; // r12
  __int64 v20; // r13
  _BYTE v21[41]; // [rsp+Fh] [rbp-29h] BYREF

  v2 = *(_BYTE *)(a1 + 34);
  v21[0] = 1;
  if ( (v2 & 0xF0) == 0xF0 )
    v3 = sub_F83A90(a1);
  else
    v3 = v2 >> 4;
  switch ( v3 )
  {
    case 0:
      sub_971800(a2, "__attribute__((requires_capability");
      sub_971800(a2, &byte_22CD811);
      v9 = *(_QWORD *)(a1 + 48);
      v10 = v9 + 8LL * *(unsigned int *)(a1 + 40);
      while ( v10 != v9 )
      {
        v9 += 8;
        sub_AD7BA0(a2, v21);
        sub_2257C70(a2, *(_QWORD *)(v9 - 8));
      }
      goto LABEL_7;
    case 1:
      sub_971800(a2, "[[clang::requires_capability");
      sub_971800(a2, &byte_22CD811);
      v11 = *(_QWORD *)(a1 + 48);
      v12 = v11 + 8LL * *(unsigned int *)(a1 + 40);
      while ( v12 != v11 )
      {
        v11 += 8;
        sub_AD7BA0(a2, v21);
        sub_2257C70(a2, *(_QWORD *)(v11 - 8));
      }
      goto LABEL_12;
    case 2:
      sub_971800(a2, "__attribute__((exclusive_locks_required");
      sub_971800(a2, &byte_22CD811);
      v13 = *(_QWORD *)(a1 + 48);
      v14 = v13 + 8LL * *(unsigned int *)(a1 + 40);
      while ( v14 != v13 )
      {
        v13 += 8;
        sub_AD7BA0(a2, v21);
        sub_2257C70(a2, *(_QWORD *)(v13 - 8));
      }
      goto LABEL_7;
    case 3:
      sub_971800(a2, "[[clang::exclusive_locks_required");
      sub_971800(a2, &byte_22CD811);
      v15 = *(_QWORD *)(a1 + 48);
      v16 = v15 + 8LL * *(unsigned int *)(a1 + 40);
      while ( v16 != v15 )
      {
        v15 += 8;
        sub_AD7BA0(a2, v21);
        sub_2257C70(a2, *(_QWORD *)(v15 - 8));
      }
      goto LABEL_12;
    case 4:
      sub_971800(a2, "__attribute__((requires_shared_capability");
      sub_971800(a2, &byte_22CD811);
      v17 = *(_QWORD *)(a1 + 48);
      v18 = v17 + 8LL * *(unsigned int *)(a1 + 40);
      while ( v18 != v17 )
      {
        v17 += 8;
        sub_AD7BA0(a2, v21);
        sub_2257C70(a2, *(_QWORD *)(v17 - 8));
      }
      goto LABEL_7;
    case 5:
      sub_971800(a2, "[[clang::requires_shared_capability");
      sub_971800(a2, &byte_22CD811);
      v19 = *(_QWORD *)(a1 + 48);
      v20 = v19 + 8LL * *(unsigned int *)(a1 + 40);
      while ( v20 != v19 )
      {
        v19 += 8;
        sub_AD7BA0(a2, v21);
        sub_2257C70(a2, *(_QWORD *)(v19 - 8));
      }
      goto LABEL_12;
    case 6:
      sub_971800(a2, "__attribute__((shared_locks_required");
      sub_971800(a2, &byte_22CD811);
      v4 = *(_QWORD *)(a1 + 48);
      v5 = v4 + 8LL * *(unsigned int *)(a1 + 40);
      while ( v5 != v4 )
      {
        v4 += 8;
        sub_AD7BA0(a2, v21);
        sub_2257C70(a2, *(_QWORD *)(v4 - 8));
      }
LABEL_7:
      sub_971800(a2, &byte_22CD811);
      if ( !v21[0] )
        sub_971800(a2, ")");
      result = sub_971800(a2, "))");
      break;
    case 7:
      sub_971800(a2, "[[clang::shared_locks_required");
      sub_971800(a2, &byte_22CD811);
      v7 = *(_QWORD *)(a1 + 48);
      v8 = v7 + 8LL * *(unsigned int *)(a1 + 40);
      while ( v8 != v7 )
      {
        v7 += 8;
        sub_AD7BA0(a2, v21);
        sub_2257C70(a2, *(_QWORD *)(v7 - 8));
      }
LABEL_12:
      sub_971800(a2, &byte_22CD811);
      if ( !v21[0] )
        sub_971800(a2, ")");
      result = sub_971800(a2, "]]");
      break;
  }
  return result;
}

