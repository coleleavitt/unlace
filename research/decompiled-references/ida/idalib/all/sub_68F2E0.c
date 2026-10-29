__int64 __fastcall sub_68F2E0(__int64 a1, __int64 *a2, __int64 *a3, unsigned __int64 a4, __int64 a5, __int64 *a6)
{
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v11; // rdi
  __int64 v12; // r15
  __int64 v13; // rax
  unsigned __int64 v14; // r13
  _QWORD *v15; // rdx
  _QWORD *v16; // r14
  unsigned __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rax
  int v20; // eax
  char *v21; // rdi
  __int64 v22; // r13
  __int64 v23; // r12
  char *v24; // rbx
  void *v25; // rdi
  void *v26; // rdi
  __int64 tinfo_property; // rax
  unsigned __int64 v28; // [rsp+8h] [rbp-D8h]
  unsigned __int64 v29; // [rsp+18h] [rbp-C8h]
  __int64 v30; // [rsp+20h] [rbp-C0h]
  int v32; // [rsp+30h] [rbp-B0h]
  unsigned __int64 v33; // [rsp+30h] [rbp-B0h]
  unsigned __int64 v34; // [rsp+38h] [rbp-A8h]
  unsigned __int8 tinfo_details; // [rsp+5Fh] [rbp-81h]
  __int64 v38; // [rsp+68h] [rbp-78h] BYREF
  void *ptr; // [rsp+70h] [rbp-70h] BYREF
  __int128 v40; // [rsp+78h] [rbp-68h]
  __int128 v41; // [rsp+88h] [rbp-58h]
  __int64 v42; // [rsp+98h] [rbp-48h]
  int v43; // [rsp+A0h] [rbp-40h]
  unsigned __int64 v44; // [rsp+A8h] [rbp-38h]

  v7 = *a3;
  v8 = *a6;
  v44 = __readfsqword(0x28u);
  v30 = v7;
  tinfo_details = 0;
  if ( (get_tinfo_property(v8, 2) & 0x3F) != 0xD )
    return tinfo_details;
  v11 = *a6;
  ptr = nullptr;
  v42 = 0;
  v43 = 1;
  v40 = 0;
  v41 = 0;
  tinfo_details = get_tinfo_details(v11, 13, &ptr);
  if ( tinfo_details )
  {
    if ( (_QWORD)v40 && get_tinfo_property(*((_QWORD *)ptr + 18 * v40 - 10), 287) )
    {
      if ( a4 )
      {
        v29 = a4;
        v28 = 1;
        goto LABEL_8;
      }
    }
    else
    {
      v29 = v41;
      if ( (_QWORD)v41 )
      {
        if ( a4 < (unsigned __int64)v41 )
        {
LABEL_17:
          *a3 = a4 + v30;
          goto LABEL_19;
        }
        v28 = a4 / (unsigned __int64)v41;
LABEL_8:
        v12 = v30;
        v13 = v40;
        v34 = 0;
        do
        {
          v14 = 0;
          if ( v13 )
          {
            do
            {
              v15 = (char *)ptr + 144 * v14;
              v16 = v15;
              v17 = *v15 >> 3;
              if ( v13 - 1 == v14
                && (v33 = *v15 >> 3, tinfo_property = get_tinfo_property(v15[8], 287), v17 = v33, tinfo_property) )
              {
                v18 = v29 - v33;
                if ( v29 < v33 )
                  v18 = 0;
              }
              else
              {
                v18 = v16[1] >> 3;
              }
              v19 = v16[9];
              v38 = v12 + v17;
              if ( (v19 & 0xF) == 0xA )
              {
                v32 = *((_DWORD *)v16 + 20);
                if ( v32 != -1 )
                {
                  v20 = sub_6BEC10(v16 + 9, v16 + 8);
                  sub_68EFE0(a1, a2, &v38, v18, v20, v32, a5);
                }
              }
              else if ( (get_tinfo_property(v16[8], 2) & 0x3F) == 0xD )
              {
                sub_68F2E0(a1, a2, &v38, v18, a5, v16 + 8);
              }
              v13 = v40;
              ++v14;
            }
            while ( v14 < (unsigned __int64)v40 );
          }
          ++v34;
          v12 += v29;
        }
        while ( v34 < v28 );
        goto LABEL_17;
      }
    }
  }
  tinfo_details = 0;
LABEL_19:
  v21 = (char *)ptr;
  if ( ptr )
  {
    v22 = v40;
    if ( (_QWORD)v40 )
    {
      v23 = 0;
      do
      {
        v24 = &v21[144 * v23];
        clear_tinfo_t(v24 + 64);
        v25 = *((void **)v24 + 5);
        if ( v25 )
        {
          *((_QWORD *)v24 + 6) = 0;
          qfree(v25);
        }
        v26 = *((void **)v24 + 2);
        if ( v26 )
        {
          *((_QWORD *)v24 + 3) = 0;
          qfree(v26);
        }
        ++v23;
        v21 = (char *)ptr;
      }
      while ( v22 != v23 );
    }
    *(_QWORD *)&v40 = 0;
    qfree(v21);
  }
  return tinfo_details;
}
