__int64 __fastcall sub_1F3020(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned int v11; // ebx
  char *v13; // rdi
  int v14; // ecx
  __int64 v15; // r9
  __int64 v16; // r13
  __int64 v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r14
  unsigned __int64 v21; // r12
  int v22; // ebp
  __int64 v23; // rdi
  unsigned __int64 v24; // r14
  int v25; // eax
  unsigned __int64 v26; // r13
  __int64 v27; // rax
  _BYTE *v28; // rax
  _BYTE *v29; // rdx
  unsigned __int64 v30; // r14
  char *v31; // rax
  int v32; // eax
  __int64 func; // rdi
  __int64 regvar; // rax
  size_t v35; // rdx
  struct _Unwind_Exception *v36; // rbx
  _BYTE *v37; // [rsp+0h] [rbp-70h]
  int utf8_char; // [rsp+Ch] [rbp-64h] BYREF
  _BYTE *v39; // [rsp+10h] [rbp-60h] BYREF
  __int64 v40; // [rsp+18h] [rbp-58h] BYREF
  __int128 v41; // [rsp+20h] [rbp-50h]
  unsigned __int64 v42; // [rsp+30h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  v41 = 0;
  v40 = 0;
  v5 = (__int64)&v40;
  if ( sub_1EB270(a1, (__int64)&v40, 0, a4, 0.0) <= 0 )
    goto LABEL_4;
  v9 = 2 * (unsigned int)*(unsigned __int8 *)(a1 + 741);
  if ( !*(_QWORD *)(a1 + 424) )
    sub_1E69C0(0.0, a1, (__int64)&v40, v9, v7);
  v5 = *(__int16 *)(a1 + 412);
  v10 = sub_32C7D0(v40, v5, v9);
  v6 = v10 >> 32;
  v8 = HIDWORD(v10);
  if ( (int)v10 >= SHIDWORD(v10) )
  {
LABEL_4:
    v11 = 0;
    goto LABEL_5;
  }
  v13 = (char *)v41;
  v14 = 0;
  v15 = v40;
  v16 = (int)v10;
  v17 = v40 + (int)v10;
  if ( (_QWORD)v41 )
    v14 = v41 - 1;
  v18 = (unsigned int)(HIDWORD(v10) - 1);
  v19 = (unsigned int)(v14 - v10);
  v5 = (int)v18 - (int)v10;
  if ( (int)v19 >= (unsigned __int64)(v5 + 1) && *(_BYTE *)(v17 + v5) == 64 && *(_BYTE *)(v17 + v5 + 1) == 60 )
    v8 = (unsigned int)v18;
  v20 = (int)v8;
  if ( (_DWORD)v8 )
  {
    v21 = (int)v8 + 1LL;
    if ( (unsigned __int64)v41 < v21 )
    {
      if ( *((_QWORD *)&v41 + 1) < v21 )
      {
        v40 = qvector_reserve(&v40, v40, (int)v8 + 1LL, 1);
        v13 = (char *)v41;
        v15 = v40;
      }
      v5 = 0;
      v35 = v21 - (_QWORD)v13;
      v13 += v15;
      memset(v13, 0, v35);
      *(_QWORD *)&v41 = v20 + 1;
      v15 = v40;
    }
    else if ( (_QWORD)v41 != (int)v8 + 1LL )
    {
      *(_QWORD *)&v41 = (int)v8 + 1LL;
    }
    *(_BYTE *)(v15 + v20) = 0;
    v17 = v16 + v40;
  }
  else if ( v40 )
  {
    *(_QWORD *)&v41 = 0;
    v13 = (char *)v40;
    qfree(v40, (const char *)v5);
    v40 = 0;
    v17 = v16;
    *((_QWORD *)&v41 + 1) = 0;
  }
  if ( unk_8CD7E8 != a1 )
  {
LABEL_56:
    v7 = 1;
    goto LABEL_41;
  }
  if ( !*(_QWORD *)(a1 + 424) )
  {
    v36 = (struct _Unwind_Exception *)sub_1E69C0(0.0, (__int64)v13, v5, v18, v19);
    if ( v40 )
    {
      *(_QWORD *)&v41 = 0;
      qfree(v40, (const char *)v5);
    }
    _Unwind_Resume(v36);
  }
  v22 = *(__int16 *)(a1 + 412);
  v23 = 0;
  v24 = *(__int16 *)(a1 + 412);
  if ( *(_BYTE *)(a1 + 968) )
  {
    v25 = *(_DWORD *)(a1 + 416);
    switch ( v25 )
    {
      case 2:
        v23 = *(_QWORD *)(a1 + 896);
        break;
      case 3:
        v23 = *(_QWORD *)(a1 + 904);
        break;
      case 1:
        v23 = *(_QWORD *)(a1 + 888);
        break;
    }
  }
  v5 = 0;
  v26 = *(_QWORD *)((*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v23 + 176LL))(v23, 0) + 8);
  if ( tag_strlen(v26) >= v24 )
  {
    v5 = (unsigned int)v22;
    v27 = tag_advance(v26, (unsigned int)v22);
    v28 = (_BYTE *)tag_skipcodes(v27);
    if ( v28 )
    {
      if ( *v28 )
      {
        v39 = v28;
        v37 = v28;
        utf8_char = get_utf8_char(&v39);
        if ( utf8_char == -1 )
        {
          if ( v22 <= 0 )
            goto LABEL_40;
        }
        else
        {
          v29 = v37;
          v39 = v37;
          if ( v22 <= 0 )
            goto LABEL_40;
          while ( v26 < (unsigned __int64)v29 )
          {
            v5 = (__int64)&v39;
            if ( !(unsigned __int8)prev_utf8_char(&utf8_char, &v39, v26) || utf8_char == -1 )
            {
              if ( utf8_char != 33 )
                goto LABEL_40;
LABEL_60:
              v30 = (unsigned __int64)v39;
              if ( v26 < (unsigned __int64)v39 && *(v39 - 1) == 1 )
                goto LABEL_37;
              goto LABEL_40;
            }
            if ( utf8_char == 33 )
              goto LABEL_60;
            if ( !--v22 )
              goto LABEL_40;
            v29 = v39;
          }
        }
        v30 = (unsigned __int64)v39;
LABEL_37:
        v5 = 33;
        v31 = strchr((const char *)(v30 + 1), 33);
        if ( v30 < (unsigned __int64)v31 || v31[1] != 2 )
          v17 = v40 + v22;
      }
    }
  }
