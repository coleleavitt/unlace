_QWORD *__fastcall sub_2160150(_QWORD *a1, _QWORD *a2, _DWORD *a3, unsigned __int64 *a4)
{
  unsigned int v5; // eax
  unsigned __int64 v7; // rdi
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rbx
  _BOOL8 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  _QWORD v14[6]; // [rsp+8h] [rbp-30h] BYREF

  v5 = a3[5];
  if ( !v5 )
    goto LABEL_2;
  v7 = a2[2];
  v9 = (unsigned int)a3[4];
  v10 = v7 + v5;
  v11 = __CFADD__(v7, v5);
  if ( (a2[8] || a2[9]) && v7 )
  {
    if ( a3[2] <= (unsigned int)v9 )
      LODWORD(v9) = a3[2];
    v9 = (unsigned int)v9;
  }
  v12 = v9 + v10;
  if ( !__CFADD__(v9, v10) && !__CFADD__(v9, v10) && (v7 += a2[3], v12 <= v7) && !v11
    || (v13 = sub_2195B10(v7, a2, v12, v11), sub_2220500(v14, 4, v13), !v14[0]) )
  {
    *a4 = v10;
    a4[1] = v9;
LABEL_2:
    *a1 = 0;
    return a1;
  }
  *a1 = v14[0];
  return a1;
}
