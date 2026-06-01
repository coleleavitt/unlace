__int64 __fastcall sub_48E8C0(__int64 a1)
{
  __int64 v2; // rax
  int v3; // edx
  _QWORD *v4; // r13
  __int64 v5; // r15
  _QWORD *v6; // rax
  __int64 v8; // rcx
  unsigned int v9; // r12d
  size_t v10; // rdi
  __int64 v11; // rax
  _QWORD *v12; // rbx
  _DWORD *v13; // rbp
  __int64 v14; // rsi
  __int64 v15; // rdx
  _QWORD *v16; // rax
  _QWORD *v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rdx
  _QWORD *v20; // r12
  void *v21; // rdi
  _QWORD *v22; // rax
  char **exception; // rbx
  __int64 v24[11]; // [rsp+20h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 && (v3 = *(_DWORD *)(v2 - 4)) != 0 )
  {
    v8 = (unsigned int)(v3 - 1);
    LODWORD(v5) = *(_DWORD *)(v2 + 4 * v8);
    *(_DWORD *)(v2 - 4) = v8;
  }
  else
  {
    v4 = *(_QWORD **)(a1 + 8);
    if ( v4 )
    {
      v5 = *((unsigned int *)v4 - 1);
      v6 = &v4[2 * v5];
      if ( (_DWORD)v5 == *((_DWORD *)v4 - 2) )
      {
        v9 = (unsigned int)(3 * v5 + 1) >> 1;
        v10 = 16 * v9 + 8;
        if ( 16 * (int)v5 + 8 >= (unsigned int)v10 || (unsigned int)v5 >= v9 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v24, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v24);
          sub_233E40((__int64)v24);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v11 = sub_186B270(v10);
        v12 = *(_QWORD **)(a1 + 8);
        v13 = (_DWORD *)v11;
        v4 = (_QWORD *)(v11 + 8);
        if ( v12 )
        {
          v14 = *((unsigned int *)v12 - 1);
          v15 = v11 + 8;
          *(_DWORD *)(v11 + 4) = v14;
          v16 = v12;
          v17 = &v12[2 * v14];
          if ( v17 != v12 )
          {
            do
            {
              v18 = *v16;
              *v16 = 0;
              v16 += 2;
              v15 += 16;
              *(_QWORD *)(v15 - 16) = v18;
              *(_DWORD *)(v15 - 8) = *((_DWORD *)v16 - 2);
              *(_DWORD *)(v15 - 4) = *((_DWORD *)v16 - 1);
            }
            while ( v17 != v16 );
          }
          v19 = *((unsigned int *)v12 - 1);
          v20 = &v12[2 * v19];
          if ( (_DWORD)v19 )
          {
            do
            {
              while ( *v12 )
              {
                v21 = (void *)(*v12 - 8LL);
                v12 += 2;
                sub_186B220(v21);
                if ( v12 == v20 )
                  goto LABEL_16;
              }
              v12 += 2;
            }
            while ( v12 != v20 );
LABEL_16:
            v12 = *(_QWORD **)(a1 + 8);
          }
          sub_186B220(v12 - 1);
          v6 = &v4[2 * (unsigned int)v13[1]];
        }
        else
        {
          *(_DWORD *)(v11 + 4) = 0;
          v6 = (_QWORD *)(v11 + 8);
        }
        *(_QWORD *)(a1 + 8) = v4;
        *v13 = (unsigned int)(3 * v5 + 1) >> 1;
      }
    }
    else
    {
      LODWORD(v5) = 0;
      v22 = (_QWORD *)sub_186B270(0x28u);
      v4 = v22 + 1;
      *v22 = 2;
      *(_QWORD *)(a1 + 8) = v22 + 1;
      v6 = v22 + 1;
    }
    *v6 = 0;
    v6[1] = 0xFFFFFFFF00000000LL;
    ++*((_DWORD *)v4 - 1);
  }
  return (unsigned int)v5;
}

