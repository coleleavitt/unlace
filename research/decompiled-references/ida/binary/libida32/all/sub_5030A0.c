unsigned __int64 __fastcall sub_5030A0(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // rdx
  __int64 v3; // rax
  int v4; // ecx
  int v5; // edi
  int i; // eax
  unsigned __int8 v7; // r13
  __int64 v8; // r8
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 *j; // r14
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v16; // rax
  int v17; // [rsp+Ch] [rbp-4Ch]
  int v18; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 1576);
  if ( *(_DWORD *)(v1 + 64) != -1 )
  {
    v2 = *(_QWORD *)(v1 + 40);
    if ( v2 )
    {
      v3 = *(_QWORD *)(v1 + 24);
      v4 = *(_DWORD *)(v3 + 72);
      v5 = *(_DWORD *)(v3 + 68);
      v17 = v5;
      if ( v2 != v4 + 1 - v5 )
        sub_4FC990();
      if ( v4 >= v5 )
      {
        for ( i = *(_DWORD *)(v3 + 68); ; i = *(_DWORD *)(v16 + 68) )
        {
          v7 = v17 - i + 97;
          v18 = *(_DWORD *)(v1 + 64);
          v8 = *(_QWORD *)(v1 + 32) + ((__int64)(v17 - i) << 6);
          v9 = qword_2CA1698;
          v10 = *(_QWORD *)(v8 + 40);
          for ( j = (__int64 *)v8; v10; j[5] = v10 )
          {
            sub_79B4D0(&v18, v9, *(unsigned int *)(j[4] + 4 * v10 - 4), v7);
            v12 = j[5];
            if ( !v12 )
              break;
            v10 = v12 - 1;
          }
          v13 = *j;
          v14 = *j;
          if ( j[1] )
          {
            do
            {
              if ( *(_BYTE *)(v14 + 16) )
              {
                if ( !(unsigned __int8)sub_4FC860((unsigned int *)v14, v18, v7) )
                {
                  if ( !under_debugger )
                    interr(1173);
                  BUG();
                }
                *(_BYTE *)(v14 + 16) = 0;
                v13 = *j;
              }
              v14 += 17;
            }
            while ( v14 != v13 + 17 * j[1] );
          }
          v16 = *(_QWORD *)(v1 + 24);
          if ( ++v17 > *(_DWORD *)(v16 + 72) )
            break;
        }
      }
    }
  }
  return v19 - __readfsqword(0x28u);
}

