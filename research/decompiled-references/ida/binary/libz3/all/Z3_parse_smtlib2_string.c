_QWORD *__fastcall Z3_parse_smtlib2_string(
        __int64 a1,
        const char *a2,
        unsigned int a3,
        _QWORD *a4,
        __int64 *a5,
        unsigned int a6,
        _QWORD *a7,
        __int64 *a8)
{
  char v8; // bl
  size_t v9; // rax
  size_t v10; // r15
  _QWORD *v11; // rax
  char *v12; // rcx
  char *v13; // r15
  __int64 v14; // rax
  size_t v15; // rax
  _QWORD *v16; // r12
  _QWORD *v18; // rdi
  unsigned int v19; // edx
  unsigned int v20; // ecx
  __int64 v21; // rdi
  char *v22; // [rsp+20h] [rbp-200h]
  _QWORD *v28; // [rsp+50h] [rbp-1D0h]
  size_t v29; // [rsp+58h] [rbp-1C8h]
  _QWORD v30[2]; // [rsp+60h] [rbp-1C0h] BYREF
  char *v31; // [rsp+70h] [rbp-1B0h] BYREF
  __int64 v32; // [rsp+78h] [rbp-1A8h]
  char *v33; // [rsp+80h] [rbp-1A0h]
  __int64 v34; // [rsp+88h] [rbp-198h]
  __int64 v35; // [rsp+90h] [rbp-190h]
  __int64 v36; // [rsp+98h] [rbp-188h]
  __int64 v37; // [rsp+A0h] [rbp-180h]
  __int64 v38; // [rsp+A8h] [rbp-178h]
  __int64 v39; // [rsp+B0h] [rbp-170h]
  char v40[8]; // [rsp+B8h] [rbp-168h] BYREF
  int v41; // [rsp+C0h] [rbp-160h]
  void *v42; // [rsp+C8h] [rbp-158h]
  size_t v43; // [rsp+D0h] [rbp-150h]
  _QWORD v44[2]; // [rsp+D8h] [rbp-148h] BYREF
  _QWORD v45[28]; // [rsp+E8h] [rbp-138h] BYREF
  __int16 v46; // [rsp+1C8h] [rbp-58h]
  __int128 v47; // [rsp+1D0h] [rbp-50h]
  __int128 v48; // [rsp+1E0h] [rbp-40h]

  v8 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v8 )
    sub_29BE40(a1, a2, a3, a4, a5, a6, a7, a8);
  v28 = v30;
  if ( !a2 )
    std::__throw_logic_error("basic_string: construction from null is not valid");
  v9 = strlen(a2);
  v10 = v9;
  if ( v9 > 0xF )
  {
    v28 = (_QWORD *)operator new(v9 + 1);
    v18 = v28;
    v30[0] = v10;
  }
  else
  {
    if ( v9 == 1 )
    {
      LOBYTE(v30[0]) = *a2;
      goto LABEL_7;
    }
    if ( !v9 )
    {
LABEL_7:
      v11 = v30;
      goto LABEL_8;
    }
    v18 = v30;
  }
  memcpy(v18, a2, v10);
  v11 = v28;
LABEL_8:
  v29 = v10;
  *((_BYTE *)v11 + v10) = 0;
  std::ios_base::ios_base((std::ios_base *)v45);
  v46 = 0;
  v47 = 0;
  v45[0] = (char *)&`vtable for'std::ios + 16;
  v48 = 0;
  v12 = (char *)`VTT for'std::istringstream[1];
  v13 = (char *)`VTT for'std::istringstream[2];
  v45[27] = 0;
  v14 = *((_QWORD *)v12 - 3);
  v31 = v12;
  v22 = v12;
  *(char **)((char *)&v31 + v14) = v13;
  v32 = 0;
  std::ios::init();
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v31 = (char *)&`vtable for'std::istringstream + 24;
  v45[0] = (char *)&`vtable for'std::istringstream + 64;
  v37 = 0;
  v38 = 0;
  v33 = (char *)&`vtable for'std::streambuf + 16;
  v39 = 0;
  std::locale::locale((std::locale *)v40);
  v41 = 8;
  v42 = v44;
  v33 = (char *)&`vtable for'std::stringbuf + 16;
  v15 = v29;
  if ( v28 == v30 )
  {
    v19 = v29 + 1;
    if ( (unsigned int)(v29 + 1) >= 8 )
    {
      *(_QWORD *)((char *)&v44[-1] + v19) = *(_QWORD *)((char *)&v30[-1] + v19);
      if ( (unsigned int)v15 >= 8 )
      {
        v20 = 0;
        do
        {
          v21 = v20;
          v20 += 8;
          *(_QWORD *)((char *)v44 + v21) = *(_QWORD *)((char *)v28 + v21);
        }
        while ( v20 < (v15 & 0xFFFFFFF8) );
      }
    }
    else if ( (v19 & 4) != 0 )
    {
      LODWORD(v44[0]) = v30[0];
      *(_DWORD *)((char *)&v43 + v19 + 4) = *(_DWORD *)((char *)&v29 + v19 + 4);
    }
    else if ( (_DWORD)v29 != -1 )
    {
      LOBYTE(v44[0]) = v30[0];
      if ( (v19 & 2) != 0 )
        *(_WORD *)((char *)&v43 + v19 + 6) = *(_WORD *)((char *)&v29 + v19 + 6);
    }
  }
  else
  {
    v42 = v28;
    v44[0] = v30[0];
  }
  v43 = v15;
  v29 = 0;
  LOBYTE(v30[0]) = 0;
  std::stringbuf::_M_sync();
  std::ios::init();
  v16 = sub_25C870(a1, (__int64)&v31, a3, a4, a5, a6, a7, a8);
  if ( v8 )
    sub_2BB620(v16);
  v31 = (char *)&`vtable for'std::istringstream + 24;
  v45[0] = (char *)&`vtable for'std::istringstream + 64;
  v33 = (char *)&`vtable for'std::stringbuf + 16;
  if ( v42 != v44 )
    operator delete(v42, v44[0] + 1LL);
  v33 = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale((std::locale *)v40);
  v31 = v22;
  *(char **)((char *)&v31 + *((_QWORD *)v22 - 3)) = v13;
  v32 = 0;
  v45[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v45);
  if ( v8 )
    byte_1C7EBA0 = 1;
  return v16;
}

