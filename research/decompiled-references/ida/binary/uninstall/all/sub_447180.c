__int64 __fastcall sub_447180(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  int v3; // eax
  bool v4; // zf
  int v6; // ebp
  __int64 v7; // rdx
  const char *v8; // rbx
  char *v9; // rax
  _DWORD v10[66]; // [rsp+0h] [rbp-108h] BYREF

  sub_49B340(a1, "env", 0, 2161, &sub_447870, 0);
  sub_4A3FE0(a1, "env", 0, 1);
  if ( *environ )
  {
    v6 = 0;
    sub_4AE1A0(qword_65A7C0);
    if ( *environ )
    {
      v7 = 0;
      do
      {
        v8 = (const char *)sub_4445F0(0, (__int64)environ[v7], -1, v10);
        v9 = strchr(v8, 61);
        if ( v9 )
        {
          *v9 = 0;
          sub_4A42F0(a1, "env", v8, v9 + 1, 1);
          sub_49F100(v10);
        }
        v7 = ++v6;
      }
      while ( environ[v6] );
    }
    sub_4AE230(qword_65A7C0);
  }
  else
  {
    v1 = sub_496740(a1, "env");
    *(_DWORD *)v1 = 0;
    v2 = sub_40FB00(4);
    *(_QWORD *)(v1 + 8) = v2;
    *(_WORD *)v2 = 28261;
    *(_BYTE *)(v2 + 2) = 118;
    *(_BYTE *)(*(_QWORD *)(v1 + 8) + 3LL) = 0;
    ++*(_DWORD *)v1;
    *(_DWORD *)(v1 + 16) = 3;
    *(_QWORD *)(v1 + 24) = 0;
    sub_4A3880(a1, v1, 0);
    v3 = *(_DWORD *)v1 - 1;
    v4 = *(_DWORD *)v1 == 1;
    *(_DWORD *)v1 = v3;
    if ( v3 < 0 || v4 )
      sub_47B120(v1);
  }
  return sub_49B9C0(a1, "env", 0, 2161, &sub_447870, 0);
}

