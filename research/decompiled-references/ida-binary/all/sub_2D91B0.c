unsigned __int64 __fastcall sub_2D91B0(_QWORD *a1, unsigned __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 v6; // rcx
  unsigned __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  _BYTE *v12; // r13
  __int128 v13; // kr00_16
  __int64 v14; // rdi
  double v15; // xmm0_8
  _BYTE *v16; // rdi
  size_t v18; // rbp
  size_t v19; // rax
  const void *v20; // r13
  size_t v21; // rax
  _BYTE *v22; // rax
  _BYTE *v23; // [rsp+0h] [rbp-48h] BYREF
  __int128 v24; // [rsp+8h] [rbp-40h]
  unsigned __int64 v25; // [rsp+18h] [rbp-30h]

  v25 = __readfsqword(0x28u);
  if ( a4 < 0 )
    return v25 - __readfsqword(0x28u);
  v6 = *(_QWORD *)(a2 + 8);
  a3 = (int)a3;
  v8 = v6 - 1;
  v9 = (int)v6 - 1;
  if ( (int)a3 >= v8 )
    a3 = v9;
  v10 = *(_QWORD *)a2 + 24 * a3;
  v11 = *(_QWORD *)(v10 + 8);
  if ( a5 >= 0 )
  {
    if ( a4 <= a5 )
    {
      a2 = (unsigned int)(a5 - a4);
      v21 = (int)a2;
      if ( !v11 )
        goto LABEL_7;
    }
    else
    {
      if ( !v11 )
      {
LABEL_7:
        v12 = nullptr;
        v13 = 0u;
        goto LABEL_8;
      }
      v21 = a4 - a5;
    }
    v18 = v11 - 1;
    goto LABEL_19;
  }
  if ( !v11 )
    goto LABEL_7;
  v18 = v11 - 1;
  if ( a4 <= (int)v11 - 1 )
  {
    v21 = (int)v18 - a4;
LABEL_19:
    if ( v21 <= v18 )
      v18 = v21;
    goto LABEL_21;
  }
  v19 = a4 - (int)v18;
  if ( v18 >= v19 )
  {
    v20 = *(const void **)v10;
    v18 = v19;
    v23 = nullptr;
    v24 = 0;
    goto LABEL_22;
  }
LABEL_21:
  v20 = *(const void **)v10;
  v23 = nullptr;
  v24 = 0;
  if ( !v18 )
    goto LABEL_7;
LABEL_22:
  v22 = (_BYTE *)qvector_reserve(&v23, 0, v18 + 1, 1);
  a2 = (unsigned __int64)v20;
  *(_QWORD *)&v24 = v18 + 1;
  v23 = v22;
  memmove(v22, v20, v18);
  v23[v18] = 0;
  v12 = v23;
  v13 = v24;
LABEL_8:
  v14 = *a1;
  v23 = nullptr;
  v24 = 0;
  if ( v14 )
  {
    a1[1] = 0;
    v15 = qfree(v14, (const char *)a2);
    v16 = v23;
    *a1 = v12;
    *(_OWORD *)(a1 + 1) = v13;
    if ( v16 )
    {
      *(_QWORD *)&v24 = 0;
      qfree(v16, (const char *)a2, v15);
    }
  }
  else
  {
    *a1 = v12;
    *(_OWORD *)(a1 + 1) = v13;
  }
  return v25 - __readfsqword(0x28u);
}
