__int64 __fastcall sub_6244D0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  unsigned __int64 v8; // rbp
  __int64 v9; // r12
  __int64 v10; // r13
  int v11; // r14d
  int v12; // r15d
  unsigned int next; // eax
  __int64 v14; // rsi
  __int64 v15; // rsi
  void *name_ea; // r15
  int v17; // eax
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  void *v21; // r14
  const char *v22; // rdi
  char *s2; // [rsp+8h] [rbp-D0h]
  int *v24; // [rsp+18h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+20h] [rbp-B8h] BYREF
  void *v26; // [rsp+28h] [rbp-B0h] BYREF
  void *ptr[4]; // [rsp+30h] [rbp-A8h] BYREF
  int v28; // [rsp+50h] [rbp-88h]
  char *v29; // [rsp+58h] [rbp-80h]
  char *v30; // [rsp+60h] [rbp-78h]
  unsigned __int64 v31; // [rsp+68h] [rbp-70h]
  char v32; // [rsp+70h] [rbp-68h] BYREF
  __int64 v33; // [rsp+80h] [rbp-58h]
  __int64 v34; // [rsp+88h] [rbp-50h]

  v33 = a3;
  v34 = a4;
  v31 = __readfsqword(0x28u);
  v28 = 16;
  v29 = &a7;
  v30 = &v32;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v8 = *(_QWORD *)(a1 + 24);
      v28 = 24;
      v9 = *((_QWORD *)v30 + 2);
      v10 = *(_QWORD *)(v8 + 32);
      if ( !(unsigned int)idt_get_initial(v9, &v24) )
      {
        if ( (debug & 0x40) != 0 )
          sub_3879F0();
        v11 = v24[5];
        v12 = *v24;
        if ( *(_BYTE *)(a1 + 41) )
        {
          *(__m128i *)ptr = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v9, (__m128i)v8);
          if ( (unsigned int)enum_import_names(*(unsigned int *)(v8 + 40), sub_623BC0, ptr) != 1 )
          {
            sub_623880(*(_QWORD *)(v8 + 24), 6u);
            return 0;
          }
        }
        if ( !*(_BYTE *)(v8 + 45) && v12 | v11 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                while ( 1 )
                {
                  next = idt_get_next(v9, &v25);
                  if ( next )
                  {
                    if ( next != 4 )
                      sub_623880(*(_QWORD *)(v8 + 24), next);
                    return 0;
                  }
                  v15 = *(_QWORD *)(v25 + 8);
                  if ( v15 )
                  {
                    name_ea = (void *)get_name_ea(-1, v15);
                    if ( name_ea != (void *)-1LL )
                      break;
                  }
                }
                v17 = *(_DWORD *)(v8 + 40);
                v18 = v25;
                if ( v17 != -1 )
                  break;
LABEL_31:
                sub_623920(v10, name_ea, v18);
              }
              s2 = *(char **)(v25 + 8);
              if ( (unsigned __int8)sub_7BEFD0(*(_QWORD *)(v10 + 1672) + 2328LL, v10, ptr, v17, 65) )
              {
                v26 = ptr[0];
                if ( ptr[0] != (void *)-1LL )
                  break;
              }
            }
            v19 = sub_3BDD60(*(_QWORD **)(v10 + 1672), (__int64)name_ea);
            memset(ptr, 0, 24);
            v20 = sub_7BEA80(&v26, v10, ptr, v19, 83);
            v21 = ptr[0];
            if ( v20 > 0 )
            {
              v22 = (const char *)ptr[0];
              if ( !ptr[1] )
                v22 = haystack;
              if ( !strcmp(v22, s2) )
              {
                if ( v21 )
                {
                  ptr[1] = nullptr;
                  qfree(v21);
                }
                v18 = v25;
                goto LABEL_31;
              }
            }
            if ( v21 )
            {
              ptr[1] = nullptr;
              qfree(v21);
            }
          }
        }
      }
    }
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 24);
    if ( *(_BYTE *)(v14 + 46) )
      sub_623430(*((_QWORD *)v30 + 2), (__int64 *)v14);
  }
  return 0;
}
