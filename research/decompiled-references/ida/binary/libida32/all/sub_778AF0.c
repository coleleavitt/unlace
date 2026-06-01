unsigned __int64 __fastcall sub_778AF0(__int64 a1)
{
  unsigned int qerrno; // eax
  _QWORD *v3; // rdi
  unsigned int v4; // r13d
  const char *v5; // r14
  __int64 v6; // rax
  const char *v7; // r15
  size_t v8; // rax
  size_t v9; // rax
  size_t v10; // r14
  unsigned int v11; // r14d
  __int64 v12; // r12
  size_t v14; // [rsp+0h] [rbp-88h]
  size_t v15; // [rsp+0h] [rbp-88h]
  size_t n; // [rsp+8h] [rbp-80h]
  unsigned int v17; // [rsp+1Ch] [rbp-6Ch] BYREF
  char v18[8]; // [rsp+20h] [rbp-68h] BYREF
  _OWORD v19[2]; // [rsp+28h] [rbp-60h] BYREF
  unsigned __int64 v20; // [rsp+48h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  v18[0] = 2;
  v17 = -1;
  memset(v19, 0, 24);
  qerrno = get_qerrno(a1);
  v3 = *(_QWORD **)(a1 + 104);
  v4 = qerrno;
  if ( !v3 )
  {
    free_idcv(v18);
    v18[0] = 7;
    memset(v19, 0, 24);
    set_idcv_attr();
    free_idcv(v18);
LABEL_12:
    v18[0] = 7;
    memset(v19, 0, 24);
    goto LABEL_10;
  }
  v5 = sub_76CC20(v3, *(_DWORD *)(a1 + 112), &v17);
  v6 = *(_QWORD *)(a1 + 104);
  v7 = haystack;
  if ( *(_QWORD *)(v6 + 8) )
    v7 = *(const char **)v6;
  free_idcv(v18);
  if ( v5 )
  {
    v8 = strlen(v5);
    v18[0] = 7;
    memset(v19, 0, 24);
    if ( v8 )
    {
      n = v8;
      v15 = v8 + 1;
      *(_QWORD *)&v19[0] = qvector_reserve(v19, 0, v8 + 1, 1);
      *((_QWORD *)&v19[0] + 1) = v15;
      memmove(*(void **)&v19[0], v5, n);
      *(_BYTE *)(*(_QWORD *)&v19[0] + n) = 0;
    }
  }
  else
  {
    v18[0] = 7;
    memset(v19, 0, 24);
  }
  set_idcv_attr();
  free_idcv(v18);
  if ( !v7 )
    goto LABEL_12;
  v9 = strlen(v7);
  v18[0] = 7;
  memset(v19, 0, 24);
  v10 = v9;
  if ( v9 )
  {
    v14 = v9 + 1;
    *(_QWORD *)&v19[0] = qvector_reserve(v19, 0, v9 + 1, 1);
    *((_QWORD *)&v19[0] + 1) = v14;
    memmove(*(void **)&v19[0], v7, v10);
    *(_BYTE *)(*(_QWORD *)&v19[0] + v10) = 0;
  }
LABEL_10:
  set_idcv_attr();
  v11 = v17;
  free_idcv(v18);
  v18[0] = 2;
  LODWORD(v19[0]) = v11;
  set_idcv_attr();
  v12 = *(_QWORD *)(a1 + 112);
  free_idcv(v18);
  v18[0] = 2;
  LODWORD(v19[0]) = v12;
  set_idcv_attr();
  set_qerrno(v4, "pc");
  free_idcv(v18);
  return v20 - __readfsqword(0x28u);
}

