__int64 __fastcall sub_426C80(__int64 a1, __int16 a2, __int64 a3)
{
  __int64 v5; // rdi
  __int64 v6; // r8
  void *v7; // rax
  __int64 v8; // rax
  __int64 *v9; // rbx
  __int64 v10; // r13
  unsigned __int64 v11; // rbp
  __int64 v12; // rsi
  void *v13; // rdi
  bool v14; // zf
  __int64 *v15; // rax
  __int64 v16; // rbp
  __int64 v17; // rsi
  __int64 v18; // rdi
  _QWORD *v19; // rbx
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdi
  _QWORD **v23; // r14
  char *v24; // rdx
  _QWORD *v25; // rdi
  unsigned int v26; // r14d
  char *v27; // rbx
  char *v28; // r12
  _QWORD *v29; // rbp
  int v31; // eax
  _QWORD *v32; // rax
  char *v33; // r14
  __int64 v34; // rax
  __int64 v35; // rdx
  _DWORD *v36; // rdx
  __int64 v37; // rax
  void *v38; // [rsp+8h] [rbp-F0h]
  void *v39; // [rsp+8h] [rbp-F0h]
  _DWORD *v40; // [rsp+8h] [rbp-F0h]
  char *v41; // [rsp+10h] [rbp-E8h]
  char *v42; // [rsp+10h] [rbp-E8h]
  __int64 v43; // [rsp+28h] [rbp-D0h]
  void *v44; // [rsp+30h] [rbp-C8h] BYREF
  unsigned __int64 v45; // [rsp+38h] [rbp-C0h]
  _BYTE v46[184]; // [rsp+40h] [rbp-B8h] BYREF

  v5 = *(_QWORD *)(a1 + 304);
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 152) + 856LL);
  v7 = *(void **)(*(_QWORD *)(v5 + 136) + 8LL);
  v45 = 0;
  v44 = v7;
  v8 = sub_405720(v5 + 136, 0, a2, 0, v6, (__int64)&v44);
  v9 = (__int64 *)v45;
  v10 = v8;
  if ( v45 )
  {
    v11 = v45 + 8LL * *(unsigned int *)(v45 - 4);
    if ( v45 >= v11 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v12 = *v9;
        if ( *v9 )
        {
          v13 = v44;
          v14 = (*(_DWORD *)(v12 + 8))-- == 1;
          if ( v14 )
            break;
        }
        if ( (unsigned __int64)++v9 >= v11 )
          goto LABEL_8;
      }
      sub_15D7BC0(v13, v12);
      ++v9;
    }
    while ( (unsigned __int64)v9 < v11 );
LABEL_8:
    v9 = (__int64 *)v45;
    if ( v45 )
