__int64 __fastcall sub_5AD260(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v4; // r12
  int v5; // esi
  int v6; // eax
  __int64 v7; // rsi
  unsigned __int64 v8; // rbp
  void *v9; // rdi
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // [rsp+0h] [rbp-58h]
  int v13; // [rsp+8h] [rbp-50h]
  int v14; // [rsp+10h] [rbp-48h]
  int v15; // [rsp+18h] [rbp-40h]
  int v16; // [rsp+1Ch] [rbp-3Ch] BYREF
  void *ptr; // [rsp+20h] [rbp-38h] BYREF
  int v18[4]; // [rsp+28h] [rbp-30h]
  int v19[2]; // [rsp+38h] [rbp-20h]
  int v20; // [rsp+40h] [rbp-18h]
  int v21; // [rsp+48h] [rbp-10h]
  __int64 v22; // [rsp+50h] [rbp-8h]

  *(_QWORD *)v19 = __readfsqword(0x28u);
  if ( !a2 || *(char *)(a2 + 9) >= 0 )
    return 0;
  v4 = *(int *)(a2 + 20);
  result = 1;
  if ( *(_DWORD *)(a2 + 20) && !*(_QWORD *)(a2 + 24) )
  {
    v5 = *(_DWORD *)a2;
    ptr = nullptr;
    *(_OWORD *)v18 = 0;
    v6 = sub_3B90A0(a1, v5);
    v7 = *a1;
    v16 = v6;
    if ( sub_79BAE0(&v16, v7, &ptr, 4, 28672, 83) <= 0 )
    {
      *(_DWORD *)(a2 + 20) = 0;
      sub_365330();
    }
    v8 = *(_QWORD *)v18;
    v9 = ptr;
    if ( *(_QWORD *)v18 < *(_QWORD *)&v18[2] && ptr )
    {
      if ( !*(_QWORD *)v18 )
      {
        *(_QWORD *)(a2 + 24) = ptr;
        sub_82BC50("%a: incorrect number of function referers\n", v12, v13, v14, v15, 0, 0, 0, v19[0], v20, v21, v22);
        v10 = *(_QWORD *)(a2 + 24);
        goto LABEL_22;
      }
      v9 = (void *)qrealloc(ptr);
      if ( !v9 )
        v9 = ptr;
    }
    *(_QWORD *)(a2 + 24) = v9;
    ptr = nullptr;
    *(_OWORD *)v18 = 0;
    if ( v4 == v8 )
    {
      if ( (*(_DWORD *)(a2 + 20) == 0) != (v9 == nullptr) )
        goto LABEL_17;
    }
    else
    {
      if ( v4 != (unsigned __int16)v8 )
      {
        sub_82BC50(
          "%a: incorrect number of function referers\n",
          v12,
          v13,
          v14,
          v15,
          (int)ptr,
          v18[0],
          v18[2],
          v19[0],
          v20,
          v21,
          v22);
        v10 = *(_QWORD *)(a2 + 24);
        if ( v8 >= v4 )
        {
          v11 = *(_DWORD *)(a2 + 20);
LABEL_23:
          if ( (v11 == 0) == (v10 == 0) )
          {
            result = 1;
            if ( ptr )
            {
              *(_QWORD *)v18 = 0;
              qfree(ptr);
              return 1;
            }
            return result;
          }
LABEL_17:
          if ( !under_debugger )
            interr(2172);
          BUG();
        }
LABEL_22:
        *(_DWORD *)(a2 + 20) = v8;
        v11 = v8;
        goto LABEL_23;
      }
      *(_DWORD *)(a2 + 20) = v8;
      if ( (v9 == nullptr) != ((_DWORD)v8 == 0) )
        goto LABEL_17;
    }
    return 1;
  }
  return result;
}

