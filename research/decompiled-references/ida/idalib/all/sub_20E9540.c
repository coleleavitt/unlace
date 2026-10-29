__int64 __fastcall sub_20E9540(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // r15
  unsigned int v9; // edx
  __int64 v10; // rax
  __int64 v11; // rsi
  int v12; // r14d
  unsigned int *v13; // rax
  unsigned int v14; // r15d
  __int64 result; // rax
  bool v16; // r14
  int v17; // edi
  __int64 v18; // rdx
  unsigned __int64 *v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // r14
  __int64 v25; // rax
  unsigned __int64 v26; // r14
  __int64 v27; // rdx
  __int64 v28; // rax
  unsigned int v29; // edx
  __int64 v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // rcx
  unsigned int *v33; // [rsp+8h] [rbp-40h]

  v4 = a1 + 8;
  v9 = *(_DWORD *)(a1 + 16);
  if ( !v9 || (v10 = *(_QWORD *)(a1 + 8), *(_DWORD *)(v10 + 8) <= *(_DWORD *)(v10 + 12)) )
  {
    v24 = 16LL * *(unsigned int *)(*(_QWORD *)a1 + 264LL);
    sub_2227F30(v4, *(unsigned int *)(*(_QWORD *)a1 + 264LL));
    v10 = *(_QWORD *)(a1 + 8);
    ++*(_DWORD *)(v10 + v24 + 12);
    v9 = *(_DWORD *)(a1 + 16);
  }
  v11 = v10 + 16LL * v9 - 16;
  v12 = *(_DWORD *)(v11 + 12);
  v13 = *(unsigned int **)v11;
  if ( v12 || *v13 <= a2 )
  {
LABEL_5:
    v14 = *(_DWORD *)(v11 + 8);
    result = sub_20E5940((__int64)v13, (unsigned int *)(v11 + 12), v14, a2, a3, a4);
    if ( (unsigned int)result > 0xC )
    {
      sub_20E90D0((__int64 *)a1, *(_DWORD *)(a1 + 16) - 1);
      v28 = *(_QWORD *)(a1 + 8) + 16LL * *(unsigned int *)(a1 + 16) - 16;
      v29 = *(_DWORD *)(v28 + 8);
      v16 = *(_DWORD *)(v28 + 12) == v29;
      result = sub_20E5940(*(_QWORD *)v28, (unsigned int *)(v28 + 12), v29, a2, a3, a4);
    }
    else
    {
      v16 = v14 == v12;
    }
    v17 = *(_DWORD *)(a1 + 16);
    v18 = *(_QWORD *)(a1 + 8);
    *(_DWORD *)(v18 + 16LL * (unsigned int)(v17 - 1) + 8) = result;
    if ( v17 != 1 )
    {
      result = (unsigned int)(result - 1);
      v19 = (unsigned __int64 *)(*(_QWORD *)(16LL * (unsigned int)(v17 - 2) + v18)
                               + 8LL * *(unsigned int *)(16LL * (unsigned int)(v17 - 2) + v18 + 12));
      *v19 = result | *v19 & 0xFFFFFFFFFFFFFFC0LL;
    }
    if ( v16 )
    {
      result = *(unsigned int *)(a1 + 16);
      if ( (_DWORD)result != 1 )
      {
        v20 = *(_QWORD *)(a1 + 8);
        result = v20 + 16LL * (unsigned int)(result - 2);
        while ( v20 != result )
        {
          v21 = *(_QWORD *)result;
          v22 = *(unsigned int *)(result + 12);
          v23 = result;
          result -= 16;
          *(_DWORD *)(v21 + 4 * v22 + 128) = a3;
          if ( *(_DWORD *)(v23 + 12) != *(_DWORD *)(v23 + 8) - 1 )
            return result;
        }
LABEL_14:
        result = *(_QWORD *)v20;
        *(_DWORD *)(*(_QWORD *)v20 + 4LL * *(unsigned int *)(v20 + 12) + 168) = a3;
        return result;
      }
    }
    return result;
  }
  v25 = sub_2227E70(v4, v9 - 1);
  if ( !v25 )
  {
    **(_DWORD **)a1 = a2;
LABEL_22:
    v11 = *(_QWORD *)(a1 + 8) + 16LL * *(unsigned int *)(a1 + 16) - 16;
    v12 = *(_DWORD *)(v11 + 12);
    v13 = *(unsigned int **)v11;
    goto LABEL_5;
  }
  v26 = (v25 & 0xFFFFFFFFFFFFFFC0LL) + 8 * (v25 & 0x3F);
  v27 = *(unsigned int *)(a1 + 16);
  v11 = *(_QWORD *)(a1 + 8) + 16 * v27 - 16;
  v13 = *(unsigned int **)v11;
  if ( *(_QWORD *)(v26 + 96) != a4 || *(_DWORD *)(v26 + 4) + 1 != a2 )
  {
    v12 = *(_DWORD *)(v11 + 12);
    goto LABEL_5;
  }
  v33 = *(unsigned int **)v11;
  sub_2227F30(v4, (unsigned int)(v27 - 1));
  if ( *v33 <= a3 || *((_QWORD *)v33 + 12) == a4 && *v33 == a3 + 1 )
  {
    a2 = *(_DWORD *)v26;
    sub_20E55E0(a1, 0);
    goto LABEL_22;
  }
  *(_DWORD *)(v26 + 4) = a3;
  result = *(unsigned int *)(a1 + 16);
  if ( (_DWORD)result != 1 )
  {
    v20 = *(_QWORD *)(a1 + 8);
    result = v20 + 16LL * (unsigned int)(result - 2);
    while ( v20 != result )
    {
      v30 = *(_QWORD *)result;
      v31 = *(unsigned int *)(result + 12);
      v32 = result;
      result -= 16;
      *(_DWORD *)(v30 + 4 * v31 + 128) = a3;
      if ( *(_DWORD *)(v32 + 12) != *(_DWORD *)(v32 + 8) - 1 )
        return result;
    }
    goto LABEL_14;
  }
  return result;
}
