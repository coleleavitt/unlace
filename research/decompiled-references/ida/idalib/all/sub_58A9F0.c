__int64 __fastcall sub_58A9F0(__int64 a1, _BYTE *a2, _QWORD *a3, __int64 a4, unsigned int a5)
{
  char tinfo_property; // al
  char v8; // r13
  unsigned int v9; // ebp
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  int v13; // r15d
  __int64 v14; // rdi
  int tinfo_size; // eax
  void *v16; // rdx
  __int64 v17; // r12
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // r14
  __int64 v22; // r13
  unsigned int v23; // r13d
  char *v24; // rdi
  __int64 v25; // r12
  __int64 v26; // rbp
  char *v27; // rbx
  void *v28; // rdi
  void *v29; // rdi
  char *v30; // rdi
  __int64 i; // r12
  char *v32; // rbx
  void *v33; // rdi
  void *v34; // rdi
  unsigned int v35; // eax
  __int64 v38; // [rsp+10h] [rbp-C8h]
  int v39[2]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v40; // [rsp+28h] [rbp-B0h]
  void *v41; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v42; // [rsp+38h] [rbp-A0h]
  __int128 v43; // [rsp+48h] [rbp-90h]
  __int64 v44; // [rsp+58h] [rbp-80h]
  int v45; // [rsp+60h] [rbp-78h]
  char v46[8]; // [rsp+70h] [rbp-68h] BYREF
  __int64 v47; // [rsp+78h] [rbp-60h]
  __int128 v48; // [rsp+80h] [rbp-58h]
  unsigned __int64 v49; // [rsp+98h] [rbp-40h]

  v49 = __readfsqword(0x28u);
  tinfo_property = get_tinfo_property(*a3, 2);
  if ( !tinfo_property )
  {
    *(_DWORD *)(a1 + 48) = 1562;
    return (unsigned int)-1;
  }
  v8 = tinfo_property;
  v9 = (**(__int64 (__fastcall ***)(__int64, _BYTE *, _QWORD *, __int64, _QWORD))a1)(a1, a2, a3, a4, a5);
  if ( !v9 )
  {
    v12 = *(_DWORD *)(a1 + 32);
    v13 = v12 & 2;
    if ( (v12 & 2) != 0 )
    {
      *(_DWORD *)(a1 + 32) = v12 & 0xFFFFFFFD;
      return v9;
    }
    if ( (v8 & 0x3F) == 0xD || (v8 & 0x3F) == 0x1D )
    {
      if ( !a5 )
      {
        if ( (v12 & 1) != 0 )
        {
LABEL_24:
          v19 = *a3;
          v41 = nullptr;
          v44 = 0;
          v45 = 1;
          v42 = 0;
          v43 = 0;
          get_tinfo_details(v19, 13, &v41);
          v20 = *(_QWORD *)(a1 + 8);
          v21 = *(_QWORD *)(a1 + 16);
          *(_QWORD *)(a1 + 8) = a2;
          v38 = v20;
          *(_QWORD *)(a1 + 16) = a4;
          if ( (_QWORD)v42 )
          {
            do
            {
              v23 = sub_58AF40(a1);
              if ( v23 )
              {
                v24 = (char *)v41;
                *(_QWORD *)(a1 + 16) = v21;
                *(_QWORD *)(a1 + 8) = v38;
                if ( v24 )
                {
                  v25 = v42;
                  if ( (_QWORD)v42 )
                  {
                    v26 = 0;
                    do
                    {
                      v27 = &v24[144 * v26];
                      clear_tinfo_t(v27 + 64);
                      v28 = *((void **)v27 + 5);
                      if ( v28 )
                      {
                        *((_QWORD *)v27 + 6) = 0;
                        qfree(v28);
                      }
                      v29 = *((void **)v27 + 2);
                      if ( v29 )
                      {
                        *((_QWORD *)v27 + 3) = 0;
                        qfree(v29);
                      }
                      ++v26;
                      v24 = (char *)v41;
                    }
                    while ( v25 != v26 );
                  }
                  *(_QWORD *)&v42 = 0;
                  qfree(v24);
                }
                return v23;
              }
              ++v13;
              v22 = v42;
            }
            while ( v13 < (unsigned __int64)v42 );
            v30 = (char *)v41;
            *(_QWORD *)(a1 + 16) = v21;
            *(_QWORD *)(a1 + 8) = v38;
            if ( !v30 )
              return v9;
            if ( v22 )
            {
              for ( i = 0; i != v22; ++i )
              {
                v32 = &v30[144 * i];
                clear_tinfo_t(v32 + 64);
                v33 = *((void **)v32 + 5);
                if ( v33 )
                {
                  *((_QWORD *)v32 + 6) = 0;
                  qfree(v33);
                }
                v34 = *((void **)v32 + 2);
                if ( v34 )
                {
                  *((_QWORD *)v32 + 3) = 0;
                  qfree(v34);
                }
                v30 = (char *)v41;
              }
            }
          }
          else
          {
            v30 = (char *)v41;
            *(_QWORD *)(a1 + 16) = v21;
            *(_QWORD *)(a1 + 8) = v20;
            if ( !v30 )
              return v9;
          }
          *(_QWORD *)&v42 = 0;
          qfree(v30);
          return v9;
        }
LABEL_9:
        if ( *a2 != 5 )
          idcv_object(a2, 0);
        v46[0] = 2;
        v47 = a4;
        v48 = 0;
        set_idcv_attr(a2, "__at__", v46, 0, v10, v11);
        free_idcv(v46);
        if ( (v8 & 0x2F) != 0xD )
        {
LABEL_12:
          v14 = *a3;
          *(_QWORD *)v39 = 0;
          v40 = 0;
          get_tinfo_details(v14, 11, v39);
          tinfo_size = get_tinfo_size(0, *(_QWORD *)v39, 0);
          if ( tinfo_size == -1 )
          {
            *(_DWORD *)(a1 + 48) = 1562;
          }
          else
          {
            if ( *a2 == 5 )
            {
              v35 = sub_58B050(a1, (__int64)a2, (int)v39, a4);
              if ( v35 )
                v9 = v35;
              goto LABEL_19;
            }
            v16 = nullptr;
            v41 = nullptr;
            v17 = (unsigned int)(tinfo_size * HIDWORD(v40));
            v42 = 0;
            if ( tinfo_size * HIDWORD(v40) )
            {
              v41 = (void *)qvector_reserve(&v41, 0, (unsigned int)(tinfo_size * HIDWORD(v40)), 1);
              memset((char *)v41 + v42, 0, v17 - v42);
              *(_QWORD *)&v42 = v17;
              v16 = v41;
            }
            if ( (***(unsigned __int8 (__fastcall ****)(_QWORD, __int64, void *, __int64))(a1 + 24))(
                   *(_QWORD *)(a1 + 24),
                   a4,
                   v16,
                   v17) )
            {
              if ( v41 )
              {
                *(_QWORD *)&v42 = 0;
                qfree(v41);
              }
              goto LABEL_19;
            }
            if ( v41 )
            {
              *(_QWORD *)&v42 = 0;
              qfree(v41);
            }
          }
          v9 = -1;
LABEL_19:
          clear_tinfo_t(v39);
          return v9;
        }
        goto LABEL_24;
      }
    }
    else
    {
      if ( (v8 & 0xF) != 0xB )
        return v9;
      if ( !a5 )
      {
        if ( (v12 & 1) != 0 )
          goto LABEL_12;
        goto LABEL_9;
      }
    }
    if ( !under_debugger )
      interr(897);
    BUG();
  }
  return v9;
}
