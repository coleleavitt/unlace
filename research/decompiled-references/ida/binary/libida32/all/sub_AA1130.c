void __fastcall sub_AA1130(__int64 a1, __int64 a2, __int64 a3, char a4, __int64 a5, char a6)
{
  bool v9; // zf
  __int64 v10; // rbp
  _BYTE *v11; // rax
  __int64 v12; // rdi
  _BYTE *v13; // rax
  __int64 v14; // rax
  __int16 v15; // dx
  _BYTE *v16; // rax
  _BYTE *v17; // rax
  __int64 v18; // rax
  _BYTE *v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdi
  _BYTE *v22; // rax
  __int64 v23; // rdi
  _WORD *v24; // rdx
  _BYTE *v25; // rax
  __int64 v26; // rax
  unsigned __int8 v27; // cl
  __int64 v28; // rdx
  int v29; // r12d
  const char *v30; // rsi
  __int64 v31; // rdi
  _BYTE *v32; // rax
  __int64 v33; // rdi
  _BYTE *v34; // rax
  __int64 v35; // rdx
  __int16 v36; // ax
  __int64 v38; // [rsp+8h] [rbp-A0h] BYREF
  void *v39; // [rsp+10h] [rbp-98h] BYREF
  unsigned int v40; // [rsp+18h] [rbp-90h]
  char v41; // [rsp+1Ch] [rbp-8Ch]
  void *v42; // [rsp+20h] [rbp-88h] BYREF
  __int64 v43; // [rsp+28h] [rbp-80h]
  _BYTE v44[16]; // [rsp+30h] [rbp-78h] BYREF
  void *ptr; // [rsp+40h] [rbp-68h] BYREF
  __m128i si128; // [rsp+48h] [rbp-60h]
  _WORD v47[40]; // [rsp+58h] [rbp-50h] BYREF

  v9 = *(_BYTE *)(a1 + 26) == 0;
  v10 = *(_QWORD *)(a1 + 48);
  *(_BYTE *)(a1 + 56) = 1;
  v38 = a5;
  if ( v9 )
  {
LABEL_4:
    if ( !a4 )
      goto LABEL_5;
    goto LABEL_11;
  }
  v11 = *(_BYTE **)(v10 + 32);
  if ( (unsigned __int64)v11 < *(_QWORD *)(v10 + 24) )
  {
    *(_QWORD *)(v10 + 32) = v11 + 1;
    *v11 = 127;
    v10 = *(_QWORD *)(a1 + 48);
    goto LABEL_4;
  }
  sub_2257CD0(v10, 127);
  v10 = *(_QWORD *)(a1 + 48);
  if ( !a4 )
  {
LABEL_5:
    if ( a3 )
      sub_EE3EC0(a3, v10, 0, a1 + 8, 0, 0, (__int64)"\n", 1);
    else
      sub_971800(v10, "(no argument)");
    goto LABEL_7;
  }
LABEL_11:
  if ( !a3 )
    goto LABEL_14;
  v14 = sub_BD7B00(a3);
  v15 = *(_WORD *)v14 & 0x1FF;
  switch ( v15 )
  {
    case 8:
      if ( (**(_WORD **)(v14 + 16) & 0x1FF) == 0x34 )
        goto LABEL_14;
      break;
    case 52:
      goto LABEL_14;
    case 4:
      if ( *(_BYTE *)(v14 + 2) >> 3 == 7 )
      {
        v35 = *(_QWORD *)(v14 + 16);
        v36 = *(_WORD *)v35 & 0x1FF;
        if ( v36 == 8 )
          v36 = **(_WORD **)(v35 + 16) & 0x1FF;
        if ( v36 == 52 )
          goto LABEL_14;
      }
      break;
    case 115:
      goto LABEL_14;
  }
  sub_EE3EC0(a3, v10, 0, a1 + 8, 0, 0, (__int64)"\n", 1);
  v9 = *(_BYTE *)(a1 + 26) == 0;
  *(_BYTE *)(a1 + 56) = 0;
  if ( !v9 )
  {
    v31 = *(_QWORD *)(a1 + 48);
    v32 = *(_BYTE **)(v31 + 32);
    if ( (unsigned __int64)v32 >= *(_QWORD *)(v31 + 24) )
    {
      sub_2257CD0(v31, 127);
    }
    else
    {
      *(_QWORD *)(v31 + 32) = v32 + 1;
      *v32 = 127;
    }
  }
  sub_971800(*(_QWORD *)(a1 + 48), " aka ");
  v9 = *(_BYTE *)(a1 + 26) == 0;
  *(_BYTE *)(a1 + 56) = 1;
  if ( v9 )
    goto LABEL_63;
  v33 = *(_QWORD *)(a1 + 48);
  v34 = *(_BYTE **)(v33 + 32);
  if ( (unsigned __int64)v34 < *(_QWORD *)(v33 + 24) )
  {
    *(_QWORD *)(v33 + 32) = v34 + 1;
    *v34 = 127;
LABEL_63:
    v10 = *(_QWORD *)(a1 + 48);
    goto LABEL_14;
  }
  sub_2257CD0(v33, 127);
  v10 = *(_QWORD *)(a1 + 48);
LABEL_14:
  if ( a6 )
  {
    v9 = *(_BYTE *)(a1 + 26) == 0;
    *(_BYTE *)(a1 + 56) = 0;
    if ( !v9 )
    {
      v16 = *(_BYTE **)(v10 + 32);
      if ( (unsigned __int64)v16 >= *(_QWORD *)(v10 + 24) )
      {
        sub_2257CD0(v10, 127);
      }
      else
      {
        *(_QWORD *)(v10 + 32) = v16 + 1;
        *v16 = 127;
      }
      v10 = *(_QWORD *)(a1 + 48);
    }
    v17 = *(_BYTE **)(v10 + 32);
    if ( *(_BYTE **)(v10 + 24) == v17 )
    {
      sub_22581D0(v10, "(", 1);
    }
    else
    {
      *v17 = 40;
      ++*(_QWORD *)(v10 + 32);
    }
    v9 = *(_BYTE *)(a1 + 26) == 0;
    v18 = *(_QWORD *)(a1 + 48);
    *(_BYTE *)(a1 + 56) = 1;
    if ( !v9 )
    {
      v19 = *(_BYTE **)(v18 + 32);
      if ( (unsigned __int64)v19 >= *(_QWORD *)(v18 + 24) )
      {
        sub_2257CD0(v18, 127);
      }
      else
      {
        *(_QWORD *)(v18 + 32) = v19 + 1;
        *v19 = 127;
      }
      v18 = *(_QWORD *)(a1 + 48);
    }
    v20 = *(_QWORD *)a1 + 17464LL;
    v47[4] = 257;
    sub_F50AF0(&v38, v18, v20, &ptr, 0);
    v9 = *(_BYTE *)(a1 + 26) == 0;
    *(_BYTE *)(a1 + 56) = 0;
    if ( !v9 )
    {
      v21 = *(_QWORD *)(a1 + 48);
      v22 = *(_BYTE **)(v21 + 32);
      if ( (unsigned __int64)v22 >= *(_QWORD *)(v21 + 24) )
      {
        sub_2257CD0(v21, 127);
      }
      else
      {
        *(_QWORD *)(v21 + 32) = v22 + 1;
        *v22 = 127;
      }
    }
    v23 = *(_QWORD *)(a1 + 48);
    v24 = *(_WORD **)(v23 + 32);
    if ( *(_QWORD *)(v23 + 24) - (_QWORD)v24 > 1u )
    {
      *v24 = 8233;
      *(_QWORD *)(v23 + 32) += 2LL;
    }
    else
    {
      sub_22581D0(v23, ") ", 2);
    }
    v9 = *(_BYTE *)(a1 + 26) == 0;
    v10 = *(_QWORD *)(a1 + 48);
    *(_BYTE *)(a1 + 56) = 1;
    if ( !v9 )
    {
      v25 = *(_BYTE **)(v10 + 32);
      if ( (unsigned __int64)v25 >= *(_QWORD *)(v10 + 24) )
      {
        sub_2257CD0(v10, 127);
      }
      else
      {
        *(_QWORD *)(v10 + 32) = v25 + 1;
        *v25 = 127;
      }
      v10 = *(_QWORD *)(a1 + 48);
    }
  }
  v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v38 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v26 + 16) != 13 || ((*(_WORD *)(v26 + 18) >> 3) & 0x1FF) != 0x1B4 )
  {
    v27 = *(_BYTE *)(a2 + 12);
    ptr = v47;
    si128 = _mm_load_si128((const __m128i *)&xmmword_2384CB0);
    sub_21E7D50(a2, (unsigned int)&ptr, 10, v27 ^ 1, 0, 1, 0);
    v42 = v44;
    sub_A9C7C0(&v42, ptr, (__int64)ptr + si128.m128i_i64[0]);
    if ( ptr != v47 )
      free(ptr);
    sub_22581D0(v10, v42, v43);
    if ( v42 != v44 )
      operator delete(v42);
    goto LABEL_7;
  }
  v28 = *(unsigned int *)(a2 + 8);
  v40 = 64;
  v39 = nullptr;
  v41 = 0;
  if ( (_DWORD)v28 != 64 )
  {
    if ( (unsigned int)v28 <= 0x40 )
    {
      if ( *(_BYTE *)(a2 + 12) )
      {
        sub_21E2F90(&ptr, a2, 64);
        BYTE4(v43) = 1;
      }
      else
      {
        sub_21E2E30(&ptr, a2, 64);
        BYTE4(v43) = 0;
      }
      LODWORD(v43) = si128.m128i_i32[0];
      v42 = ptr;
      v29 = sub_96A590((__int64 *)&v42, (__int64 *)&v39);
      if ( (unsigned int)v43 > 0x40 )
      {
LABEL_46:
        if ( v42 )
          operator delete[](v42);
      }
    }
    else
    {
      sub_21E2E30(&ptr, &v39, v28);
      BYTE4(v43) = 0;
      LODWORD(v43) = si128.m128i_i32[0];
      v42 = ptr;
      v29 = sub_96A590((__int64 *)a2, (__int64 *)&v42);
      if ( (unsigned int)v43 > 0x40 )
        goto LABEL_46;
    }
    if ( v40 > 0x40 && v39 )
      operator delete[](v39);
    goto LABEL_51;
  }
  if ( *(_BYTE *)(a2 + 12) )
    v29 = sub_21E2070(a2, &v39);
  else
    v29 = sub_21E20E0(a2, &v39);
LABEL_51:
  v30 = "false";
  if ( v29 )
    v30 = "true";
  sub_971800(v10, v30);
LABEL_7:
  v9 = *(_BYTE *)(a1 + 26) == 0;
  *(_BYTE *)(a1 + 56) = 0;
  if ( !v9 )
  {
    v12 = *(_QWORD *)(a1 + 48);
    v13 = *(_BYTE **)(v12 + 32);
    if ( (unsigned __int64)v13 >= *(_QWORD *)(v12 + 24) )
    {
      sub_2257CD0(v12, 127);
    }
    else
    {
      *(_QWORD *)(v12 + 32) = v13 + 1;
      *v13 = 127;
    }
  }
}

