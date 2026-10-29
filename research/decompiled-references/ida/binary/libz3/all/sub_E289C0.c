__int64 __fastcall sub_E289C0(__int64 a1, __int64 a2)
{
  __int16 v2; // ax
  int v3; // eax
  __int64 v4; // rbp
  __int64 v5; // rax
  _DWORD *v7; // rax
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 v11; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int8 v12; // [rsp+8h] [rbp-30h]

  v2 = *(_WORD *)(a2 + 4);
  if ( !v2 )
  {
    if ( (*(_BYTE *)(a2 + 30) & 1) == 0 )
    {
      v7 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
      if ( v7 )
      {
        if ( !*v7 && v7[1] == 5 )
        {
          v8 = a2 + 32;
          v9 = 8LL * *(unsigned int *)(a2 + 24);
          v10 = a2 + 32 + v9;
          if ( v9 )
          {
            while ( *(_WORD *)(*(_QWORD *)v8 + 4LL) != 2
                 || *(_DWORD *)(*(_QWORD *)v8 + 16LL)
                 || !(unsigned __int8)sub_E289C0(a1) )
            {
              v8 += 8;
              if ( v10 == v8 )
              {
                v2 = *(_WORD *)(a2 + 4);
                goto LABEL_2;
              }
            }
          }
        }
      }
    }
    return 1;
  }
LABEL_2:
  if ( v2 != 2 )
    return 1;
  if ( *(_DWORD *)(a2 + 16) )
    return 1;
  sub_15D08E0(a1 + 216);
  v3 = *(_DWORD *)(a2 + 72);
  v11 = a1;
  v12 = 1;
  if ( !v3 )
    return 1;
  v4 = 0;
  do
  {
    v5 = 16LL * *(unsigned int *)(a2 + 20) + 8 * v4++;
    sub_E28370(&v11, a1 + 216, *(_QWORD *)(a2 + v5 + 80), 0);
  }
  while ( (unsigned int)v4 < *(_DWORD *)(a2 + 72) );
  return v12;
}

