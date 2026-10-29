__int64 __fastcall sub_473700(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int v6; // r12d
  __int64 v9; // rdi
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rax
  char *v13; // rsi
  char *v14; // rdi
  char *v15; // r13
  __int64 v16; // rax
  __int64 v17; // rax
  char *v18; // rsi
  char *v19; // rdi
  char *s1; // [rsp+0h] [rbp-78h] BYREF
  __int128 v21; // [rsp+8h] [rbp-70h]
  char *s2; // [rsp+20h] [rbp-58h] BYREF
  __int128 v23; // [rsp+28h] [rbp-50h]
  unsigned __int64 v24; // [rsp+38h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  if ( *(_DWORD *)a2 != *(_DWORD *)a4 )
    return 0;
  v6 = 0;
  if ( *(_DWORD *)(a2 + 4) == *(_DWORD *)(a4 + 4) )
  {
    v9 = *(int *)(a1 + 8);
    s1 = nullptr;
    s2 = nullptr;
    v10 = a3;
    v21 = 0;
    v23 = 0;
    v11 = switch_dbctx(v9);
    sub_4F9200(*(_QWORD *)(v11 + 1480), &s1, a2, 0);
    v12 = switch_dbctx(v10);
    sub_4F9200(*(_QWORD *)(v12 + 1480), &s2, a4, 0);
    if ( (_QWORD)v23 )
    {
      v13 = s2;
      v14 = (char *)haystack;
      if ( !(_QWORD)v21 )
        goto LABEL_7;
    }
    else
    {
      v13 = (char *)haystack;
      if ( !(_QWORD)v21 )
        goto LABEL_15;
    }
    v14 = s1;
LABEL_7:
    if ( strcmp(v14, v13) )
    {
      v15 = s2;
      v6 = 0;
LABEL_9:
      if ( v15 )
      {
        *(_QWORD *)&v23 = 0;
        qfree(v15);
      }
      if ( s1 )
      {
        *(_QWORD *)&v21 = 0;
        qfree(s1);
      }
      return v6;
    }
LABEL_15:
    v16 = switch_dbctx(*(int *)(a1 + 8));
    sub_4F8CF0(*(_QWORD *)(v16 + 1480), &s1, a2);
    v17 = switch_dbctx(v10);
    sub_4F8CF0(*(_QWORD *)(v17 + 1480), &s2, a4);
    v15 = s2;
    if ( (_QWORD)v23 )
    {
      v18 = s2;
      v19 = (char *)haystack;
      if ( !(_QWORD)v21 )
        goto LABEL_18;
    }
    else
    {
      v18 = (char *)haystack;
      if ( !(_QWORD)v21 )
        goto LABEL_19;
    }
    v19 = s1;
LABEL_18:
    v6 = 0;
    if ( strcmp(v19, v18) )
      goto LABEL_9;
LABEL_19:
    v6 = 0;
    if ( *(_DWORD *)(a2 + 16) == *(_DWORD *)(a4 + 16)
      && *(_DWORD *)(a2 + 20) == *(_DWORD *)(a4 + 20)
      && *(_WORD *)(a2 + 24) == *(_WORD *)(a4 + 24)
      && *(_DWORD *)(a2 + 28) == *(_DWORD *)(a4 + 28)
      && !memcmp((const void *)(a2 + 32), (const void *)(a4 + 32), 0x40u)
      && *(_BYTE *)(a2 + 96) == *(_BYTE *)(a4 + 96) )
    {
      LOBYTE(v6) = *(_DWORD *)(a2 + 100) == *(_DWORD *)(a4 + 100);
    }
    goto LABEL_9;
  }
  return v6;
}

