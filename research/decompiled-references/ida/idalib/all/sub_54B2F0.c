__int64 __fastcall sub_54B2F0(__int64 *a1, unsigned __int64 *a2, const char **a3, char a4)
{
  __int64 v8; // r15
  __int64 v9; // rbp
  __int64 *v10; // r15
  __int64 v11; // rax
  const char **v12; // rcx
  __int64 v13; // rax
  const char *v14; // rsi
  const char *v15; // rdi
  int v16; // eax
  char *v17; // rdi
  char *v18; // rdi
  bool v19; // zf
  unsigned __int64 v21; // [rsp+8h] [rbp-60h]
  void *dest; // [rsp+10h] [rbp-58h]
  const char **desta; // [rsp+10h] [rbp-58h]
  const char **destb; // [rsp+10h] [rbp-58h]
  const char **destc; // [rsp+10h] [rbp-58h]
  char v26; // [rsp+1Fh] [rbp-49h]
  _QWORD v27[9]; // [rsp+20h] [rbp-48h] BYREF

  v27[1] = __readfsqword(0x28u);
  if ( (unsigned __int64)a3[1] > 1 && *a2 > 0xFF )
  {
    v21 = *a2;
    v8 = *(_QWORD *)(*a1 + 1824);
    v9 = sub_5340D0(v8, *a2);
    sub_534260(v8, v21);
    if ( v9 )
    {
      v26 = 0;
      do
      {
        v10 = *(__int64 **)(v9 + 40);
        if ( !v10
          || (dest = (void *)(*v10 + 48 * v10[1]),
              v11 = sub_532C50(*v10, (__int64)dest, (__int64)a3),
              v12 = (const char **)v11,
              (void *)v11 == dest) )
        {
LABEL_30:
          if ( v26 )
          {
            if ( !under_debugger )
              interr(1359);
            BUG();
          }
          return 0;
        }
        v13 = *(_QWORD *)(v11 + 8);
        if ( a3[1] )
        {
          v14 = *a3;
          v15 = haystack;
          if ( !v13 )
            goto LABEL_9;
        }
        else
        {
          v14 = haystack;
          if ( !v13 )
            goto LABEL_10;
        }
        v15 = *v12;
LABEL_9:
        desta = v12;
        v16 = strcmp(v15, v14);
        v12 = desta;
        if ( v16 )
          goto LABEL_30;
LABEL_10:
        if ( !a4 && (v26 || !*(_QWORD *)(v9 + 32) && (~(unsigned __int8)*(_WORD *)(v9 + 68) & 0x70) != 0) )
        {
          v17 = (char *)v12[3];
          if ( v17 )
          {
            v12[4] = nullptr;
            destb = v12;
            qfree(v17);
            v12 = destb;
          }
          v18 = (char *)*v12;
          if ( *v12 )
          {
            v12[1] = nullptr;
            destc = v12;
            qfree(v18);
            v12 = destc;
          }
          memmove(v12, v12 + 6, *v10 + 48 * v10[1] - (_QWORD)v12 - 48);
          v19 = v10[1]-- == 1;
          if ( v19 )
          {
            if ( *v10 )
              qfree((void *)*v10);
            qfree(v10);
            v19 = *(_QWORD *)(v9 + 32) == 0;
            *(_QWORD *)(v9 + 40) = 0;
            if ( v19 && (v21 & 0xF) <= 9 && !*(_BYTE *)(v9 + 71) )
            {
              v27[0] = (unsigned __int8)v21;
              copy_tinfo_t(a2);
              clear_tinfo_t(v27);
            }
          }
          return 1;
        }
        a4 = 0;
        v26 = 1;
        v9 = sub_54ABE0(*a1, a2, 2);
      }
      while ( v9 );
    }
  }
  return 0;
}
