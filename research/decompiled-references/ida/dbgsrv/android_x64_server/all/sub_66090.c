/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_66090
// Address: 0x0000000000066090

//----- (0000000000066090) ----------------------------------------------------
__int64 __fastcall sub_66090(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  unsigned int v4; // r14d
  _DWORD *v5; // r12
  _QWORD *v6; // rax
  __int64 v7; // rbx
  size_t v8; // rdx
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // r13
  char *v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  bool v16; // cf
  __int64 v17; // rbx
  __int64 v18; // rbp
  unsigned __int64 v19; // rcx
  char *v20; // rax
  size_t n; // [rsp+8h] [rbp-50h]
  void *src; // [rsp+10h] [rbp-48h]
  char v24; // [rsp+1Eh] [rbp-3Ah] BYREF
  char v25; // [rsp+1Fh] [rbp-39h] BYREF
  unsigned __int64 v26; // [rsp+20h] [rbp-38h]

  v26 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 256);
  v3 = *(int *)(*(_QWORD *)(a1 + 248) + 4 * v2 - 4);
  if ( v2 )
    *(_QWORD *)(a1 + 256) = v2 - 1;
  v4 = *(_DWORD *)(a1 + 208) - v3;
  v5 = operator new(0x20u);
  v5[6] = 0;
  *v5 = a2;
  v6 = qalloc_or_throw(24);
  *(_OWORD *)v6 = 0;
  v6[2] = 0;
  *((_QWORD *)v5 + 1) = v6;
  if ( v4 )
  {
    v7 = (__int64)v6;
    src = (void *)(**(_QWORD **)(a1 + 200) + v3);
    v8 = (int)v4;
    v9 = v6[1];
    v10 = 0x7FFFFFFFFFFFFFFFLL;
    if ( !__CFADD__((int)v4, v9) )
      v10 = (int)v4 + v9;
    if ( v9 >= v10 )
    {
      if ( v9 == v10 )
      {
LABEL_14:
        memcpy((void *)(*(_QWORD *)v7 + v9), src, v8);
        goto LABEL_15;
      }
      v25 = 0;
      n = (int)v4;
      sub_5E330((__int64)v6, v10, &v25);
    }
    else
    {
      n = (int)v4;
      v11 = (char *)*v6;
      if ( *(_QWORD *)(v7 + 16) >= v10 )
      {
        v12 = v9;
      }
      else
      {
        v11 = (char *)qvector_reserve(v7, *(char **)v7, v10, 1u);
        *(_QWORD *)v7 = v11;
        v12 = *(_QWORD *)(v7 + 8);
      }
      memset(&v11[v12], 0, v10 - v12);
      *(_QWORD *)(v7 + 8) = v10;
    }
    v8 = n;
    goto LABEL_14;
  }
LABEL_15:
  v13 = *(_QWORD *)(a1 + 344);
  v14 = *(_QWORD *)(a1 + 352);
  *((_QWORD *)v5 + 2) = *(_QWORD *)(v13 + 8 * v14 - 8);
  *(_QWORD *)(v13 + 8 * v14 - 8) = v5;
  if ( v4 )
  {
    v15 = *(_DWORD *)(a1 + 208);
    v16 = v15 < v4;
    v17 = v15 - v4;
    if ( v16 )
    {
      if ( !(_BYTE)under_debugger )
        interr(708);
      BUG();
    }
    *(_DWORD *)(a1 + 208) = v17;
    v18 = *(_QWORD *)(a1 + 200);
    v19 = *(_QWORD *)(v18 + 8);
    if ( v19 >= (unsigned int)v17 )
    {
      if ( v19 != v17 )
      {
        v24 = 0;
        sub_5E330(v18, (unsigned int)v17, &v24);
      }
    }
    else
    {
      v20 = *(char **)v18;
      if ( *(_QWORD *)(v18 + 16) < (unsigned __int64)(unsigned int)v17 )
      {
        v20 = (char *)qvector_reserve(*(_QWORD *)(a1 + 200), *(char **)v18, (unsigned int)v17, 1u);
        *(_QWORD *)v18 = v20;
        v19 = *(_QWORD *)(v18 + 8);
      }
      memset(&v20[v19], 0, (unsigned int)v17 - v19);
      *(_QWORD *)(v18 + 8) = (unsigned int)v17;
    }
  }
  *(_BYTE *)(a1 + 212) = -87;
  return 0;
}
// 158B40: using guessed type __int64 under_debugger;
