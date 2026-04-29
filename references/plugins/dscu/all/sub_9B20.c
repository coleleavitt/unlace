void __fastcall sub_9B20(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r10
  unsigned __int64 *v5; // r9
  unsigned __int64 *v6; // r8
  unsigned int v7; // eax
  unsigned __int64 v8; // rcx
  unsigned __int64 *v9; // rax
  unsigned __int64 v10; // rdx

  v3 = *a2;
  v4 = *a2 + 32 * a2[1];
  if ( v4 != *a2 )
  {
    v5 = *(unsigned __int64 **)(a1 + 528);
    v6 = &v5[4 * *(_QWORD *)(a1 + 536)];
    while ( 2 )
    {
      while ( 1 )
      {
        v8 = *(_QWORD *)(v3 + 16);
        if ( v5 != v6 )
          break;
LABEL_7:
        v3 += 32;
        if ( v3 == v4 )
          return;
      }
      v9 = v5;
      do
      {
        v10 = *v9;
        if ( v8 >= *v9 && v9[1] >= v8 - v10 )
        {
          if ( v9[2] + v8 - v10 != -1 )
          {
            v7 = *(_DWORD *)(v3 + 24);
            if ( *(_DWORD *)(a1 + 768) < v7 )
              *(_DWORD *)(a1 + 768) = v7;
          }
          goto LABEL_7;
        }
        v9 += 4;
      }
      while ( v6 != v9 );
      v3 += 32;
      if ( v3 != v4 )
        continue;
      break;
    }
  }
}
