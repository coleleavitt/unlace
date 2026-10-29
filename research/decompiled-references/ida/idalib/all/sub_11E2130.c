void __fastcall sub_11E2130(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r14
  __int64 v7; // r15
  size_t v8; // rbx
  _BYTE *v9; // rcx
  _BYTE *v10; // r8
  int v11; // eax
  _QWORD *v12; // rax
  char *v13; // rcx
  unsigned __int64 v14; // r8
  __int64 v15; // r15
  char *v16; // rax
  void *v17; // r9
  __int64 v18; // r15
  unsigned __int64 v19; // rdi
  _BYTE *v20; // rax
  _QWORD *v21; // r10
  size_t v22; // rdx
  _BYTE *v23; // rax
  char *v24; // rax
  _BYTE *srca; // [rsp+8h] [rbp-120h]
  _BYTE *srcb; // [rsp+8h] [rbp-120h]
  char *src; // [rsp+8h] [rbp-120h]
  _QWORD *srcc; // [rsp+8h] [rbp-120h]
  _BYTE *srcd; // [rsp+8h] [rbp-120h]
  const void *v30; // [rsp+10h] [rbp-118h]
  unsigned __int64 v31; // [rsp+10h] [rbp-118h]
  char *v32; // [rsp+10h] [rbp-118h]
  char *v33; // [rsp+10h] [rbp-118h]
  unsigned __int64 v34; // [rsp+18h] [rbp-110h]
  unsigned __int64 v35; // [rsp+18h] [rbp-110h]
  void *s2; // [rsp+20h] [rbp-108h] BYREF
  size_t n; // [rsp+28h] [rbp-100h]
  __int64 v38; // [rsp+30h] [rbp-F8h] BYREF
  void *v39; // [rsp+40h] [rbp-E8h] BYREF
  char *v40; // [rsp+48h] [rbp-E0h]
  _QWORD v41[2]; // [rsp+50h] [rbp-D8h] BYREF
  void *v42[2]; // [rsp+60h] [rbp-C8h] BYREF
  _BYTE v43[16]; // [rsp+70h] [rbp-B8h] BYREF
  void *v44[2]; // [rsp+80h] [rbp-A8h] BYREF
  _BYTE v45[16]; // [rsp+90h] [rbp-98h] BYREF
  void *v46[2]; // [rsp+A0h] [rbp-88h] BYREF
  _BYTE v47[16]; // [rsp+B0h] [rbp-78h] BYREF
  void *v48[2]; // [rsp+C0h] [rbp-68h] BYREF
  char v49[16]; // [rsp+D0h] [rbp-58h] BYREF
  __int16 v50; // [rsp+E0h] [rbp-48h]

  v6 = (__int64)(a1 + 78);
  sub_121FCF0(a1, a2, a3, a4);
  *a1 = off_2C38D78;
  sub_122CEF0(a1 + 298, a3, a4);
  sub_112B6F0(&s2, (__int64)a1);
  sub_12202B0(a1, a1 + 144);
  v48[0] = v49;
  strcpy(v49, "lib");
  v48[1] = &dword_0 + 3;
  sub_1219730(a1, a2, &s2, v48, a1 + 78);
  if ( v48[0] != v49 )
    operator delete(v48[0]);
  v7 = *(_QWORD *)(a2 + 112);
  v8 = n;
  v9 = *(_BYTE **)(a2 + 104);
  v10 = s2;
  if ( v7 >= n )
  {
    if ( n )
    {
      srca = s2;
      v30 = *(const void **)(a2 + 104);
      v11 = memcmp(v30, s2, n);
      v10 = srca;
      if ( v11 )
        goto LABEL_4;
      v9 = v30;
      v39 = v41;
    }
    else
    {
      v12 = v41;
      v39 = v41;
      if ( !v9 )
      {
        if ( v7 )
          std::__throw_logic_error("basic_string::_M_construct null not valid");
        goto LABEL_22;
      }
    }
    if ( (unsigned __int64)v7 > 0xF )
    {
      if ( v7 < 0 )
        goto LABEL_51;
      srcb = v9;
      v12 = (_QWORD *)operator new(v7 + 1);
      v41[0] = v7;
      v9 = srcb;
      v39 = v12;
    }
    else
    {
      if ( v7 == 1 )
      {
        LOBYTE(v41[0]) = *v9;
        v12 = v39;
LABEL_22:
        v40 = (char *)v7;
        *((_BYTE *)v12 + v7) = 0;
        v13 = v40;
        if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - (_QWORD)v40) <= 6 )
          goto LABEL_50;
        v14 = (unsigned __int64)(v40 + 7);
        if ( v39 == v41 )
        {
          v15 = 15;
          if ( v14 <= 0xF )
            goto LABEL_25;
        }
        else
        {
          v15 = v41[0];
          if ( v14 <= v41[0] )
          {
LABEL_25:
            v16 = (char *)v39 + (_QWORD)v40;
            *(_DWORD *)v16 = 791555631;
            *((_WORD *)v16 + 2) = 26988;
            v16[6] = 98;
            v17 = v39;
LABEL_26:
            v40 = (char *)v14;
            v13[(_QWORD)v17 + 7] = 0;
            v50 = 260;
            v48[0] = &v39;
            sub_11C52D0(a2, (__int64)v48, v6);
            if ( v39 != v41 )
              operator delete(v39);
            v10 = s2;
            v8 = n;
            goto LABEL_4;
          }
        }
        if ( (v14 & 0x8000000000000000LL) == 0LL )
        {
          v18 = 2 * v15;
          if ( v14 < v18 )
          {
            v19 = v18 + 1;
            if ( v18 < 0 )
            {
              v19 = 0x8000000000000000LL;
              v18 = 0x7FFFFFFFFFFFFFFFLL;
            }
          }
          else
          {
            v19 = (unsigned __int64)(v40 + 8);
            v18 = (__int64)(v40 + 7);
          }
          v31 = (unsigned __int64)(v40 + 7);
          src = v40;
          v20 = (_BYTE *)operator new(v19);
          v13 = src;
          v21 = v39;
          v17 = v20;
          v14 = v31;
          if ( src )
          {
            if ( src == (_BYTE *)&dword_0 + 1 )
            {
              *v20 = *(_BYTE *)v39;
            }
            else
            {
              v22 = (size_t)src;
              v34 = v31;
              v32 = src;
              srcc = v39;
              v23 = memcpy(v20, v39, v22);
              v14 = v34;
              v13 = v32;
              v21 = srcc;
              v17 = v23;
            }
          }
          v24 = &v13[(_QWORD)v17];
          *(_DWORD *)v24 = 791555631;
          *((_WORD *)v24 + 2) = 26988;
          v24[6] = 98;
          if ( v21 != v41 )
          {
            v35 = v14;
            v33 = v13;
            srcd = v17;
            operator delete(v21);
            v14 = v35;
            v13 = v33;
            v17 = srcd;
          }
          v39 = v17;
          v41[0] = v18;
          goto LABEL_26;
        }
LABEL_51:
        std::__throw_length_error("basic_string::_M_create");
      }
      v12 = v41;
      if ( !v7 )
        goto LABEL_22;
    }
    memcpy(v12, v9, v7);
    v12 = v39;
    goto LABEL_22;
  }
