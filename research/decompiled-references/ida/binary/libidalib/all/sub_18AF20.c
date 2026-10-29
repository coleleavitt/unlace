__int64 __fastcall sub_18AF20(TGroup *this, const char *src, int *a3)
{
  char *v4; // rdi
  size_t v6; // rax
  size_t v7; // r14
  size_t v8; // r13
  unsigned int v9; // ebx
  char *v11; // r14
  size_t v12; // rax
  size_t v13; // r15
  void *v14; // rdi
  size_t v15; // rdx
  __int64 v16; // rax
  size_t v17; // [rsp+0h] [rbp-A0h]
  char *v18; // [rsp+8h] [rbp-98h]
  int v19; // [rsp+1Ch] [rbp-84h] BYREF
  char *s; // [rsp+20h] [rbp-80h] BYREF
  int v21; // [rsp+28h] [rbp-78h] BYREF
  int v22; // [rsp+2Ch] [rbp-74h] BYREF
  void *v23; // [rsp+30h] [rbp-70h]
  __int128 v24; // [rsp+38h] [rbp-68h]
  __int64 v25; // [rsp+50h] [rbp-50h] BYREF
  __int128 v26; // [rsp+58h] [rbp-48h]
  unsigned __int64 v27; // [rsp+68h] [rbp-38h]

  v4 = (char *)src;
  v27 = __readfsqword(0x28u);
  v23 = nullptr;
  v24 = 0;
  if ( src )
  {
    v6 = strlen(src);
    v7 = v6 + 1;
    v8 = v6;
    v23 = (void *)qvector_reserve();
    *(_QWORD *)&v24 = v7;
    memmove(v23, src, v8);
    *((_BYTE *)v23 + v8) = 0;
    v4 = (char *)v23;
  }
  v25 = 0;
  s = nullptr;
  v26 = 0;
  v18 = sub_185A70(v4, a3, &v21, (_QWORD *)this + 43, &v22, (__int64 *)this + 37, &v25, &v19, &s);
  *((_DWORD *)this + 94) |= v19;
  if ( v18 && *v18 )
  {
    v11 = s;
    if ( s && (v12 = strlen(s), (v13 = v12) != 0) )
    {
      v14 = *((void **)this + 48);
      v15 = v12 + 1;
      if ( *((_QWORD *)this + 50) < v12 + 1 )
      {
        v17 = v12 + 1;
        v16 = qvector_reserve();
        *((_QWORD *)this + 48) = v16;
        v15 = v17;
        v14 = (void *)v16;
      }
      *((_QWORD *)this + 49) = v15;
      memmove(v14, v11, v13);
      *(_BYTE *)(*((_QWORD *)this + 48) + v13) = 0;
    }
    else
    {
      *((_QWORD *)this + 49) = 0;
    }
    TWindow::setTitle(this, v11);
    v9 = sub_1897E0(this, v18, a3, (__int64)&v21);
  }
  else
  {
    sub_92200((__int64)"form: error at %s", v18);
    v9 = 0;
  }
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree();
  }
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree();
  }
  return v9;
}

