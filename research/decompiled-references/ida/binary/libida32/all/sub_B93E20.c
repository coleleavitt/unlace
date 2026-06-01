unsigned __int64 __fastcall sub_B93E20(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 result; // rax
  __int64 v6; // rdi
  _BYTE *v7; // rax
  __int64 *v8; // rbx
  unsigned __int64 v9; // rdx
  __int64 v10; // r14
  __int64 v11; // rbp
  char v12; // al
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  int v20; // r9d
  __int64 v21; // rdi
  unsigned __int64 v22; // [rsp-1Eh] [rbp-58h]

  if ( (*(_DWORD *)(a2 + 20) & 0x1FFFFFFF) != 0 )
  {
    result = *(_QWORD *)(a2 + 24);
    if ( (*(_BYTE *)(result + 29) & 2) != 0 )
      return result;
  }
  v6 = *(_QWORD *)a1;
  if ( a3 )
  {
    v7 = *(_BYTE **)(v6 + 32);
    if ( (unsigned __int64)v7 < *(_QWORD *)(v6 + 24) )
    {
LABEL_5:
      *(_QWORD *)(v6 + 32) = v7 + 1;
      *v7 = 60;
      goto LABEL_6;
    }
  }
  else
  {
    sub_971800(v6, "template ");
    v6 = *(_QWORD *)a1;
    v7 = *(_BYTE **)(*(_QWORD *)a1 + 32LL);
    if ( (unsigned __int64)v7 < *(_QWORD *)(*(_QWORD *)a1 + 24LL) )
      goto LABEL_5;
  }
  sub_2257CD0(v6, 60);
LABEL_6:
  v8 = (__int64 *)(a2 + 24);
  v9 = 0;
  v10 = a2 + 8LL * (*(_DWORD *)(a2 + 20) & 0x1FFFFFFF) + 24;
  if ( v10 != a2 + 24 )
  {
    while ( 1 )
    {
      v11 = *v8;
      if ( (*(_BYTE *)(*v8 + 29) & 2) != 0 )
        goto LABEL_9;
      if ( (_BYTE)v9 )
        sub_971800(*(_QWORD *)a1, ", ");
      v12 = *(_BYTE *)(v11 + 28) & 0x7F;
      if ( v12 == 67 )
      {
        sub_B8FA80((__int64 *)a1, v11);
        v9 = 1;
LABEL_9:
        if ( (__int64 *)v10 == ++v8 )
          break;
      }
      else
      {
        if ( v12 != 47 )
        {
          v9 = 1;
          if ( v12 == 68 )
          {
            sub_B93C20(a1, v11);
            v9 = 1;
          }
          goto LABEL_9;
        }
        ++v8;
        sub_B8FCF0((_QWORD *)a1, v11, v9);
        v9 = 1;
        if ( (__int64 *)v10 == v8 )
          break;
      }
    }
  }
  v13 = *(_QWORD *)a1;
  result = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
  if ( result >= *(_QWORD *)(*(_QWORD *)a1 + 24LL) )
  {
    result = sub_2257CD0(v13, 62);
  }
  else
  {
    *(_QWORD *)(v13 + 32) = result + 1;
    *(_BYTE *)result = 62;
  }
  if ( (*(_BYTE *)(a2 + 23) & 0x40) != 0 )
  {
    result = *(_DWORD *)(a2 + 20) & 0x1FFFFFFF;
    v14 = *(_QWORD *)(a2 + 8 * result + 24);
    if ( v14 )
    {
      v15 = *(_QWORD *)a1;
      sub_971800(*(_QWORD *)a1, " requires ");
      v19 = sub_B8EB60(v15, "\n", v16, v17, v18, *(_QWORD *)(a1 + 24));
      sub_EE3EC0(v14, *(_QWORD *)a1, 0, a1 + 8, *(_DWORD *)(a1 + 32), v20, (__int64)"\n", v19);
      result = v22;
    }
  }
  if ( !a3 )
  {
    v21 = *(_QWORD *)a1;
    result = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
    if ( result >= *(_QWORD *)(*(_QWORD *)a1 + 24LL) )
    {
      return sub_2257CD0(v21, 32);
    }
    else
    {
      *(_QWORD *)(v21 + 32) = result + 1;
      *(_BYTE *)result = 32;
    }
  }
  return result;
}

