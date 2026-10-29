__int64 __fastcall sub_A7FF70(__int64 *a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // r14
  __int64 v6; // rax
  _QWORD *v7; // rdx
  unsigned int v8; // eax
  __int64 v9; // rcx
  __int64 *v10; // rcx
  int v11; // edx
  unsigned int v12; // ebx
  __int64 v13; // rdi
  unsigned int v14; // r14d
  size_t v15; // rsi
  unsigned int *v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rax
  char **exception; // rbx
  char *v20[9]; // [rsp+0h] [rbp-48h] BYREF

  v2 = (__int64)(a1 + 2);
  v3 = a2;
  result = sub_1668690(a1 + 2, a2);
  if ( (_BYTE)result )
  {
    v5 = *(_QWORD *)(*a1 + 16);
    v6 = sub_180C100(v5 + 8400, 16);
    *(_QWORD *)(v6 + 8) = a1 + 24;
    *(_QWORD *)v6 = off_1C54DF0;
    v20[0] = (char *)v6;
    sub_A73EF0((_QWORD *)(v5 + 9456), v20);
    v7 = (_QWORD *)a1[24];
    if ( v7 )
    {
      v8 = *((_DWORD *)v7 - 1);
      if ( v8 == *((_DWORD *)v7 - 2) )
      {
        v14 = (3 * v8 + 1) >> 1;
        v15 = 8 * v14 + 8;
        if ( 8 * v8 + 8 >= (unsigned int)v15 || v8 >= v14 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_137C7A(v20);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v20);
          sub_233E40((__int64)v20);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v16 = (unsigned int *)sub_186B300(v7 - 1, v15);
        v17 = v16[1];
        v7 = v16 + 2;
        *v16 = v14;
        a1[24] = (__int64)(v16 + 2);
        LODWORD(v16) = v17;
        v10 = &v7[v17];
        result = (unsigned int)((_DWORD)v16 + 1);
      }
      else
      {
        v9 = v8;
        result = v8 + 1;
        v10 = &v7[v9];
      }
    }
    else
    {
      v18 = (_QWORD *)sub_186B270(0x18u);
      v7 = v18 + 1;
      *v18 = 2;
      result = 1;
      a1[24] = (__int64)v7;
      v10 = v7;
    }
    *v10 = v3;
    *((_DWORD *)v7 - 1) = result;
  }
  if ( !*(_WORD *)(v3 + 4) )
  {
    result = *(_QWORD *)(*(_QWORD *)(v3 + 16) + 24LL);
    if ( result )
    {
      if ( *(_DWORD *)result == 5 )
      {
        v11 = *(_DWORD *)(result + 4);
        switch ( v11 )
        {
          case 10:
            if ( *(_DWORD *)(v3 + 24) == 2 )
              goto LABEL_30;
            break;
          case 11:
            if ( *(_DWORD *)(v3 + 24) == 2 )
            {
LABEL_30:
              result = sub_15E1B70(a1[2]);
LABEL_16:
              if ( result )
              {
                v12 = sub_966380(*a1, (_DWORD *)result, (_DWORD *)v3);
                sub_9936C0(*(_QWORD *)(*a1 + 16), v12 >> 1);
                v13 = *(_QWORD *)(*a1 + 16);
                v20[0] = (_BYTE *)(&dword_0 + 2);
                result = *(unsigned __int8 *)(*(_QWORD *)(v13 + 8848) + v12);
                if ( (_BYTE)result == 0xFF )
                {
                  return sub_8E8670(v13, (__int64 *)v20, v12 ^ 1);
                }
                else if ( !(_BYTE)result )
                {
                  return (__int64)sub_8F28B0(v13, v12, 2, 0);
                }
              }
              return result;
            }
            break;
          case 15:
            if ( *(_DWORD *)(v3 + 24) == 2 )
            {
LABEL_15:
              sub_993400(v2, 0);
              v3 = sub_15E1B70(a1[2]);
              sub_993400(v2, 0);
              result = sub_15E1B70(a1[2]);
              goto LABEL_16;
            }
            break;
          case 16:
            if ( *(_DWORD *)(v3 + 24) != 2 )
              return result;
            goto LABEL_15;
          default:
            break;
        }
        if ( *(_DWORD *)(result + 4) != 22 || *(_DWORD *)(v3 + 24) != 2 )
          return result;
        goto LABEL_30;
      }
    }
  }
  return result;
}

