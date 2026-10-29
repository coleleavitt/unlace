__int64 __fastcall sub_439010(__int64 a1, __int64 a2)
{
  int *v2; // r12
  int v4; // ebp
  __int64 result; // rax
  __int64 v6; // rbx
  int *v7; // rax
  int v8; // ebp
  _BYTE *v9; // rsi
  __int64 v10; // rdx
  int v11; // eax
  bool v12; // zf
  int v13; // eax
  _BYTE v14[16]; // [rsp+0h] [rbp-38h] BYREF

  v2 = nullptr;
  v4 = *(_DWORD *)(a1 + 20);
  if ( *(_DWORD *)a1 == 2 )
  {
    if ( a2 )
      sub_48EDF0(a2, *(_QWORD *)(a1 + 32), *(unsigned int *)(a1 + 40));
    return 1;
  }
  result = 0;
  if ( *(_DWORD *)a1 != 1 )
    return result;
  v6 = a1 + 24;
  if ( a2 )
  {
    v7 = (int *)sub_47B0B0(a1, a2, (unsigned int)(*(_DWORD *)a1 - 1));
    ++*v7;
    v2 = v7;
  }
  v8 = v4 - 1;
  if ( v8 == -1 )
  {
LABEL_19:
    if ( a2 )
    {
      sub_48F180(a2, v2);
      v11 = *v2 - 1;
      v12 = *v2 == 1;
      *v2 = v11;
      if ( v11 < 0 || v12 )
      {
        sub_47B120(v2);
        return 1;
      }
    }
    return 1;
  }
  while ( 1 )
  {
    if ( *(_DWORD *)v6 == 4 )
    {
      if ( !v2 )
        goto LABEL_15;
      v10 = *(unsigned int *)(v6 + 16);
      v9 = *(_BYTE **)(v6 + 8);
      goto LABEL_14;
    }
    if ( *(_DWORD *)v6 != 8 )
      break;
    if ( v2 )
    {
      v9 = v14;
      v10 = (unsigned int)sub_47D9F0(*(_QWORD *)(v6 + 8), *(unsigned int *)(v6 + 16), 0, v14);
LABEL_14:
      sub_48EDF0(v2, v9, v10);
    }
LABEL_15:
    --v8;
    v6 += 24;
    if ( v8 == -1 )
      goto LABEL_19;
  }
  if ( !v2 )
    return 0;
  v13 = *v2 - 1;
  v12 = *v2 == 1;
  *v2 = v13;
  if ( v13 >= 0 && !v12 )
    return 0;
  sub_47B120(v2);
  return 0;
}

