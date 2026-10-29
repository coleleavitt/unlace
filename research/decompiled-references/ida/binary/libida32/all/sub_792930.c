__int64 __fastcall sub_792930(char *a1, unsigned int a2, unsigned int a3, int a4)
{
  __int64 v5; // rdx
  __int16 v6; // ax
  char *v7; // rbx
  char v8; // cl
  int v9; // ebp
  void *v10; // rsi
  unsigned int v11; // r15d
  __int16 v12; // r14
  unsigned int v13; // eax
  unsigned __int64 v14; // r12
  unsigned __int16 *v16; // [rsp+0h] [rbp-68h]
  int v18; // [rsp+Ch] [rbp-5Ch]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v20; // [rsp+18h] [rbp-50h]
  unsigned __int64 v21; // [rsp+28h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  if ( a2 >= a3 )
  {
    if ( !under_debugger )
      interr(2813);
LABEL_29:
    BUG();
  }
  v5 = a4;
  v6 = a4;
  if ( (unsigned __int64)a4 > 4 )
  {
    if ( !under_debugger )
      interr(2814);
    goto LABEL_29;
  }
  v7 = a1;
  if ( a4 == 4 )
  {
    v18 = -16777216;
    v9 = 0x1000000;
    v6 = 3;
  }
  else
  {
    v8 = 8 * a4;
    v9 = 1 << v8;
    v18 = 255 << v8;
  }
  v10 = a1 + 45;
  v11 = a2;
  v16 = (unsigned __int16 *)(a1 + 45);
  v12 = 5 - v6;
  while ( 1 )
  {
    v14 = *(_QWORD *)v7;
    *(_WORD *)(v7 + 45) = v12;
    *((_DWORD *)v7 + 12) = _byteswap_ulong(v11);
    if ( *(_BYTE *)(v14 + 5988) && (unsigned __int8)must_journal(a1, v10, v5) )
    {
      v10 = v16;
      *(_QWORD *)(v14 + 56) = get_undo_param(1);
      ptr = nullptr;
      v20 = 0;
      if ( (unsigned int)sub_71E810(v14, v16, (__int64)&ptr) )
      {
        v10 = ptr;
        if ( (_QWORD)v20 && *(_BYTE *)ptr == 5 )
          reset_undo(v14, ptr);
        else
          add_undo_record(1, ptr, v20);
      }
      a1 = (char *)ptr;
      if ( ptr )
      {
        *(_QWORD *)&v20 = 0;
        qfree(ptr);
      }
    }
    else
    {
      v10 = v16;
      a1 = (char *)v14;
      sub_71E810(v14, v16, 0);
    }
    if ( __CFADD__(v9, v11) )
      return a3;
    v13 = (v9 + v11) & -v9;
    v11 = v13;
    if ( a2 >= v13 )
    {
      if ( !under_debugger )
        interr(2815);
      goto LABEL_29;
    }
    if ( (v13 & v18) == 0 || v13 >= a3 )
      return v11;
  }
}

