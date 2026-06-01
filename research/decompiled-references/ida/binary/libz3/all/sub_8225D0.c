__int64 __fastcall sub_8225D0(__int64 a1, __int64 a2, __m128 a3)
{
  char **exception; // rbx
  __int64 v5; // rax
  int v6; // edx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  unsigned int v10; // r12d
  __int64 v11; // rbp
  _QWORD *v12; // rdx
  unsigned int v13; // r12d
  __int64 v14; // rcx
  _QWORD *v15; // rcx
  unsigned int v17; // ebp
  __int64 *v18; // rsi
  __int64 *v19; // rcx
  __int64 *v20; // rax
  __int64 v21; // rdx
  __int64 *v22; // rdi
  __int64 *v23; // rcx
  __int64 *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r9
  __int64 v27; // r13
  __m128 *v28; // rax
  __int64 *v29; // rax
  int v30; // edx
  int v31; // ecx
  int v32; // r8d
  int v33; // r9d
  unsigned int v34; // r13d
  unsigned int v35; // eax
  unsigned int *v36; // rax
  __int64 v37; // rax
  int v38; // r12d
  _QWORD *v39; // rdx
  __int64 v40[9]; // [rsp+10h] [rbp-48h] BYREF

  ++*(_DWORD *)(a1 + 288);
  sub_81D350(a1, a2);
  v5 = *(_QWORD *)(a1 + 440);
LABEL_2:
  while ( 2 )
  {
    if ( v5 )
    {
      while ( 1 )
      {
        v6 = *(_DWORD *)(v5 - 4);
        if ( !v6 )
          return 0;
        v7 = (unsigned int)(v6 - 1);
        v8 = v5 + 16 * v7;
        v9 = *(_QWORD *)(v8 + 8);
        v10 = *(_DWORD *)v8;
        *(_DWORD *)(v5 - 4) = v7;
        v11 = *(_QWORD *)(v9 + 64);
        if ( *(_BYTE *)(v11 + 9) )
          goto LABEL_2;
        if ( !v10 )
          break;
        if ( v10 != 1 )
          goto LABEL_2;
        v12 = *(_QWORD **)(a1 + 400);
        *(_BYTE *)(v11 + 9) = 1;
        if ( v12 )
        {
          v13 = *((_DWORD *)v12 - 1);
          if ( v13 == *((_DWORD *)v12 - 2) )
          {
            v34 = (3 * v13 + 1) >> 1;
            v35 = 8 * v34 + 8;
            if ( 8 * v13 + 8 >= v35 || v13 >= v34 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v40, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v40);
              sub_233E40((__int64)v40);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v36 = (unsigned int *)sub_186B300(v12 - 1, v35);
            v12 = v36 + 2;
            *v36 = v34;
            v37 = v36[1];
            *(_QWORD *)(a1 + 400) = v12;
            v38 = v37;
            v15 = &v12[v37];
            v5 = *(_QWORD *)(a1 + 440);
            v10 = v38 + 1;
          }
          else
          {
            v14 = v13;
            v10 = v13 + 1;
            v15 = &v12[v14];
          }
        }
        else
        {
          v39 = (_QWORD *)sub_186B270(0x18u);
          *v39 = 2;
          v5 = *(_QWORD *)(a1 + 440);
          v12 = v39 + 1;
          *(_QWORD *)(a1 + 400) = v12;
          v15 = v12;
        }
        *v15 = v11;
        *((_DWORD *)v12 - 1) = v10;
        if ( !v5 )
          return 0;
      }
      v17 = sub_821720(a1, v9);
      if ( !(_BYTE)v17 )
      {
        v5 = *(_QWORD *)(a1 + 440);
        continue;
      }
      v18 = *(__int64 **)(a1 + 392);
      if ( v18 )
      {
        v19 = &v18[*((unsigned int *)v18 - 1)];
        v20 = *(__int64 **)(a1 + 392);
        if ( v18 != v19 )
        {
          do
          {
            v21 = *v20++;
            *(_BYTE *)(v21 + 8) = 0;
          }
          while ( v19 != v20 );
        }
        v22 = *(__int64 **)(a1 + 400);
        if ( !v22 )
        {
          *((_DWORD *)v18 - 1) = 0;
          goto LABEL_24;
        }
        v23 = &v22[*((unsigned int *)v22 - 1)];
        if ( v22 == v23 )
        {
LABEL_22:
          *((_DWORD *)v18 - 1) = 0;
          goto LABEL_23;
        }
      }
      else
      {
        v22 = *(__int64 **)(a1 + 400);
        if ( !v22 )
          goto LABEL_24;
        v23 = &v22[*((unsigned int *)v22 - 1)];
        if ( v23 == v22 )
        {
LABEL_23:
          *((_DWORD *)v22 - 1) = 0;
LABEL_24:
          v26 = *(_QWORD *)(a1 + 408);
          v27 = *(_QWORD *)(a1 + 80);
          if ( v26 )
            v10 = *(_DWORD *)(v26 - 4);
          v28 = sub_7A6620(*(const __m128i **)(a1 + 80), (unsigned __int64 *)(a1 + 16), 0, nullptr, v10, v26, a3);
          v29 = sub_7E5F50(a1, (__int64 *)(a1 + 408), (__int64)v28);
          sub_7CA490(v27, (__int64)(v29 - 1), v30, v31, v32, v33);
          return v17;
        }
      }
      v24 = v22;
      do
      {
        v25 = *v24++;
        *(_BYTE *)(v25 + 9) = 0;
      }
      while ( v24 != v23 );
      if ( !v18 )
        goto LABEL_23;
      goto LABEL_22;
    }
    return 0;
  }
}

