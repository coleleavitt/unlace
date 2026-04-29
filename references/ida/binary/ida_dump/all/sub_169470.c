__int64 __fastcall sub_169470(const __m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v7; // r13
  __int64 v9; // rbp
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // r9d
  int v14; // r12d
  __int64 v15; // r13
  __int64 v16; // r12
  int v17; // ecx
  int v18; // eax
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  int v25; // eax
  int v26; // eax
  __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // [rsp+8h] [rbp-80h]
  char v31[8]; // [rsp+10h] [rbp-78h] BYREF
  unsigned int v32; // [rsp+18h] [rbp-70h]
  _QWORD v33[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v34; // [rsp+30h] [rbp-58h]
  __int64 v35; // [rsp+38h] [rbp-50h]
  unsigned __int64 v36; // [rsp+48h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  if ( a1[4].m128i_i32[3] != 4 )
    return 0;
  v7 = a1[3].m128i_i64[1];
  if ( *(_BYTE *)(v7 + 64) != 7 )
    return 0;
  v9 = a1->m128i_i64[1];
  v10 = sub_168210(a1, v9, a3, a4, a5, a6);
  v14 = v10;
  if ( !v10 )
  {
    v22 = a1[4].m128i_i64[0];
    v23 = *(unsigned int *)(v7 + 72);
    if ( (unsigned int)v23 >= *(_DWORD *)(v22 + 64) )
      sub_167AF0(a1);
    v24 = *(_QWORD *)(v22 + 528);
    v9 = *(_QWORD *)(v24 + 8 * v23);
    v25 = sub_168210(a1, v9, v24, v11, v12, v13);
    switch ( v25 )
    {
      case 3:
        v15 = 1;
        goto LABEL_7;
      case 4:
        v15 = 0;
        goto LABEL_7;
      case 1:
        v14 = 2;
        break;
      default:
        v14 = 1;
        if ( v25 != 2 )
          return 0;
        break;
    }
LABEL_12:
    v21 = *(_QWORD *)(v9 + 56);
    sub_124680((__int64)v33, v9, v21, 1u);
    if ( !sub_A9AA0(v9, v33, *(_QWORD *)(v9 + 48), v21, 1u) )
    {
      sub_123A40((__int64)v31, (unsigned __int8 *)(v21 + 64));
      sub_11D5A0(v21);
      v26 = *(_DWORD *)(v9 + 24);
      v27 = *(_QWORD *)(v9 + 8);
      BYTE1(v26) &= ~2u;
      LOBYTE(v26) = v26 | 0x80;
      *(_DWORD *)(v9 + 24) = v26;
      sub_13B2C0(v27);
      v28 = a1[4].m128i_i64[0];
      if ( v32 >= *(_DWORD *)(v28 + 64) )
        sub_167AF0(v27);
      v29 = *(_QWORD *)(*(_QWORD *)(v28 + 528) + 8LL * v32);
      if ( v14 == 2 )
      {
        *(_DWORD *)v21 = 55;
        v30 = v29;
        sub_11CA10((char *)(v21 + 32), v31);
        sub_112550(v9, v30, *(_QWORD *)(v9 + 8));
      }
      else
      {
        sub_112550(v9, *(_QWORD *)(v9 + 8), v29);
      }
      sub_66FA0(a1[4].m128i_i64[0], 1u, (__int64)"REMOVE_USELESS_JX3 (%d)", *(_DWORD *)(v9 + 72));
      sub_11CDA0((__int64)v31);
      if ( v34 )
      {
        v35 = 0;
        qfree();
      }
      qfree();
      return 1;
    }
    if ( v34 )
    {
      v35 = 0;
      qfree();
    }
    qfree();
    return 0;
  }
  if ( (unsigned int)(v10 - 1) <= 1 )
    goto LABEL_12;
  v15 = v10 - 3;
LABEL_7:
  v16 = sub_1229A0(*(_QWORD *)(v9 + 48));
  *(_DWORD *)(v16 + 4) &= ~0x10u;
  v17 = *(_DWORD *)(v16 + 68);
  *(_DWORD *)v16 = 4;
  sub_120A10(v16 + 32, *(_QWORD *)(*(_QWORD *)(v9 + 480) + 112LL), v15, v17, *(_QWORD *)(v16 + 24), 0);
  sub_11CDA0(v16 + 48);
  v18 = *(_DWORD *)(v9 + 24);
  BYTE1(v18) &= ~2u;
  LOBYTE(v18) = v18 | 0x80;
  *(_DWORD *)(v9 + 24) = v18;
  v19 = a1[4].m128i_i64[0];
  v20 = *(_QWORD *)(v19 + 784);
  if ( v20 )
  {
    *(_DWORD *)(v20 + 48) = 63;
    v19 = a1[4].m128i_i64[0];
  }
  sub_66FA0(v19, 1u, (__int64)"REMOVE_USELESS_SET (%d)", *(_DWORD *)(v9 + 72));
  return 1;
}
