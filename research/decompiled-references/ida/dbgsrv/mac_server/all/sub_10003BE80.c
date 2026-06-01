/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003BE80
// Address: 0x000000010003BE80

//----- (000000010003BE80) ----------------------------------------------------
__int64 __fastcall sub_10003BE80(unsigned __int8 *a1, char *a2, __int64 a3, unsigned __int64 a4, void **a5)
{
  unsigned int v5; // ebx
  __int64 idc_class; // r15
  __int64 v9; // r12
  size_t v10; // rax
  size_t v11; // rbx
  void *v12; // rdi
  unsigned int v13; // r15d
  _QWORD *v14; // rax
  unsigned __int8 *v15; // r14
  __int64 v16; // rdi
  unsigned __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rdx
  int i; // ebx
  int v22; // eax
  unsigned __int8 *v23; // rdi
  __int64 v24; // r15
  unsigned __int8 *v25; // r12
  __int64 v26; // r15
  int v27; // eax
  void *v28; // rdi
  const char *v29; // rax
  const char *v30; // rbx
  size_t v31; // rax
  size_t v32; // r14
  unsigned __int64 v33; // r15
  void *v34; // rax
  int v36; // [rsp+14h] [rbp-10Ch]
  size_t __len; // [rsp+28h] [rbp-F8h]
  size_t __lena; // [rsp+28h] [rbp-F8h]
  __int128 v41; // [rsp+30h] [rbp-F0h] BYREF
  __int64 v42; // [rsp+40h] [rbp-E0h]
  unsigned __int8 v43[8]; // [rsp+D0h] [rbp-50h] BYREF
  void *__p[2]; // [rsp+D8h] [rbp-48h]
  __int64 v45; // [rsp+E8h] [rbp-38h]

  if ( a2 )
  {
    idc_class = find_idc_class(a2);
    if ( !idc_class )
    {
      set_error_string(0, a2);
      v9 = (__int64)a5;
LABEL_46:
      set_qerrno();
      sub_10003BC00(a1);
      if ( v9 )
      {
        v29 = (const char *)j__qstrerror(0xFFFFFFFFLL);
        v30 = v29;
        if ( v29 && (v31 = strlen(v29)) != 0 )
        {
          v32 = v31;
          v33 = v31 + 1;
          v34 = *(void **)v9;
          if ( *(_QWORD *)(v9 + 16) < v33 )
          {
            v34 = qvector_reserve(v9, *(void **)v9, v33, 1u);
            *(_QWORD *)v9 = v34;
          }
          *(_QWORD *)(v9 + 8) = v33;
          memmove(v34, v30, v32);
          *(_BYTE *)(*(_QWORD *)v9 + v32) = 0;
        }
        else
        {
          *(_QWORD *)(v9 + 8) = 0;
        }
      }
      v5 = 0;
      goto LABEL_54;
    }
  }
  else
  {
    idc_class = 0;
  }
  v43[0] = 2;
  *(_OWORD *)__p = 0;
  v45 = 0;
  v36 = idcv_object(v43, idc_class);
  if ( !v36 )
  {
    if ( !idc_class )
      goto LABEL_24;
    v41 = 0;
    v42 = 0;
    if ( a2 )
    {
      v10 = strlen(a2);
      __len = v10;
      v11 = v10 + 1;
      if ( v10 == -1 )
      {
        v12 = nullptr;
      }
      else
      {
        v12 = qvector_reserve((__int64)&v41, nullptr, v10 + 1, 1u);
        *(_QWORD *)&v41 = v12;
      }
      *((_QWORD *)&v41 + 1) = v11;
      v5 = __len;
      memmove(v12, a2, __len);
      *(_BYTE *)(v41 + __len) = 0;
    }
    v13 = sub_10003B410(idc_class, (__int64)&v41);
    if ( (_QWORD)v41 )
    {
      *((_QWORD *)&v41 + 1) = 0;
      qfree((void *)v41);
    }
    if ( v13 == -1 )
    {
LABEL_24:
      LOBYTE(v5) = 1;
      move_idcv(a1, v43);
    }
    else
    {
      __lena = a4 + 1;
      if ( a4 + 1 >= 0x800000000000000LL )
      {
        v15 = (unsigned __int8 *)qalloc_or_throw(0x7FFFFFFFFFFFFFFFLL);
      }
      else
      {
        v14 = operator new[]((32 * (a4 + 1)) | 8);
        v15 = (unsigned __int8 *)(v14 + 1);
        *v14 = __lena;
        if ( a4 != -1 )
        {
          v16 = 8;
          if ( (a4 & 0x7FFFFFFFFFFFFFFLL) >= 3 )
          {
            v17 = ((a4 & 0x7FFFFFFFFFFFFFFLL) + 1) & 0xFFFFFFFFFFFFFFFCLL;
            v18 = 1;
            do
            {
              LOBYTE(v14[v18]) = 2;
              *(_OWORD *)&v14[v18 + 1] = 0;
              v14[v18 + 3] = 0;
              LOBYTE(v14[v18 + 4]) = 2;
              *(_OWORD *)&v14[v18 + 5] = 0;
              v14[v18 + 7] = 0;
              LOBYTE(v14[v18 + 8]) = 2;
              *(_OWORD *)&v14[v18 + 9] = 0;
              v14[v18 + 11] = 0;
              LOBYTE(v14[v18 + 12]) = 2;
              v16 = v18 * 8 + 128;
              *(_OWORD *)&v14[v18 + 13] = 0;
              v14[v18 + 15] = 0;
              v18 += 16;
              v17 -= 4LL;
            }
            while ( v17 );
          }
          if ( (((_BYTE)a4 + 1) & 3) != 0 )
          {
            v19 = (__int64)v14 + v16 + 8;
            v20 = 0;
            do
            {
              *(_BYTE *)(v19 + v20 - 8) = 2;
              *(_OWORD *)(v19 + v20) = 0;
              *(_QWORD *)(v19 + v20 + 16) = 0;
              v20 += 32;
            }
            while ( 32 * (((_BYTE)a4 + 1) & 3) != v20 );
          }
        }
      }
      copy_idcv(v15, v43);
      for ( i = 1; ; ++i )
      {
        v22 = i - 1;
        if ( i - 1 >= a4 )
          break;
        v23 = &v15[32 * i];
        copy_idcv(v23, (unsigned __int8 *)(a3 + 32LL * v22));
      }
      sub_10003E3D0((__int64)&v41, 0, 0);
      v5 = sub_10003C370((__int64)&v41, nullptr, v13, __lena, v15, a1, a5);
      if ( v15 )
      {
        v24 = *((_QWORD *)v15 - 1);
        if ( v24 )
        {
          v25 = v15 - 32;
          v26 = 32 * v24;
          do
          {
            v27 = v25[v26];
            if ( v27 == 5 )
            {
              sub_1000380B0(*(unsigned __int8 ***)&v25[v26 + 8], &v25[v26]);
            }
            else if ( v27 == 7 )
            {
              v28 = *(void **)&v25[v26 + 8];
              if ( v28 )
              {
                *(_QWORD *)&v25[v26 + 16] = 0;
                qfree(v28);
                *(_QWORD *)&v25[v26 + 24] = 0;
              }
            }
            v25[v26] = 2;
            *(_QWORD *)&v25[v26 + 8] = 0;
            v26 -= 32;
          }
          while ( v26 );
        }
        operator delete[](v15 - 8);
      }
      sub_10003E5C0((__int64)&v41);
    }
  }
  if ( v43[0] == 5 )
  {
    sub_1000380B0((unsigned __int8 **)__p[0], v43);
    v9 = (__int64)a5;
  }
  else
  {
    v9 = (__int64)a5;
    if ( v43[0] == 7 && __p[0] )
    {
      __p[1] = nullptr;
      qfree(__p[0]);
    }
  }
  if ( v36 )
    goto LABEL_46;
LABEL_54:
  LOBYTE(v5) = v5 & 1;
  return v5;
}
// 10003C2E2: variable 'v5' is possibly undefined
// 100082E2E: using guessed type __int64 __fastcall j__qstrerror(_QWORD);
