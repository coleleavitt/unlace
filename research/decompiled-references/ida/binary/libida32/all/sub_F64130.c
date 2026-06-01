__int64 *__fastcall sub_F64130(__int64 a1, __int64 *a2)
{
  __int64 *result; // rax
  __int64 *v4; // rdx
  __int64 *v5; // r12
  __int64 *i; // rbx
  __int64 v7; // r15
  __int64 v8; // r14
  char v9; // dl
  __int64 *v10; // rcx
  __int64 v11; // r8
  __int64 *v12; // rdi
  __int64 *v13; // rcx
  __int64 *v14; // rsi
  __int64 v15; // r14
  unsigned __int64 v16; // rax
  unsigned __int64 v17[8]; // [rsp+8h] [rbp-40h] BYREF

  result = (__int64 *)sub_B747D0(a1);
  if ( result != v4 )
  {
    v5 = v4;
    for ( i = result; v5 != i; ++i )
    {
      v7 = *i;
      if ( !(unsigned int)sub_B747A0(*i) )
      {
        v15 = *a2;
        v16 = sub_B4E950(v7 + 72);
        if ( v16 )
          v16 -= 64LL;
        v17[0] = v16;
        sub_F63DE0(v15, (__int64 *)v17);
      }
      v8 = a2[1];
      v9 = *(_BYTE *)(v8 + 20);
      if ( v9 )
      {
        v10 = *(__int64 **)v8;
        v11 = *(unsigned int *)(v8 + 12);
        v12 = (__int64 *)(*(_QWORD *)v8 + 8 * v11);
        if ( *(__int64 **)v8 != v12 )
        {
          result = *(__int64 **)v8;
          if ( v7 == *v10 )
          {
LABEL_27:
            v9 = 0;
            goto LABEL_12;
          }
          while ( v12 != ++result )
          {
            if ( v7 == *result )
              goto LABEL_27;
          }
        }
        if ( (unsigned int)v11 < *(_DWORD *)(v8 + 8) )
        {
          *(_DWORD *)(v8 + 12) = v11 + 1;
          *v12 = v7;
          v10 = *(__int64 **)v8;
          result = (__int64 *)(*(_QWORD *)v8 + 8 * v11);
LABEL_12:
          v13 = &v10[*(unsigned int *)(v8 + 12)];
          goto LABEL_13;
        }
      }
      result = (__int64 *)sub_2212A20(a2[1], v7);
      v10 = *(__int64 **)v8;
      if ( *(_BYTE *)(v8 + 20) )
        goto LABEL_12;
      v13 = &v10[*(unsigned int *)(v8 + 8)];
LABEL_13:
      if ( result != v13 && (unsigned __int64)*result >= 0xFFFFFFFFFFFFFFFELL )
      {
        ++result;
        do
        {
          v14 = result;
          if ( v13 == result )
            break;
          ++result;
        }
        while ( (unsigned __int64)*v14 >= 0xFFFFFFFFFFFFFFFELL );
      }
      if ( v9 )
        result = (__int64 *)sub_F64130(v7, a2);
    }
  }
  return result;
}

