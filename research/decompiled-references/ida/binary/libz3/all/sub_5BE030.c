__int64 __fastcall sub_5BE030(__int64 a1, _QWORD *a2, int a3)
{
  char **exception; // rbp
  _OWORD *v6; // rax
  __int64 result; // rax
  __int64 v8; // r15
  unsigned int v9; // ebp
  _QWORD *v10; // rbx
  unsigned int v11; // eax
  __int64 v12; // r14
  unsigned int v13; // r12d
  char v14; // cl
  __int64 v15; // rdi
  unsigned int v16; // r15d
  size_t v17; // rsi
  unsigned int *v18; // rax
  unsigned int v19; // eax
  __int64 v20; // r14
  __int64 v21; // rdx
  _QWORD *v22; // rax
  unsigned int v23; // [rsp+Ch] [rbp-9Ch]
  __int64 v24[4]; // [rsp+20h] [rbp-88h] BYREF
  void *v25[2]; // [rsp+40h] [rbp-68h] BYREF
  int v26; // [rsp+50h] [rbp-58h]
  __int128 v27; // [rsp+58h] [rbp-50h]

  v6 = (_OWORD *)sub_186B270(0x40u);
  *v6 = 0;
  v6[1] = 0;
  v6[2] = 0;
  v6[3] = 0;
  v25[0] = v6;
  v25[1] = &byte_8;
  v26 = 0;
  v27 = 0;
  result = sub_157E9E0((int)v25, a3);
  v8 = v27;
  v9 = 0;
  if ( (_QWORD)v27 )
  {
    while ( 2 )
    {
      if ( v9 >= *(_DWORD *)(v8 - 4) )
      {
LABEL_7:
        v15 = *((_QWORD *)&v27 + 1);
        if ( !*((_QWORD *)&v27 + 1) )
        {
LABEL_9:
          result = sub_186B220((void *)(v8 - 8));
          goto LABEL_10;
        }
LABEL_8:
        result = sub_186B220((void *)(v15 - 8));
        v8 = v27;
        if ( !(_QWORD)v27 )
          goto LABEL_10;
        goto LABEL_9;
      }
      while ( 1 )
      {
        if ( !*(_QWORD *)(v8 + 8LL * v9) )
          goto LABEL_22;
        v10 = (_QWORD *)*a2;
        v11 = v9 >> 5;
        v23 = v9 >> 5;
        if ( !*a2 )
          break;
        v12 = *((unsigned int *)v10 - 1);
        v13 = v11 + 1;
        if ( v11 >= (unsigned int)v12 )
          goto LABEL_16;
        v14 = v9++;
        *((_DWORD *)v10 + v23) |= 1 << v14;
        if ( v9 >= *(_DWORD *)(v8 - 4) )
          goto LABEL_7;
      }
      v13 = v11 + 1;
      v22 = (_QWORD *)sub_186B270(0x10u);
      v10 = v22 + 1;
      v12 = 0;
      *a2 = v22 + 1;
      *v22 = 2;
LABEL_16:
      while ( 1 )
      {
        v19 = *((_DWORD *)v10 - 2);
        if ( v19 >= v13 )
          break;
        v16 = (3 * v19 + 1) >> 1;
        v17 = 4 * v16 + 8;
        if ( 4 * v19 + 8 >= (unsigned int)v17 || v19 >= v16 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v24, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v24);
          sub_233E40((__int64)v24);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v18 = (unsigned int *)sub_186B300(v10 - 1, v17);
        v10 = v18 + 2;
        *v18 = v16;
        *a2 = v18 + 2;
      }
      v20 = 4 * v12;
      *((_DWORD *)v10 - 1) = v13;
      v8 = v27;
      v21 = 4LL * v13;
      if ( v20 != v21 )
        memset((char *)v10 + v20, 0, v21 - v20);
      result = (unsigned int)(1 << v9);
      *((_DWORD *)v10 + v23) |= result;
      if ( v8 )
      {
LABEL_22:
        ++v9;
        continue;
      }
      break;
    }
  }
  v15 = *((_QWORD *)&v27 + 1);
  if ( *((_QWORD *)&v27 + 1) )
    goto LABEL_8;
LABEL_10:
  if ( v25[0] )
    return sub_186B220(v25[0]);
  return result;
}

