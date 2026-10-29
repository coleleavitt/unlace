/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_426F60
// Address: 0x00426F60

//----- (00426F60) --------------------------------------------------------
char *__thiscall sub_426F60(unsigned int *this, char *a2, unsigned int *a3)
{
  bool v3; // zf
  unsigned int *v4; // edi
  unsigned int *v5; // ebx
  unsigned int v6; // ebx
  int v7; // eax
  const char *v8; // ecx
  int v9; // esi
  const char *v10; // eax
  char *result; // eax
  unsigned int v12; // ebx
  unsigned int v13; // eax
  unsigned int v14; // ebx
  LPVOID v15; // esi
  unsigned int v16; // ebx
  unsigned int v17; // eax
  unsigned int *v18; // ecx
  unsigned int *v19; // ecx
  unsigned int v20; // [esp-8h] [ebp-4Ch]
  char *v21; // [esp+20h] [ebp-24h] BYREF
  LPVOID v22; // [esp+24h] [ebp-20h]
  unsigned int v23; // [esp+28h] [ebp-1Ch]
  unsigned int v24; // [esp+2Ch] [ebp-18h]
  unsigned int v25; // [esp+30h] [ebp-14h]
  unsigned int *v26; // [esp+34h] [ebp-10h]
  int v27; // [esp+40h] [ebp-4h]
  unsigned int v28; // [esp+4Ch] [ebp+8h]

  v3 = *(this + 12) == 0;
  v4 = this + 11;
  v5 = a3 + 1;
  v26 = a3 + 1;
  if ( v3 )
  {
    result = a2;
LABEL_18:
    v14 = *v5;
    v21 = result;
    v15 = nullptr;
    v25 = 0;
    v22 = nullptr;
    v23 = 0;
    v26 = nullptr;
    v24 = 0;
    if ( v14 )
    {
      v15 = sub_4539E0(v14);
      v22 = v15;
      v26 = (unsigned int *)v14;
      v20 = *a3;
      v24 = v14;
      sub_464310((unsigned int)v15, v20, v14);
      v25 = v14;
      v23 = v14;
    }
    v16 = *v4;
    v27 = 0;
    if ( (unsigned int)&v21 < v16 || (unsigned int)&v21 >= v16 + 16 * v4[2] )
    {
      sub_428830(v4, v4[1] + 1);
      result = (char *)(*v4 + 16 * v4[1]);
      *(_DWORD *)result = a2;
      *((_DWORD *)result + 2) = v25;
      v19 = v26;
      *((_DWORD *)result + 1) = v15;
      *((_DWORD *)result + 3) = v19;
    }
    else
    {
      v17 = v4[1];
      v22 = nullptr;
      v23 = 0;
      v24 = 0;
      LOBYTE(v27) = 1;
      sub_428830(v4, v17 + 1);
      result = (char *)(*v4 + 16 * v4[1]);
      *((_DWORD *)result + 2) = v25;
      v18 = v26;
      *(_DWORD *)result = a2;
      *((_DWORD *)result + 1) = v15;
      *((_DWORD *)result + 3) = v18;
    }
    ++v4[1];
    return result;
  }
  v6 = *v5;
  v7 = 16 * *(this + 12) + *(this + 11);
  v8 = MultiByteStr;
  v25 = v7;
  v9 = v7 - 12;
  if ( v6 )
    v8 = (const char *)*a3;
  v10 = MultiByteStr;
  if ( *(_DWORD *)(v9 + 4) )
    v10 = *(const char **)v9;
  result = (char *)strcmp(v10, v8);
  if ( result )
    result = (char *)((int)result < 0 ? -1 : 1);
  if ( result )
  {
    result = a2;
    if ( *(char **)(v25 - 16) == a2 )
    {
      if ( (unsigned int *)v9 != a3 )
      {
        result = (char *)(v6 - 1);
        v12 = v6 != 0 ? v6 - 1 : 0;
        if ( v12 )
        {
          v13 = *a3;
          v28 = *a3;
          if ( v12 + 1 > *(_DWORD *)(v9 + 8) )
          {
            *(_DWORD *)v9 = sub_453B00(v9, *(void **)v9, v12 + 1, 1u);
            v13 = v28;
          }
          *(_DWORD *)(v9 + 4) = v12 + 1;
          sub_464310(*(_DWORD *)v9, v13, v12);
          result = *(char **)v9;
          *(_BYTE *)(v12 + *(_DWORD *)v9) = 0;
        }
        else
        {
          *(_DWORD *)(v9 + 4) = 0;
        }
      }
      return result;
    }
    v5 = v26;
    goto LABEL_18;
  }
  return result;
}
