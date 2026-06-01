void __fastcall sub_FF6970(__int64 a1, __int64 a2)
{
  __int64 *v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // rbp
  unsigned __int64 v5; // rax
  unsigned int v6; // eax
  int v7; // eax

  if ( a2 )
  {
    v2 = *(__int64 **)(a2 + 16);
    v3 = *v2;
    v4 = (unsigned int)*v2;
    if ( (unsigned int)*v2 )
    {
      v5 = *(_QWORD *)(a1 + 24);
      if ( (_DWORD)v3 == (_DWORD)v5 || v5 / (int)abs32(v3 - v5) > 2 )
      {
        v6 = sub_22226F0(a1 + 16, v2 + 2, v4, 1, *(unsigned int *)(a1 + 32));
        if ( v6 < *(_DWORD *)(a1 + 36) )
        {
          *(_DWORD *)(a1 + 36) = v6;
          v7 = *(_DWORD *)(a1 + 44);
          *(_QWORD *)a1 = v2 + 2;
          *(_QWORD *)(a1 + 8) = v4;
          *(_DWORD *)(a1 + 40) = v7;
        }
        else
        {
          v7 = *(_DWORD *)(a1 + 44);
        }
        *(_DWORD *)(a1 + 44) = v7 + 1;
      }
    }
  }
}

