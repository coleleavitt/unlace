__int64 __fastcall sub_417160(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v7; // r12
  int v8; // eax
  unsigned int v9; // ebp
  __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // rax
  int v13; // eax
  bool v14; // zf
  __int64 v15; // rdx
  int v16; // [rsp+4h] [rbp-34h] BYREF
  int v17; // [rsp+8h] [rbp-30h] BYREF
  int v18; // [rsp+Ch] [rbp-2Ch] BYREF
  __int64 v19; // [rsp+10h] [rbp-28h] BYREF

  if ( a3 == 4 )
  {
    v7 = sub_470170(a2, a4[1]);
    result = 1;
    if ( v7 )
    {
      if ( *(_UNKNOWN ***)(v7 + 24) == &off_655E20 )
      {
        v15 = *(_QWORD *)(v7 + 32);
        v19 = v15 + 16;
        v8 = *(_DWORD *)(v15 + 8);
        v18 = v8;
      }
      else
      {
        sub_46FD90(0, v7, &v18, &v19);
        v8 = v18;
      }
      v9 = sub_49FAC0(a2, a4[2], (unsigned int)(v8 - 1), &v17);
      if ( !v9 )
      {
        v10 = a4[3];
        if ( v17 > -1 )
          v9 = v17;
        v17 = v9;
        v9 = sub_49FAC0(a2, v10, (unsigned int)(v18 - 1), &v16);
        if ( !v9 )
        {
          v11 = v16;
          if ( v16 >= v18 )
          {
            v11 = v18 - 1;
            v16 = v18 - 1;
          }
          if ( v17 <= v11 )
          {
            v12 = sub_46EEB0((unsigned int)(v11 - v17 + 1), v19 + 8LL * v17);
            sub_48AFD0(a2, v12);
          }
        }
      }
      v13 = *(_DWORD *)v7 - 1;
      v14 = *(_DWORD *)v7 == 1;
      *(_DWORD *)v7 = v13;
      if ( v13 < 0 || v14 )
        sub_47B120(v7);
      return v9;
    }
  }
  else
  {
    sub_458930(a2, 1, a4, "list first last");
    return 1;
  }
  return result;
}

