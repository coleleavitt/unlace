__int64 __fastcall sub_561A30(__int64 a1, __int64 *a2, _QWORD *a3)
{
  char **exception; // rbx
  __int64 result; // rax
  _QWORD *v6; // rdx
  __int64 v7; // rbp
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // r15
  _QWORD *v12; // rdx
  unsigned int v13; // eax
  __int64 v14; // rcx
  _QWORD *v15; // rcx
  __int64 v16; // rdx
  _QWORD *v17; // rax
  unsigned int v18; // ecx
  size_t v19; // rsi
  unsigned int *v20; // rax
  __int64 v21; // rcx
  unsigned int v22; // [rsp+Ch] [rbp-6Ch]
  __int64 v23[11]; // [rsp+20h] [rbp-58h] BYREF

  result = *a2;
  v6 = (_QWORD *)*a3;
  if ( *a2 )
  {
    v7 = *(unsigned int *)(result - 4);
    if ( v6 )
      *((_DWORD *)v6 - 1) = 0;
    if ( (_DWORD)v7 )
    {
      v9 = 16 * v7;
      v10 = 0;
      while ( 1 )
      {
        result += v10;
        if ( !*(_BYTE *)(result + 8) )
          break;
LABEL_10:
        v10 += 16;
        if ( v9 == v10 )
          return result;
        result = *a2;
      }
      v16 = *(unsigned int *)result;
      if ( (int)v16 >= 0 )
      {
        v11 = *(_QWORD *)((*(_QWORD *)(a1 + 8 * v16 + 80) & 0xFFFFFFFFFFFFFFF8LL)
                        + 8LL * *(unsigned int *)(result + 4)
                        + 32);
        v12 = (_QWORD *)*a3;
        if ( !*a3 )
        {
LABEL_15:
          v17 = (_QWORD *)sub_186B270(0x18u);
          v12 = v17 + 1;
          *v17 = 2;
          result = 1;
          *a3 = v12;
          v15 = v12;
LABEL_9:
          *v15 = v11;
          *((_DWORD *)v12 - 1) = result;
          goto LABEL_10;
        }
      }
      else
      {
        v11 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL * *(unsigned int *)(result + 4) + 32);
        v12 = (_QWORD *)*a3;
        if ( !*a3 )
          goto LABEL_15;
      }
      v13 = *((_DWORD *)v12 - 1);
      if ( v13 == *((_DWORD *)v12 - 2) )
      {
        v18 = (3 * v13 + 1) >> 1;
        v19 = 8 * v18 + 8;
        if ( 8 * v13 + 8 >= (unsigned int)v19 || v13 >= v18 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v23, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v23);
          sub_233E40((__int64)v23);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v22 = (3 * v13 + 1) >> 1;
        v20 = (unsigned int *)sub_186B300(v12 - 1, v19);
        v12 = v20 + 2;
        *v20 = v22;
        v21 = v20[1];
        *a3 = v20 + 2;
        LODWORD(v20) = v21;
        v15 = &v12[v21];
        result = (unsigned int)((_DWORD)v20 + 1);
      }
      else
      {
        v14 = v13;
        result = v13 + 1;
        v15 = &v12[v14];
      }
      goto LABEL_9;
    }
  }
  else if ( v6 )
  {
    *((_DWORD *)v6 - 1) = 0;
  }
  return result;
}

