__int64 __fastcall sub_43FD60(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  int v6; // eax
  __int64 v9; // r13
  void *v10; // rcx
  _BYTE *v11; // r15
  _BYTE *v12; // rsi
  signed __int64 v13; // r13
  _BYTE *v14; // rax
  void *v15[2]; // [rsp+10h] [rbp-88h] BYREF
  _BYTE *v16; // [rsp+20h] [rbp-78h]
  void *v17[3]; // [rsp+28h] [rbp-70h] BYREF
  void *v18[3]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v19; // [rsp+58h] [rbp-40h]

  v6 = *a4;
  v19 = __readfsqword(0x28u);
  if ( v6 )
  {
    if ( v6 != 1 )
      return v19 - __readfsqword(0x28u);
    v9 = *(_QWORD *)(a3 + 8);
    if ( v9 )
    {
      v16 = 0;
      v12 = *(_BYTE **)a3;
      *(_OWORD *)v15 = 0;
      v13 = v9 - 1;
      if ( v13 < 0 )
        std::__throw_length_error("cannot create std::vector larger than max_size()");
      if ( v13 )
      {
        v14 = (_BYTE *)operator new(v13);
        v11 = &v14[v13];
        v15[0] = v14;
        v10 = v14;
        v16 = &v14[v13];
        if ( v13 == 1 )
          *v14 = *v12;
        else
          v10 = memmove(v14, v12, v13);
        goto LABEL_7;
      }
    }
    else
    {
      v15[0] = 0;
      v16 = 0;
    }
    v10 = 0;
    v11 = 0;
LABEL_7:
    v15[1] = v11;
    sub_43F4E0(v17, v10, v11);
    sub_43F990(v18, v17);
    (*(void (__fastcall **)(__int64, __int64, void **, __int64, int *))(*(_QWORD *)a1 + 16LL))(a1, a2, v15, a3, a4);
    if ( v18[0] )
      operator delete(v18[0], (char *)v18[2] - (char *)v18[0]);
    if ( v17[0] )
      operator delete(v17[0], (char *)v17[2] - (char *)v17[0]);
    if ( v15[0] )
      operator delete(v15[0], v16 - (char *)v15[0]);
    return v19 - __readfsqword(0x28u);
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, int *))(*(_QWORD *)a1 + 24LL))(a1, a2, a3, a4);
}
