__int64 __fastcall sub_8AF510(__int64 a1, __int64 a2, int a3, __int64 *a4)
{
  __int64 v5; // rdi
  int v7; // r8d
  void *v8; // rax
  unsigned int v9; // ebp
  char *v10; // rdx
  __int64 v11; // r12
  __int64 v12; // rbx
  char *v13; // rax
  void *v14; // rdi
  void *v16; // rsi
  __int64 v17; // rax
  void *v18; // [rsp+0h] [rbp-88h] BYREF
  __int128 v19; // [rsp+8h] [rbp-80h]
  void *v20; // [rsp+20h] [rbp-68h] BYREF
  int v21; // [rsp+46h] [rbp-42h]
  __int16 v22; // [rsp+4Ah] [rbp-3Eh]
  int v23; // [rsp+4Ch] [rbp-3Ch]
  __int16 v24; // [rsp+50h] [rbp-38h]
  int v25; // [rsp+52h] [rbp-36h]
  __int16 v26; // [rsp+56h] [rbp-32h]
  unsigned __int64 v27; // [rsp+58h] [rbp-30h]

  v27 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 432);
  if ( !v5 || (v7 = *(_DWORD *)a2, v23 = 0, v24 = 0, v25 = 0, v26 = 0, v21 = 0, v22 = 0, !v7) && !*(_WORD *)(a2 + 4) )
  {
    if ( !under_debugger )
      interr(3160);
    BUG();
  }
  v8 = (void *)*a4;
  if ( *a4 )
  {
    a4[1] = 0;
    qfree(v8);
    *a4 = 0;
    a4[2] = 0;
    v5 = *(_QWORD *)(a1 + 432);
  }
  v18 = nullptr;
  v19 = 0;
  v9 = sub_812650(v5, (int *)a2, (__int64 *)&v18, (__int64)a4);
  if ( v9 )
  {
    if ( (unsigned __int64)a4[1] <= 1 )
    {
      v16 = (void *)*a4;
      if ( (unsigned __int64)a4[2] <= 0xD )
      {
        v17 = qvector_reserve(a4, v16, 14, 1);
        *a4 = v17;
        v16 = (void *)v17;
      }
      a4[1] = 14;
      qmemcpy(v16, "Unknown error", 13);
      *(_BYTE *)(*a4 + 13) = 0;
    }
  }
  else if ( (debug & 0x200) != 0 )
  {
    sub_8AEC60((__int64)&v20, (int *)a2);
    sub_3879F0();
  }
  v10 = (char *)v18;
  if ( v18 )
  {
    v11 = v19;
    if ( (_QWORD)v19 )
    {
      v12 = 0;
      do
      {
        v13 = &v10[32 * v12];
        v14 = *((void **)v13 + 1);
        if ( v14 )
        {
          *((_QWORD *)v13 + 2) = 0;
          qfree(v14);
          v10 = (char *)v18;
        }
        ++v12;
      }
      while ( v11 != v12 );
    }
    *(_QWORD *)&v19 = 0;
    qfree(v10);
  }
  return v9;
}
