__int64 __fastcall sub_F07AD0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdi
  size_t v10; // rdx
  const char *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // rax
  int v15; // r14d
  __int64 v16; // r13
  size_t v17; // rax
  __int64 v19; // [rsp+8h] [rbp-40h]

  result = *(_QWORD *)(a2 + 48);
  if ( *(_DWORD *)(a2 + 24) )
  {
    v6 = *(_QWORD *)(a1 + 1096);
    if ( result )
    {
      v9 = sub_971800(v6, " Param=\"");
      v11 = sub_B174C0(a2, a3);
    }
    else
    {
      v7 = sub_971800(v6, " Param=\"");
      v8 = *(_QWORD *)(a2 + 16);
      v9 = v7;
      v10 = *(_QWORD *)(v8 + 16);
      v11 = *(const char **)(v8 + 8);
    }
    v12 = sub_9717A0(v9, v11, v10);
    sub_971800(v12, "\"");
    result = *(_QWORD *)(a2 + 48);
  }
  if ( result )
  {
    v13 = 0;
    sub_971800(*(_QWORD *)(a1 + 1096), " Position=<");
    v14 = *(_QWORD *)(a2 + 48);
    v15 = v14 - 1;
    v19 = (unsigned int)(v14 - 1);
    if ( (_DWORD)v14 )
    {
      while ( 1 )
      {
        sub_2257BD0(*(_QWORD *)(a1 + 1096), *(unsigned int *)(*(_QWORD *)(a2 + 40) + 4 * v13));
        if ( v15 != (_DWORD)v13 )
        {
          v16 = *(_QWORD *)(a1 + 1096);
          v17 = j__strlen(", ");
          sub_9717A0(v16, ", ", v17);
        }
        if ( v13 == v19 )
          break;
        ++v13;
      }
    }
    return sub_971800(*(_QWORD *)(a1 + 1096), ">");
  }
  return result;
}

