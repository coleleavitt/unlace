__int64 __fastcall sub_4C2960(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        char a4,
        unsigned int a5,
        __int64 a6,
        _DWORD *a7,
        char a8)
{
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rdx
  __int64 result; // rax
  __int64 v13; // rdi
  unsigned int v14; // ebx
  char v15; // bp
  __int64 func; // rax
  int v17; // eax
  __int64 v18; // r15
  size_t v19; // rax
  size_t v20; // rbp
  unsigned int v21; // eax
  void *v22; // rdi
  size_t v23; // r12
  int strid; // ebp
  __int64 v25; // r15
  __int64 *v26; // rdi
  __int64 v27; // rax
  unsigned int v29; // [rsp+8h] [rbp-510h]
  int v30; // [rsp+10h] [rbp-508h]
  __int64 v33; // [rsp+28h] [rbp-4F0h]
  __int64 v34; // [rsp+30h] [rbp-4E8h] BYREF
  int v35; // [rsp+38h] [rbp-4E0h]
  int v36; // [rsp+3Ch] [rbp-4DCh]
  int v37; // [rsp+40h] [rbp-4D8h]
  _DWORD v38[32]; // [rsp+50h] [rbp-4C8h] BYREF
  char s[1032]; // [rsp+D0h] [rbp-448h] BYREF
  unsigned __int64 v40; // [rsp+4D8h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  v9 = *(_QWORD *)(a1 + 1528);
  if ( (debug & 2) != 0 )
    sub_383DA0();
  v10 = *(_DWORD *)(v9 + 512);
  if ( v10 == -1 )
  {
    v10 = (unsigned __int8)qgetenv("IDA_NONAMES");
    *(_DWORD *)(v9 + 512) = (unsigned __int8)v10;
  }
  if ( v10 )
  {
    v11 = ea2str(s, 1024, a5);
    result = 0;
    if ( v11 )
    {
      v19 = strlen(s);
      v20 = v19;
      if ( v19 )
      {
        v22 = (void *)*a2;
        v23 = v19 + 1;
        if ( a2[2] < v19 + 1 )
        {
          v27 = qvector_reserve(a2, *a2, v19 + 1, 1);
          *a2 = v27;
          v22 = (void *)v27;
        }
        a2[1] = v23;
        memmove(v22, s, v20);
        *(_BYTE *)(*a2 + v20) = 0;
      }
      else
      {
        a2[1] = 0;
      }
      return 1;
    }
    return result;
  }
  v13 = *(_QWORD *)(a1 + 1480) + 1552LL;
  v33 = sub_4EE820(v13, a5);
  if ( v33 )
  {
    v14 = a5;
    v15 = (get_merge_state(v13, a5) & 2) != 0;
    v30 = sub_3B9AA0(*(_QWORD *)(a1 + 1480), a5, 0);
    func = get_func(a3);
    v29 = (((int)get_func_chunknum(func, a5) >= 0) << 6) | 5;
    while ( 1 )
    {
      v17 = getinf(36);
      v37 = 0;
      v34 = 24;
      v35 = v17;
      v36 = 1;
      if ( get_ea_name(a2, v14, v29, &v34) > 0 )
        goto LABEL_30;
      v18 = *(_QWORD *)(a1 + 1480);
      if ( (sub_3B9AA0(v18, v14, 4) & 0x600) != 0x200 )
        break;
      v21 = sub_3BD5D0(v18, v14);
      if ( v21 == -1 )
      {
LABEL_45:
        if ( (debug & 2) != 0 )
          sub_383DA0();
        return 0;
      }
      if ( v14 == v21 )
      {
LABEL_12:
        if ( (a8 & 4) != 0 )
        {
          sub_4B60F0(*(__int64 **)(a1 + 1480), a2, v14, v30, 0);
LABEL_30:
          *a7 += a5 - v14;
          if ( (v30 & 0x600) == 0x400 && (v30 & 0xF0000000) == 0x60000000 )
          {
            strid = get_strid(v14);
            goto LABEL_35;
          }
          if ( (unsigned __int8)is_spec_segm(*(unsigned __int8 *)(v33 + 96)) )
          {
            v34 = 0;
            if ( (unsigned __int8)get_tinfo(&v34, v14) && (get_tinfo_property(v34, 2) & 0x2F) == 0xD )
            {
              strid = get_tinfo_tid(&v34, 0);
              clear_tinfo_t(&v34);
LABEL_35:
              if ( strid != -1 )
              {
                v25 = *(_QWORD *)(a1 + 1480);
                if ( (sub_3B9AA0(v25, a3, 4) & 0x600) == 0x200 )
                  a3 = sub_3BD5D0(v25, a3);
                if ( !(unsigned int)sub_3C3B30(*(__int64 **)(a1 + 1480), v38, &v34, a3, a4) || v38[0] != strid )
                {
                  v26 = *(__int64 **)(a1 + 1480);
                  v38[0] = strid;
                  sub_3C3C20(v26, a3, a4);
                }
                append_struct_fields();
              }
            }
            else
            {
              clear_tinfo_t(&v34);
            }
          }
          if ( (debug & 2) != 0 )
            sub_383DA0();
          sub_4B3CB0(*(_QWORD *)(a1 + 1480), a3, v14, (__int64)a2);
          return 1;
        }
        if ( v15 || (v15 = set_dummy_name(a3, v14)) == 0 )
        {
          if ( (debug & 2) != 0 )
            sub_383DA0();
          return 0;
        }
      }
      else
      {
        v14 = v21;
        v30 = sub_3B9AA0(*(_QWORD *)(a1 + 1480), v21, 0);
      }
    }
    if ( v14 == -1 )
      goto LABEL_45;
    goto LABEL_12;
  }
  if ( (debug & 2) != 0 )
    sub_383DA0();
  return 0;
}

