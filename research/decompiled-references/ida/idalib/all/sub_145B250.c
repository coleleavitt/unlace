__int64 *__fastcall sub_145B250(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  __int64 *result; // rax
  __int16 v10; // ax
  unsigned __int64 v11; // r13
  __int64 v12; // rax
  unsigned __int64 v13; // rsi
  int v14; // edx
  __int64 v15; // rdi
  int v16; // esi
  unsigned int v17; // ecx
  __int64 *v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rbp
  __int64 v21; // rax
  unsigned __int64 v22; // rsi
  int v23; // edx

  v7 = a3[2];
  if ( v7 )
  {
    result = *(__int64 **)(*(_QWORD *)(a3[1] + 8 * v7 - 8) + 16LL);
  }
  else
  {
    result = nullptr;
    if ( (*a3 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      result = sub_13F1C60((__int64 *)(*a3 & 0xFFFFFFFFFFFFFFF8LL));
      if ( result )
        result = (__int64 *)result[2];
    }
  }
  if ( *(int *)a2 >= 0 )
  {
    if ( (*((_BYTE *)result + 36) & 0x10) != 0 )
    {
      v10 = *(_WORD *)(a2 + 16);
      v11 = 0;
      if ( (unsigned __int16)(v10 - 7) > 0xCu && v10 != 1 )
        v11 = *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFFBLL;
      v12 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 96) += 24LL;
      v13 = (v12 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_QWORD *)(a1 + 24) >= v13 + 24 && v12 )
        *(_QWORD *)(a1 + 16) = v13 + 24;
      else
        v13 = sub_986170(a1 + 16, 24, 24, 3, a5, a6);
      *(_DWORD *)v13 = 1;
      *(_QWORD *)(v13 + 4) = a4;
      *(_QWORD *)(v13 + 16) = v11;
      return (__int64 *)sub_145A0C0((__int64 *)a1, (_DWORD *)v13);
    }
    else
    {
      v14 = *(_DWORD *)(a1 + 208);
      v15 = *(_QWORD *)(a1 + 192);
      if ( !v14 )
        return result;
      v16 = v14 - 1;
      v17 = (v14 - 1) & (((unsigned int)result >> 9) ^ ((unsigned int)result >> 4));
      v18 = (__int64 *)(v15 + 16LL * v17);
      v19 = *v18;
      if ( result != (__int64 *)*v18 )
      {
        v23 = 1;
        if ( v19 == -4096 )
          return result;
        while ( 1 )
        {
          a6 = (unsigned int)(v23 + 1);
          v17 = v16 & (v23 + v17);
          v18 = (__int64 *)(v15 + 16LL * v17);
          v19 = *v18;
          if ( result == (__int64 *)*v18 )
            break;
          v23 = a6;
          if ( v19 == -4096 )
            return result;
        }
      }
      v20 = v18[1];
      if ( v20 )
      {
        v21 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 96) += 24LL;
        v22 = (v21 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(a1 + 24) >= v22 + 24 && v21 )
          *(_QWORD *)(a1 + 16) = v22 + 24;
        else
          v22 = sub_986170(a1 + 16, 24, 24, 3, v19, a6);
        *(_DWORD *)v22 = 1;
        *(_QWORD *)(v22 + 4) = a4;
        *(_QWORD *)(v22 + 16) = v20 | 4;
        return (__int64 *)sub_145A0C0((__int64 *)a1, (_DWORD *)v22);
      }
    }
  }
  return result;
}
