__int64 __fastcall sub_145B460(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  int v8; // ebp
  __int64 v9; // rax
  int v10; // edx
  __int16 v11; // ax
  unsigned __int64 v12; // r12
  __int64 v13; // rax
  unsigned __int64 v14; // rsi
  int v15; // edx
  unsigned int v16; // ecx
  __int64 *v17; // rdx
  __int64 v18; // r8
  int v19; // edx
  __int64 v20; // rdi
  int v21; // esi
  __int64 v22; // r12
  __int64 v23; // rax

  result = a3[2];
  if ( (*a3 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v8 = *(_DWORD *)a2;
    if ( !result )
    {
      result = (__int64)sub_13F1C60((__int64 *)(*a3 & 0xFFFFFFFFFFFFFFF8LL));
      if ( result )
        result = *(_QWORD *)(result + 16);
      v10 = *(_DWORD *)a2;
      goto LABEL_5;
    }
  }
  else
  {
    if ( !result )
      return result;
    v8 = *(_DWORD *)a2;
  }
  v9 = *(_QWORD *)(a3[1] + 8 * result - 8);
  v10 = v8;
  result = *(_QWORD *)(v9 + 16);
LABEL_5:
  if ( v10 >= 0 )
  {
    if ( (*(_BYTE *)(result + 36) & 0x10) != 0 )
    {
      v11 = *(_WORD *)(a2 + 16);
      v12 = 0;
      if ( (unsigned __int16)(v11 - 7) > 0xCu && v11 != 1 )
        v12 = *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFFBLL;
      v13 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 96) += 24LL;
      v14 = (v13 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_QWORD *)(a1 + 24) >= v14 + 24 && v13 )
        *(_QWORD *)(a1 + 16) = v14 + 24;
      else
        v14 = sub_986170(a1 + 16, 24, 24, 3, a5, a6);
      *(_DWORD *)v14 = 1;
      *(_DWORD *)(v14 + 4) = v8;
      *(_DWORD *)(v14 + 8) = v8;
      goto LABEL_12;
    }
    v19 = *(_DWORD *)(a1 + 208);
    v20 = *(_QWORD *)(a1 + 192);
    if ( v19 )
    {
      v21 = v19 - 1;
      v16 = (v19 - 1) & (((unsigned int)result >> 9) ^ ((unsigned int)result >> 4));
      v17 = (__int64 *)(v20 + 16LL * v16);
      v18 = *v17;
      if ( result != *v17 )
      {
        v15 = 1;
        if ( v18 == -4096 )
          return result;
        while ( 1 )
        {
          a6 = (unsigned int)(v15 + 1);
          v16 = v21 & (v15 + v16);
          v17 = (__int64 *)(v20 + 16LL * v16);
          v18 = *v17;
          if ( result == *v17 )
            break;
          v15 = a6;
          if ( v18 == -4096 )
            return result;
        }
      }
      v22 = v17[1];
      if ( v22 )
      {
        v23 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 96) += 24LL;
        v14 = (v23 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(a1 + 24) >= v14 + 24 && v23 )
          *(_QWORD *)(a1 + 16) = v14 + 24;
        else
          v14 = sub_986170(a1 + 16, 24, 24, 3, v18, a6);
        *(_DWORD *)v14 = 1;
        v12 = v22 | 4;
        *(_DWORD *)(v14 + 4) = v8;
        *(_DWORD *)(v14 + 8) = v8;
LABEL_12:
        *(_QWORD *)(v14 + 16) = v12;
        return sub_145A0C0((__int64 *)a1, (_DWORD *)v14);
      }
    }
  }
  return result;
}
