void __fastcall sub_F8120(__int64 a1, int a2)
{
  unsigned int v2; // esi
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r9
  __int64 v5; // rcx
  unsigned int v6; // eax
  _DWORD *v7; // rcx

  v2 = *(_DWORD *)(a1 + 16) + a2;
  if ( !v2 )
    goto LABEL_9;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 > v3 )
  {
    v5 = 12 * v3;
    v6 = *(_DWORD *)(*(_QWORD *)a1 + 12 * v3 + 4) + *(_DWORD *)(*(_QWORD *)a1 + 12 * v3 + 8);
    if ( v2 >= v6 )
    {
      ++v3;
      v7 = (_DWORD *)(*(_QWORD *)a1 + v5 + 16);
      while ( 1 )
      {
        *(_QWORD *)(a1 + 8) = v3;
        v2 -= v6;
        if ( !v2 || v3 == v4 )
          goto LABEL_9;
        v6 = *v7 + v7[1];
        v7 += 3;
        if ( v6 > v2 )
          break;
        ++v3;
      }
    }
    *(_QWORD *)(a1 + 16) = v2;
  }
  if ( v3 == v4 )
LABEL_9:
    *(_QWORD *)(a1 + 16) = 0;
}

