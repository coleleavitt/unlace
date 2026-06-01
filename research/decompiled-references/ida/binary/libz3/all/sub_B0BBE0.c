__int64 __fastcall sub_B0BBE0(__int64 a1, _DWORD *a2)
{
  _DWORD *v3; // rdi
  int v4; // r9d
  __int64 v5; // rax
  int *v6; // r8
  int v7; // eax
  int *v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdi
  int v11; // ecx
  unsigned int v12; // ebp
  _DWORD *v14; // rax
  int *v15; // rbx

  v3 = (_DWORD *)sub_186B270(0x10u);
  v3[2] = *a2;
  *(_QWORD *)v3 = 0x100000002LL;
  v3[3] = a2[1];
  v3[1] = 2;
  v14 = (_DWORD *)sub_186B300(v3, 0x14u);
  v15 = v14 + 2;
  *v14 = 3;
  v4 = dword_1C7ED20;
  v14[v14[1] + 2] = a2[2];
  v5 = (unsigned int)(v14[1] + 1);
  v6 = &v15[v5];
  *(v15 - 1) = v5;
  if ( v6 == v15 )
  {
    *(v15 - 1) = 0;
LABEL_14:
    v12 = v4;
    goto LABEL_8;
  }
  v7 = dword_1C7ED24;
  v8 = v15;
  v9 = 0;
  do
  {
    v11 = *v8;
    if ( *v8 == v7 )
      goto LABEL_7;
    if ( v11 != v4 )
    {
      v10 = (unsigned int)v9;
      v9 = (unsigned int)(v9 + 1);
      v15[v10] = v11;
    }
    ++v8;
  }
  while ( v6 != v8 );
  *(v15 - 1) = v9;
  if ( !(_DWORD)v9 )
    goto LABEL_14;
  if ( (_DWORD)v9 != 1 )
  {
    v7 = sub_B156E0(*(_QWORD *)(a1 + 8), v9, v15);
LABEL_7:
    v12 = v7;
    goto LABEL_8;
  }
  v12 = *v15;
LABEL_8:
  sub_186B220(v15 - 2);
  return v12;
}

