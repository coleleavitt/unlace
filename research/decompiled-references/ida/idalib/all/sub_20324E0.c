void __fastcall sub_20324E0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r13
  const void *v6; // r14
  const void *v7; // rax
  size_t v8; // rdx
  _BYTE *v9; // rax
  size_t v10; // rdx
  unsigned __int8 *v11; // rbp
  _BYTE *v12; // rax
  _BYTE *v13; // rax
  _BYTE *v14; // rax
  size_t v15; // [rsp+8h] [rbp-30h]

  v2 = *(_QWORD *)(a2 + 48);
  if ( v2 )
  {
    if ( *(_BYTE *)a2 == 16 )
    {
      v14 = *(_BYTE **)(a1 + 32);
      if ( (unsigned __int64)v14 >= *(_QWORD *)(a1 + 24) )
      {
        sub_227BA10(a1, 44);
      }
      else
      {
        *(_QWORD *)(a1 + 32) = v14 + 1;
        *v14 = 44;
      }
    }
    sub_995540(a1, " comdat");
    v3 = sub_204D170(v2);
    v5 = v4;
    v6 = (const void *)v3;
    v7 = (const void *)sub_20CC3B0(a2);
    if ( v8 != v5 || v8 && memcmp(v7, v6, v8) )
    {
      v9 = *(_BYTE **)(a1 + 32);
      if ( (unsigned __int64)v9 >= *(_QWORD *)(a1 + 24) )
      {
        sub_227BA10(a1, 40);
      }
      else
      {
        *(_QWORD *)(a1 + 32) = v9 + 1;
        *v9 = 40;
      }
      v11 = (unsigned __int8 *)sub_204D170(v2);
      v12 = *(_BYTE **)(a1 + 32);
      if ( (unsigned __int64)v12 >= *(_QWORD *)(a1 + 24) )
      {
        v15 = v10;
        sub_227BA10(a1, 36);
        v10 = v15;
      }
      else
      {
        *(_QWORD *)(a1 + 32) = v12 + 1;
        *v12 = 36;
      }
      sub_20323F0(a1, v11, v10);
      v13 = *(_BYTE **)(a1 + 32);
      if ( (unsigned __int64)v13 >= *(_QWORD *)(a1 + 24) )
      {
        sub_227BA10(a1, 41);
      }
      else
      {
        *(_QWORD *)(a1 + 32) = v13 + 1;
        *v13 = 41;
      }
    }
  }
}
