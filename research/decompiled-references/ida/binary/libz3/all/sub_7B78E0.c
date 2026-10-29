__int64 __fastcall sub_7B78E0(__int64 a1, __int64 a2, double a3)
{
  char **exception; // rbx
  __int64 v4; // rdx
  __int64 v6; // rax
  _QWORD *v7; // rcx
  int *v8; // r14
  __int64 v9; // r12
  unsigned int v10; // eax
  unsigned int v11; // ebp
  unsigned int v12; // edx
  size_t v13; // rsi
  unsigned int v14; // r13d
  unsigned int *v15; // rax
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r13
  unsigned int v19; // esi
  __int64 v20; // rdx
  int v21; // eax
  _QWORD *v22; // rcx
  _QWORD *v23; // rbp
  _QWORD *v24; // r14
  __int64 v25; // r13
  int v26; // eax
  _DWORD *v27; // rax
  unsigned int v28; // eax
  __int64 result; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  _DWORD *v32; // rax
  unsigned int v33; // esi
  unsigned int v34; // r12d
  __int64 v35; // rsi
  unsigned int v36; // eax
  _QWORD *v37; // rax
  int v38; // [rsp+4h] [rbp-74h]
  int v39; // [rsp+4h] [rbp-74h]
  unsigned int v40; // [rsp+8h] [rbp-70h]
  _QWORD *v41; // [rsp+8h] [rbp-70h]
  unsigned int v42; // [rsp+8h] [rbp-70h]
  __int64 v43; // [rsp+10h] [rbp-68h]
  int *v44; // [rsp+18h] [rbp-60h]
  __int64 v45[11]; // [rsp+20h] [rbp-58h] BYREF

  sub_7B77C0(a1);
  v43 = a2 + 76;
  v6 = 8LL * *(unsigned int *)(a2 + 32);
  v44 = (int *)(v6 + a2 + 76);
  if ( v6 )
  {
    v7 = *(_QWORD **)(a1 + 976);
    v8 = (int *)(a2 + 76);
    do
    {
      v9 = (unsigned int)v8[1];
      v38 = *v8;
      if ( v7 )
      {
        v10 = *((_DWORD *)v7 - 1);
        v40 = v10;
        if ( (unsigned int)v9 >= v10 )
        {
          v11 = v9 + 1;
          if ( v10 < (int)v9 + 1 )
            goto LABEL_10;
          *((_DWORD *)v7 - 1) = v11;
        }
      }
      else
      {
        v11 = v9 + 1;
        if ( (_DWORD)v9 != -1 )
        {
          v37 = (_QWORD *)sub_186B270(0x10u);
          v40 = 0;
          *v37 = 2;
          v7 = v37 + 1;
          *(_QWORD *)(a1 + 976) = v37 + 1;
LABEL_10:
          while ( 1 )
          {
            v16 = *((_DWORD *)v7 - 2);
            if ( v16 >= v11 )
              break;
            v12 = (3 * v16 + 1) >> 1;
            v13 = 4 * v12 + 8;
            v14 = v12;
            if ( 4 * v16 + 8 >= (unsigned int)v13 || v16 >= v12 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_113C8C(v45, "Overflow encountered when expanding vector", v4);
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v45);
              sub_233E40((__int64)v45);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v15 = (unsigned int *)sub_186B300(v7 - 1, v13);
            v7 = v15 + 2;
            *v15 = v14;
            *(_QWORD *)(a1 + 976) = v15 + 2;
          }
          *((_DWORD *)v7 - 1) = v11;
          v17 = 4LL * v11;
          v18 = 4LL * v40;
          if ( v18 != v17 )
          {
            v41 = v7;
            memset((char *)v7 + v18, 0, v17 - v18);
            v7 = v41;
          }
        }
      }
      v8 += 2;
      *((_DWORD *)v7 + v9) = v38;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 3840LL) + 4 * v9) = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 3848LL) + 1;
    }
    while ( v44 != v8 );
  }
  v19 = *(_DWORD *)(a2 + 68);
  v42 = 0;
  if ( v19 )
  {
    while ( 1 )
    {
      v20 = *(_QWORD *)(a1 + 24);
      v21 = 214013 * *(_DWORD *)(v20 + 2356) + 2531011;
      *(_DWORD *)(v20 + 2356) = v21;
      v22 = *(_QWORD **)(*(_QWORD *)(a1 + 936) + 8LL
                                               * *(unsigned int *)(a2 + 8LL * ((HIWORD(v21) & 0x7FFFu) % v19) + 80));
      if ( v22 )
      {
        v23 = &v22[*((unsigned int *)v22 - 1)];
        if ( v22 != v23 )
          break;
      }
LABEL_26:
      v28 = 10;
      ++v42;
      if ( v19 <= 0xA )
        v28 = v19;
      if ( v42 >= v28 )
        goto LABEL_29;
    }
    v24 = *(_QWORD **)(*(_QWORD *)(a1 + 936) + 8LL * *(unsigned int *)(a2 + 8LL * ((HIWORD(v21) & 0x7FFFu) % v19) + 80));
    while ( 1 )
    {
      v25 = *v24;
      if ( *v24 != a2 && !*(_BYTE *)(v25 + 12) && *(_DWORD *)(v25 + 16) == -2 )
      {
        v26 = *(_DWORD *)(v25 + 8);
        if ( v26 )
        {
          if ( v26 == 1 )
          {
            v27 = (_DWORD *)sub_81AF20(*v24);
            if ( sub_7AC2C0(a1, a2, v27) )
            {
LABEL_34:
              v33 = *(_DWORD *)(a2 + 16);
              ++*(_DWORD *)(a1 + 196);
              if ( v33 != -2 )
                (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24), v33 >> 1);
              v34 = 0;
              v39 = *(_DWORD *)(a2 + 32);
              if ( v39 )
              {
                do
                {
                  v35 = v34++;
                  v36 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 88LL))(a2, v35);
                  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(
                    *(_QWORD *)(a1 + 24),
                    v36 >> 1);
                }
                while ( v34 != v39 );
              }
              *(_BYTE *)(a2 + 48) = 0;
              sub_7AFFA0(a1, (_BYTE *)v25, "subsumed", a3);
            }
          }
        }
        else
        {
          v32 = (_DWORD *)sub_828140(*v24);
          if ( sub_7AC3F0(a1, a2, v32) )
            goto LABEL_34;
        }
      }
      if ( v23 == ++v24 )
      {
        v19 = *(_DWORD *)(a2 + 68);
        goto LABEL_26;
      }
    }
  }
LABEL_29:
  result = 8LL * *(unsigned int *)(a2 + 32);
  v30 = v43 + result;
  if ( result )
  {
    v31 = *(_QWORD *)(a1 + 976);
    do
    {
      result = *(unsigned int *)(v43 + 4);
      v43 += 8;
      *(_DWORD *)(v31 + 4 * result) = 0;
    }
    while ( v30 != v43 );
  }
  return result;
}

