/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_93D50
// Address: 0x0000000000093D50

//----- (0000000000093D50) ----------------------------------------------------
unsigned __int64 __fastcall sub_93D50(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  int v4; // ebp
  char *v5; // r13
  int v6; // r14d
  const char *v7; // r12
  _BYTE *v8; // rax
  char *v10; // rbp
  size_t v11; // rax
  size_t v12; // r15
  size_t v13; // rbp
  char *v14; // rax
  char *v15; // r15
  int v16; // eax
  unsigned __int8 *v17; // rax
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // r12
  char **v20; // rbp
  unsigned __int64 v21; // rcx
  char *v22; // rax
  const void *v23; // rax
  unsigned __int64 v24; // rcx
  char *v25; // rdi
  unsigned __int64 v26; // rax
  const char *v27; // rdx
  unsigned int v28; // r12d
  _BYTE *v29; // rax
  _BYTE *v30; // rax
  const char *v31; // rax
  const char *v32; // rbx
  size_t v33; // rax
  char **v35; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v36; // [rsp+10h] [rbp-98h]
  int v37; // [rsp+1Ch] [rbp-8Ch]
  char *s[2]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v41; // [rsp+40h] [rbp-68h]
  unsigned int v42; // [rsp+4Ch] [rbp-5Ch] BYREF
  void *ptr[2]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v44; // [rsp+60h] [rbp-48h]
  _BYTE v45[5]; // [rsp+6Bh] [rbp-3Dh] BYREF
  _QWORD v46[7]; // [rsp+70h] [rbp-38h] BYREF

  v46[0] = __readfsqword(0x28u);
  *(_OWORD *)ptr = 0;
  v44 = 0;
  v4 = unpack_dd(a3, a3[1]);
  sub_94200((__int64 *)ptr, v4);
  if ( v4 <= 0 )
    goto LABEL_36;
  v5 = (char *)ptr[0];
  v36 = 0;
  v6 = 0;
  v37 = v4;
  do
  {
    v5[424] = 0;
    v36 = unpack_dq(a3, a3[1]) + v36 - 1;
    *(_QWORD *)v5 = v36;
    v7 = (const char *)*a3;
    v8 = (_BYTE *)*a3;
    do
    {
      if ( (unsigned __int64)v8 >= a3[1] )
      {
        v10 = v5 + 8;
LABEL_11:
        *((_QWORD *)v5 + 2) = 0;
        goto LABEL_12;
      }
    }
    while ( *v8++ != 0 );
    *a3 = (unsigned __int64)v8;
    v10 = v5 + 8;
    if ( !v7 )
      goto LABEL_11;
    v11 = strlen(v7);
    if ( !v11 )
      goto LABEL_11;
    v12 = v11;
    v35 = (char **)(v5 + 8);
    v13 = v11 + 1;
    if ( *((_QWORD *)v5 + 3) >= v11 + 1 )
    {
      v14 = *v35;
    }
    else
    {
      v14 = (char *)qvector_reserve((__int64)v35, *v35, v11 + 1, 1u);
      *v35 = v14;
    }
    *((_QWORD *)v5 + 2) = v13;
    memmove(v14, v7, v12);
    *(_BYTE *)(*((_QWORD *)v5 + 1) + v12) = 0;
    v10 = v5 + 8;
LABEL_12:
    v15 = v10;
    if ( *((_QWORD *)v10 + 1) >= 2u )
    {
      *((_DWORD *)v5 + 107) = 0;
      v16 = unpack_dd(a3, a3[1]);
      *((_DWORD *)v5 + 8) = v16;
      if ( v16 != 4 )
        *((_DWORD *)v5 + 107) = unpack_dd(a3, a3[1]);
      v17 = (unsigned __int8 *)*a3;
      v18 = a3[1];
      if ( *a3 < v18 )
      {
        v19 = *v17;
        *a3 = (unsigned __int64)(v17 + 1);
        if ( v19 )
        {
          v20 = (char **)(v5 + 40);
          v21 = *((_QWORD *)v5 + 6);
          if ( v21 >= v19 )
          {
            if ( v21 != v19 )
            {
              LOBYTE(s[0]) = 0;
              sub_5E330((__int64)(v5 + 40), v19, (char *)s);
            }
          }
          else
          {
            if ( *((_QWORD *)v5 + 7) >= v19 )
            {
              v22 = *v20;
            }
            else
            {
              v22 = (char *)qvector_reserve((__int64)(v5 + 40), *v20, v19, 1u);
              *((_QWORD *)v5 + 5) = v22;
              v21 = *((_QWORD *)v5 + 6);
            }
            memset(&v22[v21], 0, v19 - v21);
            *((_QWORD *)v5 + 6) = v19;
          }
          v23 = (const void *)*a3;
          v18 = a3[1];
          v24 = *a3 + v19;
          if ( v24 >= *a3 && v24 <= v18 )
          {
            v25 = *v20;
            *a3 = v24;
            memcpy(v25, v23, v19);
            v18 = a3[1];
          }
        }
      }
      v26 = unpack_dq(a3, v18);
      *((_QWORD *)v5 + 10) = v26 - 1;
      if ( v26 )
        j_deserialize_insn(v5 + 64, a3);
    }
    if ( *(_BYTE *)(a1 + 184) )
    {
      v27 = s1;
      if ( *((_QWORD *)v15 + 1) )
        v27 = *(const char **)v15;
      sub_390A0((int)"update_lowcnd(ea=%a cnd=%s)\n", v36, v27);
    }
    ++v6;
    v5 += 432;
    v4 = v37;
  }
  while ( v6 < v37 );
LABEL_36:
  *(_OWORD *)s = 0;
  v41 = 0;
  v28 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, void *, _QWORD, char **))(**(_QWORD **)(a1 + 440) + 352LL))(
          *(_QWORD *)(a1 + 440),
          &v42,
          ptr[0],
          (unsigned int)v4,
          s);
  if ( *(_BYTE *)(a1 + 184) )
    sub_390A0((int)"  update_lowcnds => %d\n", v28);
  v29 = pack_dd(v45, (unsigned __int64)v46, v28);
  sub_56350(a2, v45, v29 - v45);
  v30 = pack_dd(v45, (unsigned __int64)v46, v42);
  sub_56350(a2, v45, v30 - v45);
  if ( v28 != 1 )
  {
    if ( s[1] )
      v31 = s[0];
    else
      v31 = s1;
    v32 = &byte_EB522;
    if ( v31 )
      v32 = v31;
    v33 = strlen(v32);
    sub_56350(a2, v32, v33 + 1);
  }
  if ( s[0] )
  {
    s[1] = nullptr;
    qfree(s[0]);
    s[0] = nullptr;
    v41 = 0;
  }
  if ( ptr[0] )
  {
    sub_9DAE0((__int64 *)ptr, 0);
    qfree(ptr[0]);
    ptr[0] = nullptr;
    v44 = 0;
  }
  return __readfsqword(0x28u);
}
// A6FB0: using guessed type __int64 __fastcall j_deserialize_insn(_QWORD, _QWORD);
