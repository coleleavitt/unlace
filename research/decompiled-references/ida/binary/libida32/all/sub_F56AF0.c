_QWORD *__fastcall sub_F56AF0(__int64 a1, _QWORD *a2)
{
  _QWORD *result; // rax
  _QWORD *v4; // rdx
  _QWORD *v5; // r12
  _QWORD *i; // r13
  __int64 v7; // rbx
  __int64 v8; // r14
  char v9; // dl
  _QWORD *v10; // rcx
  __int64 v11; // r8
  _QWORD *v12; // rdi
  _QWORD *v13; // rcx
  _QWORD *v14; // rsi

  result = (_QWORD *)sub_B747D0(a1);
  if ( result != v4 )
  {
    v5 = v4;
    for ( i = result; v5 != i; ++i )
    {
      v7 = *a2;
      v8 = *i;
      v9 = *(_BYTE *)(*a2 + 20LL);
      if ( v9 )
      {
        v10 = *(_QWORD **)v7;
        v11 = *(unsigned int *)(v7 + 12);
        v12 = (_QWORD *)(*(_QWORD *)v7 + 8 * v11);
        if ( *(_QWORD **)v7 != v12 )
        {
          result = *(_QWORD **)v7;
          if ( v8 == *v10 )
          {
LABEL_23:
            v9 = 0;
            goto LABEL_11;
          }
          while ( v12 != ++result )
          {
            if ( v8 == *result )
              goto LABEL_23;
          }
        }
        if ( (unsigned int)v11 < *(_DWORD *)(v7 + 8) )
        {
          *(_DWORD *)(v7 + 12) = v11 + 1;
          *v12 = v8;
          v10 = *(_QWORD **)v7;
          result = (_QWORD *)(*(_QWORD *)v7 + 8 * v11);
LABEL_11:
          v13 = &v10[*(unsigned int *)(v7 + 12)];
          goto LABEL_12;
        }
      }
      result = (_QWORD *)sub_2212A20(*a2, *i);
      v10 = *(_QWORD **)v7;
      if ( *(_BYTE *)(v7 + 20) )
        goto LABEL_11;
      v13 = &v10[*(unsigned int *)(v7 + 8)];
LABEL_12:
      if ( result != v13 && *result >= 0xFFFFFFFFFFFFFFFELL )
      {
        ++result;
        do
        {
          v14 = result;
          if ( v13 == result )
            break;
          ++result;
        }
        while ( *v14 >= 0xFFFFFFFFFFFFFFFELL );
      }
      if ( v9 )
        result = (_QWORD *)sub_F56AF0(v8, a2);
    }
  }
  return result;
}

