__int64 __fastcall sub_7EF130(__int64 *a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned int v4; // r8d
  __int64 v7; // r14
  unsigned __int64 v8; // r15
  __int64 v9; // r13
  __int64 v10; // r14
  unsigned __int64 v11; // rax
  unsigned int v12; // eax
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rax
  unsigned __int8 v15; // r8
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // rax
  _QWORD *v18; // rcx
  unsigned __int8 v19; // r8
  unsigned __int64 v20; // rax
  __int64 v21; // r15
  unsigned __int64 v22; // r13
  __int64 v23; // r14
  __int64 v24; // r14
  unsigned __int64 v25; // r15
  unsigned __int64 v26; // rdi
  unsigned __int8 v27; // [rsp+8h] [rbp-100h]
  unsigned __int8 v28; // [rsp+8h] [rbp-100h]
  unsigned __int8 v29; // [rsp+8h] [rbp-100h]
  size_t n; // [rsp+10h] [rbp-F8h]
  unsigned int na; // [rsp+10h] [rbp-F8h]
  unsigned __int8 nc; // [rsp+10h] [rbp-F8h]
  size_t nb; // [rsp+10h] [rbp-F8h]
  unsigned __int8 v34; // [rsp+18h] [rbp-F0h]
  unsigned int v35; // [rsp+34h] [rbp-D4h] BYREF
  unsigned __int64 v36; // [rsp+38h] [rbp-D0h] BYREF
  void *ptr; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v38; // [rsp+48h] [rbp-C0h]
  int v39; // [rsp+58h] [rbp-B0h]
  void *src; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v41; // [rsp+68h] [rbp-A0h]
  int v42; // [rsp+78h] [rbp-90h]
  unsigned __int64 v43; // [rsp+80h] [rbp-88h] BYREF
  __int128 v44; // [rsp+88h] [rbp-80h]
  int v45; // [rsp+98h] [rbp-70h]
  void *v46; // [rsp+A0h] [rbp-68h]
  __int128 v47; // [rsp+A8h] [rbp-60h]
  int v48; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v49; // [rsp+C8h] [rbp-40h]

  v49 = __readfsqword(0x28u);
  v36 = *a2;
  v3 = a3 + v36;
  if ( !__CFADD__(a3, v36) && sub_7E30F0(&ptr, &v36) )
  {
    v7 = (unsigned int)ptr;
    sub_7ECBA0(a1 + 2, (unsigned int)ptr);
    if ( (_DWORD)v7 )
    {
      v8 = v36;
      v9 = 0;
      n = 4 * v7;
      do
      {
        v10 = a1[2];
        v43 = v8;
        *(_DWORD *)(v9 + v10) = unpack_dd(&v43);
        v11 = v8;
        v8 = v43;
        v36 = v43;
        if ( v11 >= v43 )
          return 0;
        v9 += 4;
      }
      while ( v9 != n );
    }
    LOBYTE(v12) = sub_7E30F0(&v35, &v36);
    v4 = v12;
    if ( (_BYTE)v12 )
    {
      v13 = v35;
      na = v35;
      if ( v35 != a1[6] )
      {
        v34 = v12;
        v39 = 0;
        v43 = 0;
        ptr = nullptr;
        src = nullptr;
        v44 = 0;
        v38 = 0;
        v41 = 0;
        sub_7DCF50(&src, (__int64)&v43);
        v14 = a1[6];
        v42 = 0;
        v15 = v34;
        v16 = v14;
        if ( v13 < v14 )
        {
          v25 = v13;
          do
          {
            v26 = v25++;
            v28 = v15;
            sub_7D4880(a1[5] + (v26 << 6));
            v15 = v28;
          }
          while ( v25 < v16 );
          a1[6] = v13;
        }
        else if ( v14 < v13 )
        {
          v17 = a1[5];
          if ( (unsigned __int64)&ptr < v17 || (unsigned __int64)&ptr >= (a1[7] << 6) + v17 )
          {
            sub_7EEFF0(a1 + 5, v13, (__int64)&ptr);
            sub_7D4880((__int64)&ptr);
            v20 = v36;
            LOBYTE(v4) = v34;
          }
          else
          {
            v43 = 0;
            v44 = 0;
            sub_7DCEA0(&v43, (__int64)&ptr);
            v46 = nullptr;
            v18 = a1 + 5;
            v47 = 0;
            v45 = v39;
            v19 = v34;
            if ( (_QWORD)v41 )
            {
              nb = v41;
              v46 = (void *)qalloc_or_throw(v41);
              *((_QWORD *)&v47 + 1) = nb;
              memcpy(v46, src, nb);
              v19 = v34;
              v18 = a1 + 5;
              *(_QWORD *)&v47 = nb;
            }
            nc = v19;
            v48 = 0;
            sub_7EEFF0(v18, v13, (__int64)&v43);
            sub_7D4880((__int64)&v43);
            sub_7D4880((__int64)&ptr);
            v20 = v36;
            LOBYTE(v4) = nc;
          }
LABEL_18:
          v21 = 0;
          v22 = v13 << 6;
          while ( 1 )
          {
            v27 = v4;
            v23 = a1[5];
            v43 = v20;
            if ( v3 < v20 )
              return 0;
            v24 = v21 + v23;
            if ( !(unsigned __int8)sub_7E5590(v24, (const void **)&v43, v3 - v20)
              || !sub_7E30F0((_DWORD *)(v24 + 56), &v43) )
            {
              return 0;
            }
            v20 = v43;
            v21 += 64;
            v4 = v27;
            v36 = v43;
            if ( v22 == v21 )
              goto LABEL_23;
          }
        }
        v29 = v15;
        sub_7D4880((__int64)&ptr);
        v4 = v29;
      }
      v20 = v36;
      if ( !na )
      {
LABEL_23:
        *a2 = v20;
        return v4;
      }
      goto LABEL_18;
    }
  }
  return 0;
}
