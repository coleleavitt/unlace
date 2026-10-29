unsigned __int64 __fastcall sub_499790(__int64 a1, __int64 a2)
{
  int v2; // eax
  _QWORD *v4; // r14
  __int64 v5; // rsi
  __int64 v6; // rdx
  char v7; // r12
  __int64 v8; // r15
  char *v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rsi
  char *v13; // rdi
  __int64 v14; // r12
  __int64 v15; // rbp
  char *v16; // rbx
  void *v17; // rdi
  void *v18; // rdi
  char v19; // [rsp+8h] [rbp-90h]
  __int64 v20; // [rsp+18h] [rbp-80h] BYREF
  void *ptr; // [rsp+20h] [rbp-78h] BYREF
  __int128 v22; // [rsp+28h] [rbp-70h]
  __int128 v23; // [rsp+38h] [rbp-60h]
  __int64 v24; // [rsp+48h] [rbp-50h]
  int v25; // [rsp+50h] [rbp-48h]
  unsigned __int64 v26; // [rsp+58h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  if ( !*(_DWORD *)(a1 + 176) )
    return v26 - __readfsqword(0x28u);
  v2 = *(_DWORD *)(a1 + 408);
  if ( (v2 & 2) != 0 || (*(_BYTE *)(a1 + 184) & 0x2F) != 0xD || (v2 & 1) == 0 )
    return v26 - __readfsqword(0x28u);
  v4 = *(_QWORD **)(switch_dbctx(*(int *)(a2 + 8)) + 1672);
  v25 = 1;
  v24 = 0;
  v5 = *(unsigned int *)(a2 + 12);
  v22 = 0;
  v23 = 0;
  v6 = v4[1];
  ptr = nullptr;
  sub_4981B0(a1, v5, v6);
  v7 = sub_493DF0((_QWORD *)a1, (__int64)&ptr, 0);
  if ( !v7 )
  {
    v19 = sub_493DF0((_QWORD *)a1, (__int64)&ptr, 0x80u);
    if ( v19 )
    {
      if ( (_QWORD)v22 == *(_QWORD *)(a1 + 224) )
      {
        v8 = v22 - 1;
        if ( (__int64)v22 - 1 < 0 )
          goto LABEL_27;
        do
        {
          v10 = (char *)ptr + 144 * v8;
          if ( (get_tinfo_property(*((_QWORD *)v10 + 8), 2) & 0xF) != 0xE
            && (unsigned int)verify_tinfo(*((_QWORD *)v10 + 8)) )
          {
            v11 = *(_QWORD *)(a1 + 216) + 16 * v8;
            *((_DWORD *)v10 + 33) = *(_DWORD *)(v11 + 8);
            v10[136] = *(_BYTE *)(v11 + 12);
            sub_498920((_QWORD *)a1, v4, &ptr, v8);
            v7 = v19;
          }
        }
        while ( v8-- != 0 );
        if ( v7 )
        {
          v12 = *(unsigned __int8 *)(a1 + 184);
          v20 = 0;
          if ( (unsigned __int8)create_tinfo(&v20, v12, 13, &ptr) )
          {
            sub_496390((__int64 *)a1, v4[1], *(_DWORD *)(a1 + 176), (__int64)&v20);
            clear_tinfo_t(&v20);
            goto LABEL_18;
          }
          if ( !under_debugger )
            interr(2349);
        }
        else
        {
LABEL_27:
          if ( !under_debugger )
            interr(2348);
        }
      }
      else if ( !under_debugger )
      {
        interr(2347);
      }
    }
    else if ( !under_debugger )
    {
      interr(2936);
    }
    BUG();
  }
LABEL_18:
  v13 = (char *)ptr;
  if ( ptr )
  {
    v14 = v22;
    if ( (_QWORD)v22 )
    {
      v15 = 0;
      do
      {
        v16 = &v13[144 * v15];
        clear_tinfo_t(v16 + 64);
        v17 = *((void **)v16 + 5);
        if ( v17 )
        {
          *((_QWORD *)v16 + 6) = 0;
          qfree(v17);
        }
        v18 = *((void **)v16 + 2);
        if ( v18 )
        {
          *((_QWORD *)v16 + 3) = 0;
          qfree(v18);
        }
        ++v15;
        v13 = (char *)ptr;
      }
      while ( v14 != v15 );
    }
    *(_QWORD *)&v22 = 0;
    qfree(v13);
  }
  return v26 - __readfsqword(0x28u);
}
