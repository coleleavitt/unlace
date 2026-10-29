unsigned __int64 __fastcall sub_1770B0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdx
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  __int64 v7; // rdx
  _QWORD *v8; // rax
  _QWORD *v9; // rdx
  _QWORD *v11; // r13
  void (*v12)(); // rax
  std::__detail::_List_node_base *v13; // r12
  _QWORD *v14; // rdi
  __int64 (__fastcall *v15)(__int64); // rax
  __int64 v16; // rdi
  void (*v17)(); // rax
  _QWORD *v18; // rax
  __int64 v19; // rsi
  unsigned __int64 v20; // rdx
  __int64 v21; // rdx
  void (*v22)(); // rax
  void (*v23)(); // rax
  unsigned __int64 v24; // r12
  void (*v25)(); // rax
  _QWORD *v26; // rbx
  std::__detail::_List_node_base *v27; // rax
  __int64 v28; // rax
  void (*v29)(); // rax
  void (*v30)(); // rax
  void (*v31)(); // rax
  _QWORD *v32; // rcx
  _QWORD *i; // rdx
  __int64 v34; // r8
  __int64 v35; // rdi
  unsigned __int64 v36; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v37; // [rsp+8h] [rbp-40h]

  v3 = a1[7];
  v37 = __readfsqword(0x28u);
  *((_BYTE *)a1 + 64) = 0;
  if ( v3 )
  {
    v5 = (_QWORD *)qword_2565D0;
    v6 = (_QWORD *)(qword_2565D0 + 16 * xmmword_2565D8);
    if ( (_QWORD *)qword_2565D0 == v6 )
      goto LABEL_5;
    while ( v3 != *v5 )
    {
      v5 += 2;
      if ( v6 == v5 )
        goto LABEL_5;
    }
    if ( v5 )
    {
      v11 = (_QWORD *)v5[1];
      if ( v11 )
      {
        v12 = *(void (**)())(*v11 + 16LL);
        if ( v12 != nullsub_1 )
          ((void (__fastcall *)(_QWORD *))v12)(v11);
        v13 = (std::__detail::_List_node_base *)v11[1];
        if ( v13 == (std::__detail::_List_node_base *)(v11 + 1) )
        {
LABEL_44:
          v23 = *(void (**)())(*v11 + 24LL);
          if ( v23 != nullsub_2 )
            goto LABEL_33;
          goto LABEL_5;
        }
        while ( 1 )
        {
          v14 = *((_QWORD **)v13 + 2);
          v15 = *(__int64 (__fastcall **)(__int64))(*v14 + 16LL);
          if ( v15 == sub_174770 )
          {
            if ( a1 == (__int64 *)v14[1] )
              goto LABEL_21;
          }
          else if ( a1 == (__int64 *)((__int64 (__fastcall *)(_QWORD *, __int64, __int64 (__fastcall *)(__int64)))v15)(
                                       v14,
                                       a2,
                                       sub_174770) )
          {
LABEL_21:
            v16 = *((_QWORD *)v13 + 2);
            if ( v16 )
              (*(void (__fastcall **)(__int64, __int64, __int64 (__fastcall *)(__int64)))(*(_QWORD *)v16 + 8LL))(
                v16,
                a2,
                sub_174770);
            std::__detail::_List_node_base::_M_unhook(v13);
            operator delete(v13, 0x18u);
            v17 = *(void (**)())(*a1 + 16);
            if ( v17 != nullsub_1 )
              ((void (__fastcall *)(__int64 *))v17)(a1);
            v18 = (_QWORD *)a1[3];
            v19 = (__int64)(a1 + 2);
            while ( 1 )
            {
              if ( !v18 )
              {
LABEL_29:
                v21 = v19;
                goto LABEL_30;
              }
              while ( 1 )
              {
                v20 = v18[4];
                if ( v20 >= (unsigned __int64)v11 )
                  break;
                v18 = (_QWORD *)v18[3];
                if ( !v18 )
                  goto LABEL_29;
              }
              v32 = (_QWORD *)v18[2];
              if ( (unsigned __int64)v11 >= v20 )
                break;
              v19 = (__int64)v18;
              v18 = (_QWORD *)v18[2];
            }
            for ( i = (_QWORD *)v18[3]; i; i = (_QWORD *)i[2] )
            {
              while ( 1 )
              {
                v34 = i[3];
                if ( (unsigned __int64)v11 < i[4] )
                  break;
                i = (_QWORD *)i[3];
                if ( !v34 )
                  goto LABEL_52;
              }
              v19 = (__int64)i;
            }
LABEL_52:
            while ( v32 )
            {
              while ( 1 )
              {
                v35 = v32[3];
                if ( v32[4] >= (unsigned __int64)v11 )
                  break;
                v32 = (_QWORD *)v32[3];
                if ( !v35 )
                  goto LABEL_55;
              }
              v18 = v32;
              v32 = (_QWORD *)v32[2];
            }
LABEL_55:
            v21 = v19;
            v19 = (__int64)v18;
LABEL_30:
            sub_99FE0((__int64)(a1 + 1), v19, v21);
            v22 = *(void (**)())(*a1 + 24);
            if ( v22 != nullsub_2 )
              ((void (__fastcall *)(__int64 *))v22)(a1);
            v23 = *(void (**)())(*v11 + 24LL);
            if ( v23 != nullsub_2 )
LABEL_33:
              ((void (__fastcall *)(_QWORD *))v23)(v11);
            break;
          }
          v13 = *(std::__detail::_List_node_base **)v13;
          if ( v11 + 1 == (_QWORD *)v13 )
            goto LABEL_44;
        }
      }
    }
LABEL_5:
    a1[7] = 0;
  }
  if ( a2 )
  {
    v7 = xmmword_2565D8;
    v8 = (_QWORD *)qword_2565D0;
    a1[7] = a2;
    v9 = &v8[2 * v7];
    if ( v8 != v9 )
    {
      while ( a2 != *v8 )
      {
        v8 += 2;
        if ( v9 == v8 )
          return v37 - __readfsqword(0x28u);
      }
      if ( v8 )
      {
        v24 = v8[1];
        if ( v24 )
        {
          v25 = *(void (**)())(*(_QWORD *)v24 + 16LL);
          if ( v25 != nullsub_1 )
            ((void (__fastcall *)(unsigned __int64))v25)(v24);
          v26 = (_QWORD *)operator new(0x20u);
          *v26 = off_235AD8;
          v26[1] = a1;
          v26[2] = 33;
          v26[3] = 0;
          v27 = (std::__detail::_List_node_base *)operator new(0x18u);
          *((_QWORD *)v27 + 2) = v26;
          std::__detail::_List_node_base::_M_hook(v27, (std::__detail::_List_node_base *)(v24 + 8));
          v28 = *a1;
          v36 = v24;
          v29 = *(void (**)())(v28 + 16);
          if ( v29 != nullsub_1 )
            ((void (__fastcall *)(__int64 *))v29)(a1);
          sub_99EC0(a1 + 1, &v36);
          v30 = *(void (**)())(*a1 + 24);
          if ( v30 != nullsub_2 )
            ((void (__fastcall *)(__int64 *))v30)(a1);
          v31 = *(void (**)())(*(_QWORD *)v24 + 24LL);
          if ( v31 != nullsub_2 )
            ((void (__fastcall *)(unsigned __int64))v31)(v24);
        }
      }
    }
  }
  return v37 - __readfsqword(0x28u);
}

