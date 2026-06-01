_BYTE *__fastcall sub_E8BD20(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdi
  void *v4; // rdx
  _WORD *v5; // rdx
  __int64 v6; // rax
  _WORD *v7; // rdx
  _QWORD *v8; // rbx
  __int64 v9; // r15
  _QWORD *v10; // r12
  _WORD *v11; // rdx
  __int64 v12; // rdx
  _BYTE *v13; // rax
  _BYTE *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  _BYTE *v17; // rax
  _BYTE *v18; // rax
  _BYTE *v19; // rax
  _WORD *v20; // rdx
  _BYTE *result; // rax

  v3 = *a1;
  v4 = *(void **)(v3 + 32);
  if ( *(_QWORD *)(v3 + 24) - (_QWORD)v4 > 9u )
  {
    qmemcpy(v4, "reduction(", 10);
    *(_QWORD *)(v3 + 32) += 10LL;
  }
  else
  {
    v3 = sub_22581D0(v3, "reduction(", 10);
  }
  switch ( *(_BYTE *)(a2 + 40) )
  {
    case 0:
      v13 = *(_BYTE **)(v3 + 32);
      if ( v13 == *(_BYTE **)(v3 + 24) )
      {
        v3 = sub_22581D0(v3, "+", 1);
        v7 = *(_WORD **)(v3 + 32);
      }
      else
      {
        *v13 = 43;
        v7 = (_WORD *)(*(_QWORD *)(v3 + 32) + 1LL);
        *(_QWORD *)(v3 + 32) = v7;
      }
      break;
    case 1:
      v14 = *(_BYTE **)(v3 + 32);
      if ( v14 == *(_BYTE **)(v3 + 24) )
      {
        v3 = sub_22581D0(v3, "*", 1);
        v7 = *(_WORD **)(v3 + 32);
      }
      else
      {
        *v14 = 42;
        v7 = (_WORD *)(*(_QWORD *)(v3 + 32) + 1LL);
        *(_QWORD *)(v3 + 32) = v7;
      }
      break;
    case 2:
      v15 = *(_QWORD *)(v3 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v3 + 24) - v15) > 2 )
      {
        *(_BYTE *)(v15 + 2) = 120;
        *(_WORD *)v15 = 24941;
        v7 = (_WORD *)(*(_QWORD *)(v3 + 32) + 3LL);
        *(_QWORD *)(v3 + 32) = v7;
      }
      else
      {
        v3 = sub_22581D0(v3, "max", 3);
        v7 = *(_WORD **)(v3 + 32);
      }
      break;
    case 3:
      v16 = *(_QWORD *)(v3 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v3 + 24) - v16) > 2 )
      {
        *(_BYTE *)(v16 + 2) = 110;
        *(_WORD *)v16 = 26989;
        v7 = (_WORD *)(*(_QWORD *)(v3 + 32) + 3LL);
        *(_QWORD *)(v3 + 32) = v7;
      }
      else
      {
        v3 = sub_22581D0(v3, "min", 3);
        v7 = *(_WORD **)(v3 + 32);
      }
      break;
    case 4:
      v17 = *(_BYTE **)(v3 + 32);
      if ( *(_BYTE **)(v3 + 24) == v17 )
      {
        v3 = sub_22581D0(v3, "&", 1);
        v7 = *(_WORD **)(v3 + 32);
      }
      else
      {
        *v17 = 38;
        v7 = (_WORD *)(*(_QWORD *)(v3 + 32) + 1LL);
        *(_QWORD *)(v3 + 32) = v7;
      }
      break;
    case 5:
      v18 = *(_BYTE **)(v3 + 32);
      if ( *(_BYTE **)(v3 + 24) == v18 )
      {
        v3 = sub_22581D0(v3, "|", 1);
        v7 = *(_WORD **)(v3 + 32);
      }
      else
      {
        *v18 = 124;
        v7 = (_WORD *)(*(_QWORD *)(v3 + 32) + 1LL);
        *(_QWORD *)(v3 + 32) = v7;
      }
      break;
    case 6:
      v19 = *(_BYTE **)(v3 + 32);
      if ( *(_BYTE **)(v3 + 24) == v19 )
      {
        v3 = sub_22581D0(v3, "^", 1);
        v7 = *(_WORD **)(v3 + 32);
      }
      else
      {
        *v19 = 94;
        v7 = (_WORD *)(*(_QWORD *)(v3 + 32) + 1LL);
        *(_QWORD *)(v3 + 32) = v7;
      }
      break;
    case 7:
      v20 = *(_WORD **)(v3 + 32);
      if ( *(_QWORD *)(v3 + 24) - (_QWORD)v20 > 1u )
      {
        *v20 = 9766;
        v7 = (_WORD *)(*(_QWORD *)(v3 + 32) + 2LL);
        *(_QWORD *)(v3 + 32) = v7;
      }
      else
      {
        v3 = sub_22581D0(v3, "&&", 2);
        v7 = *(_WORD **)(v3 + 32);
      }
      break;
    case 8:
      v5 = *(_WORD **)(v3 + 32);
      if ( *(_QWORD *)(v3 + 24) - (_QWORD)v5 > 1u )
      {
        *v5 = 31868;
        v7 = (_WORD *)(*(_QWORD *)(v3 + 32) + 2LL);
        *(_QWORD *)(v3 + 32) = v7;
      }
      else
      {
        v6 = sub_22581D0(v3, "||", 2);
        v7 = *(_WORD **)(v6 + 32);
        v3 = v6;
      }
      break;
    case 9:
      v12 = *(_QWORD *)(v3 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v3 + 24) - v12) > 8 )
      {
        *(_BYTE *)(v12 + 8) = 62;
        *(_QWORD *)v12 = 0x64696C61766E693CLL;
        v7 = (_WORD *)(*(_QWORD *)(v3 + 32) + 9LL);
        *(_QWORD *)(v3 + 32) = v7;
      }
      else
      {
        v3 = sub_22581D0(v3, "<invalid>", 9);
        v7 = *(_WORD **)(v3 + 32);
      }
      break;
  }
  if ( *(_QWORD *)(v3 + 24) - (_QWORD)v7 > 1u )
  {
    *v7 = 8250;
    *(_QWORD *)(v3 + 32) += 2LL;
  }
  else
  {
    sub_22581D0(v3, ": ", 2);
  }
  v8 = *(_QWORD **)(a2 + 24);
  v9 = *a1;
  v10 = &v8[*(_QWORD *)(a2 + 32)];
  if ( v8 != v10 )
  {
    sub_EE3EC0(*v8, v9, 0, a1[1], 0, 0, (__int64)"\n", 1);
    while ( v10 != ++v8 )
    {
      v11 = *(_WORD **)(v9 + 32);
      if ( *(_QWORD *)(v9 + 24) - (_QWORD)v11 > 1u )
      {
        *v11 = 8236;
        *(_QWORD *)(v9 + 32) += 2LL;
      }
      else
      {
        sub_22581D0(v9, ", ", 2);
      }
      sub_EE3EC0(*v8, *a1, 0, a1[1], 0, 0, (__int64)"\n", 1);
    }
    v9 = *a1;
  }
  result = *(_BYTE **)(v9 + 32);
  if ( result == *(_BYTE **)(v9 + 24) )
    return (_BYTE *)sub_22581D0(v9, ")", 1);
  *result = 41;
  ++*(_QWORD *)(v9 + 32);
  return result;
}

