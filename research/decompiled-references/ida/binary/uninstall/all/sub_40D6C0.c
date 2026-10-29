__int64 __fastcall sub_40D6C0(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  int v6; // r12d
  int *v7; // rax
  int v8; // r13d
  _BYTE *v9; // r14
  int v10; // ebx
  int v11; // eax
  bool v12; // dl
  bool v13; // al
  __int64 result; // rax
  _BYTE *v15; // rbp
  int v16; // r12d
  unsigned __int8 *v17; // rbx
  __int64 v18; // rdi

  v6 = 0;
  v7 = *(int **)(a1 + 32);
  v9 = v7 + 2;
  v10 = *v7;
  v11 = *v7;
  v8 = v11;
  v12 = v11 > 0;
  while ( v11 >= 0 && v12 )
  {
    v13 = v9[v6++] <= 0;
    v10 += v13;
    v12 = v6 < v8;
    v11 = v10;
  }
  if ( v10 < 0 )
    sub_47D740((unsigned int)"max size for a Tcl value (%d bytes) exceeded", 0x7FFFFFFF, v12, a4, a5, a6);
  result = sub_40FB00((unsigned int)(v10 + 1));
  v15 = (_BYTE *)result;
  *(_QWORD *)(a1 + 8) = result;
  *(_DWORD *)(a1 + 16) = v10;
  if ( v10 == v8 )
  {
    result = (__int64)memcpy((void *)result, v9, v8);
    v15[v8] = 0;
  }
  else
  {
    v16 = 0;
    if ( v8 > 0 )
    {
      v17 = v9;
      do
      {
        v18 = *v17;
        ++v16;
        ++v17;
        result = (int)sub_49BA90(v18, v15);
        v15 += (int)result;
      }
      while ( v16 < v8 );
    }
    *v15 = 0;
  }
  return result;
}

