void __fastcall Z3_solver_from_string(__int64 a1, _QWORD *a2, const char *src)
{
  char v4; // r13
  size_t v5; // rax
  size_t v6; // rbp
  char *v7; // rax
  __int64 v8; // rbp
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  char *v13; // rdi
  int v14; // edx
  unsigned int v15; // ecx
  __int64 v16; // rdi
  char *v18; // [rsp+30h] [rbp-1D8h]
  __int64 v19; // [rsp+38h] [rbp-1D0h]
  char v20[16]; // [rsp+40h] [rbp-1C8h] BYREF
  __int64 v21; // [rsp+50h] [rbp-1B8h] BYREF
  std::locale *v22; // [rsp+58h] [rbp-1B0h]
  __int64 v23; // [rsp+60h] [rbp-1A8h]
  int v24[2]; // [rsp+68h] [rbp-1A0h]
  __int64 v25; // [rsp+70h] [rbp-198h]
  int v26[2]; // [rsp+78h] [rbp-190h]
  void *ptr; // [rsp+80h] [rbp-188h]
  int v28[2]; // [rsp+88h] [rbp-180h]
  int v29[2]; // [rsp+90h] [rbp-178h]
  __int64 v30; // [rsp+98h] [rbp-170h] BYREF
  __int64 v31; // [rsp+A0h] [rbp-168h]
  void *v32; // [rsp+A8h] [rbp-160h]
  __int64 v33; // [rsp+B0h] [rbp-158h]
  char v34[16]; // [rsp+B8h] [rbp-150h] BYREF
  int v35[2]; // [rsp+C8h] [rbp-140h] BYREF
  int v36[2]; // [rsp+1A0h] [rbp-68h]
  int v37; // [rsp+1A8h] [rbp-60h]
  int v38[4]; // [rsp+1B0h] [rbp-58h]
  __int128 v39; // [rsp+1C0h] [rbp-48h]

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
    sub_29D9F0(a1, (__int64)a2, (__int64)src);
  v18 = v20;
  if ( !src )
    std::__throw_logic_error("basic_string: construction from null is not valid");
  v5 = strlen(src);
  v6 = v5;
  if ( v5 > 0xF )
  {
    v18 = (char *)operator new(v5 + 1);
    v13 = v18;
    *(_QWORD *)v20 = v6;
  }
  else
  {
    if ( v5 == 1 )
    {
      v20[0] = *src;
      goto LABEL_7;
    }
    if ( !v5 )
    {
LABEL_7:
      v7 = v20;
      goto LABEL_8;
    }
    v13 = v20;
  }
  memcpy(v13, src, v6);
  v7 = v18;
LABEL_8:
  v19 = v6;
  v7[v6] = 0;
  std::ios_base::ios_base((std::ios_base *)v35);
  LOWORD(v37) = 0;
  *(_OWORD *)v38 = 0;
  *(_QWORD *)v35 = (char *)&`vtable for'std::ios + 16;
  v39 = 0;
  v8 = `VTT for'std::istringstream[1];
  v9 = `VTT for'std::istringstream[2];
  *(_QWORD *)v36 = 0;
  v10 = *(_QWORD *)(v8 - 24);
  v21 = v8;
  *(__int64 *)((char *)&v21 + v10) = v9;
  v22 = nullptr;
  std::ios::init();
  *(_QWORD *)v24 = 0;
  v25 = 0;
  *(_QWORD *)v26 = 0;
  v21 = (__int64)&`vtable for'std::istringstream + 24;
  ptr = nullptr;
  *(_QWORD *)v28 = 0;
  *(_QWORD *)v35 = (char *)&`vtable for'std::istringstream + 64;
  *(_QWORD *)v29 = 0;
  v23 = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::locale((std::locale *)&v30);
  LODWORD(v31) = 8;
  v32 = v34;
  v23 = (__int64)&`vtable for'std::stringbuf + 16;
  v11 = v19;
  if ( v18 == v20 )
  {
    v14 = v19 + 1;
    if ( (unsigned int)(v19 + 1) >= 8 )
    {
      *(_QWORD *)&v34[v14 - 8] = *(_QWORD *)&v20[v14 - 8];
      if ( (unsigned int)v11 >= 8 )
      {
        v15 = 0;
        do
        {
          v16 = v15;
          v15 += 8;
          *(_QWORD *)&v34[v16] = *(_QWORD *)&v18[v16];
        }
        while ( v15 < ((unsigned int)v11 & 0xFFFFFFF8) );
      }
    }
    else if ( (v14 & 4) != 0 )
    {
      *(_DWORD *)v34 = *(_DWORD *)v20;
      *(_DWORD *)&v34[v14 - 4] = *(_DWORD *)&v20[v14 - 4];
    }
    else if ( (_DWORD)v19 != -1 )
    {
      v34[0] = v20[0];
      if ( (v14 & 2) != 0 )
        *(_WORD *)&v34[v14 - 2] = *(_WORD *)&v20[v14 - 2];
    }
  }
  else
  {
    v32 = v18;
    *(_QWORD *)v34 = *(_QWORD *)v20;
  }
  v33 = v11;
  v19 = 0;
  v20[0] = 0;
  std::stringbuf::_M_sync();
  std::ios::init();
  if ( *src == 112 && src[1] == 32 && src[2] == 99 )
    sub_2B0B30(a1, (__int64)a2, (std::istream *)&v21);
  else
    sub_2AE960(a1, a2, (__int64)&v21);
  v21 = (__int64)&`vtable for'std::istringstream + 24;
  *(_QWORD *)v35 = (char *)&`vtable for'std::istringstream + 64;
  v23 = (__int64)&`vtable for'std::stringbuf + 16;
  if ( v32 != v34 )
    operator delete(v32, *(_QWORD *)v34 + 1LL);
  v23 = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::~locale((std::locale *)&v30);
  v12 = *(_QWORD *)(v8 - 24);
  v21 = v8;
  *(__int64 *)((char *)&v21 + v12) = v9;
  v22 = nullptr;
  *(_QWORD *)v35 = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v35);
  if ( v4 )
    byte_1C7EBA0 = 1;
}

