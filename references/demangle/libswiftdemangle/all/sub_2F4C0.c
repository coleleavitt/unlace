__int64 __fastcall sub_2F4C0(std::string *this, _BYTE *a2, __int64 a3, __int64 a4, int a5)
{
  __int64 *v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  __int64 v12; // r15
  __int64 v13; // rax
  _BYTE *v14; // r13
  __int64 v15; // rbx
  _BYTE *v16; // r14
  __int64 v18; // r12
  __int64 v19; // rax

  v7 = (__int64 *)sub_C050((__int64)a2);
  v8 = sub_C020(a2);
  v9 = ((char *)v7 - (char *)v8) >> 5;
  v10 = v7 - v8;
  if ( v9 > 0 )
  {
    v11 = &v8[4 * v9];
    while ( *(_WORD *)(*v8 + 16LL) != 278 )
    {
      if ( *(_WORD *)(v8[1] + 16LL) == 278 )
      {
        v7 = v8 + 1;
        goto LABEL_9;
      }
      if ( *(_WORD *)(v8[2] + 16LL) == 278 )
      {
        v7 = v8 + 2;
        goto LABEL_9;
      }
      if ( *(_WORD *)(v8[3] + 16LL) == 278 )
      {
        v7 = v8 + 3;
        goto LABEL_9;
      }
      v8 += 4;
      if ( v11 == v8 )
      {
        v10 = v7 - v8;
        goto LABEL_29;
      }
    }
    goto LABEL_8;
  }
LABEL_29:
  switch ( v10 )
  {
    case 2LL:
      goto LABEL_42;
    case 3LL:
      if ( *(_WORD *)(*v8 + 16LL) == 278 )
        goto LABEL_8;
      ++v8;
LABEL_42:
      if ( *(_WORD *)(*v8 + 16LL) != 278 )
      {
        ++v8;
LABEL_32:
        if ( *(_WORD *)(*v8 + 16LL) == 278 )
          v7 = v8;
        if ( v7 != (__int64 *)sub_C050((__int64)a2) )
          goto LABEL_10;
        goto LABEL_35;
      }
LABEL_8:
      v7 = v8;
      break;
    case 1LL:
      goto LABEL_32;
  }
LABEL_9:
  if ( v7 != (__int64 *)sub_C050((__int64)a2) )
  {
LABEL_10:
    v12 = *v7;
    v13 = *v7 | a4;
    goto LABEL_11;
  }
LABEL_35:
  v13 = a4;
  v12 = 0;
LABEL_11:
  if ( v13 )
  {
    if ( a4 )
    {
      std::string::append(this, "<", 1u);
      v14 = sub_C020((_BYTE *)a4);
      v15 = sub_C050(a4);
      if ( v14 != (_BYTE *)v15 )
      {
        while ( 1 )
        {
          v14 += 8;
          sub_24010(this);
          if ( (_BYTE *)v15 == v14 )
            break;
          std::string::append(this, ", ", 2u);
        }
      }
      std::string::append(this, ">", 1u);
      if ( *(_WORD *)(a3 + 16) != 41 )
        return sub_2EF40(this, v12, a3, a5);
    }
    else
    {
      if ( *(_WORD *)(a3 + 16) != 41 )
        return sub_2EF40(this, v12, a3, a5);
      if ( sub_BFF0(a3) )
        sub_C020((_BYTE *)a3);
      sub_24010(this);
    }
    v16 = nullptr;
    if ( (unsigned __int64)sub_BFF0(a3) > 1 )
      v16 = *((_BYTE **)sub_C020((_BYTE *)a3) + 1);
    if ( sub_23730((__int64)v16) )
    {
      v18 = *(_QWORD *)(*(_QWORD *)this - 24LL);
      if ( (unsigned __int64)(v18 + 1) > *(_QWORD *)(*(_QWORD *)this - 16LL) || *(int *)(*(_QWORD *)this - 8LL) > 0 )
        std::string::reserve(this, v18 + 1);
      *(_BYTE *)(*(_QWORD *)this + *(_QWORD *)(*(_QWORD *)this - 24LL)) = 32;
      v19 = *(_QWORD *)this;
      if ( (_QWORD *)(*(_QWORD *)this - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
      {
        *(_DWORD *)(v19 - 8) = 0;
        *(_QWORD *)(v19 - 24) = v18 + 1;
        *(_BYTE *)(v19 + v18 + 1) = 0;
      }
    }
    a3 = 0;
    if ( sub_BFF0((__int64)v16) )
      a3 = *(_QWORD *)sub_C020(v16);
    return sub_2EF40(this, v12, a3, a5);
  }
  return sub_24010(this);
}
