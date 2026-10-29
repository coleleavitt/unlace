/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003C990
// Address: 0x000000010003C990

//----- (000000010003C990) ----------------------------------------------------
__int64 __fastcall sub_10003C990(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        char *a3,
        unsigned __int8 *a4,
        unsigned __int64 a5,
        __int64 a6)
{
  unsigned __int8 *v9; // r14
  unsigned __int8 *v10; // r13
  int v11; // r14d
  unsigned __int64 v12; // rax
  const char *v13; // rax
  const char *v14; // r14
  size_t v15; // rax
  size_t v16; // r15
  unsigned __int64 v17; // r12
  void *v18; // rax
  unsigned int v19; // ebx
  unsigned __int8 *v21; // [rsp+10h] [rbp-110h]
  __int128 v22; // [rsp+20h] [rbp-100h] BYREF
  __int64 v23; // [rsp+30h] [rbp-F0h]
  _BYTE v24[152]; // [rsp+38h] [rbp-E8h] BYREF
  unsigned __int8 v25[8]; // [rsp+D0h] [rbp-50h] BYREF
  void *__p[2]; // [rsp+D8h] [rbp-48h]
  __int64 v27; // [rsp+E8h] [rbp-38h]

  v25[0] = 2;
  *(_OWORD *)__p = 0;
  v27 = 0;
  if ( a3 != nullptr || a2 == nullptr )
  {
    if ( (unsigned int)get_idcv_attr(v25, (__int64)a2, a3, 0) )
      goto LABEL_12;
  }
  else
  {
    copy_idcv(v25, a2);
  }
  if ( deref_idcv(v25, 2) )
  {
    if ( v25[0] == 6 )
    {
      v22 = 0;
      v23 = 0;
      if ( a2 )
      {
        sub_10003CC50((__int64)&v22, a5 + 1);
        v9 = (unsigned __int8 *)v22;
        copy_idcv((unsigned __int8 *)v22, a2);
        if ( a5 )
        {
          v21 = v9;
          v10 = v9 + 32;
          v11 = 1;
          do
          {
            copy_idcv(v10, a4);
            a4 += 32;
            v12 = v11;
            v10 += 32;
            ++v11;
          }
          while ( v12 < a5 );
          LODWORD(a5) = a5 + 1;
          v9 = v21;
        }
        else
        {
          LODWORD(a5) = 1;
        }
      }
      else
      {
        v9 = a4;
      }
      sub_10003E3D0((__int64)v24, 0, 0);
      v19 = sub_10003C370((__int64)v24, nullptr, (unsigned int)__p[0], a5, v9, a1, (void **)a6);
      sub_10003E5C0((__int64)v24);
      sub_100044380((__int64)&v22);
      goto LABEL_23;
    }
    set_qerrno();
  }
LABEL_12:
  sub_10003BC00(a1);
  if ( a6 )
  {
    v13 = (const char *)j__qstrerror(0xFFFFFFFFLL);
    v14 = v13;
    if ( v13 && (v15 = strlen(v13)) != 0 )
    {
      v16 = v15;
      v17 = v15 + 1;
      v18 = *(void **)a6;
      if ( *(_QWORD *)(a6 + 16) < v17 )
      {
        v18 = qvector_reserve(a6, *(void **)a6, v17, 1u);
        *(_QWORD *)a6 = v18;
      }
      *(_QWORD *)(a6 + 8) = v17;
      memmove(v18, v14, v16);
      *(_BYTE *)(*(_QWORD *)a6 + v16) = 0;
    }
    else
    {
      *(_QWORD *)(a6 + 8) = 0;
    }
  }
  v19 = 0;
LABEL_23:
  if ( v25[0] == 5 )
  {
    sub_1000380B0((unsigned __int8 **)__p[0], v25);
  }
  else if ( v25[0] == 7 && __p[0] )
  {
    __p[1] = nullptr;
    qfree(__p[0]);
  }
  return v19;
}
// 100082E2E: using guessed type __int64 __fastcall j__qstrerror(_QWORD);
