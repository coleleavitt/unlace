__int64 __fastcall sub_384790(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rbx
  int v9; // ebp
  __int64 v10; // rcx
  __int64 (__fastcall *v11)(__int64, __int64); // rdx
  __int64 *v12; // rdi
  __int64 v13; // rax
  __int64 (*v14)(); // rdx
  char j; // al
  _DWORD *v16; // rdi
  __int64 (*v17)(); // rax
  bool v18; // zf
  void (__fastcall ***v19)(_QWORD); // rsi
  __int64 (__fastcall *v20)(__int64, __int64); // rdx
  int v21; // eax
  char v22; // al
  __int64 *v23; // rdi
  char v24; // bp
  __int64 *v25; // rdi
  void (__fastcall ***v26)(_QWORD); // rdi
  __int64 *v27; // rdi
  void (__fastcall ***v28)(_QWORD); // rdi
  int v29; // eax
  char v30; // al
  __int64 *v31; // rdi
  char v32; // bp
  __int64 *v33; // rdi
  void **p_src; // rsi
  unsigned __int8 i; // [rsp+Fh] [rbp-A9h]
  void **v37; // [rsp+20h] [rbp-98h]
  unsigned int v38; // [rsp+34h] [rbp-84h] BYREF
  _DWORD *v39; // [rsp+38h] [rbp-80h] BYREF
  __int64 *v40; // [rsp+40h] [rbp-78h] BYREF
  _DWORD *v41; // [rsp+48h] [rbp-70h] BYREF
  _DWORD *v42; // [rsp+50h] [rbp-68h] BYREF
  __int64 *v43; // [rsp+58h] [rbp-60h] BYREF
  void *src; // [rsp+60h] [rbp-58h] BYREF
  __int128 v45; // [rsp+68h] [rbp-50h]
  unsigned __int64 v46; // [rsp+78h] [rbp-40h]

  v46 = __readfsqword(0x28u);
  v4 = 0;
  if ( !a1 || !(_QWORD)xmmword_8CF2A8 )
    return 0;
  v6 = 0;
  while ( 1 )
  {
    v7 = *(_QWORD **)(qword_8CF2A0 + 8 * v4);
    if ( v7 )
    {
      if ( a1 == v7[3] )
        break;
    }
    v6 = (unsigned int)(v6 + 1);
    v4 = (int)v6;
    if ( (int)v6 >= (unsigned __int64)xmmword_8CF2A8 )
      return 0;
  }
  if ( a2 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a2 + 8LL))(a2, 0, v6);
    callui(56, v7[3], 1, (unsigned int)&v38, 0, (unsigned int)&callui);
    v37 = (void **)v7[5];
    (*((void (__fastcall **)(_DWORD **, void **, _QWORD, _QWORD, _QWORD))*v37 + 7))(
      &v39,
      v37,
      v7[6],
      (unsigned int)(v9 + 1),
      v38);
    if ( v39 )
    {
      for ( i = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v39 + 8LL))(v39);
            i;
            i = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v39 + 16LL))(v39) )
      {
        LODWORD(src) = 16;
        *(_QWORD *)&v45 = qword_8BA5A8;
        v11 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v39 + 32LL);
        if ( v11 == sub_1992A0 )
          (*(void (__fastcall **)(__int64 **))(*(_QWORD *)v39 + 24LL))(&v40);
        else
          ((void (__fastcall *)(__int64 **))v11)(&v40);
        v12 = v40;
        if ( !v40 )
          continue;
        v13 = *v40;
        v14 = *(__int64 (**)())(*v40 + 120);
        if ( v14 != sub_2269E0 )
        {
          v29 = ((__int64 (__fastcall *)(__int64 *, void **))v14)(v40, &src);
          v12 = v40;
          if ( v29 > 5 )
          {
            v43 = v40;
            if ( v40 )
              ++*((_DWORD *)v40 + 2);
            v30 = sub_3E54D0(&v43, a4, a3);
            v31 = v43;
            v32 = v30;
            if ( v43 )
            {
              v18 = (*((_DWORD *)v43 + 2))-- == 1;
              if ( v18 )
                (*(void (__fastcall **)(__int64 *))*v31)(v31);
            }
            if ( v32 )
            {
LABEL_51:
              v27 = v40;
              if ( v40 )
              {
                v18 = (*((_DWORD *)v40 + 2))-- == 1;
                if ( v18 )
                  (*(void (__fastcall **)(__int64 *))*v27)(v27);
              }
              goto LABEL_54;
            }
            v12 = v40;
          }
          v13 = *v12;
        }
        (*(void (__fastcall **)(_DWORD **, __int64 *))(v13 + 88))(&v41, v12);
        if ( !v41 )
          goto LABEL_41;
        for ( j = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v41 + 8LL))(v41);
              ;
              j = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v41 + 16LL))(v41) )
        {
          v19 = (void (__fastcall ***)(_QWORD))v41;
          if ( !j )
            break;
          v20 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v41 + 32LL);
          if ( v20 == sub_1992A0 )
            (*(void (__fastcall **)(_DWORD **))(*(_QWORD *)v41 + 24LL))(&v42);
          else
            v20((__int64)&v42, (__int64)v41);
          v16 = v42;
          if ( v42 )
          {
            v17 = *(__int64 (**)())(*(_QWORD *)v42 + 120LL);
            if ( v17 == sub_2269E0 )
              goto LABEL_22;
            v21 = ((__int64 (__fastcall *)(_DWORD *, void **))v17)(v42, &src);
            v16 = v42;
            if ( v21 <= 5 )
            {
              if ( v42 )
              {
LABEL_22:
                v18 = v16[2]-- == 1;
                if ( !v18 )
                  continue;
LABEL_23:
                (**(void (__fastcall ***)(_DWORD *))v16)(v16);
                continue;
              }
            }
            else
            {
              v43 = (__int64 *)v42;
              if ( v42 )
                ++v42[2];
              v22 = sub_3E54D0(&v43, a4, a3);
              v23 = v43;
              v24 = v22;
              if ( v43 )
              {
                v18 = (*((_DWORD *)v43 + 2))-- == 1;
                if ( v18 )
                  (*(void (__fastcall **)(__int64 *))*v23)(v23);
              }
              v16 = v42;
              if ( v24 )
              {
                if ( v42 )
                {
                  v18 = v42[2]-- == 1;
                  if ( v18 )
                    (**(void (__fastcall ***)(_DWORD *))v16)(v16);
                }
                v26 = (void (__fastcall ***)(_QWORD))v41;
                if ( v41 )
                {
                  v18 = v41[2]-- == 1;
                  if ( v18 )
                    (**v26)(v26);
                }
                goto LABEL_51;
              }
              if ( v42 )
              {
                v18 = v42[2]-- == 1;
                if ( v18 )
                  goto LABEL_23;
              }
            }
          }
        }
        if ( v41 )
        {
          v18 = v41[2]-- == 1;
          if ( v18 )
            (**v19)(v19);
        }
LABEL_41:
        v25 = v40;
        if ( v40 )
        {
          v18 = (*((_DWORD *)v40 + 2))-- == 1;
          if ( v18 )
            (*(void (__fastcall **)(__int64 *))*v25)(v25);
        }
      }
    }
    v33 = (__int64 *)v7[3];
    p_src = &src;
    src = nullptr;
    v45 = 0;
    i = 0;
    if ( sub_1F4400(v33, (const char *)&src, 1, v10) > 0 )
    {
      p_src = v37;
      i = sub_3E5F80(src);
    }
    if ( src )
    {
      *(_QWORD *)&v45 = 0;
      qfree(src, (const char *)p_src);
    }
LABEL_54:
    v28 = (void (__fastcall ***)(_QWORD))v39;
    if ( v39 )
    {
      v18 = v39[2]-- == 1;
      if ( v18 )
        (**v28)(v28);
    }
  }
  else
  {
    return 0;
  }
  return i;
}
