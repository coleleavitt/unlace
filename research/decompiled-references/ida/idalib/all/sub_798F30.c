unsigned __int64 __fastcall sub_798F30(__int64 a1, __int64 a2)
{
  unsigned int qerrno; // eax
  _QWORD *v4; // rdi
  unsigned int v5; // r13d
  const char *v6; // r14
  __int64 v7; // rax
  const char *v8; // r15
  size_t v9; // r8
  __int64 v10; // r9
  size_t v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  size_t v14; // rax
  size_t v15; // r14
  __int64 v16; // r14
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r12
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v23; // r8
  __int64 v24; // r9
  size_t v25; // [rsp+0h] [rbp-88h]
  size_t v26; // [rsp+0h] [rbp-88h]
  size_t n; // [rsp+8h] [rbp-80h]
  int v28; // [rsp+1Ch] [rbp-6Ch] BYREF
  char v29[8]; // [rsp+20h] [rbp-68h] BYREF
  _OWORD v30[2]; // [rsp+28h] [rbp-60h] BYREF
  unsigned __int64 v31; // [rsp+48h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  v29[0] = 2;
  v28 = -1;
  memset(v30, 0, 24);
  qerrno = get_qerrno(a1);
  v4 = *(_QWORD **)(a1 + 104);
  v5 = qerrno;
  if ( !v4 )
  {
    free_idcv(v29);
    v29[0] = 7;
    memset(v30, 0, 24);
    set_idcv_attr(a2, "file", v29, 0, v23, v24);
    free_idcv(v29);
LABEL_12:
    v29[0] = 7;
    memset(v30, 0, 24);
    goto LABEL_10;
  }
  v6 = sub_78D060(v4, *(_DWORD *)(a1 + 112), (unsigned int *)&v28);
  v7 = *(_QWORD *)(a1 + 104);
  v8 = haystack;
  if ( *(_QWORD *)(v7 + 8) )
    v8 = *(const char **)v7;
  free_idcv(v29);
  if ( v6 )
  {
    v11 = strlen(v6);
    v29[0] = 7;
    memset(v30, 0, 24);
    if ( v11 )
    {
      n = v11;
      v26 = v11 + 1;
      *(_QWORD *)&v30[0] = qvector_reserve(v30, 0, v11 + 1, 1);
      *((_QWORD *)&v30[0] + 1) = v26;
      memmove(*(void **)&v30[0], v6, n);
      v9 = n;
      *(_BYTE *)(*(_QWORD *)&v30[0] + n) = 0;
    }
  }
  else
  {
    v29[0] = 7;
    memset(v30, 0, 24);
  }
  set_idcv_attr(a2, "file", v29, 0, v9, v10);
  free_idcv(v29);
  if ( !v8 )
    goto LABEL_12;
  v14 = strlen(v8);
  v29[0] = 7;
  memset(v30, 0, 24);
  v15 = v14;
  if ( v14 )
  {
    v25 = v14 + 1;
    *(_QWORD *)&v30[0] = qvector_reserve(v30, 0, v14 + 1, 1);
    *((_QWORD *)&v30[0] + 1) = v25;
    memmove(*(void **)&v30[0], v8, v15);
    *(_BYTE *)(*(_QWORD *)&v30[0] + v15) = 0;
  }
LABEL_10:
  set_idcv_attr(a2, "func", v29, 0, v12, v13);
  v16 = v28;
  free_idcv(v29);
  v29[0] = 2;
  *(_QWORD *)&v30[0] = v16;
  set_idcv_attr(a2, "line", v29, 0, v17, v18);
  v19 = *(_QWORD *)(a1 + 112);
  free_idcv(v29);
  v29[0] = 2;
  *(_QWORD *)&v30[0] = v19;
  set_idcv_attr(a2, "pc", v29, 0, v20, v21);
  set_qerrno(v5);
  free_idcv(v29);
  return v31 - __readfsqword(0x28u);
}