LABEL_4:
  v42[0] = v43;
  sub_11E2070(v42, v10, (__int64)&v10[v8]);
  if ( 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)v42[1] <= 3 )
    goto LABEL_50;
  sub_9EE560(v42, "/lib", 4u);
  v50 = 260;
  v48[0] = v42;
  sub_11C52D0(a2, (__int64)v48, v6);
  if ( v42[0] != v43 )
    operator delete(v42[0]);
  v44[0] = v45;
  sub_11E2070(v44, s2, (__int64)s2 + n);
  if ( 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)v44[1] <= 7 )
    goto LABEL_50;
  sub_9EE560(v44, "/usr/lib", 8u);
  v50 = 260;
  v48[0] = v44;
  sub_11C52D0(a2, (__int64)v48, v6);
  if ( v44[0] != v45 )
    operator delete(v44[0]);
  v46[0] = v47;
  sub_11E2070(v46, s2, (__int64)s2 + n);
  if ( 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)v46[1] <= 0xE )
LABEL_50:
    std::__throw_length_error("basic_string::append");
  sub_9EE560(v46, "/usr/lib/w32api", 0xFu);
  v50 = 260;
  v48[0] = v46;
  sub_11C52D0(a2, (__int64)v48, v6);
  if ( v46[0] != v47 )
    operator delete(v46[0]);
  if ( s2 != &v38 )
    operator delete(s2);
}
