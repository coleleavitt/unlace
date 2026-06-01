unsigned __int64 *__fastcall sub_511C40(__int64 a1, __int64 a2, char a3)
{
  unsigned int v4; // eax
  char v5; // dl
  const char *v6; // rdi
  __int64 v7; // rcx
  _QWORD *v8; // r13
  size_t v9; // rax
  size_t v10; // r15
  size_t v11; // r12
  _QWORD *v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 *v16; // r12
  unsigned int v17; // eax
  _QWORD *v18; // rdi
  __int64 v19; // rax
  void *v20; // r13
  const char *v21; // rdi
  size_t v22; // r15
  _QWORD *v24; // [rsp+0h] [rbp-68h]
  _QWORD *v25; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v27; // [rsp+18h] [rbp-50h]
  unsigned __int64 v28; // [rsp+28h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  if ( a2 )
  {
    if ( *(_BYTE *)a2 == 115 && *(_BYTE *)(a2 + 1) == 101 && *(_BYTE *)(a2 + 2) == 103 )
    {
      v4 = *(char *)(a2 + 3);
      v5 = *(_BYTE *)(a2 + 3);
      if ( v4 <= 0x7F )
      {
        v6 = (const char *)(a2 + 3);
        v7 = a2 + 3;
        while ( v4 - 48 <= 9 )
        {
          v4 = *(char *)++v7;
          v5 = v4;
          if ( v4 > 0x7F )
            goto LABEL_9;
        }
        if ( (unsigned __int64)(v7 - (_QWORD)v6) > 2 && !v5 )
        {
          v17 = strtol(v6, nullptr, 10);
          if ( v17 != -1 )
          {
            v16 = sub_505DE0(a1 + 1624, v17);
            if ( v16 )
            {
              v18 = *(_QWORD **)(*(_QWORD *)a1 + 1760LL);
              v27 = 0;
              ptr = nullptr;
              v19 = sub_510AC0(v18, (__int64 *)&ptr, *v16, v16[2], 0);
              v20 = ptr;
              if ( v19 > 0 )
              {
                v21 = (const char *)ptr;
                if ( !(_QWORD)v27 )
                  v21 = haystack;
                if ( !strcmp(v21, (const char *)a2) )
                {
                  if ( v20 )
                  {
                    *(_QWORD *)&v27 = 0;
                    qfree(v20);
                  }
                  return v16;
                }
              }
              if ( v20 )
              {
                *(_QWORD *)&v27 = 0;
                qfree(v20);
              }
            }
          }
        }
      }
    }
LABEL_9:
    v8 = *(_QWORD **)(*(_QWORD *)a1 + 1760LL);
    v27 = 0;
    ptr = nullptr;
    v9 = strlen((const char *)a2);
    v10 = v9 + 1;
    v11 = v9;
    ptr = (void *)qvector_reserve(&ptr, 0, v9 + 1, 1);
    *(_QWORD *)&v27 = v10;
    memmove(ptr, (const void *)a2, v11);
    *((_BYTE *)ptr + v11) = 0;
    v12 = sub_511B30((__int64)(v8 + 9), (__int64)&ptr);
    if ( ptr )
    {
      v25 = v12;
      *(_QWORD *)&v27 = 0;
      qfree(ptr);
      v12 = v25;
    }
    if ( v12 != v8 + 10 )
    {
LABEL_12:
      v13 = *((int *)v12 + 14);
      if ( (int)v13 <= 0 || v13 >= v8[19] )
      {
        if ( !under_debugger )
          interr(1250);
      }
      else
      {
        v14 = v8[18] + 56 * v13;
        if ( !*(_BYTE *)(v14 + 52) )
        {
          if ( *(_QWORD *)(v14 + 32) )
            return sub_505D70(a1 + 1624, **(_QWORD **)(v14 + 24));
          return nullptr;
        }
        if ( !under_debugger )
          interr(1251);
      }
      BUG();
    }
    if ( !a3 )
    {
      ptr = nullptr;
      v27 = 0;
      v22 = strlen((const char *)a2);
      ptr = (void *)qvector_reserve(&ptr, 0, v22 + 1, 1);
      *(_QWORD *)&v27 = v22 + 1;
      memmove(ptr, (const void *)a2, v22);
      *((_BYTE *)ptr + v22) = 0;
      sub_4CD570((__int64)&ptr);
      v12 = sub_511B30((__int64)(v8 + 9), (__int64)&ptr);
      if ( v12 != v8 + 10 )
      {
        if ( ptr )
        {
          v24 = v12;
          *(_QWORD *)&v27 = 0;
          qfree(ptr);
          v12 = v24;
        }
        goto LABEL_12;
      }
      if ( ptr )
      {
        *(_QWORD *)&v27 = 0;
        qfree(ptr);
      }
    }
  }
  return nullptr;
}
