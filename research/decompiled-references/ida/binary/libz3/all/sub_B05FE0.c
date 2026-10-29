void __fastcall sub_B05FE0(__int64 a1, unsigned int *a2)
{
  __int64 v2; // r12
  __int64 v3; // rdx
  __int64 v5; // r13
  unsigned int *v6; // rax
  __int64 v7; // r12
  unsigned int *v8; // rsi
  unsigned int v9; // r13d
  char v10; // dl
  unsigned int v11; // edx
  char v12; // al

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *a2;
  if ( !*(_BYTE *)(*(_QWORD *)(v2 + 8848) + v3) )
    return;
  v5 = *(_QWORD *)(*(_QWORD *)(v2 + 8840) + 8LL * ((unsigned int)v3 >> 1));
  if ( (unsigned int)sub_8E7030(*(_QWORD *)(a1 + 16)) )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v2 + 7488) + 56LL))(
            *(_QWORD *)(v2 + 7488),
            v5) )
      return;
  }
  v6 = *((unsigned int **)a2 + 1);
  if ( !v6 )
  {
    LODWORD(v7) = 0;
    goto LABEL_20;
  }
  v7 = *(v6 - 1);
  if ( !(_DWORD)v7 )
  {
LABEL_20:
    v9 = 0;
    goto LABEL_14;
  }
  v8 = &v6[v7];
  v9 = 0;
  LODWORD(v7) = 0;
  do
  {
    v10 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8848LL) + *v6);
    if ( v10 )
    {
      if ( v10 != 1 )
        goto LABEL_12;
      ++v9;
    }
    LODWORD(v7) = v7 + 1;
LABEL_12:
    ++v6;
  }
  while ( v6 != v8 );
  if ( (unsigned int)v7 < v9 )
  {
    sub_1872CE0("");
    sub_1873130(114, 2130);
  }
LABEL_14:
  v11 = a2[4];
  v12 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8848LL) + *a2);
  if ( v9 >= v11 != (v12 == 1) )
  {
    sub_1872CE0("");
    sub_1873130(114, 2131);
  }
  if ( (unsigned int)v7 < v11 != (v12 == -1) )
  {
    sub_1872CE0("");
    sub_1873130(114, 2132);
  }
}

