__int64 __fastcall sub_BE74D0(__int64 a1, _QWORD *a2, unsigned int a3, _DWORD *a4)
{
  __int64 v4; // rbx
  char *v5; // r9
  __int64 v6; // rax
  unsigned __int64 v7; // r8
  __int64 *v8; // rdx
  __int64 result; // rax
  char v10; // dl
  unsigned __int64 v11; // rdx
  unsigned __int64 v13; // r12
  unsigned __int8 v14; // si

  v4 = a3;
  v5 = *(char **)(a1 + 24);
  v6 = *(_QWORD *)(a1 + 16);
  v7 = (__int64)&v5[-v6] >> 3;
  if ( a3 >= v7 )
  {
    v11 = a3 + 1LL;
    v13 = v4 + 1 - v7;
    if ( v13 > (__int64)((*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFF8LL) - (_QWORD)v5) >> 3 )
    {
      sub_BE7320(a1 + 16, a2, v11, (__int64)a4, v7, (__int64)v5);
      v5 = *(char **)(a1 + 24);
    }
    if ( v13 )
    {
      memset(v5, 0, 8 * v13);
      v5 = *(char **)(a1 + 24);
    }
    *(_QWORD *)(a1 + 24) = &v5[8 * v13];
    *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v4) = a4;
    result = 0;
    if ( a4 )
    {
      v14 = ((*a4 >> 14) | (*(_DWORD *)a1 >> 14)) & 0x1F;
      *(_BYTE *)(a1 + 1) = (v14 << 6) | *(_BYTE *)(a1 + 1) & 0x3F;
      *(_BYTE *)(a1 + 2) = *(_BYTE *)(a1 + 2) & 0xF8 | (v14 >> 2);
    }
  }
  else
  {
    v8 = (__int64 *)(v6 + 8LL * a3);
    result = *v8;
    *v8 = (__int64)a4;
    if ( a4 )
    {
      v10 = (*a4 >> 14) | (*(_DWORD *)a1 >> 14);
      *(_BYTE *)(a1 + 1) = ((v10 & 0x1F) << 6) | *(_BYTE *)(a1 + 1) & 0x3F;
      *(_BYTE *)(a1 + 2) = *(_BYTE *)(a1 + 2) & 0xF8 | ((unsigned __int8)(v10 & 0x1F) >> 2);
    }
  }
  return result;
}

