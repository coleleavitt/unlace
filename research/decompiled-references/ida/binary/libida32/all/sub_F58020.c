__int64 __fastcall sub_F58020(__int64 a1, __int64 *a2)
{
  unsigned __int64 v4; // rax
  int v5; // edx
  _QWORD *v6; // rdx
  __int64 result; // rax
  _QWORD *v8; // r9
  __int64 v9; // rax
  _QWORD *v10; // rdx
  _QWORD *v11; // r12
  _QWORD *v12; // rbx
  int v13; // edx
  __int64 v14; // rsi
  int v15; // ecx
  unsigned int v16; // edx
  __int64 v17; // rdi
  int v18; // edi
  __int64 v19; // r8
  unsigned __int64 v20[4]; // [rsp+8h] [rbp-20h] BYREF

  v4 = sub_B4E950(a1 + 72);
  if ( v4 )
    v4 -= 64LL;
  v5 = *((_DWORD *)a2 + 2);
  v20[0] = v4;
  if ( !v5 )
  {
    v6 = sub_F568A0((_QWORD *)a2[3], a2[3] + 8LL * *((unsigned int *)a2 + 8), (__int64 *)v20);
    result = 1;
    if ( v8 != v6 )
      return result;
    goto LABEL_5;
  }
  v13 = *((_DWORD *)a2 + 4);
  v14 = *a2;
  if ( v13 )
  {
    v15 = v13 - 1;
    v16 = (v13 - 1) & (((unsigned int)v4 >> 9) ^ ((unsigned int)v4 >> 4));
    v17 = *(_QWORD *)(v14 + 8LL * v16);
    if ( v4 == v17 )
      return 1;
    if ( v17 != -4096 )
    {
      v18 = 1;
      do
      {
        v16 = v15 & (v18 + v16);
        v19 = *(_QWORD *)(v14 + 8LL * v16);
        if ( v4 == v19 )
          return 1;
        ++v18;
      }
      while ( v19 != -4096 );
    }
  }
LABEL_5:
  v9 = sub_B747D0(a1);
  v11 = v10;
  v12 = (_QWORD *)v9;
  if ( (_QWORD *)v9 == v10 )
    return 0;
  while ( 1 )
  {
    result = sub_F58020(*v12, a2);
    if ( (_BYTE)result )
      break;
    if ( v11 == ++v12 )
      return 0;
  }
  return result;
}

