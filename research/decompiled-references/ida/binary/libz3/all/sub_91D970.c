_QWORD *__fastcall sub_91D970(_QWORD *a1, __int64 a2)
{
  char **exception; // rbx
  _QWORD *v5; // r14
  __int64 v6; // rax
  _QWORD *result; // rax
  char v8; // cl
  __int64 v9; // rdx
  char v10; // cl
  __int64 v11; // rdx
  unsigned int v12; // ebp
  size_t v13; // rdi
  __int64 v14; // rax
  _DWORD *v15; // r12
  __int64 v16; // rdi
  __int64 v17; // rax
  _QWORD *v18; // rdx
  _DWORD *v19; // rdi
  _DWORD *i; // rax
  int v21; // ecx
  char v22; // si
  __int64 v23; // rcx
  char v24; // si
  __int64 v25; // rcx
  __int64 v26; // rax
  void *v27; // r15
  _DWORD *v28; // rsi
  _QWORD *v29; // rax
  _DWORD *v30; // [rsp+0h] [rbp-68h]
  _DWORD *v31; // [rsp+8h] [rbp-60h]
  __int64 v32[11]; // [rsp+10h] [rbp-58h] BYREF

  v5 = (_QWORD *)*a1;
  if ( *a1 )
  {
    v6 = *((unsigned int *)v5 - 1);
    if ( (_DWORD)v6 == *((_DWORD *)v5 - 2) )
    {
      v12 = (unsigned int)(3 * v6 + 1) >> 1;
      v13 = 40 * v12 + 8;
      if ( 40 * (int)v6 + 8 >= (unsigned int)v13 || (unsigned int)v6 >= v12 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_91CD50(v32, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v32);
        sub_233E40((__int64)v32);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v14 = sub_186B270(v13);
      v15 = (_DWORD *)*a1;
      v31 = (_DWORD *)v14;
      v5 = (_QWORD *)(v14 + 8);
      if ( *a1 )
      {
        v16 = v14;
        v17 = (unsigned int)*(v15 - 1);
        v18 = v5;
        *(_DWORD *)(v16 + 4) = v17;
        v19 = &v15[10 * v17];
        for ( i = v15; v19 != i; *(v18 - 1) = v25 )
        {
          v21 = *i;
          i += 10;
          v18 += 5;
          *((_DWORD *)v18 - 10) = v21;
          v22 = *((_BYTE *)i - 28);
          *((_DWORD *)v18 - 8) = *(i - 8);
          *((_BYTE *)v18 - 28) = v22 & 3 | *((_BYTE *)v18 - 28) & 0xFC;
          v23 = *((_QWORD *)i - 3);
          *((_QWORD *)i - 3) = 0;
          *(v18 - 3) = v23;
          v24 = *((_BYTE *)i - 12);
          *((_DWORD *)v18 - 4) = *(i - 4);
          *((_BYTE *)v18 - 12) = v24 & 3 | *((_BYTE *)v18 - 12) & 0xFC;
          v25 = *((_QWORD *)i - 1);
          *((_QWORD *)i - 1) = 0;
        }
        v26 = (unsigned int)*(v15 - 1);
        if ( (_DWORD)v26 )
        {
          v30 = &v15[10 * v26];
          do
          {
            v27 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v15 + 2);
            v28 = v15 + 6;
            v15 += 10;
            sub_182CBA0(v27, v28);
          }
          while ( v15 != v30 );
          v15 = (_DWORD *)*a1;
        }
        sub_186B220(v15 - 2);
        result = &v5[5 * (unsigned int)v31[1]];
      }
      else
      {
        *(_DWORD *)(v14 + 4) = 0;
        result = (_QWORD *)(v14 + 8);
      }
      *a1 = v5;
      *v31 = v12;
    }
    else
    {
      result = &v5[5 * v6];
    }
  }
  else
  {
    v29 = (_QWORD *)sub_186B270(0x58u);
    v5 = v29 + 1;
    *v29 = 2;
    *a1 = v29 + 1;
    result = v29 + 1;
  }
  *(_DWORD *)result = *(_DWORD *)a2;
  v8 = *(_BYTE *)(a2 + 12);
  *((_DWORD *)result + 2) = *(_DWORD *)(a2 + 8);
  *((_BYTE *)result + 12) = v8 & 3 | *((_BYTE *)result + 12) & 0xFC;
  v9 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0;
  result[2] = v9;
  v10 = *(_BYTE *)(a2 + 28);
  *((_DWORD *)result + 6) = *(_DWORD *)(a2 + 24);
  *((_BYTE *)result + 28) = v10 & 3 | *((_BYTE *)result + 28) & 0xFC;
  v11 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a2 + 32) = 0;
  result[4] = v11;
  ++*((_DWORD *)v5 - 1);
  return result;
}

