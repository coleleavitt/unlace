/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100060270
// Address: 0x0000000100060270

//----- (0000000100060270) ----------------------------------------------------
__int64 __fastcall sub_100060270(
        _QWORD *a1,
        const char *a2,
        __int64 a3,
        __int64 a4,
        _BYTE *a5,
        unsigned int a6,
        char *__s,
        int a8,
        __int64 *a9)
{
  const char *v10; // r14
  _QWORD *v11; // rbx
  _QWORD *v12; // r12
  size_t v13; // rax
  size_t v14; // r13
  _QWORD *v15; // rcx
  unsigned __int64 v16; // rbx
  void *v17; // rax
  unsigned __int8 v18; // r14
  _BYTE *v19; // rax
  unsigned int v20; // ebx
  int v21; // ebx
  int *v22; // rax
  const char *v23; // rax
  unsigned int v24; // r14d
  _QWORD *v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rax
  const char *v28; // rdx
  __int128 v33; // [rsp+30h] [rbp-4C0h] BYREF
  __int64 v34; // [rsp+40h] [rbp-4B0h]
  __int128 v35; // [rsp+50h] [rbp-4A0h] BYREF
  __int64 v36; // [rsp+60h] [rbp-490h]
  __int64 v37; // [rsp+70h] [rbp-480h] BYREF
  int v38; // [rsp+78h] [rbp-478h]
  const char *v39; // [rsp+80h] [rbp-470h]
  __int64 v40; // [rsp+88h] [rbp-468h]
  __int128 v41; // [rsp+90h] [rbp-460h]
  __int64 v42; // [rsp+A0h] [rbp-450h]
  __int128 v43; // [rsp+A8h] [rbp-448h]
  __int64 v44; // [rsp+B8h] [rbp-438h]
  _BYTE v45[1024]; // [rsp+C0h] [rbp-430h] BYREF

  if ( *a5 && !(unsigned __int8)qisabspath((unsigned __int8 *)__s) )
  {
    v10 = v45;
    qmake_full_path((unsigned __int64)v45, 1024, __s);
  }
  else
  {
    v10 = __s;
  }
  v11 = a1;
  if ( (a6 & 1) != 0 )
  {
    v12 = a1 + 60;
    if ( !v10 )
    {
LABEL_14:
      v12[1] = 0;
      goto LABEL_15;
    }
  }
  else
  {
    if ( *v10 )
    {
      v11 = a1;
      if ( !qfileexist(v10) )
      {
        sub_100006F60((__int64)a1, "AUTOHIDE NONE\nInput file is missing: %s", v10);
        return (unsigned int)-3;
      }
    }
    v12 = v11 + 60;
  }
  v13 = strlen(v10);
  if ( !v13 )
    goto LABEL_14;
  v14 = v13;
  v15 = v11;
  v16 = v13 + 1;
  v17 = (void *)v15[60];
  if ( v15[62] < v16 )
  {
    v17 = qvector_reserve((__int64)v12, v17, v16, 1u);
    *v12 = v17;
  }
  a1[61] = v16;
  v11 = a1;
  memmove(v17, v10, v14);
  *(_BYTE *)(a1[60] + v14) = 0;
LABEL_15:
  *((_BYTE *)v11 + 733) = a6 & 1;
  if ( !qfileexist(a2) )
  {
    v22 = __error();
    v23 = (const char *)winerr(*v22);
    sub_100005090((__int64)a1, "%s: %s\n", a2, v23);
    return (unsigned int)-2;
  }
  v18 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 48LL))(a1, (unsigned int)a8);
  v37 = 80;
  v41 = -1;
  v42 = -1;
  v43 = 0;
  v44 = 0;
  v39 = a2;
  v40 = a3;
  v19 = nullptr;
  if ( *a5 )
    v19 = a5;
  *((_QWORD *)&v43 + 1) = v19;
  v20 = ((a6 >> 1) & 0x40) + 8 * (a6 & 0x60) + 2 * ((a6 & 0x10) == 0) + 128;
  if ( (a6 & 8) != 0 )
  {
    v21 = v20 | 0x20;
LABEL_25:
    v38 = v21;
    goto LABEL_26;
  }
  if ( (a6 & 4) != 0 )
  {
    v21 = v20 | 0x10;
    goto LABEL_25;
  }
  v21 = v20 | 0x20;
  v38 = v21;
  sub_100005090((__int64)a1, "Launching as %sbit process\n", "64");
LABEL_26:
  v35 = 0;
  v36 = 0;
  if ( a4 )
  {
    if ( !*(_BYTE *)(a4 + 24) )
      v38 = v21 | 0x800;
    sub_100060680((__int64)&v35, (__int64 *)a4);
    v25 = a1;
    v26 = v35;
  }
  else
  {
    v26 = 0;
    v25 = a1;
  }
  *(_QWORD *)&v43 = v26;
  v33 = 0;
  v34 = 0;
  v27 = launch_process((__int64)&v37, (__int64)&v33);
  *a9 = v27;
  if ( v27 )
  {
    v24 = 2 - v18;
  }
  else
  {
    if ( *((_QWORD *)&v33 + 1) )
      v28 = (const char *)v33;
    else
      v28 = _s1;
    v24 = -2;
    sub_100005090((__int64)v25, "launch_process: %s", v28);
  }
  if ( (_QWORD)v33 )
  {
    *((_QWORD *)&v33 + 1) = 0;
    qfree((void *)v33);
  }
  if ( (_QWORD)v35 )
  {
    *((_QWORD *)&v35 + 1) = 0;
    qfree((void *)v35);
  }
  return v24;
}
