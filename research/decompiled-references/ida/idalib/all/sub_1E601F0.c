_QWORD *__fastcall sub_1E601F0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rsi
  _BOOL8 v7; // rax
  __int64 v8; // rdi
  char v9; // dl
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r8
  char v12; // al
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rax
  char v16; // al
  size_t v17; // rbp
  _QWORD *v18; // r13
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // rdx
  _QWORD *v21; // rax
  size_t v23; // rbp
  _QWORD *v24; // r13
  _QWORD *v25; // rax
  unsigned __int64 v26; // r12
  unsigned __int64 v27; // r12
  unsigned __int64 v28; // rax
  _QWORD *v29; // rax
  unsigned __int64 v30; // rdx
  _QWORD *v31; // rax
  unsigned __int64 v32; // r12
  unsigned __int64 v33; // rax
  _QWORD *v34; // rax
  unsigned __int64 v35[6]; // [rsp+8h] [rbp-30h] BYREF

  v5 = *(_QWORD *)(a2 + 16);
  if ( (v5 & 0x1000000) != 0 )
  {
    v6 = *(unsigned __int16 *)(a2 + 22);
    v7 = (v5 & 0x40000000) != 0;
    v8 = 8 * v6 + 48;
    v9 = *(_BYTE *)(a2 + 19);
    v10 = (a2 + v8 + ((SBYTE3(v5) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v9 & 0x40) != 0 )
    {
      v11 = v10 + 8 * (((*(_BYTE *)(((a2 + v8 + ((v9 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0) + v7);
      v12 = ((unsigned __int8)v9 >> 1) & 0xF;
      if ( v12 != 2 )
LABEL_4:
        __asm { jmp     rdx }
    }
    else
    {
      v11 = v10 + 8 * v7;
      v12 = ((unsigned __int8)v9 >> 1) & 0xF;
      if ( v12 != 2 )
        goto LABEL_4;
    }
    v13 = v11 + 8LL * (*(_WORD *)((a2 + v8 + ((v9 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
    v14 = v13 + v6;
    if ( (v5 & 0x20000000) != 0 )
      v13 = v14;
    v15 = *(_QWORD *)((v13 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  }
  else if ( *(_BYTE *)(a2 + 16) == 26
         || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
         && sub_F63050(a2, a2, a3, v5) )
  {
    v15 = *(_BYTE *)(a2 + 18) >> 5;
  }
  else
  {
    v15 = 0;
  }
  v35[0] = v15;
  sub_F71C30(a1, v35);
  v16 = (*(_BYTE *)(a2 + 18) >> 3) & 3;
  if ( v16 == 1 )
  {
    v23 = a1[1];
    v24 = a1 + 2;
    v25 = (_QWORD *)*a1;
    v26 = v23 + 1;
    if ( v23 )
    {
      if ( v24 == v25 )
        v30 = 15;
      else
        v30 = a1[2];
      if ( v26 > v30 )
      {
        sub_998B30((__int64)a1, a1[1], 0, nullptr, 1u);
        v25 = (_QWORD *)*a1;
      }
      *((_BYTE *)v25 + v23) = 32;
      v31 = (_QWORD *)*a1;
      a1[1] = v26;
      *((_BYTE *)v31 + v26) = 0;
      v23 = a1[1];
      v27 = v23 + 1;
      if ( v24 == (_QWORD *)*a1 )
      {
        v28 = 15;
        goto LABEL_23;
      }
    }
    else
    {
      v27 = 1;
      if ( v24 == v25 )
      {
LABEL_26:
        *((_BYTE *)v25 + v23) = 38;
        v29 = (_QWORD *)*a1;
        a1[1] = v27;
        *((_BYTE *)v29 + v27) = 0;
        return a1;
      }
    }
    v28 = a1[2];
LABEL_23:
    if ( v28 < v27 )
      sub_998B30((__int64)a1, v23, 0, nullptr, 1u);
    v25 = (_QWORD *)*a1;
    goto LABEL_26;
  }
  if ( v16 == 2 )
  {
    v17 = a1[1];
    v18 = a1 + 2;
    if ( v17 )
    {
      v32 = v17 + 1;
      if ( (_QWORD *)*a1 == v18 )
        v33 = 15;
      else
        v33 = a1[2];
      if ( v32 > v33 )
        sub_998B30((__int64)a1, a1[1], 0, nullptr, 1u);
      *(_BYTE *)(*a1 + v17) = 32;
      v34 = (_QWORD *)*a1;
      a1[1] = v32;
      *((_BYTE *)v34 + v32) = 0;
      v17 = a1[1];
      if ( v17 == 0x7FFFFFFFFFFFFFFFLL || v17 == 9223372036854775806LL )
        std::__throw_length_error("basic_string::append");
    }
    v19 = v17 + 2;
    if ( (_QWORD *)*a1 == v18 )
      v20 = 15;
    else
      v20 = a1[2];
    if ( v19 > v20 )
      sub_998B30((__int64)a1, v17, 0, "&&", 2u);
    else
      *(_WORD *)(*a1 + v17) = 9766;
    v21 = (_QWORD *)*a1;
    a1[1] = v19;
    *((_BYTE *)v21 + v19) = 0;
  }
  return a1;
}
