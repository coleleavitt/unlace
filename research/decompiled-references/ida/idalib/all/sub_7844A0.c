__int64 __fastcall sub_7844A0(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 *v3; // r12
  unsigned __int64 v4; // rbx
  __int64 v5; // rsi
  unsigned __int64 v6; // rax
  unsigned int v7; // r13d
  __int64 v9; // rax

  if ( a2 )
  {
    v2 = *(_DWORD *)(a1 + 208);
    if ( v2 < a2 )
    {
      if ( !under_debugger )
        interr(708);
      BUG();
    }
    v3 = *(__int64 **)(a1 + 200);
    v4 = v2 - a2;
    *(_DWORD *)(a1 + 208) = v4;
    v5 = *v3;
    v6 = v3[1];
    v7 = *(unsigned __int8 *)(*v3 + v4);
    if ( v6 < v4 )
    {
      if ( v3[2] < v4 )
      {
        v9 = qvector_reserve(v3, v5, v4, 1);
        *v3 = v9;
        v5 = v9;
        v6 = v3[1];
      }
      memset((void *)(v5 + v6), 0, v4 - v6);
      v3[1] = v4;
    }
    else if ( v4 != v6 )
    {
      v3[1] = v4;
    }
  }
  else
  {
    v7 = -87;
  }
  *(_BYTE *)(a1 + 212) = -87;
  return v7;
}
