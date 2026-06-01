/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CCBA0
// Address: 0x080CCBA0

//----- (080CCBA0) --------------------------------------------------------
char *__cdecl sub_80CCBA0(char *a1, int a2, int a3, char *a4)
{
  char *v4; // ecx
  char *v5; // eax
  char *v6; // esi
  char *v7; // eax
  void *v8; // edx
  int i; // esi
  char *v10; // ebx
  void *v11; // edx
  char *v13; // [esp+Ch] [ebp-30h]
  int v14; // [esp+10h] [ebp-2Ch]
  unsigned int v15; // [esp+10h] [ebp-2Ch]
  void *ptr; // [esp+14h] [ebp-28h] BYREF
  unsigned int v17; // [esp+18h] [ebp-24h]
  int v18; // [esp+1Ch] [ebp-20h]
  unsigned int v19; // [esp+20h] [ebp-1Ch]

  v19 = __readgsdword(0x14u);
  ptr = nullptr;
  v17 = 0;
  v18 = 0;
  sub_80CC820((size_t *)&ptr, a4, 0);
  if ( v17 )
  {
    v14 = 0;
    while ( 1 )
    {
      v4 = (char *)ptr + 12 * v14;
      v5 = (char *)&dword_80DDFD8;
      if ( *((_DWORD *)v4 + 1) )
        v5 = *(char **)v4;
      v6 = sub_80CE680(a1, a2, v5, a3, 0);
      if ( (unsigned __int8)sub_80CED40((int)v6) )
        break;
      if ( ++v14 >= v17 )
      {
        v6 = nullptr;
        break;
      }
    }
    v7 = (char *)ptr;
    v8 = ptr;
    if ( ptr )
    {
      if ( v17 )
      {
        v15 = v17;
        v13 = v6;
        for ( i = 0; i != v15; ++i )
        {
          v10 = &v7[12 * i];
          v11 = *(void **)v10;
          if ( *(_DWORD *)v10 )
          {
            *((_DWORD *)v10 + 1) = 0;
            sub_80CF780(v11);
            v7 = (char *)ptr;
          }
          v8 = v7;
        }
        v6 = v13;
      }
      goto LABEL_14;
    }
  }
  else
  {
    v8 = ptr;
    v6 = nullptr;
    if ( ptr )
    {
LABEL_14:
      v17 = 0;
      sub_80CF780(v8);
    }
  }
  if ( v19 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v6;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
