__int64 __fastcall sub_857F20(unsigned int **a1, _DWORD *a2, int *a3, __int64 a4, __int64 a5)
{
  int v5; // r14d
  int v6; // r15d
  int v8; // ebp
  unsigned int *v9; // rbx
  unsigned int *v10; // rax
  unsigned int v11; // eax
  int v12; // eax
  __int64 v13; // r15
  __int64 v15; // rax
  int v16; // r13d
  unsigned int *v19; // [rsp+20h] [rbp-58h]
  unsigned __int64 v20; // [rsp+28h] [rbp-50h]
  int v21; // [rsp+34h] [rbp-44h] BYREF
  unsigned __int64 v22; // [rsp+38h] [rbp-40h]

  v5 = 0;
  v6 = 0x7FFFFFFF;
  v8 = 0;
  v22 = __readfsqword(0x28u);
  v19 = *a1;
  v9 = *a1;
  v10 = *a1 + 2;
  v20 = *v10 | ((unsigned __int64)(*a1)[1] << 32);
  while ( 1 )
  {
    *a1 = v10 + 1;
    v12 = sub_8573B0(a1, &v21, a2, a3, a4, a5);
    if ( v12 < 0 )
    {
      v13 = a5;
      if ( !*a2 )
        *a2 = 125;
      if ( *(_QWORD *)(a5 + 168) == -1 )
LABEL_18:
        *(_QWORD *)(v13 + 168) = v20;
      return 0;
    }
    v5 |= v21 != v12;
    if ( v6 > v21 )
      v6 = v21;
    if ( v8 < v12 )
      v8 = v12;
    if ( *(_DWORD *)(a5 + 316) < v12 )
      *(_DWORD *)(a5 + 316) = v12;
    *v9 |= v12;
    v9 = *a1;
    v11 = **a1;
    LOWORD(v11) = 0;
    if ( v11 != -2147418112 )
      break;
    v10 = *a1;
  }
  v15 = a5;
  v16 = v6;
  v13 = v15;
  if ( v5 )
  {
    v19[1] = v16;
    if ( *(unsigned int *)(v15 + 312) < (unsigned __int64)v8 )
    {
      *a2 = 200;
      goto LABEL_18;
    }
  }
  else
  {
    v19[1] = 0xFFFF;
  }
  return 1;
}
