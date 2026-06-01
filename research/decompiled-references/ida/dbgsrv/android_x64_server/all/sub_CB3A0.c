/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CB3A0
// Address: 0x00000000000CB3A0

//----- (00000000000CB3A0) ----------------------------------------------------
unsigned __int64 __fastcall sub_CB3A0(_QWORD *a1, char **a2)
{
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // rax
  char *v5; // rdi
  unsigned __int64 v6; // r15
  _BYTE *v7; // rbp
  __int64 v8; // r13
  _BYTE *v9; // r13
  _BYTE *v10; // rbx
  __int64 v11; // rax
  _BYTE *v12; // rax
  bool v13; // zf
  char *v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rbp
  char v18; // [rsp+Eh] [rbp-3Ah] BYREF
  char v19; // [rsp+Fh] [rbp-39h] BYREF
  unsigned __int64 v20; // [rsp+10h] [rbp-38h]

  v20 = __readfsqword(0x28u);
  v3 = 21LL * a1[1] + 10;
  v4 = (unsigned __int64)a2[1];
  if ( v4 >= v3 )
  {
    if ( v4 != v3 )
    {
      v18 = 0;
      sub_5E330((__int64)a2, v3, &v18);
    }
  }
  else
  {
    if ( (unsigned __int64)a2[2] >= v3 )
    {
      v5 = *a2;
    }
    else
    {
      v5 = (char *)qvector_reserve((__int64)a2, *a2, v3, 1u);
      *a2 = v5;
      v4 = (unsigned __int64)a2[1];
    }
    memset(&v5[v4], 0, v3 - v4);
    a2[1] = (char *)v3;
  }
  v6 = (unsigned __int64)&(*a2)[v3];
  v7 = pack_dq(*a2, v6, a1[1]);
  v8 = 24LL * a1[1];
  if ( v8 )
  {
    v9 = (_BYTE *)(*a1 + v8);
    v10 = (_BYTE *)(*a1 + 16LL);
    v11 = 0;
    do
    {
      if ( (unsigned __int64)v7 < v6 )
        *v7++ = *v10;
      v12 = pack_dq(v7, v6, *((_QWORD *)v10 - 2) - v11);
      v7 = pack_dq(v12, v6, *((_QWORD *)v10 - 1) - *((_QWORD *)v10 - 2));
      v11 = *((_QWORD *)v10 - 1);
      v13 = v10 + 8 == v9;
      v10 += 24;
    }
    while ( !v13 );
  }
  v14 = *a2;
  v15 = (unsigned __int64)a2[1];
  v16 = v7 - *a2;
  if ( v15 >= v16 )
  {
    if ( v15 != v16 )
    {
      v19 = 0;
      sub_5E330((__int64)a2, v16, &v19);
    }
  }
  else
  {
    if ( (unsigned __int64)a2[2] < v16 )
    {
      v14 = (char *)qvector_reserve((__int64)a2, *a2, v16, 1u);
      *a2 = v14;
      v15 = (unsigned __int64)a2[1];
    }
    memset(&v14[v15], 0, v16 - v15);
    a2[1] = (char *)v16;
  }
  return __readfsqword(0x28u);
}
