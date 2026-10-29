_BYTE *__fastcall sub_E8E820(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  _BYTE *v4; // rdx
  char v5; // si
  __int64 v6; // rbp
  _QWORD *v7; // rbx
  _QWORD *v8; // r12
  _WORD *v9; // rdx
  _BYTE *result; // rax
  __int64 v11; // rax
  _WORD *v12; // rcx

  v3 = sub_E8CED0(*a1, *(_BYTE *)(a2 + 8));
  v4 = *(_BYTE **)(v3 + 32);
  if ( *(_QWORD *)(v3 + 24) <= (unsigned __int64)v4 )
  {
    sub_2257CD0(v3, 40);
    v5 = *(_BYTE *)(a2 + 40);
    v6 = *a1;
    if ( !v5 )
      goto LABEL_3;
  }
  else
  {
    *(_QWORD *)(v3 + 32) = v4 + 1;
    *v4 = 40;
    v5 = *(_BYTE *)(a2 + 40);
    v6 = *a1;
    if ( !v5 )
      goto LABEL_3;
  }
  v11 = sub_E8D460(v6, v5);
  v12 = *(_WORD **)(v11 + 32);
  if ( *(_QWORD *)(v11 + 24) - (_QWORD)v12 > 1u )
  {
    *v12 = 8250;
    *(_QWORD *)(v11 + 32) += 2LL;
  }
  else
  {
    sub_22581D0(v11, ": ", 2);
  }
  v6 = *a1;
LABEL_3:
  v7 = *(_QWORD **)(a2 + 24);
  v8 = &v7[*(_QWORD *)(a2 + 32)];
  if ( v7 != v8 )
  {
    sub_EE3EC0(*v7, v6, 0, a1[1], 0, 0, (__int64)"\n", 1);
    while ( v8 != ++v7 )
    {
      v9 = *(_WORD **)(v6 + 32);
      if ( *(_QWORD *)(v6 + 24) - (_QWORD)v9 > 1u )
      {
        *v9 = 8236;
        *(_QWORD *)(v6 + 32) += 2LL;
      }
      else
      {
        sub_22581D0(v6, ", ", 2);
      }
      sub_EE3EC0(*v7, *a1, 0, a1[1], 0, 0, (__int64)"\n", 1);
    }
    v6 = *a1;
  }
  result = *(_BYTE **)(v6 + 32);
  if ( *(_BYTE **)(v6 + 24) == result )
    return (_BYTE *)sub_22581D0(v6, ")", 1);
  *result = 41;
  ++*(_QWORD *)(v6 + 32);
  return result;
}

