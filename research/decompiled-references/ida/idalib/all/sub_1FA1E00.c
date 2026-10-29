__int64 __fastcall sub_1FA1E00(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r14
  unsigned int *v5; // r12
  unsigned int v7; // ecx
  unsigned int v8; // r8d
  __int64 v9; // rax
  unsigned int v10; // edx
  unsigned int v11; // edi
  int v12; // eax
  char v13; // dl
  unsigned int *v14; // rbp
  unsigned __int64 v15; // rax
  unsigned int v16; // edi
  unsigned __int64 v17; // r13
  char v18; // cl
  unsigned int v19; // edx
  char v20; // cl
  int v21; // eax
  unsigned __int64 v22; // rcx
  char v23; // cl
  int v24; // edx

  result = (__int64)a2 - a1;
  if ( (__int64)a2 - a1 > 128 )
  {
    v4 = a3;
    v5 = (unsigned int *)(a1 + 8);
    if ( !a3 )
    {
      v17 = (unsigned __int64)a2;
      goto LABEL_19;
    }
    while ( 1 )
    {
      v7 = *(_DWORD *)(a1 + 8);
      --v4;
      v8 = *(a2 - 2);
      v9 = a1 + 8 * (result >> 4);
      v10 = *(_DWORD *)a1;
      v11 = *(_DWORD *)v9;
      if ( v7 >= *(_DWORD *)v9 )
      {
        if ( v8 <= v7 )
        {
          if ( v8 <= v11 )
          {
LABEL_22:
            *(_DWORD *)a1 = v11;
            v23 = *(_BYTE *)(v9 + 4);
            *(_DWORD *)v9 = v10;
            v24 = *(_DWORD *)(a1 + 4);
            *(_BYTE *)(a1 + 4) = v23;
            v7 = *(_DWORD *)a1;
            *(_BYTE *)(v9 + 4) = v24;
            v10 = *(a2 - 2);
            goto LABEL_7;
          }
LABEL_16:
          v20 = *((_BYTE *)a2 - 4);
          v21 = *(_DWORD *)(a1 + 4);
          *(_DWORD *)a1 = v8;
          *(a2 - 2) = v10;
          *(_BYTE *)(a1 + 4) = v20;
          v7 = *(_DWORD *)a1;
          *((_BYTE *)a2 - 4) = v21;
          goto LABEL_7;
        }
      }
      else
      {
        if ( v8 > v11 )
          goto LABEL_22;
        if ( v8 > v7 )
          goto LABEL_16;
      }
      v12 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)(a1 + 8) = v10;
      v13 = *(_BYTE *)(a1 + 12);
      *(_DWORD *)a1 = v7;
      *(_BYTE *)(a1 + 12) = v12;
      *(_BYTE *)(a1 + 4) = v13;
      v10 = *(a2 - 2);
LABEL_7:
      v14 = v5;
      v15 = (unsigned __int64)a2;
      while ( 1 )
      {
        v16 = *v14;
        v17 = (unsigned __int64)v14;
        if ( *v14 < v7 )
          goto LABEL_13;
        v15 -= 8LL;
        if ( v7 < v10 )
        {
          do
          {
            v15 -= 8LL;
            v10 = *(_DWORD *)v15;
          }
          while ( *(_DWORD *)v15 > v7 );
        }
        if ( (unsigned __int64)v14 >= v15 )
          break;
        *v14 = v10;
        v18 = *(_BYTE *)(v15 + 4);
        v19 = v14[1];
        *(_DWORD *)v15 = v16;
        *((_BYTE *)v14 + 4) = v18;
        v7 = *(_DWORD *)a1;
        *(_BYTE *)(v15 + 4) = v19;
        v10 = *(_DWORD *)(v15 - 8);
LABEL_13:
        v14 += 2;
      }
      sub_1FA1E00(v14, a2, v4);
      result = (__int64)v14 - a1;
      if ( (__int64)v14 - a1 <= 128 )
        return result;
      a2 = v14;
      if ( !v4 )
      {
LABEL_19:
        sub_1FA1D40(a1, (_DWORD *)v17, v17);
        do
        {
          v17 -= 8LL;
          v22 = *(_QWORD *)v17;
          *(_DWORD *)v17 = *(_DWORD *)a1;
          *(_BYTE *)(v17 + 4) = *(_BYTE *)(a1 + 4);
          result = sub_1F6B660(a1, 0, (__int64)(v17 - a1) >> 3, v22);
        }
        while ( (__int64)(v17 - a1) > 8 );
        return result;
      }
    }
  }
  return result;
}
