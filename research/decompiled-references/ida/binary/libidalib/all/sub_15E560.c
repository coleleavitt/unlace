__int64 __fastcall sub_15E560(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  int v3; // r8d
  unsigned int v4; // ebx
  int v6; // ecx
  unsigned __int64 v7; // r9
  __int64 v8; // r12
  __int64 v9; // r13
  __int64 v10; // rsi
  __int64 v11; // r14
  unsigned __int64 v12; // r13
  int v13; // ebp
  __int64 v14; // rdi
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // r12
  _BYTE *v17; // rax
  _BYTE *v18; // rdx
  unsigned __int64 v19; // r14
  char *v20; // rax
  int v21; // eax
  int v22; // edx
  size_t v23; // rdx
  struct _Unwind_Exception *v24; // rbx
  _BYTE *v25; // [rsp+0h] [rbp-70h]
  int utf8_char; // [rsp+Ch] [rbp-64h]
  _BYTE *v27; // [rsp+10h] [rbp-60h]
  __int64 v28; // [rsp+18h] [rbp-58h] BYREF
  __int128 v29; // [rsp+20h] [rbp-50h]
  unsigned __int64 v30; // [rsp+30h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  v1 = a1;
  v29 = 0;
  v28 = 0;
  if ( sub_15E4F0(a1, (__int64)&v28, 0) <= 0 )
    goto LABEL_4;
  if ( !*(_QWORD *)(a1 + 480) )
  {
    sub_158B30(a1);
    goto LABEL_58;
  }
  v2 = sub_139ED0(v28, *(__int16 *)(a1 + 468), 2 * *(_BYTE *)(a1 + 773));
  v3 = HIDWORD(v2);
  if ( (int)v2 >= SHIDWORD(v2) )
  {
LABEL_4:
    v4 = 0;
    goto LABEL_5;
  }
  a1 = v29;
  v6 = 0;
  v7 = v28;
  v8 = (int)v2;
  v9 = v28 + (int)v2;
  if ( (_QWORD)v29 )
    v6 = v29 - 1;
  v10 = HIDWORD(v2) - 1 - (int)v2;
  if ( v6 - (int)v2 >= (unsigned __int64)(v10 + 1) && *(_BYTE *)(v9 + v10) == 64 && *(_BYTE *)(v9 + v10 + 1) == 60 )
    v3 = HIDWORD(v2) - 1;
  v11 = v3;
  if ( v3 )
  {
    v12 = v3 + 1LL;
    if ( (unsigned __int64)v29 < v12 )
    {
      if ( *((_QWORD *)&v29 + 1) < v12 )
      {
        v28 = qvector_reserve();
        a1 = v29;
        v7 = v28;
      }
      v23 = v12 - a1;
      a1 += v7;
      memset((void *)a1, 0, v23);
      *(_QWORD *)&v29 = v11 + 1;
      v7 = v28;
    }
    else if ( (_QWORD)v29 != v3 + 1LL )
    {
      *(_QWORD *)&v29 = v3 + 1LL;
    }
    *(_BYTE *)(v7 + v11) = 0;
    v9 = v8 + v28;
  }
  else if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    a1 = v28;
    qfree();
    v28 = 0;
    v9 = v8;
    *((_QWORD *)&v29 + 1) = 0;
  }
  if ( qword_254470 != v1 )
  {
LABEL_46:
    v22 = 1;
    goto LABEL_38;
  }
  if ( !*(_QWORD *)(v1 + 480) )
  {
LABEL_58:
    v24 = (struct _Unwind_Exception *)sub_158B30(a1);
    if ( v28 )
    {
      *(_QWORD *)&v29 = 0;
      qfree();
    }
    _Unwind_Resume(v24);
  }
  v13 = *(__int16 *)(v1 + 468);
  v14 = 0;
  v15 = *(__int16 *)(v1 + 468);
  if ( *(_BYTE *)(v1 + 992) && *(_DWORD *)(v1 + 472) == 1 )
    v14 = *(_QWORD *)(v1 + 856);
  v16 = *(_QWORD *)((*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 96LL))(v14, 0) + 8);
  if ( tag_strlen() >= v15 )
  {
    tag_advance();
    v17 = (_BYTE *)tag_skipcodes();
    if ( v17 )
    {
      if ( *v17 )
      {
        v27 = v17;
        v25 = v17;
        utf8_char = get_utf8_char();
        if ( utf8_char == -1 )
        {
          if ( v13 <= 0 )
            goto LABEL_37;
        }
        else
        {
          v18 = v25;
          v27 = v25;
          if ( v13 <= 0 )
            goto LABEL_37;
          while ( v16 < (unsigned __int64)v18 )
          {
            if ( !(unsigned __int8)prev_utf8_char() )
            {
              if ( utf8_char != 33 )
                goto LABEL_37;
LABEL_50:
              v19 = (unsigned __int64)v25;
              if ( v16 < (unsigned __int64)v25 && *(v25 - 1) == 1 )
                goto LABEL_34;
              goto LABEL_37;
            }
            if ( utf8_char == 33 )
              goto LABEL_50;
            if ( !--v13 )
              goto LABEL_37;
            v18 = v25;
          }
        }
        v19 = (unsigned __int64)v27;
LABEL_34:
        v20 = strchr((const char *)(v19 + 1), 33);
        if ( v19 < (unsigned __int64)v20 || v20[1] != 2 )
          v9 = v28 + v13;
      }
    }
  }
LABEL_37:
  v21 = str2reg();
  v22 = 3;
  if ( v21 < 0 )
  {
    if ( get_func() && find_regvar() )
    {
      v22 = (((int)str2reg() >> 31) & 0xFFFFFFFE) + 3;
      goto LABEL_38;
    }
    goto LABEL_46;
  }
LABEL_38:
  sub_15CAD0((__int64 *)(v1 + 592), v9, v22);
  v4 = 1;
LABEL_5:
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree();
  }
  return v4;
}

