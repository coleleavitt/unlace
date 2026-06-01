__int64 __fastcall sub_226EDA0(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v6; // edx
  char *v7; // rsi
  char *v8; // rdi
  char *v9; // rax
  __int64 v10; // r10
  _BYTE *v11; // r11
  char *v12; // rdx
  unsigned int v13; // ecx
  __int64 result; // rax
  char *v15; // rax
  __int64 v16; // r8
  unsigned int v17; // edx
  const char *v18; // [rsp+0h] [rbp-48h] BYREF
  __int16 v19; // [rsp+20h] [rbp-28h]

  v6 = *(_DWORD *)(a1 + 60);
  v7 = *(char **)(a1 + 40);
  if ( a2 <= v6 )
    goto LABEL_4;
  v8 = *(char **)(a1 + 48);
  if ( v7 == v8 || *v7 != 32 )
    goto LABEL_4;
  *(_QWORD *)(a1 + 40) = v7 + 1;
  *(_DWORD *)(a1 + 60) = v6 + 1;
  if ( a2 > v6 + 1 )
  {
    if ( v8 == v7 + 1 )
    {
      v7 = v8;
      goto LABEL_4;
    }
    if ( v7[1] == 32 )
    {
      v15 = v7 + 2;
      v16 = (__int64)&v7[a2 - 2 - v6 + 2];
      v17 = v6 - (_DWORD)v7;
      do
      {
        v7 = v15;
        *(_QWORD *)(a1 + 40) = v15;
        *(_DWORD *)(a1 + 60) = v17 + (_DWORD)v15;
        if ( v15 == (char *)v16 )
          break;
        if ( v15 == v8 )
          break;
        ++v15;
      }
      while ( *(v15 - 1) == 32 );
      goto LABEL_4;
    }
  }
  ++v7;
LABEL_4:
  v9 = sub_226DF60(a1, v7);
  v12 = *(char **)(v10 + 40);
  if ( v9 == v12 )
    return 1;
  v13 = *(_DWORD *)(v10 + 60);
  if ( v13 <= a3 )
    goto LABEL_15;
  result = 1;
  if ( v13 >= a2 )
    return result;
  if ( v12 != *(char **)(v10 + 48) && *v12 == 35 )
  {
LABEL_15:
    *v11 = 1;
    return 1;
  }
  v18 = "A text line is less indented than the block scalar";
  v19 = 259;
  sub_226E270(v10, (__int64)&v18, v12);
  return 0;
}
