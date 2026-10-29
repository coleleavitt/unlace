__int64 __fastcall sub_8F51C0(__int64 a1, int a2, int a3, _QWORD *a4)
{
  int v4; // eax
  __int64 *v5; // rbp
  __int64 *v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v14; // r12
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rbp
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // r12
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rbx
  __int64 v32; // rbx
  __int64 v33; // r13
  __int64 v34; // rax
  __m128i v35[2]; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v36; // [rsp+20h] [rbp-C8h] BYREF
  __int128 v37; // [rsp+28h] [rbp-C0h]
  __int64 v38; // [rsp+38h] [rbp-B0h]
  __int64 v39; // [rsp+40h] [rbp-A8h]
  int v40; // [rsp+50h] [rbp-98h]
  __int64 v41; // [rsp+58h] [rbp-90h]
  int v42; // [rsp+60h] [rbp-88h]
  __int64 v43; // [rsp+70h] [rbp-78h] BYREF
  __int128 v44; // [rsp+78h] [rbp-70h]
  __int64 v45; // [rsp+88h] [rbp-60h]
  __int64 v46; // [rsp+90h] [rbp-58h]
  int v47; // [rsp+A0h] [rbp-48h]
  __int64 v48; // [rsp+A8h] [rbp-40h]
  int v49; // [rsp+B0h] [rbp-38h]

  v4 = *(_DWORD *)(a1 + 816);
  if ( a2 == 14 )
  {
    if ( a3 == 14 )
    {
      if ( *(_DWORD *)(a1 + 812) == v4 )
      {
        *(_QWORD *)(a1 + 800) = *a4;
        sub_8F5130((__m128i *)&v43, *(_QWORD *)(a1 + 568));
        v24 = v43;
        v25 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 24);
        *(_QWORD *)v25 = v24;
        *(_QWORD *)(v25 + 8) = 0;
        *(_BYTE *)(v25 + 16) = 0;
      }
    }
    else if ( a3 == 15 )
    {
      if ( *(_DWORD *)(a1 + 812) == v4 )
      {
        *(_QWORD *)(a1 + 800) = *a4;
        sub_8F5130(v35, *(_QWORD *)(a1 + 568));
        v30 = *(_QWORD *)(a1 + 568);
        v44 = 0;
        v43 = 0;
        v47 = 1;
        v46 = 0;
        v45 = 0;
        v48 = 0;
        v49 = 0;
        v31 = sub_A1A4E0(v30, 72);
        sub_A1C070(v31, &v43);
        *(_QWORD *)(v31 + 56) = v48;
        *(_DWORD *)(v31 + 64) = v49;
        sub_A1C0C0(&v43);
      }
    }
    else if ( *(_DWORD *)(a1 + 812) == v4 )
    {
      *(_QWORD *)(a1 + 800) = *a4;
      sub_8F5130((__m128i *)&v43, *(_QWORD *)(a1 + 568));
      v14 = v44;
      v15 = v43;
      v16 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 56);
      *(_QWORD *)v16 = v14;
      *(_DWORD *)(v16 + 48) = 2;
      *(_QWORD *)(v16 + 24) = v15;
      *(_QWORD *)(v16 + 32) = 0;
      *(_BYTE *)(v16 + 40) = 1;
      *(_OWORD *)(v16 + 8) = 0;
    }
    return 1;
  }
  if ( a2 == 15 )
  {
    if ( a3 == 14 )
    {
      if ( *(_DWORD *)(a1 + 812) == v4 )
      {
        v22 = *(_QWORD *)(a1 + 568);
        *(_QWORD *)(a1 + 800) = *a4;
        sub_8F5170((__int64)&v43, v22);
        v23 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 24);
        *(_QWORD *)v23 = 17;
        *(_QWORD *)(v23 + 8) = 0;
        *(_BYTE *)(v23 + 16) = 0;
        sub_A1C0C0(&v43);
      }
      return 1;
    }
    if ( a3 == 15 )
    {
      if ( *(_DWORD *)(a1 + 812) == v4 )
      {
        v5 = &v43;
        v6 = &v36;
        v7 = *(_QWORD *)(a1 + 568);
        *(_QWORD *)(a1 + 800) = *a4;
        sub_8F5170((__int64)&v43, v7);
        v8 = *(_QWORD *)(a1 + 568);
        v37 = 0;
        v36 = 0;
        v40 = 1;
        v39 = 0;
        v38 = 0;
        v41 = 0;
        v42 = 0;
        v9 = sub_A1A4E0(v8, 72);
        sub_A1C070(v9, &v36);
        *(_QWORD *)(v9 + 56) = v41;
        v10 = v42;
LABEL_11:
        *(_DWORD *)(v9 + 64) = v10;
        sub_A1C0C0(v6);
LABEL_31:
        sub_A1C0C0(v5);
        return 1;
      }
      return 1;
    }
    if ( *(_DWORD *)(a1 + 812) != v4 )
      return 1;
    v21 = *(_QWORD *)(a1 + 568);
    *(_QWORD *)(a1 + 800) = *a4;
    sub_8F5170((__int64)&v43, v21);
    v36 = 0;
    v40 = 1;
    v19 = *(_QWORD *)(a1 + 568);
    v39 = 17;
    v38 = 0;
    v37 = 0;
