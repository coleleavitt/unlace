char __fastcall sub_C1B860(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  char v10; // al
  int v11; // edx
  void *v12; // rcx
  void **v13; // rsi
  char result; // al
  int v15; // ebp
  void *v16; // r12
  void *v17; // r13
  __int64 v18; // r13
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned int v22; // eax
  unsigned __int8 v23; // cl
  void *v24; // r13
  size_t v25; // rbx
  _QWORD *v26; // rax
  void *v27; // rax
  void **v28; // rbp
  unsigned __int64 v29; // rax
  void **v30; // r13
  void **v31; // rbx
  void **v32; // rdi
  void **v33; // rdi
  void **v34; // rbx
  void **v35; // r13
  __int64 v36; // rdx
  char v38; // [rsp+0h] [rbp-118h]
  char v39; // [rsp+0h] [rbp-118h]
  char v40; // [rsp+13h] [rbp-105h]
  char v41; // [rsp+13h] [rbp-105h]
  int v42; // [rsp+14h] [rbp-104h]
  void *v43; // [rsp+18h] [rbp-100h]
  void *v44; // [rsp+20h] [rbp-F8h] BYREF
  unsigned int v45; // [rsp+28h] [rbp-F0h]
  char v46; // [rsp+2Ch] [rbp-ECh]
  void *v47; // [rsp+30h] [rbp-E8h] BYREF
  size_t v48; // [rsp+38h] [rbp-E0h]
  _QWORD v49[2]; // [rsp+40h] [rbp-D8h] BYREF
  void *ptr; // [rsp+50h] [rbp-C8h] BYREF
  size_t n[2]; // [rsp+58h] [rbp-C0h]
  _BYTE v52[40]; // [rsp+68h] [rbp-B0h] BYREF
  void *v53; // [rsp+90h] [rbp-88h] BYREF
  unsigned __int64 v54; // [rsp+98h] [rbp-80h]
  __int64 v55; // [rsp+A0h] [rbp-78h]
  void *v56; // [rsp+B0h] [rbp-68h]
  __int64 v57; // [rsp+C0h] [rbp-58h] BYREF
  __int16 v58; // [rsp+D0h] [rbp-48h]

  if ( !*(_BYTE *)(a3 + 12) )
  {
    if ( *(_BYTE *)(a4 + 12) )
    {
      sub_2206CD0(&v53, a4, a5);
      BYTE4(n[0]) = 1;
    }
    else
    {
      sub_2206B70(&v53, a4, a5);
      BYTE4(n[0]) = 0;
    }
    LODWORD(n[0]) = v54;
    ptr = v53;
    if ( *(_BYTE *)(a3 + 12) )
    {
      sub_2206CD0(&v53, a3, a5);
      BYTE4(v48) = 1;
    }
    else
    {
      sub_2206B70(&v53, a3, a5);
      BYTE4(v48) = 0;
    }
    LODWORD(v48) = v54;
    v47 = v53;
    sub_2209CE0(&v53, &v47, &ptr);
    v46 = 0;
    v45 = v54;
    v44 = v53;
    if ( (unsigned int)v48 > 0x40 && v47 )
      operator delete[](v47);
    if ( LODWORD(n[0]) > 0x40 && ptr )
      operator delete[](ptr);
    v40 = v46;
    sub_2206A40(&v53, &v44);
    v10 = v40;
    v11 = v54;
    v12 = v53;
    if ( *(_DWORD *)(a6 + 8) > 0x40u && *(_QWORD *)a6 )
    {
      v43 = v53;
      v42 = v54;
      operator delete[](*(void **)a6);
      v12 = v43;
      v11 = v42;
      v10 = v40;
    }
    *(_DWORD *)(a6 + 8) = v11;
    v13 = (void **)a6;
    *(_QWORD *)a6 = v12;
    *(_BYTE *)(a6 + 12) = v10;
    sub_2206B70(&v53, a6, a5);
    BYTE4(n[0]) = 0;
    LODWORD(n[0]) = v54;
    ptr = v53;
    v17 = v53;
    if ( (unsigned int)v54 > 0x40 )
    {
      v13 = &v44;
      result = sub_2205D70(&ptr, &v44);
      if ( v17 )
      {
        v41 = result;
        operator delete[](v17);
        result = v41;
      }
    }
    else
    {
      result = v53 == v44;
    }
    if ( result )
      goto LABEL_21;
    if ( !*(_BYTE *)(a1 + 915) )
    {
LABEL_20:
      result = sub_C1B140(a1, a2, (__int64)&v44, *(_QWORD *)(a2 + 8));
LABEL_21:
      if ( v45 > 0x40 )
      {
        if ( v44 )
        {
          v38 = result;
          operator delete[](v44);
          return v38;
        }
      }
      return result;
    }
    v18 = sub_A62AC0(*(_QWORD *)(a1 + 16));
    v22 = sub_C00A40(a2, (__int64)v13, v19, v20, v21);
    sub_FC70B0(&v53, v18, v22, 2561);
    ptr = v52;
    v23 = *(_BYTE *)(a6 + 12) ^ 1;
    *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_23A8CF0);
    sub_220BA90(a6, (unsigned int)&ptr, 10, v23, 0, 1, 1);
    v24 = ptr;
    v25 = n[0];
    v47 = v49;
    if ( (char *)ptr + n[0] && !ptr )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    if ( n[0] > 0xF )
    {
      if ( (n[0] & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      v26 = (_QWORD *)operator new(n[0] + 1);
      v49[0] = v25;
      v47 = v26;
    }
    else
    {
      if ( n[0] == 1 )
      {
        LOBYTE(v49[0]) = *(_BYTE *)ptr;
        v26 = v49;
        goto LABEL_38;
      }
      v26 = v49;
      if ( !n[0] )
      {
LABEL_38:
        v48 = v25;
        *((_BYTE *)v26 + v25) = 0;
        if ( ptr != v52 )
          free(ptr);
        sub_AEC220((unsigned __int8 **)&v53, v47, v48);
        sub_AE9DF0((unsigned __int8 **)&v53, *(_QWORD *)(a2 + 8), 8u);
        v27 = (void *)sub_EEC8C0(a2);
        LOBYTE(n[0]) = 1;
        ptr = v27;
        sub_AEC610((__int64 *)&v53, (__int64 *)&ptr);
        if ( v47 != v49 )
          operator delete(v47);
        if ( (_BYTE)v58 )
        {
          sub_FC7790(v55, &v53, HIBYTE(v58));
          v55 = 0;
          v58 = 0;
        }
        if ( v56 != &v57 )
          operator delete(v56);
        v28 = (void **)v53;
        if ( v53 )
        {
          v29 = v54;
          if ( v54 )
          {
            if ( (unsigned __int64)v53 < v54 || (unsigned __int64)v53 > v54 + 14848 )
            {
              v30 = *((void ***)v53 + 66);
              v31 = &v30[8 * (unsigned __int64)*((unsigned int *)v53 + 134)];
              if ( v30 != v31 )
              {
                do
                {
                  while ( 1 )
                  {
                    v31 -= 8;
                    v32 = (void **)v31[3];
                    if ( v32 == v31 + 5 )
                      break;
                    operator delete(v32);
                    if ( v30 == v31 )
                      goto LABEL_52;
                  }
                }
                while ( v30 != v31 );
LABEL_52:
                v31 = (void **)v28[66];
              }
              if ( v31 != v28 + 68 )
                free(v31);
              v33 = (void **)v28[52];
              if ( v33 != v28 + 54 )
                free(v33);
              v34 = v28 + 48;
              v35 = v28 + 8;
              do
              {
                while ( *v34 != v34 + 2 )
                {
                  operator delete(*v34);
                  v34 -= 4;
                  if ( v35 == v34 )
                    goto LABEL_60;
                }
                v34 -= 4;
              }
              while ( v35 != v34 );
LABEL_60:
              operator delete(v28, 0x3A0u);
            }
            else
            {
              v36 = *(unsigned int *)(v54 + 14976);
              *(_DWORD *)(v54 + 14976) = v36 + 1;
              *(_QWORD *)(v29 + 8 * v36 + 14848) = v28;
            }
          }
        }
        goto LABEL_20;
      }
    }
    memcpy(v26, v24, v25);
    v26 = v47;
    goto LABEL_38;
  }
  v39 = *(_BYTE *)(a3 + 12);
  sub_2209CE0(&v53, a3, a4);
  v15 = v54;
  v16 = v53;
  result = v39;
  if ( *(_DWORD *)(a6 + 8) > 0x40u && *(_QWORD *)a6 )
  {
    operator delete[](*(void **)a6);
    result = v39;
  }
  *(_QWORD *)a6 = v16;
  *(_DWORD *)(a6 + 8) = v15;
  *(_BYTE *)(a6 + 12) = 1;
  return result;
}
