__int64 __fastcall sub_141F0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  unsigned int v7; // edx
  _DWORD *v8; // rcx
  unsigned int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rbp
  __int64 v13; // rsi
  __int64 v14; // rdi
  _DWORD *v15; // rdx
  char v16; // al
  char *v17; // r12
  unsigned int v18; // edx
  _QWORD *v19; // rcx
  _QWORD *v20; // rbp
  __int64 segm_name; // rax
  char *v22; // rbx
  __int64 *v23; // rdx
  _QWORD *v24; // rcx
  char *s1; // [rsp+0h] [rbp-38h] BYREF
  __int128 v26; // [rsp+8h] [rbp-30h]
  unsigned __int64 v27; // [rsp+18h] [rbp-20h]

  v27 = __readfsqword(0x28u);
  if ( a2 > 64 )
    return 0;
  if ( a2 <= 17 )
  {
    if ( !a2 )
    {
      sub_13690(*(_QWORD *)(a1 + 16));
      return 0;
    }
    if ( a2 != 11 )
      return 0;
    v7 = *(_DWORD *)a3;
    if ( v7 > 0x2F )
    {
      v8 = *(_DWORD **)(a3 + 8);
      *(_QWORD *)(a3 + 8) = v8 + 2;
    }
    else
    {
      v8 = (_DWORD *)(*(_QWORD *)(a3 + 16) + v7);
      *(_DWORD *)a3 = v7 + 8;
    }
    sub_13D60(*(_QWORD *)(a1 + 16), *v8 != 0);
LABEL_12:
    invalidate_regfinder_cache(-1, -1, 0);
    return 0;
  }
  v5 = 1LL << ((unsigned __int8)a2 - 18);
  if ( (v5 & 0x400001AB4000LL) != 0 )
    goto LABEL_12;
  if ( (v5 & 0x101) == 0 )
  {
    if ( (_DWORD)a2 != 52 )
      return 0;
    v9 = *(_DWORD *)a3;
    if ( *(_DWORD *)a3 > 0x2Fu )
    {
      v23 = *(__int64 **)(a3 + 8);
      v24 = v23 + 1;
      *(_QWORD *)(a3 + 8) = v23 + 1;
      v12 = *v23;
    }
    else
    {
      v10 = *(_QWORD *)(a3 + 16);
      v11 = v9 + 8;
      *(_DWORD *)a3 = v11;
      v12 = *(_QWORD *)(v10 + v9);
      if ( (unsigned int)v11 <= 0x2F )
      {
        v13 = v9 + 16;
        *(_DWORD *)a3 = v13;
        v14 = *(_QWORD *)(v10 + v11);
        if ( (unsigned int)v13 <= 0x2F )
        {
          v15 = (_DWORD *)(v13 + v10);
          *(_DWORD *)a3 = v9 + 24;
          goto LABEL_17;
        }
        v15 = *(_DWORD **)(a3 + 8);
LABEL_38:
        *(_QWORD *)(a3 + 8) = v15 + 2;
LABEL_17:
        if ( !*v15 )
        {
          s1 = nullptr;
          v26 = 0;
          v16 = cleanup_name(&s1, v12, v14, 0);
          v17 = s1;
          if ( v16 )
          {
            if ( (_QWORD)v26 && (!strcmp(s1, "callt_table") || !strcmp(v17, "ghs_call_table")) )
            {
              sub_1FCC0(*(_QWORD *)(a1 + 16), v12);
              v17 = s1;
            }
            if ( v17 )
            {
              *(_QWORD *)&v26 = 0;
              qfree(v17);
            }
          }
          else if ( s1 )
          {
            *(_QWORD *)&v26 = 0;
            qfree(s1);
          }
        }
        return 0;
      }
      v24 = *(_QWORD **)(a3 + 8);
    }
    v15 = v24 + 1;
    *(_QWORD *)(a3 + 8) = v24 + 1;
    v14 = *v24;
    goto LABEL_38;
  }
  v18 = *(_DWORD *)a3;
  if ( *(_DWORD *)a3 > 0x2Fu )
  {
    v19 = *(_QWORD **)(a3 + 8);
    *(_QWORD *)(a3 + 8) = v19 + 1;
  }
  else
  {
    v19 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v18);
    *(_DWORD *)a3 = v18 + 8;
  }
  v20 = (_QWORD *)*v19;
  s1 = nullptr;
  v26 = 0;
  segm_name = get_segm_name(&s1, v20, 0);
  v22 = s1;
  if ( segm_name > 0 && (_QWORD)v26 && !strcmp(s1, ".callt") )
  {
    set_name(*v20, "___callt_table", 18432);
    v22 = s1;
  }
  if ( v22 )
  {
    *(_QWORD *)&v26 = 0;
    qfree(v22);
  }
  return 0;
}
