void __fastcall sub_130CE90(__int64 (__fastcall *a1)(__int64, _QWORD *), __int64 a2, int a3, __int64 *a4)
{
  __int64 v4; // rax
  char *v5; // rdx
  __int64 v7; // rbp
  __int64 i; // rbx
  _BYTE *v9; // rsi
  size_t v10; // r8
  _BYTE *v11; // rdi
  _BYTE *v12; // rcx
  size_t v13; // r14
  unsigned __int64 v14; // rax
  _BYTE *v15; // rdi
  size_t v16; // r14
  unsigned __int64 v17; // rcx
  void *v21; // [rsp+20h] [rbp-78h] BYREF
  size_t v22; // [rsp+28h] [rbp-70h]
  _QWORD v23[2]; // [rsp+30h] [rbp-68h] BYREF
  void *v24[2]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v25[72]; // [rsp+50h] [rbp-48h] BYREF

  v4 = *a4;
  v5 = (char *)v23;
  v21 = v23;
  v22 = 0;
  LOBYTE(v23[0]) = 0;
  if ( a4[1] == v4 )
  {
    v9 = v23;
  }
  else
  {
    sub_9EE560(&v21, *(_BYTE **)v4, *(_QWORD *)(v4 + 8));
    v7 = a4[1];
    for ( i = *a4 + 32; v7 != i; v11[v13] = 0 )
    {
      v16 = v22;
      if ( v22 == 0x7FFFFFFFFFFFFFFFLL )
        std::__throw_length_error("basic_string::append");
      if ( v21 == v23 )
        v17 = 15;
      else
        v17 = v23[0];
      if ( v22 + 1 <= v17 )
        *((_BYTE *)v21 + v22) = 44;
      else
        sub_998B30((__int64)&v21, v22, 0, ",", 1u);
      v22 = v16 + 1;
      *((_BYTE *)v21 + v16 + 1) = 0;
      v10 = *(_QWORD *)(i + 8);
      v11 = v21;
      v12 = *(_BYTE **)i;
      v13 = v10 + v22;
      if ( v21 == v23 )
        v14 = 15;
      else
        v14 = v23[0];
      if ( v13 > v14 )
      {
        sub_998B30((__int64)&v21, v22, 0, v12, v10);
        v11 = v21;
      }
      else if ( v10 )
      {
        v15 = (char *)v21 + v22;
        if ( v10 == 1 )
          *v15 = *v12;
        else
          memcpy(v15, *(const void **)i, *(_QWORD *)(i + 8));
        v11 = v21;
      }
      i += 32;
      v22 = v13;
    }
    v9 = v21;
    v5 = (char *)v21 + v22;
  }
  v24[0] = v25;
  sub_12FAA20(v24, v9, (__int64)v5);
  sub_12FD3E0(a1, a2, a3, (__int64)v24);
  if ( v24[0] != v25 )
    operator delete(v24[0]);
  if ( v21 != v23 )
    operator delete(v21);
}
