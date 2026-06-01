_QWORD *__fastcall Z3_fixedpoint_from_string(__int64 a1, __int64 a2, const char *src)
{
  char v4; // bl
  size_t v5; // rax
  size_t v6; // rbp
  int *v7; // rax
  __int64 v8; // rbp
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // r12
  __int64 v14; // rax
  int *v16; // rdi
  unsigned int v17; // edx
  unsigned int v18; // ecx
  __int64 v19; // rdi
  int *v21; // [rsp+30h] [rbp-1D8h]
  int v22[2]; // [rsp+38h] [rbp-1D0h]
  int v23[4]; // [rsp+40h] [rbp-1C8h] BYREF
  int v24[2]; // [rsp+50h] [rbp-1B8h] BYREF
  __int64 v25; // [rsp+58h] [rbp-1B0h]
  int v26[2]; // [rsp+60h] [rbp-1A8h]
  __int64 v27; // [rsp+68h] [rbp-1A0h]
  __int64 v28; // [rsp+70h] [rbp-198h]
  __int64 v29; // [rsp+78h] [rbp-190h]
  __int64 v30; // [rsp+80h] [rbp-188h]
  __int64 v31; // [rsp+88h] [rbp-180h]
  __int64 v32; // [rsp+90h] [rbp-178h]
  int v33[4]; // [rsp+98h] [rbp-170h] BYREF
  void *v34; // [rsp+A8h] [rbp-160h]
  __int64 v35; // [rsp+B0h] [rbp-158h]
  _QWORD v36[2]; // [rsp+B8h] [rbp-150h] BYREF
  _QWORD v37[28]; // [rsp+C8h] [rbp-140h] BYREF
  __int16 v38; // [rsp+1A8h] [rbp-60h]
  __int128 v39; // [rsp+1B0h] [rbp-58h]
  __int128 v40; // [rsp+1C0h] [rbp-48h]

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
    sub_2A0340(a1, a2);
  v21 = v23;
  if ( !src )
    std::__throw_logic_error("basic_string: construction from null is not valid");
  v5 = strlen(src);
  v6 = v5;
  if ( v5 > 0xF )
  {
    v21 = (int *)operator new(v5 + 1);
    v16 = v21;
    *(_QWORD *)v23 = v6;
  }
  else
  {
    if ( v5 == 1 )
    {
      LOBYTE(v23[0]) = *src;
      goto LABEL_7;
    }
    if ( !v5 )
    {
LABEL_7:
      v7 = v23;
      goto LABEL_8;
    }
    v16 = v23;
  }
  memcpy(v16, src, v6);
  v7 = v21;
LABEL_8:
  *(_QWORD *)v22 = v6;
  *((_BYTE *)v7 + v6) = 0;
  std::ios_base::ios_base((std::ios_base *)v37);
  v38 = 0;
  v39 = 0;
  v37[0] = (char *)&`vtable for'std::ios + 16;
  v40 = 0;
  v8 = `VTT for'std::istringstream[1];
  v9 = `VTT for'std::istringstream[2];
  v37[27] = 0;
  v10 = *(_QWORD *)(v8 - 24);
  *(_QWORD *)v24 = v8;
  *(_QWORD *)((char *)v24 + v10) = v9;
  v25 = 0;
  std::ios::init();
  v27 = 0;
  v28 = 0;
  v29 = 0;
  *(_QWORD *)v24 = (char *)&`vtable for'std::istringstream + 24;
  v30 = 0;
  v31 = 0;
  v37[0] = (char *)&`vtable for'std::istringstream + 64;
  v32 = 0;
  *(_QWORD *)v26 = (char *)&`vtable for'std::streambuf + 16;
  std::locale::locale((std::locale *)v33);
  v33[2] = 8;
  v34 = v36;
  *(_QWORD *)v26 = (char *)&`vtable for'std::stringbuf + 16;
  v11 = *(_QWORD *)v22;
  if ( v21 == v23 )
  {
    v17 = v22[0] + 1;
    if ( (unsigned int)(v22[0] + 1) >= 8 )
    {
      *(_QWORD *)((char *)&v36[-1] + v17) = *(_QWORD *)((char *)v22 + v17);
      if ( (unsigned int)v11 >= 8 )
      {
        v18 = 0;
        do
        {
          v19 = v18;
          v18 += 8;
          *(_QWORD *)((char *)v36 + v19) = *(_QWORD *)((char *)v21 + v19);
        }
        while ( v18 < ((unsigned int)v11 & 0xFFFFFFF8) );
      }
    }
    else if ( (v17 & 4) != 0 )
    {
      LODWORD(v36[0]) = v23[0];
      *(_DWORD *)((char *)&v35 + v17 + 4) = *(int *)((char *)&v22[1] + v17);
    }
    else if ( v22[0] != -1 )
    {
      LOBYTE(v36[0]) = v23[0];
      if ( (v17 & 2) != 0 )
        *(_WORD *)((char *)&v35 + v17 + 6) = *(_WORD *)((char *)&v22[1] + v17 + 2);
    }
  }
  else
  {
    v34 = v21;
    v36[0] = *(_QWORD *)v23;
  }
  v35 = v11;
  *(_QWORD *)v22 = 0;
  LOBYTE(v23[0]) = 0;
  std::stringbuf::_M_sync();
  std::ios::init();
  v12 = sub_283190(a1, a2, (__int64)v24);
  v13 = v12;
  if ( v4 )
    sub_2BB620(v12);
  *(_QWORD *)v24 = (char *)&`vtable for'std::istringstream + 24;
  v37[0] = (char *)&`vtable for'std::istringstream + 64;
  *(_QWORD *)v26 = (char *)&`vtable for'std::stringbuf + 16;
  if ( v34 != v36 )
    operator delete(v34, v36[0] + 1LL);
  *(_QWORD *)v26 = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale((std::locale *)v33);
  v14 = *(_QWORD *)(v8 - 24);
  *(_QWORD *)v24 = v8;
  *(_QWORD *)((char *)v24 + v14) = v9;
  v25 = 0;
  v37[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v37);
  if ( v4 )
    byte_1C7EBA0 = 1;
  return v13;
}

