__int64 __fastcall sub_6081A0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // r12
  __int64 v10; // r13
  int v11; // r14d
  int v12; // r15d
  unsigned int next; // eax
  __int64 v14; // rsi
  __int64 v15; // rsi
  unsigned int name_ea; // r15d
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned int v19; // eax
  __int64 v20; // rax
  void *v21; // r14
  const char *v22; // rdi
  char *s2; // [rsp+8h] [rbp-D0h]
  int v24; // [rsp+1Ch] [rbp-BCh] BYREF
  int *v25; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+28h] [rbp-B0h] BYREF
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
      if ( !(unsigned int)idt_get_initial(v9, &v25) )
      {
        if ( (debug & 0x40) != 0 )
          sub_383DA0();
        v11 = v25[5];
        v12 = *v25;
        if ( *(_BYTE *)(a1 + 41) )
        {
          *(__m128i *)ptr = _mm_unpacklo_epi64((__m128i)v9, (__m128i)v8);
          if ( (unsigned int)enum_import_names(*(unsigned int *)(v8 + 40), sub_6078D0, ptr) != 1 )
          {
            sub_6075B0(*(_QWORD *)(v8 + 24), 6u);
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
                  next = idt_get_next(v9, &v26);
                  if ( next )
                  {
                    if ( next != 4 )
                      sub_6075B0(*(_QWORD *)(v8 + 24), next);
                    return 0;
                  }
                  v15 = *(_QWORD *)(v26 + 8);
                  if ( v15 )
                  {
                    name_ea = get_name_ea(0xFFFFFFFFLL, v15);
                    if ( name_ea != -1 )
                      break;
                  }
                }
                v17 = *(unsigned int *)(v8 + 40);
                v18 = v26;
                if ( (_DWORD)v17 != -1 )
                  break;
LABEL_31:
                sub_607650(v10, name_ea, v18);
              }
              s2 = *(char **)(v26 + 8);
              if ( (unsigned __int8)sub_79BBD0(*(_QWORD *)(v10 + 1480) + 2240LL, v10, ptr, v17, 65) )
              {
                v24 = (int)ptr[0];
                if ( LODWORD(ptr[0]) != -1 )
                  break;
              }
            }
            v19 = sub_3B90A0(*(_QWORD **)(v10 + 1480), name_ea);
            memset(ptr, 0, 24);
            v20 = sub_79B6F0(&v24, v10, ptr, v19, 83);
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
                v18 = v26;
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
      sub_607170(*((_QWORD *)v30 + 2), (__int64 *)v14);
  }
  return 0;
}

