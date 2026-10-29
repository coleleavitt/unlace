__int64 __fastcall sub_416C70(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int v5; // r13d
  __int64 result; // rax
  __int64 v9; // r14
  int v10; // ebx
  __int64 *v11; // rbp
  bool i; // cc
  __int64 v13; // rsi
  __int64 v14; // rcx
  int v15; // ecx
  __int64 v16; // rax
  int v17; // eax
  bool v18; // zf
  __int64 v19; // rax
  __int64 *v20; // rdx
  __int64 v21; // r12
  __int64 *v22; // rax
  __int64 v23; // rsi
  int v24; // eax
  int v25; // eax
  int v26; // [rsp+Ch] [rbp-3Ch] BYREF
  __int64 *v27; // [rsp+10h] [rbp-38h] BYREF

  v5 = 0;
  if ( a3 > 2 )
  {
    v9 = sub_470170(a2, *(_QWORD *)(a4 + 8));
    result = 1;
    if ( v9 )
    {
      if ( *(_UNKNOWN ***)(v9 + 24) == &off_655E20 )
      {
        v19 = *(_QWORD *)(v9 + 32);
        v20 = (__int64 *)(v19 + 16);
        LODWORD(v19) = *(_DWORD *)(v19 + 8);
        v27 = v20;
        v26 = v19;
      }
      else
      {
        sub_46FD90(0, v9, &v26, &v27);
      }
      v10 = a3 - 2;
      v11 = (__int64 *)(a4 + 16);
      if ( v10 > 0 )
      {
        for ( i = v26 <= 0; !i; i = v15 <= 0 )
        {
          v13 = *v11++;
          v14 = *v27++;
          if ( !sub_4A4160(a2, v13, 0, v14, 512) )
            v5 = 1;
          --v10;
          v15 = --v26;
          if ( v10 <= 0 || v5 != 0 )
            break;
        }
      }
      if ( v10 > 0 && v5 == 0 )
      {
        v21 = sub_496740();
        v22 = off_656088;
        *(_DWORD *)(v21 + 16) = 0;
        *(_QWORD *)(v21 + 24) = 0;
        *(_DWORD *)v21 = 1;
        *(_QWORD *)(v21 + 8) = v22;
        if ( !v5 )
        {
          while ( 1 )
          {
            v24 = v10--;
            if ( v24 <= 0 )
              break;
            v23 = *v11++;
            if ( !sub_4A4160(a2, v23, 0, v21, 512) )
            {
              v5 = 1;
              break;
            }
          }
        }
        v25 = *(_DWORD *)v21 - 1;
        v18 = *(_DWORD *)v21 == 1;
        *(_DWORD *)v21 = v25;
        if ( v25 < 0 || v18 )
          sub_47B120(v21);
      }
      if ( !v5 && v26 > 0 )
      {
        v16 = sub_46EEB0((unsigned int)v26, v27);
        sub_48AFD0(a2, v16);
      }
      v17 = *(_DWORD *)v9 - 1;
      v18 = *(_DWORD *)v9 == 1;
      *(_DWORD *)v9 = v17;
      if ( v17 < 0 || v18 )
        sub_47B120(v9);
      return v5;
    }
  }
  else
  {
    sub_458930(a2, 1, a4, "list varName ?varName ...?");
    return 1;
  }
  return result;
}

