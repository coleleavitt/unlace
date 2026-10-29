__int64 __fastcall sub_B0BAF0(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rax
  int v4; // r10d
  _DWORD *v5; // rbp
  int *v6; // r9
  int *v7; // r8
  int v8; // eax
  int *v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdi
  int v12; // ecx
  unsigned int v13; // ebx
  unsigned int v15; // ebx
  unsigned int v16; // ebx

  v3 = sub_186B270(0x10u);
  v4 = dword_1C7ED20;
  v5 = (_DWORD *)v3;
  v6 = (int *)(v3 + 8);
  *(_DWORD *)(v3 + 8) = *a2;
  *(_QWORD *)v3 = 0x100000002LL;
  *(_DWORD *)(v3 + 12) = a2[1];
  v7 = (int *)(v3 + 16);
  *(_DWORD *)(v3 + 4) = 2;
  v8 = dword_1C7ED24;
  v9 = v6;
  v10 = 0;
  do
  {
    v12 = *v9;
    if ( *v9 == v8 )
      goto LABEL_6;
    if ( v12 != v4 )
    {
      v11 = (unsigned int)v10;
      v10 = (unsigned int)(v10 + 1);
      v6[v11] = v12;
    }
    ++v9;
  }
  while ( v7 != v9 );
  v5[1] = v10;
  if ( (_DWORD)v10 )
  {
    if ( (_DWORD)v10 != 1 )
    {
      v8 = sub_B156E0(*(_QWORD *)(a1 + 8), v10, v6);
LABEL_6:
      v13 = v8;
      sub_186B220(v5);
      return v13;
    }
    v15 = v5[2];
    sub_186B220(v5);
    return v15;
  }
  else
  {
    v16 = v4;
    sub_186B220(v5);
    return v16;
  }
}

