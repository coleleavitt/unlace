__int64 __fastcall sub_2A0830(__int64 a1, __int64 a2)
{
  int v2; // r14d
  unsigned int v5; // r13d
  int v6; // eax
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rdi
  unsigned int v14; // r14d
  __int64 v15; // rax
  __int64 **v16; // rax
  _QWORD *v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rax
  __int64 v21; // r15
  __int64 v22; // r14
  int i; // ebp
  int v24; // eax
  __int64 v25; // rsi
  __int64 v26; // rbp
  unsigned int v27; // eax
  __int64 tinfo_size; // r15
  __int64 v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // r15
  __m128i *v32; // rax
  unsigned int *v33; // rsi
  char tinfo_property; // r15
  __int64 v35; // [rsp+8h] [rbp-A0h]
  int v36; // [rsp+8h] [rbp-A0h]
  bool v37; // [rsp+8h] [rbp-A0h]
  __int64 v38; // [rsp+10h] [rbp-98h]
  __int64 v39; // [rsp+28h] [rbp-80h] BYREF
  __int64 v40; // [rsp+30h] [rbp-78h] BYREF
  __int64 v41; // [rsp+38h] [rbp-70h] BYREF
  __int128 v42; // [rsp+40h] [rbp-68h] BYREF
  __int64 v43; // [rsp+50h] [rbp-58h] BYREF
  int v44; // [rsp+58h] [rbp-50h]
  __int16 v45; // [rsp+5Ch] [rbp-4Ch]
  unsigned __int64 v46; // [rsp+68h] [rbp-40h]

  v2 = 0;
  v46 = __readfsqword(0x28u);
  v35 = *(_QWORD *)(*(_QWORD *)(a2 + 216) + 112LL);
  while ( *(_DWORD *)(a1 + 32) == 1 )
  {
    if ( *(_DWORD *)(a1 + 16) == 6 && (v25 = *(_QWORD *)(a1 + 24), *(_DWORD *)(v25 + 8) == 35) )
    {
      v26 = sub_297630(&v42, v25);
      if ( v26 && (__int64)v42 > 0 && (v5 = sub_29B070(a1, a2), (_BYTE)v5) )
      {
        v30 = (_QWORD *)operator new(0x10u);
        *v30 = 3;
        v31 = v30;
        v30[1] = 0;
        v32 = (__m128i *)qalloc(16);
        if ( !v32 )
          JUMPOUT(0x4D982);
        v32->m128i_i64[0] = 0;
        v32->m128i_i64[1] = 0;
        v33 = (unsigned int *)v42;
        v31[1] = v32;
        sub_2A0590(v32, v33, (unsigned int *)a1);
        sub_2999F0(a1, v35, v31);
        *(_QWORD *)(a1 + 24) = v26;
      }
      else
      {
        v5 = v2;
      }
      v39 = 0;
      if ( *(_DWORD *)(a1 + 32) != 1 )
        goto LABEL_4;
    }
    else
    {
      v39 = 0;
      v5 = v2;
    }
    if ( *(_DWORD *)(a1 + 16) != 6 )
      goto LABEL_4;
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL) != 51 )
      goto LABEL_4;
    if ( (unsigned __int8)sub_296000(a1, *(_QWORD *)(a2 + 8), &v39) )
    {
      tinfo_size = get_tinfo_size(0, v39, 0);
      if ( get_tinfo_size(0, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL), 0) != tinfo_size )
        goto LABEL_4;
    }
    if ( *(_DWORD *)a1 == 1 )
    {
      v41 = 0;
      v42 = 0;
      v40 = 0;
      copy_tinfo_t((char *)&v42 + 8, &v40);
      v43 = 0;
      copy_tinfo_t(&v43, &v41);
      v44 = 0;
      v45 = 0;
      clear_tinfo_t(&v40);
      clear_tinfo_t(&v41);
      copy_tinfo_t(&v42, a1 + 8);
      create_tinfo(a1 + 8, 10, 10, &v42);
      clear_tinfo_t(&v43);
      clear_tinfo_t((char *)&v42 + 8);
      clear_tinfo_t(&v42);
    }
    else
    {
      sub_2A07B0((unsigned int *)a1, v35);
    }
    v15 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
    *(_QWORD *)(a1 + 24) = v15;
    if ( *(_DWORD *)(v15 + 8) == 48 && (unsigned __int8)sub_297470(*(_QWORD *)(a2 + 8), a1, a1 + 16) )
      *(_QWORD *)(a1 + 24) = sub_24FC20(*(_QWORD *)(a1 + 24));
    v2 = 1;
    clear_tinfo_t(&v39);
  }
  v39 = 0;
  v5 = v2;
