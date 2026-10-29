__int64 __fastcall sub_5712E0(__int64 a1, _BYTE *a2, _QWORD *a3, unsigned int a4, unsigned int a5)
{
  char tinfo_property; // al
  char v8; // r13
  unsigned int v9; // ebp
  int v10; // eax
  int v11; // r15d
  __int64 v12; // rdi
  int tinfo_size; // eax
  void *v14; // rdx
  __int64 v15; // r12
  __int64 v17; // rdi
  __int64 v18; // rax
  int v19; // r14d
  __int64 v20; // r13
  unsigned int v21; // r13d
  char *v22; // rdi
  __int64 v23; // r12
  __int64 v24; // rbp
  char *v25; // rbx
  void *v26; // rdi
  void *v27; // rdi
  char *v28; // rdi
  __int64 i; // r12
  char *v30; // rbx
  void *v31; // rdi
  void *v32; // rdi
  unsigned int v33; // eax
  __int64 v36; // [rsp+10h] [rbp-C8h]
  int v37[2]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v38; // [rsp+28h] [rbp-B0h]
  void *v39; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v40; // [rsp+38h] [rbp-A0h]
  __int128 v41; // [rsp+48h] [rbp-90h]
  __int64 v42; // [rsp+58h] [rbp-80h]
  int v43; // [rsp+60h] [rbp-78h]
  char v44[8]; // [rsp+70h] [rbp-68h] BYREF
  unsigned int v45; // [rsp+78h] [rbp-60h]
  __int128 v46; // [rsp+7Ch] [rbp-5Ch]
  int v47; // [rsp+8Ch] [rbp-4Ch]
  unsigned __int64 v48; // [rsp+98h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  tinfo_property = get_tinfo_property(*a3, 2);
  if ( !tinfo_property )
  {
    *(_DWORD *)(a1 + 48) = 1562;
    return (unsigned int)-1;
  }
  v8 = tinfo_property;
  v9 = (**(__int64 (__fastcall ***)(__int64, _BYTE *, _QWORD *, _QWORD, _QWORD))a1)(a1, a2, a3, a4, a5);
  if ( !v9 )
  {
    v10 = *(_DWORD *)(a1 + 32);
    v11 = v10 & 2;
    if ( (v10 & 2) != 0 )
    {
      *(_DWORD *)(a1 + 32) = v10 & 0xFFFFFFFD;
      return v9;
    }
    if ( (v8 & 0x3F) == 0xD || (v8 & 0x3F) == 0x1D )
    {
      if ( !a5 )
      {
        if ( (v10 & 1) != 0 )
        {
LABEL_24:
          v17 = *a3;
          v39 = nullptr;
          v42 = 0;
          v43 = 1;
          v40 = 0;
          v41 = 0;
          get_tinfo_details(v17, 13, &v39);
          v18 = *(_QWORD *)(a1 + 8);
          v19 = *(_DWORD *)(a1 + 16);
          *(_QWORD *)(a1 + 8) = a2;
          v36 = v18;
          *(_DWORD *)(a1 + 16) = a4;
          if ( (_QWORD)v40 )
          {
            do
            {
              v21 = sub_571820(a1);
              if ( v21 )
              {
                v22 = (char *)v39;
                *(_DWORD *)(a1 + 16) = v19;
                *(_QWORD *)(a1 + 8) = v36;
                if ( v22 )
                {
                  v23 = v40;
                  if ( (_QWORD)v40 )
                  {
                    v24 = 0;
                    do
                    {
                      v25 = &v22[128 * v24];
                      clear_tinfo_t(v25 + 64);
                      v26 = *((void **)v25 + 5);
                      if ( v26 )
                      {
                        *((_QWORD *)v25 + 6) = 0;
                        qfree(v26);
                      }
                      v27 = *((void **)v25 + 2);
                      if ( v27 )
                      {
                        *((_QWORD *)v25 + 3) = 0;
                        qfree(v27);
                      }
                      ++v24;
                      v22 = (char *)v39;
                    }
                    while ( v23 != v24 );
                  }
                  *(_QWORD *)&v40 = 0;
                  qfree(v22);
                }
                return v21;
              }
              ++v11;
              v20 = v40;
            }
            while ( v11 < (unsigned __int64)v40 );
            v28 = (char *)v39;
            *(_DWORD *)(a1 + 16) = v19;
            *(_QWORD *)(a1 + 8) = v36;
            if ( !v28 )
              return v9;
            if ( v20 )
            {
              for ( i = 0; i != v20; ++i )
              {
                v30 = &v28[128 * i];
                clear_tinfo_t(v30 + 64);
                v31 = *((void **)v30 + 5);
                if ( v31 )
                {
                  *((_QWORD *)v30 + 6) = 0;
                  qfree(v31);
                }
                v32 = *((void **)v30 + 2);
                if ( v32 )
                {
                  *((_QWORD *)v30 + 3) = 0;
                  qfree(v32);
                }
                v28 = (char *)v39;
              }
            }
          }
          else
          {
            v28 = (char *)v39;
            *(_DWORD *)(a1 + 16) = v19;
            *(_QWORD *)(a1 + 8) = v18;
            if ( !v28 )
              return v9;
          }
          *(_QWORD *)&v40 = 0;
          qfree(v28);
          return v9;
        }
LABEL_9:
        if ( *a2 != 5 )
          idcv_object(a2, 0);
        v44[0] = 2;
        v45 = a4;
        v47 = 0;
        v46 = 0;
        set_idcv_attr();
        free_idcv(v44);
        if ( (v8 & 0x2F) != 0xD )
        {
LABEL_12:
          v12 = *a3;
          *(_QWORD *)v37 = 0;
          v38 = 0;
          get_tinfo_details(v12, 11, v37);
          tinfo_size = get_tinfo_size(0, *(_QWORD *)v37, 0);
          if ( tinfo_size == -1 )
          {
            *(_DWORD *)(a1 + 48) = 1562;
          }
          else
          {
            if ( *a2 == 5 )
            {
              v33 = sub_571930(a1, (int)a2, (int)v37, a4);
              if ( v33 )
                v9 = v33;
              goto LABEL_19;
            }
            v14 = nullptr;
            v39 = nullptr;
            v15 = (unsigned int)(tinfo_size * HIDWORD(v38));
            v40 = 0;
            if ( tinfo_size * HIDWORD(v38) )
            {
              v39 = (void *)qvector_reserve(&v39, 0, (unsigned int)(tinfo_size * HIDWORD(v38)), 1);
              memset((char *)v39 + v40, 0, v15 - v40);
              *(_QWORD *)&v40 = v15;
              v14 = v39;
            }
            if ( (***(unsigned __int8 (__fastcall ****)(_QWORD, _QWORD, void *, __int64))(a1 + 24))(
                   *(_QWORD *)(a1 + 24),
                   a4,
                   v14,
                   v15) )
            {
              if ( v39 )
              {
                *(_QWORD *)&v40 = 0;
                qfree(v39);
              }
              goto LABEL_19;
            }
            if ( v39 )
            {
              *(_QWORD *)&v40 = 0;
              qfree(v39);
            }
          }
          v9 = -1;
LABEL_19:
          clear_tinfo_t(v37);
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
        if ( (v10 & 1) != 0 )
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

