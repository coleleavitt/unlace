unsigned __int64 __fastcall sub_6A8A30(
        char *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        char *a6,
        double a7,
        double a8)
{
  __int64 v13; // rax
  __int64 v14; // rax
  char v15; // al
  unsigned int v16; // ecx
  unsigned __int64 v17; // rax
  const char *v18; // rsi
  char *v19; // rdi
  __int64 v20; // r13
  __int64 v21; // rbp
  char *v22; // rbx
  void *v23; // rdi
  void *v24; // rdi
  _QWORD *v25; // rbx
  void *v26; // rdi
  char *v27; // rdx
  __int64 v28; // rbp
  __int64 v29; // rbx
  char *v30; // rax
  void *v31; // rdi
  int v32; // edx
  int v33[2]; // [rsp+8h] [rbp-F0h]
  void *v34; // [rsp+10h] [rbp-E8h] BYREF
  void *v35[2]; // [rsp+18h] [rbp-E0h]
  int v36; // [rsp+28h] [rbp-D0h]
  __int16 v37; // [rsp+2Ch] [rbp-CCh]
  char v38; // [rsp+2Eh] [rbp-CAh]
  void *v39; // [rsp+30h] [rbp-C8h]
  __int128 v40; // [rsp+38h] [rbp-C0h]
  void *s; // [rsp+48h] [rbp-B0h]
  __int64 v42; // [rsp+50h] [rbp-A8h]
  void *v43; // [rsp+58h] [rbp-A0h]
  __int64 v44; // [rsp+60h] [rbp-98h]
  int v45; // [rsp+68h] [rbp-90h]
  __int64 v46; // [rsp+70h] [rbp-88h]
  void *v47[2]; // [rsp+78h] [rbp-80h] BYREF
  __int128 v48; // [rsp+88h] [rbp-70h]
  void *ptr; // [rsp+98h] [rbp-60h]
  __int128 v50; // [rsp+A0h] [rbp-58h]
  unsigned __int64 v51; // [rsp+B8h] [rbp-40h]

  v51 = __readfsqword(0x28u);
  if ( a2 != *((_QWORD *)a1 + 1) || (*(_BYTE *)(a2 + 32) & 0x10) == 0 || !(unsigned __int8)netnode_inited(a1, a2) )
    return v51 - __readfsqword(0x28u);
  v13 = *(_QWORD *)a1;
  v36 = -1;
  v14 = *(_QWORD *)(v13 + 1672);
  v37 = 0;
  v34 = nullptr;
  *(_QWORD *)v33 = v14;
  v38 = 0;
  v39 = nullptr;
  s = v47;
  v42 = 1;
  v43 = nullptr;
  v44 = 0;
  v45 = 1065353216;
  v46 = 0;
  ptr = nullptr;
  *(_OWORD *)v35 = 0;
  v40 = 0;
  *(_OWORD *)v47 = 0;
  v48 = 0;
  v50 = 0;
  if ( a5 )
  {
    if ( *(_BYTE *)(v14 + 8) && !*(_BYTE *)(a3 + 28) )
      sub_699100(a3, a1, a6, a5, 1);
    sub_699100((__int64)&v34, a1, a6, a5, 0);
  }
  else if ( a4 )
  {
    sub_6A0BD0((__int64)&v34, a1, a6, a4, 0, 0.0, a8);
  }
  v38 = *(_BYTE *)(a3 + 30);
  sub_6A7DD0(a3, (__int64 *)a1, (__int64)&v34);
  v15 = *(_BYTE *)(a3 + 28) & 0x3F;
  if ( v15 != 45 )
  {
    v16 = -1;
    if ( !*(_BYTE *)(*(_QWORD *)v33 + 8LL) )
      goto LABEL_13;
    goto LABEL_12;
  }
  v17 = *(_QWORD *)(a3 + 8);
  if ( v17 <= 1 )
  {
    v16 = -1;
    goto LABEL_15;
  }
  v16 = *(_DWORD *)(a3 + 24);
  if ( v16 == -1 )
    goto LABEL_47;
  v32 = sub_698F20(a1, *(const char **)a3, 0, 0);
  v16 = -1;
  v15 = *(_BYTE *)(a3 + 28) & 0x3F;
  if ( v32 == -1 )
LABEL_12:
    v16 = *(_DWORD *)(a3 + 24);
LABEL_13:
  if ( v15 == 13 && *(_BYTE *)(a3 + 30) )
    goto LABEL_17;
  v17 = *(_QWORD *)(a3 + 8);
LABEL_15:
  v18 = haystack;
  if ( v17 )
LABEL_47:
    v18 = *(const char **)a3;
  sub_69E970((__int64 *)a1, v18, a6, v16);
LABEL_17:
  sub_69B160(a1, a3);
  if ( a5 )
  {
    sub_6999E0((__int64 *)a1, a6, (__int64)&v34);
  }
  else if ( a4 )
  {
    sub_69BD10((__int64 *)a1, a6, (__int64)&v34, *(_DWORD *)(a3 + 24) == -1);
  }
  v19 = (char *)ptr;
  if ( ptr )
  {
    v20 = v50;
    if ( (_QWORD)v50 )
    {
      v21 = 0;
      do
      {
        v22 = &v19[128 * v21];
        clear_tinfo_t(v22 + 64);
        v23 = *((void **)v22 + 5);
        if ( v23 )
        {
          *((_QWORD *)v22 + 6) = 0;
          qfree(v23);
        }
        v24 = *((void **)v22 + 2);
        if ( v24 )
        {
          *((_QWORD *)v22 + 3) = 0;
          qfree(v24);
        }
        ++v21;
        v19 = (char *)ptr;
      }
      while ( v20 != v21 );
    }
    *(_QWORD *)&v50 = 0;
    qfree(v19);
  }
  if ( v47[1] )
  {
    *(_QWORD *)&v48 = 0;
    qfree(v47[1]);
  }
  v25 = v43;
  if ( v43 )
  {
    do
    {
      v26 = v25;
      v25 = (_QWORD *)*v25;
      operator delete(v26, 0x20u);
    }
    while ( v25 );
  }
  memset(s, 0, 8 * v42);
  v44 = 0;
  v43 = nullptr;
  if ( s != v47 )
    operator delete(s, 8 * v42);
  v27 = (char *)v39;
  if ( v39 )
  {
    v28 = v40;
    if ( (_QWORD)v40 )
    {
      v29 = 0;
      do
      {
        v30 = &v27[32 * v29];
        v31 = *(void **)v30;
        if ( *(_QWORD *)v30 )
        {
          *((_QWORD *)v30 + 1) = 0;
          qfree(v31);
          v27 = (char *)v39;
        }
        ++v29;
      }
      while ( v28 != v29 );
    }
    *(_QWORD *)&v40 = 0;
    qfree(v27);
  }
  if ( v34 )
  {
    v35[0] = nullptr;
    qfree(v34);
  }
  return v51 - __readfsqword(0x28u);
}