LABEL_21:
    v20 = sub_A1A4E0(v19, 56);
    sub_A1C070(v20, &v36);
    sub_A1C0C0(&v36);
    sub_A1C0C0(&v43);
    return 1;
  }
  if ( a3 == 14 )
  {
    if ( *(_DWORD *)(a1 + 812) == v4 )
    {
      v26 = *(_QWORD *)(a1 + 568);
      v5 = &v43;
      *(_QWORD *)(a1 + 800) = *a4;
      sub_8F41A0((__int64)&v43, v26);
      v27 = *(_QWORD *)(a1 + 568);
      if ( v47 == 2 )
      {
        v32 = 0xFFFFFFFFLL;
        if ( !(unsigned __int8)sub_8E9400((__int64)&v43) )
          v32 = v43;
        v33 = v45;
        v34 = sub_A1A4E0(v27, 24);
        *(_QWORD *)v34 = v33;
        *(_QWORD *)(v34 + 8) = v32;
        *(_BYTE *)(v34 + 16) = 1;
      }
      else
      {
        v28 = sub_8E55C0(&v43);
        v29 = sub_A1A4E0(v27, 24);
        *(_QWORD *)v29 = v28;
        *(_QWORD *)(v29 + 8) = 0;
        *(_BYTE *)(v29 + 16) = 0;
      }
      goto LABEL_31;
    }
    return 1;
  }
  if ( a3 != 15 )
  {
    if ( *(_DWORD *)(a1 + 812) != v4 )
      return 1;
    v17 = *(_QWORD *)(a1 + 568);
    *(_QWORD *)(a1 + 800) = *a4;
    sub_8F41A0((__int64)&v43, v17);
    v18 = *(_QWORD *)(a1 + 568);
    v36 = 0;
    v40 = 1;
    v19 = v18;
    v39 = sub_8E55C0(&v43);
    v38 = 0;
    v37 = 0;
    goto LABEL_21;
  }
  if ( *(_DWORD *)(a1 + 812) == v4 )
  {
    v5 = &v36;
    v6 = &v43;
    v11 = *(_QWORD *)(a1 + 568);
    *(_QWORD *)(a1 + 800) = *a4;
    sub_8F41A0((__int64)&v36, v11);
    v12 = *(_QWORD *)(a1 + 568);
    v44 = 0;
    v43 = 0;
    v47 = 1;
    v46 = 0;
    v45 = 0;
    v48 = 0;
    v49 = 0;
    v9 = sub_A1A4E0(v12, 72);
    sub_A1C070(v9, &v43);
    *(_QWORD *)(v9 + 56) = v48;
    v10 = v49;
    goto LABEL_11;
  }
  return 1;
}

