__int64 __fastcall sub_537BC0(__int64 *a1, __int64 a2)
{
  char **exception; // rbx
  __int64 v5; // r14
  __int64 v6; // rax
  _QWORD *v7; // r14
  void *v8; // rbp
  int v9; // eax
  __int64 result; // rax
  unsigned int v11; // r12d
  size_t v12; // rdi
  __int64 v13; // rax
  int *v14; // r12
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rcx
  int *v18; // rax
  int *v19; // r8
  int v20; // esi
  char v21; // di
  __int64 v22; // rsi
  char v23; // di
  __int64 v24; // rsi
  __int64 v25; // r14
  int *v26; // r14
  void *v27; // rbp
  int *v28; // rsi
  _QWORD *v29; // rax
  _DWORD *v30; // [rsp+8h] [rbp-80h]
  __int64 v31; // [rsp+10h] [rbp-78h]
  unsigned int v32; // [rsp+1Ch] [rbp-6Ch]
  __int64 v33[11]; // [rsp+30h] [rbp-58h] BYREF

  v5 = *a1;
  if ( *a1 )
  {
    v6 = *(unsigned int *)(v5 - 4);
    if ( (_DWORD)v6 == *(_DWORD *)(v5 - 8) )
    {
      v11 = (unsigned int)(3 * v6 + 1) >> 1;
      v32 = v11;
      v12 = 32 * v11 + 8;
      if ( 32 * (int)v6 + 8 >= (unsigned int)v12 || (unsigned int)v6 >= v11 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v33, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v33);
        sub_233E40((__int64)v33);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v13 = sub_186B270(v12);
      v14 = (int *)*a1;
      v30 = (_DWORD *)v13;
      v15 = v13 + 8;
      v31 = v15;
      if ( *a1 )
      {
        v16 = (unsigned int)*(v14 - 1);
        v17 = v15;
        v30[1] = v16;
        v18 = v14;
        v19 = &v14[8 * v16];
        if ( v14 != v19 )
        {
          do
          {
            v20 = *v18;
            v21 = *((_BYTE *)v18 + 4);
            v18 += 8;
            v17 += 32;
            *(_DWORD *)(v17 - 32) = v20;
            *(_BYTE *)(v17 - 28) = v21 & 3 | *(_BYTE *)(v17 - 28) & 0xFC;
            v22 = *((_QWORD *)v18 - 3);
            *((_QWORD *)v18 - 3) = 0;
            *(_QWORD *)(v17 - 24) = v22;
            v23 = *((_BYTE *)v18 - 12);
            *(_DWORD *)(v17 - 16) = *(v18 - 4);
            *(_BYTE *)(v17 - 12) = v23 & 3 | *(_BYTE *)(v17 - 12) & 0xFC;
            v24 = *((_QWORD *)v18 - 1);
            *((_QWORD *)v18 - 1) = 0;
            *(_QWORD *)(v17 - 8) = v24;
          }
          while ( v19 != v18 );
        }
        v25 = (unsigned int)*(v14 - 1);
        if ( (_DWORD)v25 )
        {
          v26 = &v14[8 * v25];
          do
          {
            v27 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v14);
            v28 = v14 + 4;
            v14 += 8;
            sub_182CBA0(v27, v28);
          }
          while ( v14 != v26 );
          v14 = (int *)*a1;
        }
        sub_186B220(v14 - 2);
        v15 = v31;
        v7 = (_QWORD *)(v31 + 32LL * (unsigned int)v30[1]);
      }
      else
      {
        v7 = (_QWORD *)v15;
        v30[1] = 0;
      }
      *a1 = v15;
      *v30 = v32;
    }
    else
    {
      v7 = (_QWORD *)(32 * v6 + v5);
    }
  }
  else
  {
    v29 = (_QWORD *)sub_186B270(0x48u);
    v7 = v29 + 1;
    *v29 = 2;
    *a1 = (__int64)(v29 + 1);
  }
  *v7 = 0;
  v8 = qword_1C7F2C0;
  v7[1] = 0;
  v7[2] = 1;
  v7[3] = 0;
  if ( (*(_BYTE *)(a2 + 4) & 1) != 0 )
    sub_182C690(v8, v7, a2);
  else
    *(_DWORD *)v7 = *(_DWORD *)a2;
  if ( (*(_BYTE *)(a2 + 20) & 1) != 0 )
  {
    sub_182C690(v8, v7 + 2, a2 + 16);
  }
  else
  {
    v9 = *(_DWORD *)(a2 + 16);
    *((_BYTE *)v7 + 20) &= ~1u;
    *((_DWORD *)v7 + 4) = v9;
  }
  result = *a1;
  ++*(_DWORD *)(*a1 - 4);
  return result;
}

