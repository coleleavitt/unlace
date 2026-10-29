__int64 __fastcall sub_E33DF0(__int64 a1, const __m128i *a2, __int64 a3)
{
  __int64 v5; // rax
  unsigned int v8; // edx
  __int64 v9; // rax
  _QWORD *v10; // rdi
  __int64 v11; // r15
  __int64 v12; // rdx
  unsigned int v13; // r13d
  unsigned __int64 v14; // rsi
  char v15; // al
  __int64 v16; // r14
  __int64 v17; // rsi
  __int64 v18; // rax
  unsigned int v19; // r15d
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rcx
  unsigned int v23; // edx
  __int64 *v24; // rax
  __int64 *v25; // r15
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // r14
  unsigned __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // [rsp+8h] [rbp-A0h]
  __int64 *v32; // [rsp+8h] [rbp-A0h]
  _DWORD v33[6]; // [rsp+10h] [rbp-98h] BYREF
  int v34; // [rsp+28h] [rbp-80h]
  __int64 v35; // [rsp+30h] [rbp-78h]
  unsigned int v36; // [rsp+38h] [rbp-70h]
  _BYTE v37[24]; // [rsp+40h] [rbp-68h] BYREF
  int v38; // [rsp+58h] [rbp-50h]
  __int64 v39; // [rsp+60h] [rbp-48h]
  unsigned int v40; // [rsp+68h] [rbp-40h]

  v5 = a2[3].m128i_i64[0];
  if ( v5 && (*(_BYTE *)(v5 + 28) & 0x7Fu) - 34 > 5 )
  {
    if ( a2[1].m128i_i32[2] )
    {
      *(_BYTE *)(a1 + 48) = 0;
      return a1;
    }
    v8 = a2->m128i_i64[0] - a2[3].m128i_i32[2];
    sub_E23220((__int64)v33, a2[2].m128i_i64[0], v8, v8);
    if ( v34 == 1 )
    {
      v9 = v35;
    }
    else if ( v34 )
    {
      if ( v34 == 2 || v34 == 3 )
        goto LABEL_53;
      v9 = *(_QWORD *)(v35 + 32);
    }
    else if ( v35 )
    {
      v9 = *(_QWORD *)(v35 + 32);
      if ( *(_DWORD *)(v9 + 24) != v36 && v36 )
        v9 = *(_QWORD *)(v35 + v36 + 32);
    }
    else
    {
      v9 = 64;
    }
    v10 = *(_QWORD **)(v9 + 32);
    if ( !v10 )
    {
LABEL_22:
      *(_BYTE *)(a1 + 48) = 0;
LABEL_23:
      sub_E232A0((__int64)v33);
      return a1;
    }
    v11 = a2[3].m128i_i64[0];
    v12 = *(_QWORD *)(v35 + 32);
    v13 = *(_DWORD *)(v12 + 24);
    if ( (*(_BYTE *)(v11 + 28) & 0x7Fu) - 49 > 2 )
    {
      v24 = *(__int64 **)(v11 + 56);
      v32 = &v24[*(unsigned int *)(v11 + 64)];
      if ( v24 == v32 )
        goto LABEL_35;
      v25 = *(__int64 **)(v11 + 56);
      do
      {
        v28 = *v25;
        v29 = *(_QWORD *)(*v25 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(*v25 + 16) & 4) != 0 )
          v29 = *(_QWORD *)v29;
        if ( (*(_BYTE *)(v29 + 8) & 0x7Fu) - 58 <= 3 )
          v26 = v29 - 64;
        else
          v26 = 0;
        ++v25;
        v27 = sub_CE6720(a3, v26);
        v13 += *(_DWORD *)(sub_E31D10(v27, v28) + 8);
      }
      while ( v32 != v25 );
      goto LABEL_38;
    }
    v14 = *(_QWORD *)(v11 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v11 + 16) & 4) != 0 )
      v14 = *(_QWORD *)v14;
    v15 = *(_BYTE *)(v14 + 8);
    v16 = 0;
    v17 = v14 - 64;
    if ( (v15 & 0x7Fu) - 58 < 4 )
      v16 = v17;
    if ( *v10 == v16 )
    {
      v30 = sub_E31D10((__int64)v10, a2[3].m128i_i64[0]);
      v21 = v35;
      v23 = v33[0] + *(_DWORD *)(v30 + 8);
      v22 = v23;
      goto LABEL_37;
    }
    v18 = sub_CE6720(a3, v16);
    v19 = v13 + *(_DWORD *)(sub_E31D10(v18, v11) + 8);
    v13 = v19;
    if ( v19 > *(_DWORD *)(*(_QWORD *)(v35 + 32) + 28LL) )
      goto LABEL_22;
    sub_E23170((__int64)v37, a2[2].m128i_i64[0]);
    if ( v38 == 1 )
    {
      v20 = v39;
      goto LABEL_33;
    }
    if ( !v38 )
    {
      if ( v39 )
      {
        v20 = *(_QWORD *)(v39 + 32);
        if ( *(_DWORD *)(v20 + 24) != v40 && v40 )
          v20 = *(_QWORD *)(v39 + v40 + 32);
LABEL_33:
        v31 = **(_QWORD **)(v20 + 32);
        sub_E232A0((__int64)v37);
        if ( v31 != v16 )
        {
          v13 = v19 + sub_CE6670(a3, v16, v31);
          v12 = *(_QWORD *)(v35 + 32);
LABEL_35:
          if ( v13 > *(_DWORD *)(v12 + 28) )
            goto LABEL_22;
          v21 = a2[2].m128i_i64[0];
          v22 = v13;
          v23 = v13;
LABEL_37:
          sub_E23220((__int64)v37, v21, v23, v22);
          sub_E23260(a1, (__int64)v37);
          *(_BYTE *)(a1 + 48) = 1;
          sub_E232A0((__int64)v37);
          goto LABEL_23;
        }
LABEL_38:
        v12 = *(_QWORD *)(v35 + 32);
        goto LABEL_35;
      }
LABEL_51:
      v20 = *(_QWORD *)(v39 + 32);
      goto LABEL_33;
    }
    if ( v38 != 2 && v38 != 3 )
      goto LABEL_51;
LABEL_53:
    BUG();
  }
  sub_E231E0(a1, a2);
  *(_BYTE *)(a1 + 48) = 1;
  return a1;
}
