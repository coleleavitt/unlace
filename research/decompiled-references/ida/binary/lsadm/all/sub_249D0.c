unsigned __int64 __fastcall sub_249D0(_QWORD *a1, __int64 a2, _BYTE *a3, unsigned int a4)
{
  unsigned __int64 v4; // rax
  const void *v6; // r15
  _QWORD *v7; // rbp
  size_t v8; // rax
  __int64 v9; // r13
  size_t v12; // r12
  const char *v13; // rdi
  unsigned int v14; // eax
  _BYTE *v15; // r12
  signed __int64 v16; // r15
  const char *v17; // rdi
  unsigned int v18; // r12d
  void (*v19)(); // rax
  void *v20; // rdi
  signed __int64 v21; // rdx
  void *v22; // rdi
  size_t v23; // rdx
  unsigned int v24; // [rsp+0h] [rbp-68h]
  size_t v25; // [rsp+0h] [rbp-68h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v27; // [rsp+18h] [rbp-50h]
  unsigned __int64 v28; // [rsp+28h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  v4 = a1[21];
  if ( v4 < (unsigned __int64)a3 )
  {
    v6 = (const void *)a1[20];
    v7 = a1;
    if ( v4 < (unsigned __int64)v6 )
      goto LABEL_24;
    v8 = v4 - (_QWORD)v6;
    v9 = a2;
    ptr = nullptr;
    v12 = v8;
    v27 = 0;
    if ( !v8 )
      goto LABEL_5;
    v22 = nullptr;
    v23 = v8 + 1;
    if ( v8 != -1 )
    {
      v25 = v8 + 1;
      ptr = (void *)sub_29E60(&ptr, 0, v23, 1);
      v23 = v25;
      v22 = ptr;
    }
    *(_QWORD *)&v27 = v23;
    a2 = (__int64)v6;
    memmove(v22, v6, v12);
    *((_BYTE *)ptr + v12) = 0;
    if ( (_QWORD)v27 )
      v13 = (const char *)ptr;
    else
LABEL_5:
      v13 = s1;
    v14 = sub_26C60(v13);
    a1 = ptr;
    v24 = v14;
    if ( ptr )
    {
      *(_QWORD *)&v27 = 0;
      j__free(ptr);
    }
    v15 = (_BYTE *)v7[21];
    if ( a3 < v15 )
LABEL_24:
      sub_249B0((__int64)a1, a2);
    ptr = nullptr;
    v27 = 0;
    v16 = a3 - v15;
    if ( a3 == v15 )
      goto LABEL_10;
    v20 = nullptr;
    v21 = v16 + 1;
    if ( v16 != -1 )
    {
      ptr = (void *)sub_29E60(&ptr, 0, v21, 1);
      v21 = v16 + 1;
      v20 = ptr;
    }
    *(_QWORD *)&v27 = v21;
    memmove(v20, v15, a3 - v15);
    *((_BYTE *)ptr + v16) = 0;
    if ( !(_QWORD)v27 )
LABEL_10:
      v17 = s1;
    else
      v17 = (const char *)ptr;
    v18 = sub_26C60(v17);
    if ( ptr )
    {
      *(_QWORD *)&v27 = 0;
      j__free(ptr);
    }
    v19 = *(void (**)())(*(_QWORD *)v9 + 16LL);
    if ( v19 != nullsub_9 )
      ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))v19)(v9, v24, v18, a4);
    v7[21] = a3;
  }
  return v28 - __readfsqword(0x28u);
}

