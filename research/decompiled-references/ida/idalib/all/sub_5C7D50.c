__int64 __fastcall sub_5C7D50(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // rbp
  void *v10; // rdi
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // [rsp+0h] [rbp-58h]
  int v14; // [rsp+8h] [rbp-50h]
  int v15; // [rsp+10h] [rbp-48h]
  int v16[2]; // [rsp+18h] [rbp-40h] BYREF
  void *ptr; // [rsp+20h] [rbp-38h] BYREF
  int v18[4]; // [rsp+28h] [rbp-30h]
  int v19[2]; // [rsp+38h] [rbp-20h]
  int v20; // [rsp+40h] [rbp-18h]
  int v21; // [rsp+48h] [rbp-10h]
  __int64 v22; // [rsp+50h] [rbp-8h]

  *(_QWORD *)v19 = __readfsqword(0x28u);
  if ( !a2 || *(char *)(a2 + 17) >= 0 )
    return 0;
  v5 = *(int *)(a2 + 32);
  result = 1;
  if ( *(_DWORD *)(a2 + 32) && !*(_QWORD *)(a2 + 40) )
  {
    ptr = nullptr;
    *(_OWORD *)v18 = 0;
    if ( (unsigned __int8)is_cvt64(a1, a2, a3) )
    {
      v8 = sub_3F38C0((__int64 *)&ptr, *a1, *(_QWORD *)a2, 28672, 0x53u);
    }
    else
    {
      v6 = sub_3BDD60(a1, *(_QWORD *)a2);
      v7 = *a1;
      *(_QWORD *)v16 = v6;
      v8 = sub_7BEED0(v16, v7, &ptr, 8, 28672, 83);
    }
    if ( v8 <= 0 )
    {
      *(_DWORD *)(a2 + 32) = 0;
      sub_368890();
    }
    v9 = *(_QWORD *)v18;
    v10 = ptr;
    if ( *(_QWORD *)v18 < *(_QWORD *)&v18[2] && ptr )
    {
      if ( !*(_QWORD *)v18 )
      {
        *(_QWORD *)(a2 + 40) = ptr;
        sub_84F5B0("%a: incorrect number of function referers\n", v13, v14, v15, v16[0], 0, 0, 0, v19[0], v20, v21, v22);
        v11 = *(_QWORD *)(a2 + 40);
        goto LABEL_25;
      }
      v10 = (void *)qrealloc(ptr);
      if ( !v10 )
        v10 = ptr;
    }
    *(_QWORD *)(a2 + 40) = v10;
    ptr = nullptr;
    *(_OWORD *)v18 = 0;
    if ( v5 == v9 )
    {
      if ( (*(_DWORD *)(a2 + 32) == 0) != (v10 == nullptr) )
        goto LABEL_20;
    }
    else
    {
      if ( v5 != (unsigned __int16)v9 )
      {
        sub_84F5B0(
          "%a: incorrect number of function referers\n",
          v13,
          v14,
          v15,
          v16[0],
          (int)ptr,
          v18[0],
          v18[2],
          v19[0],
          v20,
          v21,
          v22);
        v11 = *(_QWORD *)(a2 + 40);
        if ( v9 >= v5 )
        {
          v12 = *(_DWORD *)(a2 + 32);
LABEL_26:
          if ( (v12 == 0) == (v11 == 0) )
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
LABEL_20:
          if ( !under_debugger )
            interr(2172);
          BUG();
        }
LABEL_25:
        *(_DWORD *)(a2 + 32) = v9;
        v12 = v9;
        goto LABEL_26;
      }
      *(_DWORD *)(a2 + 32) = v9;
      if ( (v10 == nullptr) != ((_DWORD)v9 == 0) )
        goto LABEL_20;
    }
    return 1;
  }
  return result;
}
