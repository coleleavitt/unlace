__int64 __fastcall sub_7CCF30(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  char **exception; // rbx
  __int64 v5; // rdx
  __int64 v8; // rax
  _QWORD *v10; // r13
  __int64 v11; // r8
  unsigned int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  _QWORD *v15; // rdx
  unsigned int v16; // r12d
  size_t v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdi
  _DWORD *v20; // r14
  __int64 v21; // rdx
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  _QWORD *v24; // rax
  __int64 v26[9]; // [rsp+10h] [rbp-48h] BYREF

  if ( !a2 )
  {
    v8 = *(_QWORD *)(a1 + 24);
    if ( v8 )
    {
      if ( *(_BYTE *)(v8 + 352) )
      {
        sub_7A4170(a1);
        v10 = *(_QWORD **)(a1 + 2352);
        v11 = a4;
        if ( v10 )
        {
          v12 = *((_DWORD *)v10 - 1);
          if ( v12 == *((_DWORD *)v10 - 2) )
          {
            v16 = (3 * v12 + 1) >> 1;
            v17 = 16 * v16 + 8;
            if ( 16 * v12 + 8 >= (unsigned int)v17 || v12 >= v16 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_116834(v26, "Overflow encountered when expanding vector", v5);
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v26);
              sub_233E40((__int64)v26);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v18 = sub_186B270(v17);
            v19 = *(_QWORD *)(a1 + 2352);
            v11 = a4;
            v20 = (_DWORD *)v18;
            v10 = (_QWORD *)(v18 + 8);
            if ( v19 )
            {
              v21 = *(unsigned int *)(v19 - 4);
              *(_DWORD *)(v18 + 4) = v21;
              v22 = 0;
              v23 = 16 * v21;
              if ( v23 )
              {
                do
                {
                  *(__m128i *)&v20[v22 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v19 + v22));
                  v22 += 16LL;
                }
                while ( v23 != v22 );
              }
              sub_186B220((void *)(v19 - 8));
              v11 = a4;
              v15 = &v10[2 * (unsigned int)v20[1]];
              v14 = v20[1] + 1;
            }
            else
            {
              *(_DWORD *)(v18 + 4) = 0;
              v15 = (_QWORD *)(v18 + 8);
              v14 = 1;
            }
            *(_QWORD *)(a1 + 2352) = v10;
            *v20 = v16;
          }
          else
          {
            v13 = v12;
            v14 = v12 + 1;
            v15 = &v10[2 * v13];
          }
        }
        else
        {
          v24 = (_QWORD *)sub_186B270(0x28u);
          v11 = a4;
          v10 = v24 + 1;
          *v24 = 2;
          v14 = 1;
          *(_QWORD *)(a1 + 2352) = v10;
          v15 = v10;
        }
        *v15 = a3;
        v15[1] = v11;
        *((_DWORD *)v10 - 1) = v14;
      }
    }
  }
  return sub_13DBC80((int)a1 + 1592);
}

