unsigned __int64 __fastcall sub_2EF40(std::string *this, __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 result; // rax
  unsigned __int16 v7; // ax
  __int64 v8; // r8
  __int64 v9; // rax
  int v10; // r15d
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r8
  __int64 v13; // rax
  unsigned __int64 v14; // r8
  __int64 v15; // rax
  char v16; // r14
  unsigned __int64 v17; // r8
  __int64 v18; // rax
  unsigned __int64 v19; // r8
  __int64 v20; // rax
  unsigned __int64 v21; // r8
  __int64 v22; // rax
  __int16 v23; // r15
  char v24; // bl
  unsigned __int64 v25; // rax
  __int64 v26; // rdx
  unsigned __int64 v27; // rdx
  const char *v28; // rsi
  __int64 v29; // r8
  __int64 v30; // rax
  unsigned __int64 v31; // r8
  char *v32; // rax
  __int64 v33; // r14
  __int64 v34; // rax
  char v36; // [rsp+12h] [rbp-46h]
  char v37; // [rsp+13h] [rbp-45h]
  unsigned int v38; // [rsp+14h] [rbp-44h]
  int v39; // [rsp+18h] [rbp-40h]

  result = sub_BFF0(a3);
  if ( result <= 1 )
  {
    *((_BYTE *)this + 81) = 0;
    return result;
  }
  v7 = *(_WORD *)(a3 + 16);
  if ( v7 == 155 )
    goto LABEL_52;
  if ( v7 <= 0x9Bu )
  {
    if ( v7 != 20 )
    {
      if ( v7 == 61 || v7 == 11 )
        std::string::append(this, "@autoclosure ", 0xDu);
      goto LABEL_10;
    }
    std::string::append(this, "@convention(", 0xCu);
    v27 = 1;
    v28 = (const char *)&unk_38004;
    goto LABEL_53;
  }
  if ( v7 == 156 )
  {
    std::string::append(this, "@escaping ", 0xAu);
LABEL_52:
    std::string::append(this, "@convention(", 0xCu);
    v27 = 5;
    v28 = "block";
LABEL_53:
    std::string::append(this, v28, v27);
    v29 = sub_BFF0(a3);
    v30 = 0;
    if ( v29 )
      v30 = *(_QWORD *)sub_C020((_BYTE *)a3);
    if ( *(_WORD *)(v30 + 16) == 21 )
    {
      std::string::append(this, ", mangledCType: \"", 0x11u);
      if ( sub_BFF0(a3) )
        sub_C020((_BYTE *)a3);
      sub_24010(this);
      v33 = *(_QWORD *)(*(_QWORD *)this - 24LL);
      if ( (unsigned __int64)(v33 + 1) > *(_QWORD *)(*(_QWORD *)this - 16LL) || *(int *)(*(_QWORD *)this - 8LL) > 0 )
        std::string::reserve(this, v33 + 1);
      *(_BYTE *)(*(_QWORD *)this + *(_QWORD *)(*(_QWORD *)this - 24LL)) = 34;
      v34 = *(_QWORD *)this;
      if ( (_QWORD *)(*(_QWORD *)this - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
      {
        *(_DWORD *)(v34 - 8) = 0;
        *(_QWORD *)(v34 - 24) = v33 + 1;
        *(_BYTE *)(v34 + v33 + 1) = 0;
      }
    }
    std::string::append(this, ") ", 2u);
    goto LABEL_10;
  }
  if ( v7 == 211 )
    std::string::append(this, "@convention(thin) ", 0x12u);
LABEL_10:
  v39 = sub_BFF0(a3);
  v38 = v39 - 2;
  v8 = sub_BFF0(a3);
  v9 = 0;
  if ( v8 )
    v9 = *(_QWORD *)sub_C020((_BYTE *)a3);
  v10 = *(_WORD *)(v9 + 16) == 21;
  v11 = *(_WORD *)(v9 + 16) == 21;
  v12 = sub_BFF0(a3);
  v13 = 0;
  if ( (unsigned __int8)v11 < v12 )
    v13 = *(_QWORD *)&sub_C020((_BYTE *)a3)[8 * (unsigned __int8)v11];
  if ( *(_WORD *)(v13 + 16) == 64 )
  {
    if ( (unsigned __int8)v11 < (unsigned __int64)sub_BFF0(a3) )
      sub_C020((_BYTE *)a3);
    v11 = (unsigned int)(v10 + 1);
    sub_24010(this);
    ++v10;
  }
  v14 = sub_BFF0(a3);
  v15 = 0;
  if ( v11 < v14 )
    v15 = *(_QWORD *)&sub_C020((_BYTE *)a3)[8 * v11];
  v16 = 0;
  if ( *(_WORD *)(v15 + 16) == 65 )
  {
    v31 = sub_BFF0(a3);
    v32 = nullptr;
    if ( v11 < v31 )
      v32 = *(char **)&sub_C020((_BYTE *)a3)[8 * v11];
    v11 = (unsigned int)(v10 + 1);
    v16 = *v32;
    ++v10;
  }
  v17 = sub_BFF0(a3);
  v18 = 0;
  if ( v11 < v17 )
    v18 = *(_QWORD *)&sub_C020((_BYTE *)a3)[8 * v11];
  v37 = 0;
  if ( *(_WORD *)(v18 + 16) == 261 )
  {
    v11 = (unsigned int)(v10 + 1);
    v37 = 1;
    ++v10;
  }
  v19 = sub_BFF0(a3);
  v20 = 0;
  if ( v11 < v19 )
    v20 = *(_QWORD *)&sub_C020((_BYTE *)a3)[8 * v11];
  v36 = 0;
  if ( *(_WORD *)(v20 + 16) == 63 )
  {
    v36 = 1;
    v11 = (unsigned int)(v10 + 1);
  }
  v21 = sub_BFF0(a3);
  v22 = 0;
  if ( v11 < v21 )
    v22 = *(_QWORD *)&sub_C020((_BYTE *)a3)[8 * v11];
  v23 = *(_WORD *)(v22 + 16);
  if ( v16 == 108 )
  {
    std::string::append(this, "@differentiable(_linear) ", 0x19u);
  }
  else if ( v16 > 108 )
  {
    if ( v16 == 114 )
    {
      std::string::append(this, "@differentiable(reverse) ", 0x19u);
      if ( !v36 )
        goto LABEL_34;
LABEL_46:
      std::string::append(this, "@Sendable ", 0xAu);
      goto LABEL_34;
    }
  }
  else if ( v16 == 100 )
  {
    std::string::append(this, "@differentiable ", 0x10u);
  }
  else if ( v16 == 102 )
  {
    std::string::append(this, "@differentiable(_forward) ", 0x1Au);
  }
  if ( v36 )
    goto LABEL_46;
LABEL_34:
  v24 = *((_BYTE *)this + 23);
  v25 = sub_BFF0(a3);
  v26 = 0;
  if ( v38 < v25 )
    v26 = *(_QWORD *)&sub_C020((_BYTE *)a3)[8 * v38];
  result = sub_2E060(this, a2, v26, a4, v24);
  if ( *((_BYTE *)this + 23) )
  {
    if ( v23 == 260 )
      std::string::append(this, " async", 6u);
    if ( v37 )
      std::string::append(this, " throws", 7u);
    if ( (unsigned int)(v39 - 1) < (unsigned __int64)sub_BFF0(a3) )
      sub_C020((_BYTE *)a3);
    return sub_24010(this);
  }
  return result;
}