LABEL_9:
      sub_186B220(v9 - 1);
  }
  if ( v10 )
  {
    ++*(_DWORD *)v10;
    v15 = (__int64 *)sub_186B270(0x38u);
    *v15 = v10;
    v16 = (__int64)v15;
    ++*(_DWORD *)v10;
  }
  else
  {
    v32 = (_QWORD *)sub_186B270(0x38u);
    *v32 = 0;
    v16 = (__int64)v32;
  }
  *(_OWORD *)(v16 + 8) = 0;
  *(_OWORD *)(v16 + 24) = 0;
  *(_QWORD *)(v16 + 40) = *(unsigned __int16 *)(v10 + 72);
  *(_BYTE *)(v16 + 48) = 0;
  sub_426B30(a3);
  *(_QWORD *)(a3 + 8) = v16;
  v17 = v16;
  v18 = a3;
  sub_425CD0(a3, v16);
  v19 = *(_QWORD **)(a3 + 16);
  v44 = v46;
  v45 = 0x1000000000LL;
  if ( !v19 )
  {
    v26 = *(unsigned __int8 *)(v16 + 48);
    v14 = (*(_DWORD *)v10)-- == 1;
    if ( !v14 )
      return v26;
    goto LABEL_49;
  }
  while ( 1 )
  {
    v20 = (_QWORD *)v19[3];
    if ( v20 == v19 )
    {
      *(_QWORD *)(a3 + 16) = 0;
    }
    else
    {
      v21 = v19[4];
      v20[4] = v21;
      *(_QWORD *)(v21 + 24) = v20;
      if ( *(_QWORD **)(a3 + 16) == v19 )
        *(_QWORD *)(a3 + 16) = v19[3];
    }
    *(_OWORD *)(v19 + 3) = 0;
    if ( (unsigned int)sub_180B130(v18) > 1 )
    {
      if ( (unsigned __int8)sub_186A530(0.0) )
      {
        sub_186A4C0(0.0);
        sub_180B150(v18, v17);
        std::__ostream_insert<char,std::char_traits<char>>();
        v22 = std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_186A500(v22, "\n");
      }
      else
      {
        sub_180B150(v18, v17);
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
    v23 = (_QWORD **)v44;
    v24 = (char *)v44 + 8 * (unsigned int)v45;
    if ( v44 < v24 )
    {
      do
      {
        while ( 1 )
        {
          v25 = *v23;
          if ( *v23 )
          {
            v14 = (*(_DWORD *)v25)-- == 1;
            if ( v14 )
              break;
          }
          if ( ++v23 >= (_QWORD **)v24 )
            goto LABEL_25;
        }
        v41 = v24;
        sub_41CB00(v25);
        sub_186B220(v25);
        v24 = v41;
        ++v23;
      }
      while ( v23 < (_QWORD **)v41 );
    }
LABEL_25:
    LODWORD(v45) = 0;
    sub_3FFF20(a1);
    v17 = *(_QWORD *)(*v19 + 24LL);
    v18 = *(_QWORD *)(*v19 + 16LL);
    v26 = sub_3FED10(v18, v17, nullptr);
    if ( (_BYTE)v26 )
    {
      *((_BYTE *)v19 + 48) = 1;
      if ( v19 == (_QWORD *)v16 )
        goto LABEL_45;
      goto LABEL_27;
    }
    v17 = *v19;
    v18 = a1;
    v31 = sub_4185C0(a1, *v19, (__int64)&v44, 0.0, (__m128)0LL);
    if ( !v31 )
    {
      v33 = (char *)v44;
      v42 = (char *)v44 + 8 * (unsigned int)v45;
      if ( v42 != v44 )
      {
        do
        {
          v36 = *(_DWORD **)v33;
          v37 = *v19;
          if ( *(_QWORD *)v33 && !*v36 )
          {
            v43 = *v19;
            v40 = *(_DWORD **)v33;
            sub_41CB00(*(_QWORD **)v33);
            sub_186B220(v40);
            v37 = v43;
            v36 = v40;
          }
          v38 = v36;
          if ( v36 != (_DWORD *)v37 )
          {
            v34 = sub_186B270(0x38u);
            v35 = (__int64)v38;
            v39 = (void *)v34;
            sub_426440(v34, (__int64)v19, v35);
            v17 = (__int64)v39;
            sub_425CD0(a3, (__int64)v39);
          }
          v33 += 8;
        }
        while ( v42 != v33 );
      }
      v18 = (__int64)v19;
      sub_4250B0((__int64)v19);
      goto LABEL_27;
    }
    if ( v31 == 1 )
      break;
    if ( v31 == -1 )
    {
      v17 = 0;
      v18 = a3;
      sub_4269C0(a3, 0, (__int64)v19);
      if ( v19 == (_QWORD *)v16 )
      {
LABEL_45:
        v27 = (char *)v44;
        v28 = (char *)v44 + 8 * (unsigned int)v45;
        goto LABEL_29;
      }
    }
LABEL_27:
    v19 = *(_QWORD **)(a3 + 16);
    if ( !v19 )
    {
      v27 = (char *)v44;
      v26 = *(unsigned __int8 *)(v16 + 48);
      v28 = (char *)v44 + 8 * (unsigned int)v45;
      goto LABEL_29;
    }
  }
  *((_BYTE *)v19 + 48) = 1;
  if ( v19 != (_QWORD *)v16 )
    goto LABEL_27;
  v27 = (char *)v44;
  v26 = 1;
  v28 = (char *)v44 + 8 * (unsigned int)v45;
LABEL_29:
  if ( v27 < v28 )
  {
    do
    {
      while ( 1 )
      {
        v29 = *(_QWORD **)v27;
        if ( *(_QWORD *)v27 )
        {
          v14 = (*(_DWORD *)v29)-- == 1;
          if ( v14 )
            break;
        }
        v27 += 8;
        if ( v27 >= v28 )
          goto LABEL_35;
      }
      v27 += 8;
      sub_41CB00(v29);
      sub_186B220(v29);
    }
    while ( v27 < v28 );
LABEL_35:
    v27 = (char *)v44;
  }
  if ( v27 != v46 && v27 )
    sub_186B220(v27);
  v14 = (*(_DWORD *)v10)-- == 1;
  if ( v14 )
  {
LABEL_49:
    sub_41CB00((_QWORD *)v10);
    sub_186B220((void *)v10);
  }
  return v26;
}

