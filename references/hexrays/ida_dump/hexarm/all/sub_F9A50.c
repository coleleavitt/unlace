__int64 __fastcall sub_F9A50(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // r13d
  __int64 v4; // rbp
  int v5; // eax
  unsigned __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // rbx
  __int64 v11; // rbx
  void *v12; // rax
  __int64 v13; // r15
  __int64 v14; // rdi
  __int64 v15; // r12
  __int64 v16; // rbp
  _QWORD *v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // rdi
  void *v20; // rax
  size_t na; // [rsp+8h] [rbp-110h]
  size_t n; // [rsp+8h] [rbp-110h]
  char v23[8]; // [rsp+18h] [rbp-100h] BYREF
  _QWORD v24[2]; // [rsp+20h] [rbp-F8h] BYREF
  void *src; // [rsp+30h] [rbp-E8h]
  __int128 v26; // [rsp+38h] [rbp-E0h]
  void *v27; // [rsp+48h] [rbp-D0h]
  __int128 v28; // [rsp+50h] [rbp-C8h]
  __int64 v29; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+68h] [rbp-B0h]
  __int64 v31; // [rsp+70h] [rbp-A8h] BYREF
  __int128 v32; // [rsp+78h] [rbp-A0h]
  __int64 v33; // [rsp+88h] [rbp-90h]
  __int64 v34; // [rsp+90h] [rbp-88h] BYREF
  __int64 v35; // [rsp+98h] [rbp-80h] BYREF
  __int128 v36; // [rsp+A0h] [rbp-78h]
  __int64 v37; // [rsp+B0h] [rbp-68h]
  __int128 v38; // [rsp+B8h] [rbp-60h]
  char v39; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v40; // [rsp+D8h] [rbp-40h]

  v3 = 1;
  v4 = a3;
  v40 = __readfsqword(0x28u);
  v5 = *(_DWORD *)(a1 + 72);
  if ( (unsigned int)(v5 - 208) > 0x2F )
  {
    v31 = 0;
    v33 = 0;
    v34 = 0;
    v35 = 0;
    v37 = 0;
    v32 = 0;
    v36 = 0;
    v38 = 0;
    if ( (v5 & 0xFFFFFF0F) != 0 || v5 == 192 )
    {
      HIDWORD(v33) = v5;
      LOBYTE(v5) = -64;
    }
    v39 = v5;
    v7 = a3 + 1;
    if ( a3 == -1 )
    {
      sub_32C5A0(v23, *(_QWORD *)(a1 + 1504), *(unsigned int *)(*(_QWORD *)(a1 + 1504) + 80LL));
    }
    else
    {
      v26 = 0;
      v30 = 0;
      LODWORD(v24[0]) = 0;
      v24[1] = 0;
      src = nullptr;
      v27 = nullptr;
      v29 = 0;
      v28 = 0;
      v8 = qvector_reserve(&v31, 0, a3 + 1, 80);
      v9 = v32;
      v31 = v8;
      v10 = v8;
      if ( (unsigned __int64)v32 < v7 )
      {
        while ( 1 )
        {
          v11 = 80 * v9 + v10;
          *(_DWORD *)v11 = 0;
          copy_argloc(v11, v24);
          *(_QWORD *)(v11 + 16) = 0;
          *(_OWORD *)(v11 + 24) = 0;
          if ( (_QWORD)v26 )
          {
            na = v26;
            v12 = (void *)qalloc_or_throw(v26);
            *(_QWORD *)(v11 + 16) = v12;
            *(_QWORD *)(v11 + 32) = na;
            memcpy(v12, src, na);
            *(_QWORD *)(v11 + 24) = na;
          }
          *(_QWORD *)(v11 + 40) = 0;
          *(_OWORD *)(v11 + 48) = 0;
          if ( (_QWORD)v28 )
          {
            n = v28;
            v20 = (void *)qalloc_or_throw(v28);
            *(_QWORD *)(v11 + 40) = v20;
            *(_QWORD *)(v11 + 56) = n;
            memcpy(v20, v27, n);
            *(_QWORD *)(v11 + 48) = n;
          }
          *(_QWORD *)(v11 + 64) = 0;
          copy_tinfo_t(v11 + 64, &v29);
          ++v9;
          *(_DWORD *)(v11 + 72) = v30;
          if ( v7 == v9 )
            break;
          v10 = v31;
        }
      }
      *(_QWORD *)&v32 = (int)v4 + 1;
      clear_tinfo_t(&v29);
      if ( v27 )
      {
        *(_QWORD *)&v28 = 0;
        qfree(v27);
      }
      if ( src )
      {
        *(_QWORD *)&v26 = 0;
        qfree(src);
      }
      cleanup_argloc(v24);
      sub_32C5A0(v23, *(_QWORD *)(a1 + 1504), *(unsigned int *)(*(_QWORD *)(a1 + 1504) + 80LL));
      if ( (int)v4 > 0 )
      {
        v13 = 0;
        do
        {
          copy_tinfo_t(v13 + v31 + 64, v23);
          v13 += 80;
        }
        while ( 80 * v4 != v13 );
      }
    }
    copy_tinfo_t(v31 + 80 * v4 + 64, a2);
    v24[0] = 1;
    copy_tinfo_t(&v34, v24);
    clear_tinfo_t(v24);
    v3 = calc_arglocs(&v31);
    clear_tinfo_t(v23);
    if ( v37 )
    {
      *(_QWORD *)&v38 = 0;
      qfree(v37);
    }
    cleanup_argloc(&v35);
    clear_tinfo_t(&v34);
    v14 = v31;
    if ( v31 )
    {
      v15 = v32;
      if ( (_QWORD)v32 )
      {
        v16 = 0;
        do
        {
          v17 = (_QWORD *)(v14 + 80 * v16);
          clear_tinfo_t(v17 + 8);
          v18 = v17[5];
          if ( v18 )
          {
            v17[6] = 0;
            qfree(v18);
          }
          v19 = v17[2];
          if ( v19 )
          {
            v17[3] = 0;
            qfree(v19);
          }
          ++v16;
          cleanup_argloc(v17);
          v14 = v31;
        }
        while ( v15 != v16 );
      }
      *(_QWORD *)&v32 = 0;
      qfree(v14);
    }
  }
  return v3;
}
