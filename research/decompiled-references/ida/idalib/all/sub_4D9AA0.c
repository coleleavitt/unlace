__int64 __fastcall sub_4D9AA0(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        int a4,
        unsigned __int64 a5,
        __int64 a6,
        __m128i *a7,
        char a8)
{
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rdx
  __int64 result; // rax
  __int64 v13; // rdi
  unsigned __int64 v14; // rbx
  char v15; // bp
  __int64 func; // rax
  int v17; // eax
  _QWORD *v18; // r15
  size_t v19; // rax
  size_t v20; // rbp
  unsigned __int64 v21; // rax
  void *v22; // rdi
  size_t v23; // r12
  __int64 strid; // rbp
  _QWORD *v25; // r15
  int v26; // r8d
  __int64 v27; // rax
  unsigned int v29; // [rsp+14h] [rbp-594h]
  unsigned __int64 v31; // [rsp+20h] [rbp-588h]
  __int64 v33; // [rsp+38h] [rbp-570h]
  unsigned __int64 v34; // [rsp+40h] [rbp-568h] BYREF
  int v35; // [rsp+48h] [rbp-560h]
  int v36; // [rsp+4Ch] [rbp-55Ch]
  int v37; // [rsp+50h] [rbp-558h]
  __int64 v38[32]; // [rsp+60h] [rbp-548h] BYREF
  char s[1032]; // [rsp+160h] [rbp-448h] BYREF
  unsigned __int64 v40; // [rsp+568h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  v9 = *(_QWORD *)(a1 + 1720);
  if ( (debug & 2) != 0 )
    sub_3879F0();
  v10 = *(_DWORD *)(v9 + 520);
  if ( v10 == -1 )
  {
    v10 = (unsigned __int8)qgetenv("IDA_NONAMES");
    *(_DWORD *)(v9 + 520) = (unsigned __int8)v10;
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
  v13 = *(_QWORD *)(a1 + 1672) + 1624LL;
  v33 = sub_505D70(v13, a5);
  if ( v33 )
  {
    v14 = a5;
    v15 = (get_merge_state(v13, a5) & 2) != 0;
    v31 = sub_3BE900(*(_QWORD **)(a1 + 1672), a5, 0);
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
      v18 = *(_QWORD **)(a1 + 1672);
      if ( (sub_3BE900(v18, v14, 4) & 0x600) != 0x200 )
        break;
      v21 = sub_3C2650(v18, v14);
      if ( v21 == -1 )
      {
LABEL_45:
        if ( (debug & 2) != 0 )
          sub_3879F0();
        return 0;
      }
      if ( v14 == v21 )
      {
LABEL_12:
        if ( (a8 & 4) != 0 )
        {
          sub_4CCE50(*(__int64 **)(a1 + 1672), a2, v14, v31, 0);
LABEL_30:
          a7->m128i_i64[0] += a5 - v14;
          if ( (v31 & 0x600) == 0x400 && (v31 & 0xF0000000) == 0x60000000 )
          {
            strid = get_strid(v14);
            goto LABEL_35;
          }
          if ( (unsigned __int8)is_spec_segm(*(unsigned __int8 *)(v33 + 184)) )
          {
            v34 = 0;
            if ( (unsigned __int8)get_tinfo(&v34, v14) && (get_tinfo_property(v34, 2) & 0x2F) == 0xD )
            {
              strid = get_tinfo_tid(&v34, 0);
              clear_tinfo_t(&v34);
LABEL_35:
              if ( strid != -1 )
              {
                v25 = *(_QWORD **)(a1 + 1672);
                if ( (sub_3BE900(v25, a3, 4) & 0x600) == 0x200 )
                  a3 = sub_3C2650(v25, a3);
                v26 = sub_3C8E00(*(unsigned __int8 ***)(a1 + 1672), v38, (__int64 *)&v34, a3, a4);
                if ( !v26 || v38[0] != strid )
                {
                  v38[0] = strid;
                  sub_3C8EF0(*(__int64 **)(a1 + 1672), a3, a4);
                  v26 = 1;
                }
                append_struct_fields(
                  (__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))a2,
                  a7,
                  a4,
                  v38,
                  v26,
                  v31,
                  v34,
                  a8 & 1);
              }
            }
            else
            {
              clear_tinfo_t(&v34);
            }
          }
          if ( (debug & 2) != 0 )
            sub_3879F0();
          sub_4CA9D0(*(_QWORD **)(a1 + 1672), a3, v14, (__int64)a2);
          return 1;
        }
        if ( v15 || (v15 = set_dummy_name(a3, v14)) == 0 )
        {
          if ( (debug & 2) != 0 )
            sub_3879F0();
          return 0;
        }
      }
      else
      {
        v14 = v21;
        v31 = sub_3BE900(*(_QWORD **)(a1 + 1672), v21, 0);
      }
    }
    if ( v14 == -1 )
      goto LABEL_45;
    goto LABEL_12;
  }
  if ( (debug & 2) != 0 )
    sub_3879F0();
  return 0;
}
