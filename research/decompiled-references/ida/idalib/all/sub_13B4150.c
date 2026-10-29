_QWORD *__fastcall sub_13B4150(
        _QWORD *a1,
        char a2,
        int a3,
        int a4,
        _BYTE *a5,
        __int64 a6,
        char a7,
        char a8,
        _BYTE *a9,
        unsigned __int64 a10,
        int a11,
        int a12)
{
  __int64 v12; // r14
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  size_t v15; // r15
  size_t v16; // r14
  size_t v17; // r10
  unsigned __int64 v18; // rcx
  _BYTE *v19; // rdi
  size_t v20; // r15
  unsigned __int64 v21; // rax
  _BYTE *v22; // rdi
  size_t v23; // r15
  size_t v24; // r10
  unsigned __int64 v25; // rcx
  size_t v26; // r9
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // r15
  unsigned __int64 v30; // rdx
  _BYTE *v31; // rdi
  size_t v32; // r14
  unsigned __int64 v33; // rax
  _BYTE *v34; // rdi
  void *v35; // rbp
  size_t v36; // rbx
  __int64 v37; // r12
  _QWORD *v38; // rdi
  __int64 v40; // rbx
  size_t v46; // [rsp+48h] [rbp-90h]
  size_t v47; // [rsp+48h] [rbp-90h]
  void *src; // [rsp+50h] [rbp-88h] BYREF
  unsigned __int64 v49; // [rsp+58h] [rbp-80h]
  void *v50; // [rsp+60h] [rbp-78h] BYREF
  size_t v51; // [rsp+68h] [rbp-70h]
  _QWORD v52[2]; // [rsp+70h] [rbp-68h] BYREF
  void *v53; // [rsp+80h] [rbp-58h] BYREF
  size_t n; // [rsp+88h] [rbp-50h]
  char v55; // [rsp+90h] [rbp-48h] BYREF

  v12 = a10;
  if ( a2 )
  {
    LOBYTE(v52[0]) = 0;
    v13 = a10;
    src = a9;
    v50 = v52;
    v51 = 0;
    v49 = a10;
    if ( a10 )
    {
      while ( 1 )
      {
        if ( v13 > 1 && *(_WORD *)src == 31611 )
        {
          v49 = v13 - 2;
          src = (char *)src + 2;
          v14 = sub_2246AB0(&src, "}}", 2, 0);
          v15 = v51;
          v16 = v14;
          if ( v51 == 0x7FFFFFFFFFFFFFFFLL )
            goto LABEL_57;
          v17 = v51 + 1;
          v18 = v50 == v52 ? 15LL : v52[0];
          if ( v17 > v18 )
          {
            v46 = v51 + 1;
            sub_998B30((__int64)&v50, v51, 0, "(", 1u);
            v17 = v46;
          }
          else
          {
            *((_BYTE *)v50 + v51) = 40;
          }
          v51 = v17;
          *((_BYTE *)v50 + v15 + 1) = 0;
          if ( v16 > 0x7FFFFFFFFFFFFFFFLL - v51 )
            goto LABEL_57;
          v19 = v50;
          v20 = v16 + v51;
          v21 = v50 == v52 ? 15LL : v52[0];
          if ( v20 > v21 )
          {
            sub_998B30((__int64)&v50, v51, 0, src, v16);
            v19 = v50;
          }
          else if ( v16 )
          {
            v22 = (char *)v50 + v51;
            if ( v16 == 1 )
              *v22 = *(_BYTE *)src;
            else
              memcpy(v22, src, v16);
            v19 = v50;
          }
          v51 = v20;
          v19[v20] = 0;
          v23 = v51;
          if ( v51 == 0x7FFFFFFFFFFFFFFFLL )
LABEL_57:
            std::__throw_length_error("basic_string::append");
          v24 = v51 + 1;
          if ( v50 == v52 )
            v25 = 15;
          else
            v25 = v52[0];
          if ( v24 > v25 )
          {
            v47 = v51 + 1;
            sub_998B30((__int64)&v50, v51, 0, ")", 1u);
            v24 = v47;
          }
          else
          {
            *((_BYTE *)v50 + v51) = 41;
          }
          v51 = v24;
          v26 = v16 + 2;
          *((_BYTE *)v50 + v23 + 1) = 0;
          v27 = v49;
          if ( v16 + 2 > v49 )
            goto LABEL_41;
          v13 = v49 - v26;
          src = (char *)src + v26;
          v49 -= v26;
        }
        else
        {
          v28 = sub_2246AB0(&src, "{{", 2, 0);
          v29 = v28;
          if ( v28 == -1 )
          {
            v29 = v49;
            v30 = v49;
          }
          else
          {
            v30 = v28;
            if ( v49 <= v28 )
              v30 = v49;
          }
          sub_2233B20(&v53, src, v30);
          v31 = v50;
          v32 = n + v51;
          if ( v50 == v52 )
            v33 = 15;
          else
            v33 = v52[0];
          if ( v32 > v33 )
          {
            sub_998B30((__int64)&v50, v51, 0, v53, n);
            v31 = v50;
          }
          else if ( n )
          {
            v34 = (char *)v50 + v51;
            if ( n == 1 )
              *v34 = *(_BYTE *)v53;
            else
              memcpy(v34, v53, n);
            v31 = v50;
          }
          v51 = v32;
          v31[v32] = 0;
          if ( v53 != &v55 )
            operator delete(v53);
          v27 = v49;
          if ( v29 > v49 )
          {
LABEL_41:
            src = (char *)src + v27;
            v12 = a10;
            v49 = 0;
            break;
          }
          v13 = v49 - v29;
          src = (char *)src + v29;
          v49 -= v29;
        }
        if ( !v13 )
        {
          v12 = a10;
          break;
        }
      }
    }
    v35 = v50;
    v36 = v51;
    v37 = operator new(0x70u);
    *(_QWORD *)v37 = &unk_2C44428;
    *(_DWORD *)(v37 + 8) = a3;
    *(_DWORD *)(v37 + 12) = a4;
    *(_QWORD *)(v37 + 16) = v37 + 32;
    sub_13B3D00((_QWORD *)(v37 + 16), a5, (__int64)&a5[a6]);
    *(_QWORD *)(v37 + 48) = v37 + 64;
    sub_13B3D00((_QWORD *)(v37 + 48), a9, (__int64)&a9[v12]);
    *(_BYTE *)(v37 + 89) = a7;
    *(_DWORD *)(v37 + 80) = a11;
    *(_DWORD *)(v37 + 84) = a12;
    *(_BYTE *)(v37 + 88) = a7 | a8;
    *(_QWORD *)v37 = &off_2BB2708;
    sub_2233940(v37 + 96, v35, v36, 0);
    v38 = v50;
    *a1 = v37;
    if ( v38 != v52 )
      operator delete(v38);
  }
  else
  {
    v40 = operator new(0x60u);
    *(_QWORD *)v40 = &unk_2C44428;
    *(_DWORD *)(v40 + 8) = a3;
    *(_DWORD *)(v40 + 12) = a4;
    *(_QWORD *)(v40 + 16) = v40 + 32;
    sub_13B3D00((_QWORD *)(v40 + 16), a5, (__int64)&a5[a6]);
    *(_QWORD *)(v40 + 48) = v40 + 64;
    sub_13B3D00((_QWORD *)(v40 + 48), a9, (__int64)&a9[a10]);
    *(_DWORD *)(v40 + 80) = a11;
    *(_BYTE *)(v40 + 89) = a7;
    *(_DWORD *)(v40 + 84) = a12;
    *(_BYTE *)(v40 + 88) = a7 | a8;
    *(_QWORD *)v40 = &off_2BB26D8;
    *a1 = v40;
  }
  return a1;
}
