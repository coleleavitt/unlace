_QWORD *__fastcall sub_893020(_QWORD *a1, __int64 a2)
{
  char **exception; // rbx
  __int64 v3; // rdx
  _QWORD *v6; // r14
  __int64 v7; // rax
  _QWORD *result; // rax
  char v9; // cl
  __int64 v10; // rdx
  char v11; // cl
  __int64 v12; // rdx
  unsigned int v13; // ebp
  size_t v14; // rdi
  __int64 v15; // rax
  _DWORD *v16; // r12
  __int64 v17; // rdi
  __int64 v18; // rax
  _QWORD *v19; // rdx
  _DWORD *v20; // rdi
  _DWORD *i; // rax
  int v22; // ecx
  char v23; // si
  __int64 v24; // rcx
  char v25; // si
  __int64 v26; // rcx
  __int64 v27; // rax
  void *v28; // r15
  _DWORD *v29; // rsi
  _QWORD *v30; // rax
  _DWORD *v31; // [rsp+0h] [rbp-68h]
  _DWORD *v32; // [rsp+8h] [rbp-60h]
  __int64 v33[11]; // [rsp+10h] [rbp-58h] BYREF

  v6 = (_QWORD *)*a1;
  if ( *a1 )
  {
    v7 = *((unsigned int *)v6 - 1);
    if ( (_DWORD)v7 == *((_DWORD *)v6 - 2) )
    {
      v13 = (unsigned int)(3 * v7 + 1) >> 1;
      v14 = 40 * v13 + 8;
      if ( 40 * (int)v7 + 8 >= (unsigned int)v14 || (unsigned int)v7 >= v13 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_12D192(v33, "Overflow encountered when expanding vector", v3);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v33);
        sub_233E40((__int64)v33);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v15 = sub_186B270(v14);
      v16 = (_DWORD *)*a1;
      v32 = (_DWORD *)v15;
      v6 = (_QWORD *)(v15 + 8);
      if ( *a1 )
      {
        v17 = v15;
        v18 = (unsigned int)*(v16 - 1);
        v19 = v6;
        *(_DWORD *)(v17 + 4) = v18;
        v20 = &v16[10 * v18];
        for ( i = v16; v20 != i; *(v19 - 1) = v26 )
        {
          v22 = *i;
          i += 10;
          v19 += 5;
          *((_DWORD *)v19 - 10) = v22;
          v23 = *((_BYTE *)i - 28);
          *((_DWORD *)v19 - 8) = *(i - 8);
          *((_BYTE *)v19 - 28) = v23 & 3 | *((_BYTE *)v19 - 28) & 0xFC;
          v24 = *((_QWORD *)i - 3);
          *((_QWORD *)i - 3) = 0;
          *(v19 - 3) = v24;
          v25 = *((_BYTE *)i - 12);
          *((_DWORD *)v19 - 4) = *(i - 4);
          *((_BYTE *)v19 - 12) = v25 & 3 | *((_BYTE *)v19 - 12) & 0xFC;
          v26 = *((_QWORD *)i - 1);
          *((_QWORD *)i - 1) = 0;
        }
        v27 = (unsigned int)*(v16 - 1);
        if ( (_DWORD)v27 )
        {
          v31 = &v16[10 * v27];
          do
          {
            v28 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v16 + 2);
            v29 = v16 + 6;
            v16 += 10;
            sub_182CBA0(v28, v29);
          }
          while ( v16 != v31 );
          v16 = (_DWORD *)*a1;
        }
        sub_186B220(v16 - 2);
        result = &v6[5 * (unsigned int)v32[1]];
      }
      else
      {
        *(_DWORD *)(v15 + 4) = 0;
        result = (_QWORD *)(v15 + 8);
      }
      *a1 = v6;
      *v32 = v13;
    }
    else
    {
      result = &v6[5 * v7];
    }
  }
  else
  {
    v30 = (_QWORD *)sub_186B270(0x58u);
    v6 = v30 + 1;
    *v30 = 2;
    *a1 = v30 + 1;
    result = v30 + 1;
  }
  *(_DWORD *)result = *(_DWORD *)a2;
  v9 = *(_BYTE *)(a2 + 12);
  *((_DWORD *)result + 2) = *(_DWORD *)(a2 + 8);
  *((_BYTE *)result + 12) = v9 & 3 | *((_BYTE *)result + 12) & 0xFC;
  v10 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0;
  result[2] = v10;
  v11 = *(_BYTE *)(a2 + 28);
  *((_DWORD *)result + 6) = *(_DWORD *)(a2 + 24);
  *((_BYTE *)result + 28) = v11 & 3 | *((_BYTE *)result + 28) & 0xFC;
  v12 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a2 + 32) = 0;
  result[4] = v12;
  ++*((_DWORD *)v6 - 1);
  return result;
}

