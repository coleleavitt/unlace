__int64 __fastcall sub_7F6310(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  _QWORD *v3; // rdx
  __int64 *v4; // rbx
  __int64 *v5; // r13
  int *v6; // rax
  int v7; // ebp
  __int64 v8; // rax
  int *v9; // rax
  int v10; // ebp
  unsigned int v11; // r14d
  size_t v12; // rsi
  unsigned int *v13; // rax
  __int64 v14; // rax
  unsigned __int8 v16; // cl
  _DWORD *v17; // rsi
  _QWORD *v18; // rax
  __int64 v19[9]; // [rsp+10h] [rbp-48h] BYREF

  v3 = *(_QWORD **)(a1 + 5008);
  if ( v3 )
    *((_DWORD *)v3 - 1) = 0;
  v4 = *(__int64 **)(a2 + 8);
  if ( v4 )
  {
    v5 = &v4[*((unsigned int *)v4 - 1)];
    if ( v4 != v5 )
    {
      v6 = (int *)*v4;
      if ( !*(_WORD *)(*v4 + 4) )
        goto LABEL_16;
      v7 = 2 * *v6;
      if ( v3 )
        goto LABEL_7;
LABEL_20:
      v18 = (_QWORD *)sub_186B270(0x10u);
      v3 = v18 + 1;
      *v18 = 2;
      *(_QWORD *)(a1 + 5008) = v18 + 1;
      v9 = (int *)(v18 + 1);
LABEL_9:
      ++v4;
      *v9 = v7;
      ++*((_DWORD *)v3 - 1);
      for ( ; v5 != v4; ++*((_DWORD *)v3 - 1) )
      {
        v6 = (int *)*v4;
        if ( *(_WORD *)(*v4 + 4) )
        {
          v10 = *v6;
          v8 = *((unsigned int *)v3 - 1);
          v7 = 2 * v10;
          if ( (_DWORD)v8 != *((_DWORD *)v3 - 2) )
            goto LABEL_8;
        }
        else
        {
LABEL_16:
          v16 = 0;
          do
          {
            v17 = *(_DWORD **)(*((_QWORD *)v6 + 2) + 24LL);
            if ( !v17 )
              break;
            if ( *v17 )
              break;
            if ( v17[1] != 8 )
              break;
            if ( v6[6] != 1 )
              break;
            v6 = *((int **)v6 + 4);
            v16 ^= 1u;
          }
          while ( !*((_WORD *)v6 + 2) );
          v7 = v16 + 2 * *v6;
          if ( !v3 )
            goto LABEL_20;
LABEL_7:
          v8 = *((unsigned int *)v3 - 1);
          if ( (_DWORD)v8 != *((_DWORD *)v3 - 2) )
          {
LABEL_8:
            v9 = (int *)v3 + v8;
            goto LABEL_9;
          }
        }
        v11 = (unsigned int)(3 * v8 + 1) >> 1;
        v12 = 4 * v11 + 8;
        if ( 4 * (int)v8 + 8 >= (unsigned int)v12 || (unsigned int)v8 >= v11 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v19, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v19);
          sub_233E40((__int64)v19);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        ++v4;
        v13 = (unsigned int *)sub_186B300(v3 - 1, v12);
        v3 = v13 + 2;
        *v13 = v11;
        v14 = v13[1];
        *(_QWORD *)(a1 + 5008) = v3;
        *((_DWORD *)v3 + v14) = v7;
      }
    }
  }
  v19[1] = 0;
  v19[0] = 0xFFFFFFFF00000000LL;
  return sub_11F1890(a1 + 4336, a1 + 5008, v19);
}

