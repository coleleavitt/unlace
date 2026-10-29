_DWORD *__fastcall sub_426750(int *a1)
{
  int v1; // r12d
  int v2; // r15d
  _DWORD *v3; // r14
  int *v4; // rbp
  int v5; // ebx
  _DWORD *v6; // rax
  int v7; // ecx
  __int64 v8; // rdx

  v1 = 0;
  v2 = *a1;
  v3 = (_DWORD *)sub_40FB00(8 * *a1 + 24);
  *v3 = v2;
  v3[1] = a1[1];
  v3[2] = a1[2];
  if ( v2 > 0 )
  {
    do
    {
      v4 = *(int **)&a1[2 * v1 + 4];
      v5 = *v4;
      v6 = (_DWORD *)sub_40FB00(4 * *v4 + 8);
      v7 = 0;
      *v6 = v5;
      while ( v7 < v5 )
      {
        v8 = v7++;
        v6[v8 + 1] = v4[v8 + 1];
      }
      *(_QWORD *)&v3[2 * v1++ + 4] = v6;
    }
    while ( v1 < v2 );
  }
  return v3;
}

