bool __fastcall sub_9FD9D0(__int64 *a1, char *a2, _QWORD *a3)
{
  int v3; // ebx
  __int64 v4; // r8
  __int64 v5; // r10
  int v6; // r11d
  int v7; // ebx
  __int64 v8; // r12
  int v9; // r14d
  int v10; // eax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned int i; // ecx
  __int64 v14; // rbp
  int v15; // edx
  unsigned int v16; // ecx
  bool result; // al
  __int64 *v18; // r9
  __int64 *v19; // r9
  bool v20; // al
  int v21; // [rsp+4h] [rbp-54h]
  char v22[4]; // [rsp+10h] [rbp-48h] BYREF
  __int64 v23; // [rsp+14h] [rbp-44h]
  char v24[4]; // [rsp+1Ch] [rbp-3Ch] BYREF
  unsigned __int64 v25; // [rsp+20h] [rbp-38h]

  v3 = *((_DWORD *)a1 + 4);
  if ( !v3 )
  {
    *a3 = 0;
    return 0;
  }
  v4 = (__int64)a2;
  v5 = *a1;
  v22[0] = -1;
  v6 = *((_DWORD *)a2 + 2);
  v24[0] = -2;
  v7 = v3 - 1;
  v8 = 0;
  v9 = 1;
  v25 = 0xFFFFFFFEFFFFFFFELL;
  v10 = *a2;
  v23 = -1;
  v11 = 0xBF58476D1CE4E5B9LL
      * ((unsigned int)(1512728442 * v10) | ((unsigned __int64)(unsigned int)(37 * *((_DWORD *)a2 + 1)) << 32));
  v12 = 0xBF58476D1CE4E5B9LL
      * (((unsigned __int64)(unsigned int)(37 * v6) << 32) | (unsigned int)(v11 >> 31) ^ (unsigned int)v11);
  for ( i = v7 & ((v12 >> 31) ^ v12); ; i = v7 & v16 )
  {
    v14 = v5 + 168LL * i;
    v15 = *(_DWORD *)(v14 + 8);
    if ( v15 == v6 )
    {
      v21 = *(_DWORD *)(v14 + 8);
      result = sub_9FAF30(v4, v5 + 168LL * i);
      v15 = v21;
      if ( result )
      {
        *v18 = v14;
        return result;
      }
    }
    if ( v15 == -1 )
      break;
    if ( v15 == -2 )
    {
      v20 = sub_9FAF30(v14, (__int64)v24);
      if ( !v8 && v20 )
        v8 = v14;
    }
LABEL_6:
    v16 = v9 + i;
    ++v9;
  }
  if ( !sub_9FAF30(v14, (__int64)v22) )
    goto LABEL_6;
  if ( !v8 )
    v8 = v14;
  *v19 = v8;
  return 0;
}

