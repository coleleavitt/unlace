__int64 __fastcall sub_5DFCB0(__int64 a1, __int64 *a2, __int64 a3)
{
  char **exception; // rbx
  __int64 result; // rax
  unsigned int v8; // r10d
  unsigned int i; // ebx
  __int64 v10; // r9
  __int64 v11; // rcx
  int v12; // edi
  __int64 v13; // r11
  __int64 v14; // r8
  __int64 v15; // rsi
  int v16; // edx
  _QWORD *v17; // rdx
  __int64 v18; // rax
  _QWORD *v19; // rax
  unsigned int v20; // r14d
  unsigned int v21; // ecx
  unsigned int *v22; // rax
  __int64 v23; // rax
  __int64 v24[9]; // [rsp+10h] [rbp-48h] BYREF

  result = *a2;
  if ( *a2 )
    *(_DWORD *)(result - 4) = 0;
  v8 = *(_DWORD *)(a3 + 24);
  for ( i = 0; i < v8; ++i )
  {
    v10 = *(_QWORD *)(a3 + 16);
    v11 = *(_QWORD *)(a1 + 88);
    v12 = (((i - v10) ^ ((_DWORD)v10 << 8) ^ (((_DWORD)v10 - ((i - (_DWORD)v10) ^ ((_DWORD)v10 << 8))) << 16))
         + ((i - v10) ^ ((_DWORD)v10 << 8))
         - v10)
        ^ (((_DWORD)v10 - ((i - (_DWORD)v10) ^ ((_DWORD)v10 << 8))) << 10);
    v13 = 24LL * (v12 & (unsigned int)(*(_DWORD *)(a1 + 96) - 1));
    result = 24LL * *(unsigned int *)(a1 + 96);
    v14 = v11 + v13;
    v15 = v11 + result;
    if ( v13 != result )
    {
      result = v11 + v13;
      do
      {
        v16 = *(_DWORD *)(result + 4);
        if ( v16 == 2 )
        {
          if ( v12 == *(_DWORD *)result && v10 == *(_QWORD *)(result + 8) && i == *(_DWORD *)(result + 16) )
          {
            v17 = (_QWORD *)*a2;
            if ( !*a2 )
              goto LABEL_27;
            goto LABEL_13;
          }
        }
        else if ( !v16 )
        {
          goto LABEL_16;
        }
        result += 24;
      }
      while ( v15 != result );
    }
    for ( ; v14 != v11; v11 += 24 )
    {
      result = *(unsigned int *)(v11 + 4);
      if ( (_DWORD)result == 2 )
      {
        if ( v12 == *(_DWORD *)v11 && v10 == *(_QWORD *)(v11 + 8) && i == *(_DWORD *)(v11 + 16) )
        {
          v17 = (_QWORD *)*a2;
          if ( !*a2 )
          {
LABEL_27:
            v19 = (_QWORD *)sub_186B270(0x10u);
            *v19 = 2;
            v17 = v19 + 1;
            *a2 = (__int64)(v19 + 1);
            result = (__int64)(v19 + 1);
            goto LABEL_15;
          }
LABEL_13:
          v18 = *((unsigned int *)v17 - 1);
          if ( (_DWORD)v18 == *((_DWORD *)v17 - 2) )
          {
            v20 = (unsigned int)(3 * v18 + 1) >> 1;
            v21 = 4 * v20 + 8;
            if ( 4 * (int)v18 + 8 >= v21 || (unsigned int)v18 >= v20 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v24, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v24);
              sub_233E40((__int64)v24);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v22 = (unsigned int *)sub_186B300(v17 - 1, v21);
            v17 = v22 + 2;
            *v22 = v20;
            v23 = v22[1];
            *a2 = (__int64)v17;
            result = (__int64)v17 + 4 * v23;
          }
          else
          {
            result = (__int64)v17 + 4 * v18;
          }
LABEL_15:
          *(_DWORD *)result = i;
          ++*((_DWORD *)v17 - 1);
          v8 = *(_DWORD *)(a3 + 24);
          break;
        }
      }
      else if ( !(_DWORD)result )
      {
        break;
      }
    }
LABEL_16:
    ;
  }
  return result;
}

