void __fastcall sub_98C900(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 *v17; // rax
  __int64 v18; // rdx
  _BOOL4 v19; // ecx
  __int64 *v20; // rax
  __int32 v21; // eax
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // [rsp+8h] [rbp-90h] BYREF
  __m128i v25[2]; // [rsp+10h] [rbp-88h] BYREF
  __int64 v26; // [rsp+30h] [rbp-68h] BYREF
  __m128i v27[6]; // [rsp+38h] [rbp-60h] BYREF

  v3 = *(_QWORD *)(a2 + 16);
  v6 = sub_B74A90(v3);
  v8 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v8 + 16) - 43 <= 1
    || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 <= 1
    && (v8 = sub_F3F310(v8, a2, v4, v5, v7)) != 0 )
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(v8 + 32);
      if ( (*(_BYTE *)(v8 + 18) & 0x10) == 0 )
        break;
      while ( 1 )
      {
        v9 = v6 & 0xFFFFFFFFFFFFFFF0LL;
        v8 = *(_QWORD *)v9;
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v9 + 16LL) - 43 <= 1 )
          break;
        v10 = sub_F3F310(v8, a2, v4, v5, v7);
        v6 = *(_QWORD *)(v10 + 32);
        if ( (*(_BYTE *)(v10 + 18) & 0x10) == 0 )
          goto LABEL_5;
      }
    }
  }
LABEL_5:
  v24 = v6;
  if ( sub_986590(&v24) )
  {
    if ( (*(_BYTE *)(v3 + 29) & 1) != 0 )
    {
      v11 = sub_B68690(v3);
      v14 = *(_QWORD *)v11;
      v15 = *(_QWORD *)v11 + 8LL * *(unsigned int *)(v11 + 8);
      if ( v14 < v15 )
      {
        v16 = v14;
        while ( *(_WORD *)(*(_QWORD *)v16 + 36LL) != 350 )
        {
          v16 += 8LL;
          if ( v15 == v16 )
            goto LABEL_11;
        }
        if ( v15 == v16 )
          goto LABEL_11;
LABEL_25:
        while ( *(_WORD *)(*(_QWORD *)v14 + 36LL) != 350 )
          v14 += 8LL;
        v18 = *(unsigned int *)(*(_QWORD *)v14 + 40LL);
        v26 = a2;
        v27[0].m128i_i32[0] = 1;
        v27[0].m128i_i32[2] = dword_23B6E18[v18];
        goto LABEL_27;
      }
      if ( v14 != v15 )
      {
        while ( *(_WORD *)(*(_QWORD *)v15 + 36LL) != 350 )
        {
          v15 += 8LL;
          if ( v14 == v15 )
            goto LABEL_11;
        }
        goto LABEL_25;
      }
    }
LABEL_11:
    if ( !(unsigned __int8)sub_B75280(v3) )
    {
      LODWORD(v26) = 0;
      if ( (unsigned __int8)sub_B75320(v3, &v26) )
      {
        v17 = (__int64 *)(a2 + 40);
        if ( (*(_WORD *)a2 & 0x1FF) == 0x72 )
          v17 = (__int64 *)(a2 + 48);
        sub_98C700(a1, *v17, a2, 3);
      }
      else
      {
        LODWORD(v26) = 0;
        if ( (unsigned __int8)sub_B752A0(v3, &v26) )
        {
          v26 = sub_B74A20(v3);
          v19 = sub_9864E0(&v26);
          v20 = (__int64 *)(a2 + 40);
          if ( (*(_WORD *)a2 & 0x1FF) == 0x72 )
            v20 = (__int64 *)(a2 + 48);
          sub_98C700(a1, *v20, a2, v19);
        }
        else
        {
          v21 = sub_986220(v24);
          v26 = a2;
          v27[0].m128i_i32[0] = 1;
          v27[0].m128i_i32[2] = v21;
          sub_988660(v25, a1 + 16, &v26, v27, v22, v23);
        }
      }
      return;
    }
    v26 = a2;
    v27[0].m128i_i32[0] = 1;
    v27[0].m128i_i32[2] = 3;
LABEL_27:
    sub_988660(v25, a1 + 16, &v26, v27, v12, v13);
  }
}

