void __fastcall Z3_optimize_from_string(__int64 a1, __int64 a2, const char *a3)
{
  size_t v4; // rax
  size_t v5; // rbx
  _QWORD *v6; // rax
  char *v7; // rbx
  char *v8; // r15
  __int64 v9; // rax
  size_t v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // rdi
  unsigned int v13; // edx
  unsigned int v14; // ecx
  __int64 v15; // rdi
  _QWORD *v17; // [rsp+30h] [rbp-1D8h]
  size_t v18; // [rsp+38h] [rbp-1D0h]
  _QWORD v19[2]; // [rsp+40h] [rbp-1C8h] BYREF
  char *v20; // [rsp+50h] [rbp-1B8h] BYREF
  __int64 v21; // [rsp+58h] [rbp-1B0h]
  char *v22; // [rsp+60h] [rbp-1A8h]
  __int64 v23; // [rsp+68h] [rbp-1A0h]
  __int64 v24; // [rsp+70h] [rbp-198h]
  __int64 v25; // [rsp+78h] [rbp-190h]
  __int64 v26; // [rsp+80h] [rbp-188h]
  __int64 v27; // [rsp+88h] [rbp-180h]
  __int64 v28; // [rsp+90h] [rbp-178h]
  char v29[8]; // [rsp+98h] [rbp-170h] BYREF
  int v30; // [rsp+A0h] [rbp-168h]
  void *v31; // [rsp+A8h] [rbp-160h]
  size_t v32; // [rsp+B0h] [rbp-158h]
  _QWORD v33[2]; // [rsp+B8h] [rbp-150h] BYREF
  _QWORD v34[28]; // [rsp+C8h] [rbp-140h] BYREF
  __int16 v35; // [rsp+1A8h] [rbp-60h]
  __int128 v36; // [rsp+1B0h] [rbp-58h]
  __int128 v37; // [rsp+1C0h] [rbp-48h]

  v17 = v19;
  if ( !a3 )
    std::__throw_logic_error("basic_string: construction from null is not valid");
  v4 = strlen(a3);
  v5 = v4;
  if ( v4 > 0xF )
  {
    v17 = (_QWORD *)operator new(v4 + 1);
    v12 = v17;
    v19[0] = v5;
  }
  else
  {
    if ( v4 == 1 )
    {
      LOBYTE(v19[0]) = *a3;
      goto LABEL_5;
    }
    if ( !v4 )
    {
LABEL_5:
      v6 = v19;
      goto LABEL_6;
    }
    v12 = v19;
  }
  memcpy(v12, a3, v5);
  v6 = v17;
LABEL_6:
  v18 = v5;
  *((_BYTE *)v6 + v5) = 0;
  std::ios_base::ios_base((std::ios_base *)v34);
  v35 = 0;
  v36 = 0;
  v34[0] = (char *)&`vtable for'std::ios + 16;
  v37 = 0;
  v7 = (char *)`VTT for'std::istringstream[1];
  v8 = (char *)`VTT for'std::istringstream[2];
  v34[27] = 0;
  v9 = *((_QWORD *)v7 - 3);
  v20 = v7;
  *(char **)((char *)&v20 + v9) = v8;
  v21 = 0;
  std::ios::init();
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v20 = (char *)&`vtable for'std::istringstream + 24;
  v34[0] = (char *)&`vtable for'std::istringstream + 64;
  v26 = 0;
  v27 = 0;
  v22 = (char *)&`vtable for'std::streambuf + 16;
  v28 = 0;
  std::locale::locale((std::locale *)v29);
  v30 = 8;
  v31 = v33;
  v22 = (char *)&`vtable for'std::stringbuf + 16;
  v10 = v18;
  if ( v17 == v19 )
  {
    v13 = v18 + 1;
    if ( (unsigned int)(v18 + 1) >= 8 )
    {
      *(_QWORD *)((char *)&v33[-1] + v13) = *(_QWORD *)((char *)&v19[-1] + v13);
      if ( (unsigned int)v10 >= 8 )
      {
        v14 = 0;
        do
        {
          v15 = v14;
          v14 += 8;
          *(_QWORD *)((char *)v33 + v15) = *(_QWORD *)((char *)v17 + v15);
        }
        while ( v14 < (v10 & 0xFFFFFFF8) );
      }
    }
    else if ( (v13 & 4) != 0 )
    {
      LODWORD(v33[0]) = v19[0];
      *(_DWORD *)((char *)&v32 + v13 + 4) = *(_DWORD *)((char *)&v18 + v13 + 4);
    }
    else if ( (_DWORD)v18 != -1 )
    {
      LOBYTE(v33[0]) = v19[0];
      if ( (v13 & 2) != 0 )
        *(_WORD *)((char *)&v32 + v13 + 6) = *(_WORD *)((char *)&v18 + v13 + 6);
    }
  }
  else
  {
    v31 = v17;
    v33[0] = v19[0];
  }
  v32 = v10;
  v18 = 0;
  LOBYTE(v19[0]) = 0;
  std::stringbuf::_M_sync();
  std::ios::init();
  sub_2A4DE0(a1, a2, (__int64)&v20, 0);
  v20 = (char *)&`vtable for'std::istringstream + 24;
  v34[0] = (char *)&`vtable for'std::istringstream + 64;
  v22 = (char *)&`vtable for'std::stringbuf + 16;
  if ( v31 != v33 )
    operator delete(v31, v33[0] + 1LL);
  v22 = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale((std::locale *)v29);
  v11 = *((_QWORD *)v7 - 3);
  v20 = v7;
  *(char **)((char *)&v20 + v11) = v8;
  v21 = 0;
  v34[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v34);
}

