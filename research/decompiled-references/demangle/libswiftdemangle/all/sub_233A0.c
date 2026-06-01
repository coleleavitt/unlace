_QWORD *__fastcall sub_233A0(_QWORD *a1, __int64 *a2, _WORD *a3, size_t a4)
{
  const void **v4; // rax
  __int64 v5; // r15
  unsigned __int16 v6; // ax
  _BYTE *v7; // rbx
  __int64 v8; // r14
  _BYTE *v10; // rbp
  size_t v11; // rbx
  __int64 v12; // rax
  __int64 v13; // r13
  _QWORD *v14; // rcx
  _DWORD v15[6]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v16; // [rsp+18h] [rbp-50h]
  unsigned __int64 v17; // [rsp+28h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  v4 = sub_22FC0(a2, a3, a4);
  if ( !v4 )
    goto LABEL_11;
  v5 = (__int64)v4;
  while ( 1 )
  {
    v6 = *(_WORD *)(v5 + 16);
    if ( v6 == 143 )
      break;
    if ( v6 > 0x8Fu )
    {
      if ( ((v6 - 221) & 0xFFFB) != 0 )
      {
LABEL_14:
        if ( !(unsigned __int8)sub_31280(v5) )
        {
          if ( !(unsigned __int8)sub_BC80(*(_WORD *)(v5 + 16)) )
            goto LABEL_11;
          goto LABEL_19;
        }
        sub_31420(v15, v5, *a2);
        if ( v15[0] )
          goto LABEL_11;
        v5 = v16;
        if ( !v16 )
          goto LABEL_11;
      }
      else
      {
LABEL_19:
        if ( !sub_BFF0(v5) )
          goto LABEL_11;
        v5 = *(_QWORD *)sub_C020((_BYTE *)v5);
        if ( !v5 )
          goto LABEL_11;
      }
    }
    else
    {
      if ( v6 != 96 )
        goto LABEL_14;
      v7 = sub_C020((_BYTE *)v5);
      v8 = sub_C050(v5);
      if ( v7 == (_BYTE *)v8 )
        goto LABEL_11;
      while ( 1 )
      {
        v5 = *(_QWORD *)v7;
        if ( !sub_BDF0(*(_WORD *)(*(_QWORD *)v7 + 16LL)) )
          break;
        v7 += 8;
        if ( (_BYTE *)v8 == v7 )
          goto LABEL_11;
      }
      if ( !v5 )
        goto LABEL_11;
    }
  }
  v10 = *(_BYTE **)v5;
  v11 = *(_QWORD *)(v5 + 8);
  if ( !*(_QWORD *)v5 )
  {
LABEL_11:
    *a1 = &std::string::_Rep::_S_empty_rep_storage + 3;
    return a1;
  }
  if ( v11 )
  {
    v12 = std::string::_Rep::_S_create(*(_QWORD *)(v5 + 8), 0, v15);
    v13 = v12;
    v14 = (_QWORD *)(v12 + 24);
    if ( v11 == 1 )
      *(_BYTE *)(v12 + 24) = *v10;
    else
      v14 = memcpy((void *)(v12 + 24), v10, v11);
    if ( (_QWORD *)v13 != &std::string::_Rep::_S_empty_rep_storage )
    {
      *(_DWORD *)(v13 + 16) = 0;
      *(_QWORD *)v13 = v11;
      *(_BYTE *)(v13 + v11 + 24) = 0;
    }
  }
  else
  {
    v14 = &std::string::_Rep::_S_empty_rep_storage + 3;
  }
  *a1 = v14;
  return a1;
}
