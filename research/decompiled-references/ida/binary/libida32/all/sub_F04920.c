__int64 __fastcall sub_F04920(__int64 a1, __int64 a2)
{
  int v3; // eax
  unsigned int *v4; // rbx
  __int64 result; // rax
  unsigned int *i; // rbp
  __int64 v7; // rdi
  _BYTE *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rsi

  v3 = *(_DWORD *)(a2 + 40);
  if ( v3 == 1 )
  {
    sub_971800(*(_QWORD *)(a1 + 1096), " BS_Inbranch");
  }
  else if ( v3 )
  {
    if ( v3 == 2 )
      sub_971800(*(_QWORD *)(a1 + 1096), " BS_Notinbranch");
  }
  else
  {
    sub_971800(*(_QWORD *)(a1 + 1096), " BS_Undefined");
  }
  v4 = *(unsigned int **)(a2 + 128);
  result = *(unsigned int *)(a2 + 120);
  for ( i = &v4[result]; i != v4; result = sub_2257BD0(v7, v10) )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(a1 + 1096);
      v8 = *(_BYTE **)(v7 + 32);
      if ( *(_BYTE **)(v7 + 24) != v8 )
        break;
      ++v4;
      v9 = sub_22581D0(v7, " ", 1);
      result = sub_2257BD0(v9, *(v4 - 1));
      if ( i == v4 )
        return result;
    }
    *v8 = 32;
    v10 = *v4++;
    ++*(_QWORD *)(v7 + 32);
  }
  return result;
}

