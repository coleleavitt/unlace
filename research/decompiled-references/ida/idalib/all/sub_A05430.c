__int64 __fastcall sub_A05430(__int64 a1)
{
  __int64 v2; // rsi
  int v3; // eax
  _QWORD *v4; // rcx
  __int64 v5; // r8
  int v6; // edi
  _QWORD *v7; // rdx
  __int64 result; // rax
  _QWORD *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rcx

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * *(unsigned int *)(a1 + 64) - 8);
  if ( *(_BYTE *)(a1 + 20) )
  {
    v3 = *(_DWORD *)(a1 + 64);
    v4 = *(_QWORD **)a1;
    v5 = *(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 12);
    v6 = *(_DWORD *)(a1 + 12);
    if ( v4 != (_QWORD *)v5 )
    {
      v7 = v4;
      if ( v2 == *v4 )
      {
LABEL_11:
        v10 = (unsigned int)(v6 - 1);
        result = (unsigned int)(v3 - 1);
        v11 = v4[v10];
        *(_DWORD *)(a1 + 12) = v10;
        *v7 = v11;
        *(_DWORD *)(a1 + 64) = result;
        return result;
      }
      while ( (_QWORD *)v5 != ++v7 )
      {
        if ( v2 == *v7 )
          goto LABEL_11;
      }
    }
    result = (unsigned int)(v3 - 1);
    *(_DWORD *)(a1 + 64) = result;
    return result;
  }
  v9 = (_QWORD *)sub_2236570(a1, v2);
  if ( v9 )
  {
    *v9 = -2;
    ++*(_DWORD *)(a1 + 16);
  }
  result = (unsigned int)(*(_DWORD *)(a1 + 64) - 1);
  *(_DWORD *)(a1 + 64) = result;
  return result;
}
