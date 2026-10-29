void __fastcall sub_7C6350(__int64 a1, int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  int v5; // ecx
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // ecx

  v3 = *(_QWORD *)(a1 + 128);
  if ( v3 )
  {
    v4 = *(_QWORD *)(a1 + 24);
    v5 = *(_DWORD *)(v4 + 3612);
    if ( v5 - a2 == *(_DWORD *)(v4 + 3616) )
    {
      v6 = *(unsigned int *)(a1 + 136);
      while ( 1 )
      {
        if ( v5 )
        {
          v8 = **(_DWORD **)(v4 + 3856);
        }
        else
        {
          v7 = *(_QWORD *)(v4 + 3784);
          if ( !v7 )
            break;
          v8 = *(_DWORD *)(v7 - 4);
        }
        if ( (unsigned int)v6 >= v8 )
          break;
        sub_1265CB0(v3, *(unsigned int *)(*(_QWORD *)(v4 + 3784) + 4 * v6));
        v4 = *(_QWORD *)(a1 + 24);
        v3 = *(_QWORD *)(a1 + 128);
        v6 = (unsigned int)(*(_DWORD *)(a1 + 136) + 1);
        *(_DWORD *)(a1 + 136) = v6;
        v5 = *(_DWORD *)(v4 + 3612);
      }
    }
    sub_12655F0(v3);
  }
}