LABEL_4:
  clear_tinfo_t(&v39);
  if ( *(_DWORD *)(a1 + 32) != 1 )
  {
LABEL_5:
    if ( !(_BYTE)v2 )
      goto LABEL_6;
    goto LABEL_15;
  }
  if ( *(_DWORD *)(a1 + 16) == 6 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL) == 65 )
    {
      v27 = sub_29B070(a1, a2);
      if ( (_BYTE)v27 )
      {
        v5 = v27;
        sub_2A07B0((unsigned int *)a1, v35);
      }
      goto LABEL_5;
    }
  }
  else if ( (_BYTE)v2 )
  {
LABEL_15:
    v8 = *(_QWORD *)(a1 + 24);
    if ( *(_DWORD *)(v8 + 8) == 65
      && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 24) + 432LL) + 104LL * *(int *)(v8 + 32) + 24) & 2) == 0
      && !(unsigned __int8)sub_297470(*(_QWORD *)(a2 + 8), a1, a1 + 16) )
    {
      v5 = 1;
      sub_299870(a1);
      *(_DWORD *)a1 = 2;
      v9 = (_QWORD *)operator new(0x10u);
      *v9 = 0;
      v9[1] = 0;
      *(_QWORD *)(a1 + 8) = v9;
      v6 = *(_DWORD *)(a1 + 32);
LABEL_7:
      if ( v6 == 3 )
        goto LABEL_9;
      goto LABEL_8;
    }
LABEL_6:
    v6 = *(_DWORD *)(a1 + 32);
    goto LABEL_7;
  }
LABEL_8:
  if ( *(_DWORD *)a1 == 2 && !**(_DWORD **)(a1 + 8) && *(_DWORD *)(a1 + 16) == 6 )
  {
    v10 = *(_QWORD *)(a1 + 24);
    if ( *(_DWORD *)(v10 + 8) == 35 )
    {
      v11 = sub_297630(&v42, v10);
      if ( v11 )
      {
        v12 = *(_QWORD *)(*(_QWORD *)(v35 + 96) + 24LL);
        v13 = v42 & *(_QWORD *)(v12 + 16);
        LOBYTE(v12) = (_QWORD)v42 == v13 && *(_DWORD *)(v11 + 8) == 65;
        v14 = v12;
        if ( (_BYTE)v12 )
        {
          if ( !(unsigned __int8)is_mapped(v13) )
          {
            *(_QWORD *)(a1 + 24) = v11;
            v5 = v14;
          }
        }
      }
    }
  }
LABEL_9:
  if ( *(_DWORD *)a1 != 6 )
    goto LABEL_10;
  v21 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)(v21 + 8) != 51 || *(_DWORD *)(a1 + 16) != 1 )
    goto LABEL_10;
  v38 = a1;
  v22 = a1 + 16;
  for ( i = 0; ; i = 1 )
  {
    v36 = get_tinfo_size(0, *(_QWORD *)(v21 + 48), 0);
    if ( v36 >= 0 )
    {
      v24 = get_tinfo_size(0, *(_QWORD *)(v22 + 8), 0);
      if ( v24 >= 0 && v36 == v24 )
      {
        v37 = v24 >= 0 && v36 == v24;
        tinfo_property = get_tinfo_property(*(_QWORD *)(v21 + 48), 2);
        if ( ((get_tinfo_property(*(_QWORD *)(v22 + 8), 2) & 0xF) == 9) == ((tinfo_property & 0xF) == 9) )
          break;
      }
    }
    if ( i == 1 )
      goto LABEL_11;
LABEL_10:
    if ( *(_DWORD *)(a1 + 16) != 6 )
      goto LABEL_11;
    v21 = *(_QWORD *)(a1 + 24);
    if ( *(_DWORD *)(v21 + 8) != 51 || *(_DWORD *)a1 != 1 )
      goto LABEL_11;
    v22 = a1;
    v38 = a1 + 16;
  }
  sub_294EC0(v22 + 8, v22 + 8, 0, 0xAu);
  v5 = v37;
  *(_QWORD *)(v38 + 8) = *(_QWORD *)(*(_QWORD *)(v38 + 8) + 24LL);
LABEL_11:
  if ( *(_DWORD *)a1 != 8 )
    return v5;
  v16 = *(__int64 ***)(a1 + 8);
  if ( *((_DWORD *)v16 + 2) == -1 )
    return v5;
  if ( *(_DWORD *)(a1 + 16) != 6 )
    return v5;
  v17 = *(_QWORD **)(*(_QWORD *)(a2 + 8) + 1376LL);
  if ( !v17 )
    return v5;
  v18 = *v17 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v18 )
  {
LABEL_71:
    v29 = sub_24FC20(*(_QWORD *)(a1 + 24));
    if ( *(_QWORD *)(a1 + 24) != v29 )
    {
      *(_QWORD *)(a1 + 24) = v29;
      return 1;
    }
    return v5;
  }
  if ( (*(_BYTE *)v18 & 2) != 0 )
    return v5;
  v19 = **v16;
  while ( 1 )
  {
    v20 = *(_QWORD *)(v18 + 24);
    if ( v19 >= v20 )
      break;
    v18 = *(_QWORD *)(v18 + 8);
LABEL_44:
    if ( (*(_BYTE *)v18 & 2) != 0 )
      return v5;
  }
  if ( v20 < v19 )
  {
    v18 = *(_QWORD *)(v18 + 16);
    goto LABEL_44;
  }
  if ( v17 != (_QWORD *)v18 )
    goto LABEL_71;
  return v5;
}
