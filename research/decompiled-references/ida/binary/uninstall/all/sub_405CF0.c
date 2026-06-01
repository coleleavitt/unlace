__int64 __fastcall sub_405CF0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  const char *v7; // rcx
  _DWORD *v8; // rdx
  int *v9; // rdi
  int v10; // eax
  bool v11; // zf
  __int64 v12; // rax
  __int64 v14; // rbx
  unsigned int v15; // eax
  __int64 v16; // rax
  unsigned int v17; // [rsp+10h] [rbp-28h] BYREF
  int v18; // [rsp+14h] [rbp-24h] BYREF

  v17 = 0;
  v7 = "fill|drain data";
  if ( (unsigned int)(a3 - 2) > 1 )
    goto LABEL_13;
  if ( !(unsigned int)sub_4584C0(a2, *(_QWORD *)(a4 + 8), (unsigned int)off_653280, 8, 5354099, 0, (__int64)&v18) )
  {
    if ( !v18 )
    {
      if ( a3 > 2 )
      {
        v8 = *(_DWORD **)(a4 + 16);
        v9 = *(int **)(a1 + 112);
        ++*v8;
        v10 = *v9 - 1;
        v11 = *v9 == 1;
        *v9 = v10;
        if ( v10 < 0 || v11 )
        {
          sub_47B120(v9);
          v8 = *(_DWORD **)(a4 + 16);
        }
        *(_QWORD *)(a1 + 112) = v8;
        *(_QWORD *)a1 = sub_40D5E0(v8, a1 + 8);
      }
      v12 = sub_47BD00(*(unsigned int *)(a1 + 8));
      sub_48AFD0(a2, v12);
      return 0;
    }
    if ( v18 == 1 )
    {
      if ( a3 != 3 )
      {
        v7 = "string count" + 7;
LABEL_13:
        sub_458930(a2, 2, a4, v7);
        return 1;
      }
      if ( (unsigned int)sub_47C180(a2, *(_QWORD *)(a4 + 16), &v17) )
        return 1;
      v14 = sub_48B5D0(a2);
      sub_40D530(v14, v17);
      *(_QWORD *)(a1 + 24) = sub_40D5E0(v14, a1 + 32);
      v15 = sub_4C5A30(a1, 0);
      if ( v15 > 1 )
      {
        v16 = sub_4C9B60(v15);
        sub_48B860(a2, v16, 0);
        return 1;
      }
      sub_40D530(v14, v17 - *(_DWORD *)(a1 + 32));
    }
    return 0;
  }
  return 1;
}

