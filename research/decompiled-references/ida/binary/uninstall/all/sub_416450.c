__int64 __fastcall sub_416450(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v6; // r12
  int v7; // r9d
  int v8; // edx
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // [rsp+Ch] [rbp-1Ch] BYREF

  if ( a3 == 1 )
  {
    v12 = sub_47BD00(*(unsigned int *)(*(_QWORD *)(a2 + 168) + 40LL));
LABEL_15:
    sub_48AFD0(a2, v12);
    return 0;
  }
  else
  {
    if ( a3 == 2 )
    {
      v6 = *(_QWORD *)(a2 + 192);
      if ( !(unsigned int)sub_47C180(a2, *(_QWORD *)(a4 + 8), &v13) )
      {
        v8 = v13;
        if ( v13 > 0 )
        {
          v9 = *(_QWORD *)(a2 + 168);
          goto LABEL_10;
        }
        v9 = *(_QWORD *)(a2 + 168);
        if ( v9 != v6 )
        {
          v8 = *(_DWORD *)(v9 + 40) + v13;
          v13 = v8;
LABEL_10:
          while ( v9 != v6 )
          {
            if ( *(_DWORD *)(v9 + 40) == v8 )
            {
              if ( v9 == v6 )
                break;
              v12 = sub_46EEB0(*(unsigned int *)(v9 + 12), *(_QWORD *)(v9 + 16));
              goto LABEL_15;
            }
            v9 = *(_QWORD *)(v9 + 32);
          }
        }
        v10 = *(_QWORD *)(a4 + 8);
        v11 = *(_QWORD *)(v10 + 8);
        if ( !v11 )
          LODWORD(v11) = sub_47B3B0(v10);
        sub_48B710(a2, (unsigned int)"bad level \"", v11, (unsigned int)"\"", 0, v7);
      }
    }
    else
    {
      sub_458930(a2, 1, a4, "?number?");
    }
    return 1;
  }
}

