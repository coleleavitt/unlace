__int64 __fastcall sub_440EA0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int *a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9)
{
  int v11; // eax
  __int64 v14; // r13
  char *v15; // rcx
  _BYTE *v16; // r15
  _BYTE *v17; // rsi
  signed __int64 v18; // r13
  _BYTE *v19; // rax
  void *v20[2]; // [rsp+10h] [rbp-88h] BYREF
  _BYTE *v21; // [rsp+20h] [rbp-78h]
  void *v22[3]; // [rsp+28h] [rbp-70h] BYREF
  void *v23[3]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v24; // [rsp+58h] [rbp-40h]

  v11 = *a4;
  v24 = __readfsqword(0x28u);
  if ( v11 )
  {
    if ( v11 != 1 )
      return v24 - __readfsqword(0x28u);
    v14 = *(_QWORD *)(a3 + 8);
    if ( v14 )
    {
      v21 = nullptr;
      a7 = 0;
      v17 = *(_BYTE **)a3;
      *(_OWORD *)v20 = 0;
      v18 = v14 - 1;
      if ( v18 < 0 )
        std::__throw_length_error("cannot create std::vector larger than max_size()");
      if ( v18 )
      {
        v19 = (_BYTE *)operator new(v18);
        v16 = &v19[v18];
        v20[0] = v19;
        v15 = v19;
        v21 = &v19[v18];
        if ( v18 == 1 )
          *v19 = *v17;
        else
          v15 = (char *)memmove(v19, v17, v18);
        goto LABEL_7;
      }
    }
    else
    {
      v20[0] = nullptr;
      v21 = nullptr;
    }
    v15 = nullptr;
    v16 = nullptr;
LABEL_7:
    v20[1] = v16;
    sub_440620(v22, v15, v16, (__int64)v15, a5, a6, a7, a8, a9);
    sub_440AD0((__int64)v23, (__int64 *)v22);
    (*(void (__fastcall **)(__int64, __int64, void **, __int64, int *))(*(_QWORD *)a1 + 16LL))(a1, a2, v20, a3, a4);
    if ( v23[0] )
      operator delete(v23[0], (char *)v23[2] - (char *)v23[0]);
    if ( v22[0] )
      operator delete(v22[0], (char *)v22[2] - (char *)v22[0]);
    if ( v20[0] )
      operator delete(v20[0], v21 - (char *)v20[0]);
    return v24 - __readfsqword(0x28u);
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, int *))(*(_QWORD *)a1 + 24LL))(a1, a2, a3, a4);
}
