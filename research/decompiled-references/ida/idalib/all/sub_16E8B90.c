__int64 __fastcall sub_16E8B90(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        double a7,
        unsigned int a8,
        unsigned int a9,
        int a10,
        unsigned int a11,
        __int64 a12,
        __int64 a13)
{
  __int64 v13; // rbx
  unsigned __int64 *v16; // r15
  __int64 v17; // rsi
  unsigned int v18; // eax
  unsigned int v19; // r15d
  __int64 *v20; // rbx
  unsigned __int64 v21; // rdi
  unsigned int v22; // eax
  __int64 *v23; // rsi
  unsigned __int64 *v24; // r14
  unsigned __int64 v25; // rdi
  __int64 v26; // rax
  unsigned __int64 v27; // r14
  __int64 v28; // rax
  size_t v30; // rax
  char *v31; // rdx
  unsigned __int64 *v33; // [rsp+0h] [rbp-168h]
  _DWORD *v35; // [rsp+10h] [rbp-158h]
  int v37; // [rsp+18h] [rbp-150h]
  unsigned int v38; // [rsp+1Ch] [rbp-14Ch]
  int v39; // [rsp+20h] [rbp-148h] BYREF
  void *ptr; // [rsp+28h] [rbp-140h]
  __int64 v41; // [rsp+30h] [rbp-138h]
  _BYTE v42[40]; // [rsp+38h] [rbp-130h] BYREF
  __int64 v43; // [rsp+60h] [rbp-108h] BYREF
  char v44; // [rsp+68h] [rbp-100h]
  void *v45; // [rsp+78h] [rbp-F0h]
  __int64 v46; // [rsp+88h] [rbp-E0h] BYREF
  void *v47; // [rsp+A0h] [rbp-C8h] BYREF
  unsigned __int64 v48; // [rsp+A8h] [rbp-C0h]

  v13 = a1;
  if ( a6 >= a3 )
  {
    LODWORD(v13) = 0;
    sub_168B9F0((__int64)&v47, (__int64 *)(a1 + 8), a11, 0x1BC3u, 0);
    sub_15884C0((__int64)&v47, &a12);
    sub_15F7200(&v47);
    return (unsigned int)v13;
  }
  v16 = (unsigned __int64 *)(a2 + 8LL * a6);
  v35 = (_DWORD *)sub_BFD550(*v16);
  ptr = v42;
  v39 = -1;
  v41 = 0x400000000LL;
  LODWORD(v48) = 64;
  v47 = nullptr;
  BYTE4(v48) = 0;
  v17 = a5;
  v37 = sub_16E6C00(a1, a5, v35, a2, a3, a4, a7, a6, a8, a9, a10, 1u, a13, (__int64)&v39, (__int64)&v47, 0);
  if ( (unsigned int)v48 > 0x40 && v47 )
    operator delete[](v47);
  if ( v39 >= 0 )
  {
    v21 = *(_QWORD *)(a2 + 8LL * (a8 + v39));
    if ( v21 )
    {
      v22 = sub_EEB7E0(v21, a5, a7);
      v17 = v22;
      v38 = v22;
      if ( !(unsigned __int8)sub_16C5190(*(__int64 **)(v13 + 272), v22) )
      {
        v23 = (__int64 *)(v13 + 8);
        sub_168B9B0((__int64)&v47, v13 + 8, 7279);
        v33 = (unsigned __int64 *)((char *)ptr + 8 * (unsigned int)v41);
        if ( ptr != v33 )
        {
          v24 = (unsigned __int64 *)ptr;
          do
          {
            v25 = *v24++;
            v26 = sub_EEC8C0(v25, (__int64)v23, a7);
            v23 = &v43;
            v44 = 1;
            v43 = v26;
            sub_AEC610((__int64 *)&v47, &v43);
          }
          while ( v33 != v24 );
          v33 = (unsigned __int64 *)ptr;
        }
        v27 = *v33;
        v28 = sub_EEC8C0(*v33, (__int64)v23, a7);
        sub_16DCAE0(v13, 1, v27, (__int64)&v47, v38, 0, a7, v28, nullptr, 0);
        v17 = (__int64)v47;
        if ( v47 && v48 )
          sub_1580C40(v48, (unsigned __int64)v47);
      }
    }
  }
  if ( v37 )
  {
    LOBYTE(v13) = v37 == 2;
    goto LABEL_23;
  }
  if ( a9 == 3 )
  {
LABEL_12:
    LODWORD(v13) = 0;
    goto LABEL_23;
  }
  v18 = sub_EEB7E0(*v16, v17, a7);
  v19 = v18;
  if ( a9 == 2 )
  {
    if ( (unsigned __int8)sub_16C5190(*(__int64 **)(v13 + 272), v18) )
      goto LABEL_12;
    v20 = (__int64 *)(v13 + 8);
    if ( a3 != a8 )
      goto LABEL_10;
    sub_168B9F0((__int64)&v47, v20, v19, 0x1B10u, 0);
    v43 = sub_EEC8C0((unsigned __int64)v35, (__int64)v20, a7);
    sub_1587DB0((__int64)&v47, &v43);
    sub_15F7200(&v47);
    goto LABEL_34;
  }
  v20 = (__int64 *)(v13 + 8);
  if ( a8 != a3 )
  {
LABEL_10:
    sub_168B9F0((__int64)&v47, v20, v19, 0x1B0Fu, 0);
    v43 = sub_EEC8C0((unsigned __int64)v35, (__int64)v20, a7);
    sub_1587DB0((__int64)&v47, &v43);
LABEL_11:
    sub_15F7200(&v47);
    goto LABEL_12;
  }
  sub_168B9F0((__int64)&v47, v20, v18, 0x1B10u, 0);
  v43 = sub_EEC8C0((unsigned __int64)v35, (__int64)v20, a7);
  sub_1587DB0((__int64)&v47, &v43);
  sub_15F7200(&v47);
  if ( a9 > 9 )
    goto LABEL_12;
  if ( ((1LL << a9) & 0x262) != 0 )
  {
    sub_168B9F0((__int64)&v47, v20, v19, 0x1767u, 0);
    v30 = j__strlen("\"%s\", ");
    v31 = "\"%s\", ";
LABEL_35:
    sub_9EC740((__int64)&v43, v19, v31, v30, 0);
    sub_1589170((__int64)&v47, &v43);
    if ( v45 != &v46 )
      operator delete(v45);
    goto LABEL_11;
  }
  if ( ((1LL << a9) & 4) != 0 )
  {
LABEL_34:
    sub_168B9F0((__int64)&v47, v20, v19, 0x1767u, 0);
    v30 = j__strlen("@\"%@\", ");
    v31 = "@\"%@\", ";
    goto LABEL_35;
  }
  LODWORD(v13) = 0;
LABEL_23:
  if ( ptr != v42 )
    free(ptr);
  return (unsigned int)v13;
}
