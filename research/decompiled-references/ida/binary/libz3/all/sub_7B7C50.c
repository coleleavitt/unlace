void __fastcall sub_7B7C50(__int64 a1, __int64 *a2, char a3)
{
  char **exception; // rbx
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rax
  _QWORD *v7; // r14
  _QWORD *v8; // r12
  __int64 v9; // r15
  _QWORD *v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // rbp
  _QWORD *v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // rsi
  int v16; // eax
  _QWORD *v17; // rsi
  unsigned int v18; // r8d
  size_t v19; // rsi
  unsigned int *v20; // rax
  __int64 v21; // rsi
  _QWORD *v22; // rdx
  unsigned int v24; // [rsp+Ch] [rbp-5Ch]
  __int64 v25[11]; // [rsp+10h] [rbp-58h] BYREF

  v5 = *a2;
  if ( *a2 )
  {
    v6 = *(unsigned int *)(v5 - 4);
    v7 = (_QWORD *)(v5 + 8 * v6);
    if ( v7 == (_QWORD *)v5 )
    {
      v11 = v5 + 8 * v6;
      LODWORD(v5) = 0;
      goto LABEL_12;
    }
    v8 = (_QWORD *)*a2;
    v9 = a1 + 80;
    if ( a3 )
    {
      do
      {
        v12 = *v8;
        if ( *(_BYTE *)(*v8 + 12LL) )
        {
          (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v12 + 16LL))(*v8, v9);
          sub_7E4500(v12, v9);
          sub_17E9C40(a1 + 224, *(_QWORD *)(v12 + 40), v12 - 8);
        }
        else if ( *(_BYTE *)(v12 + 48) )
        {
          if ( (_QWORD *)v5 != v8 )
            *(_QWORD *)v5 = v12;
          v5 += 8;
        }
        else
        {
          v13 = *(_QWORD **)(a1 + 744);
          if ( v13 )
          {
            v14 = *((_DWORD *)v13 - 1);
            if ( v14 == *((_DWORD *)v13 - 2) )
            {
              v18 = (3 * v14 + 1) >> 1;
              v19 = 8 * v18 + 8;
              if ( 8 * v14 + 8 >= (unsigned int)v19 || v14 >= v18 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_113C8C(v25, "Overflow encountered when expanding vector", v4);
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v25);
                sub_233E40((__int64)v25);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v24 = (3 * v14 + 1) >> 1;
              v20 = (unsigned int *)sub_186B300(v13 - 1, v19);
              v21 = v20[1];
              v13 = v20 + 2;
              *v20 = v24;
              LODWORD(v20) = v21;
              *(_QWORD *)(a1 + 744) = v13;
              v17 = &v13[v21];
              v16 = (_DWORD)v20 + 1;
            }
            else
            {
              v15 = v14;
              v16 = v14 + 1;
              v17 = &v13[v15];
            }
          }
          else
          {
            v22 = (_QWORD *)sub_186B270(0x18u);
            *v22 = 2;
            v16 = 1;
            v13 = v22 + 1;
            *(_QWORD *)(a1 + 744) = v13;
            v17 = v13;
          }
          *v17 = v12;
          *((_DWORD *)v13 - 1) = v16;
        }
        ++v8;
      }
      while ( v8 != v7 );
    }
    else
    {
      v10 = *(_QWORD **)v5;
      if ( *(_BYTE *)(*(_QWORD *)v5 + 12LL) )
        goto LABEL_9;
      while ( 1 )
      {
        if ( (_QWORD *)v5 != v8 )
          *(_QWORD *)v5 = v10;
        ++v8;
        v5 += 8;
        if ( v7 == v8 )
          break;
        while ( 1 )
        {
          v10 = (_QWORD *)*v8;
          if ( !*(_BYTE *)(*v8 + 12LL) )
            break;
LABEL_9:
          ++v8;
          (*(void (__fastcall **)(_QWORD *, __int64))(*v10 + 16LL))(v10, v9);
          sub_7E4500(v10, v9);
          sub_17E9C40(a1 + 224, v10[5], v10 - 1);
          if ( v7 == v8 )
            goto LABEL_10;
        }
      }
    }
LABEL_10:
    v11 = *a2;
    if ( *a2 )
    {
      v5 = (v5 - v11) >> 3;
LABEL_12:
      *(_DWORD *)(v11 - 4) = v5;
    }
  }
}

