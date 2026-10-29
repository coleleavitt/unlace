__int64 __fastcall sub_BD8B70(__int64 a1, __int64 a2, __int64 *a3, __m128 a4, __m128 a5, __m128 a6)
{
  __int64 *v7; // r13
  __int64 result; // rax
  __int64 v9; // r12
  __int64 v10; // r12
  __int64 v11; // rbp
  __int64 *v12; // rbx
  __int64 v13; // rdx
  int v14; // esi
  __int64 *v15; // rbx
  __int64 *v16; // r14
  __int64 v17; // rdi
  unsigned int v18; // eax
  unsigned int v19; // eax

  if ( *(_BYTE *)(*(_QWORD *)(a1 + 264) + 18LL) || *a3 && *(_DWORD *)(*a3 - 4) )
    return sub_B30FF0((_DWORD *)a1, a2, a3);
  v7 = *(__int64 **)(*(_QWORD *)(a1 + 448) + 8LL * (unsigned int)a2);
  result = *v7;
  if ( *v7 )
  {
    v9 = *(unsigned int *)(result - 4);
    if ( (_DWORD)v9 )
    {
      v10 = 8 * v9;
      v11 = 0;
      while ( 1 )
      {
        v12 = *(__int64 **)(result + v11);
        v13 = *v12;
        result = *(_QWORD *)(*(_QWORD *)(*v12 + 16) + 24LL);
        if ( !result )
          goto LABEL_7;
        v14 = *(_DWORD *)(a1 + 8);
        if ( v14 != *(_DWORD *)result )
          goto LABEL_7;
        result = *(unsigned int *)(result + 4);
        if ( !(_DWORD)result )
          break;
        if ( (_DWORD)result != 5 )
          goto LABEL_7;
        if ( (*((_BYTE *)v12 + 44) & 8) != 0 )
          goto LABEL_7;
        v15 = v12 + 14;
        result = 8LL * *(unsigned int *)(v13 + 24);
        v16 = (__int64 *)((char *)v15 + result);
        if ( !result )
          goto LABEL_7;
        while ( 1 )
        {
          v17 = *v15++;
          v18 = sub_B39350(v17, v14);
          result = sub_BD6A00((_QWORD *)a1, v18, a4, a5, a6);
          if ( v16 == v15 )
            break;
          v14 = *(_DWORD *)(a1 + 8);
        }
        v11 += 8;
        if ( v10 == v11 )
          return result;
LABEL_8:
        result = *v7;
      }
      v19 = sub_B39350(v12[14], v14);
      result = sub_BD6A00((_QWORD *)a1, v19, a4, a5, a6);
LABEL_7:
      v11 += 8;
      if ( v10 == v11 )
        return result;
      goto LABEL_8;
    }
  }
  return result;
}

