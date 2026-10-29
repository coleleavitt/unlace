unsigned __int64 __fastcall sub_51AFA0(__int64 a1)
{
  _QWORD *v1; // r15
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
  __int64 v18; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  v1 = *(_QWORD **)(a1 + 1768);
  if ( v1[8] != -1 )
  {
    v2 = v1[5];
    if ( v2 )
    {
      v3 = v1[3];
      v4 = *(_DWORD *)(v3 + 72);
      v5 = *(_DWORD *)(v3 + 68);
      v17 = v5;
      if ( v2 != v4 + 1 - v5 )
        sub_514510();
      if ( v4 >= v5 )
      {
        for ( i = *(_DWORD *)(v3 + 68); ; i = *(_DWORD *)(v16 + 68) )
        {
          v7 = v17 - i + 97;
          v18 = v1[8];
          v8 = v1[4] + ((__int64)(v17 - i) << 6);
          v9 = qword_2CCB598;
          v10 = *(_QWORD *)(v8 + 40);
          for ( j = (__int64 *)v8; v10; j[5] = v10 )
          {
            sub_7BE850(&v18, v9, *(_QWORD *)(j[4] + 8 * v10 - 8), v7);
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
              if ( *(_BYTE *)(v14 + 32) )
              {
                if ( !(unsigned __int8)sub_5143E0((_QWORD *)v14, v18, v7) )
                {
                  if ( !under_debugger )
                    interr(1173);
                  BUG();
                }
                *(_BYTE *)(v14 + 32) = 0;
                v13 = *j;
              }
              v14 += 33;
            }
            while ( v14 != v13 + 33 * j[1] );
          }
          v16 = v1[3];
          if ( ++v17 > *(_DWORD *)(v16 + 72) )
            break;
        }
      }
    }
  }
  return v19 - __readfsqword(0x28u);
}