LABEL_40:
  v32 = str2reg(v17);
  v7 = 3;
  if ( v32 >= 0 )
    goto LABEL_41;
  func = get_func(xmmword_8CC810);
  if ( !func )
    goto LABEL_56;
  v5 = xmmword_8CC810;
  regvar = find_regvar(func, xmmword_8CC810, xmmword_8CC810 + 1, 0, v17);
  if ( !regvar )
    goto LABEL_56;
  v7 = (((int)str2reg(*(_QWORD *)(regvar + 16)) >> 31) & 0xFFFFFFFE) + 3;
LABEL_41:
  v6 = *(_QWORD *)(a1 + 600);
  if ( v6 )
  {
    v5 = *(_QWORD *)(a1 + 592);
    v6 = v5 + 80 * v6;
    if ( v5 != v6 )
    {
      while ( (*(_BYTE *)(v5 + 72) & 4) != 0 )
      {
        v5 += 80;
        if ( v6 == v5 )
          goto LABEL_48;
      }
      if ( v5 )
        sub_1E90E0(a1 + 576, v5, v17, v7);
    }
  }
LABEL_48:
  v11 = 1;
LABEL_5:
  if ( v40 )
  {
    *(_QWORD *)&v41 = 0;
    qfree(v40, (const char *)v5, v6, v7, v8);
  }
  return v11;
}
