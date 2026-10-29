/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6B9C0
// Address: 0x0006B9C0

//----- (0006B9C0) --------------------------------------------------------
int __cdecl sub_6B9C0(int a1, char *s)
{
  size_t v2; // eax
  size_t v3; // ecx
  char *v4; // esi
  size_t v5; // edi
  size_t v6; // esi
  char *v7; // eax
  size_t v8; // edi
  char *v9; // esi
  int v10; // eax
  int v11; // ecx
  char *v12; // eax
  int v13; // ecx
  int v15; // [esp+18h] [ebp-24h] BYREF
  size_t v16; // [esp+1Ch] [ebp-20h]
  void *v17; // [esp+20h] [ebp-1Ch]
  unsigned int v18; // [esp+28h] [ebp-14h]

  v18 = __readgsdword(0x14u);
  v16 = 0;
  v15 = 0;
  v17 = nullptr;
  v2 = strlen(s);
  if ( v2 >= 0xFFFFFFF0 )
    sub_758B0();
  v3 = v2;
  if ( v2 >= 0xB )
  {
    v5 = (v2 + 16) & 0xFFFFFFF0;
    v6 = v2;
    v7 = (char *)operator new(v5);
    v3 = v6;
    v4 = v7;
    v17 = v7;
    v15 = v5 | 1;
    v16 = v3;
    goto LABEL_6;
  }
  LOBYTE(v15) = 2 * v2;
  v4 = (char *)&v15 + 1;
  if ( v2 )
  {
LABEL_6:
    v8 = v3;
    memcpy(v4, s, v3);
    v3 = v8;
  }
  v4[v3] = 0;
  v9 = sub_6BB60(a1 + 252, (unsigned __int8 *)&v15);
  if ( (v15 & 1) != 0 )
    operator delete(v17);
  v10 = sub_6AB50(a1, s);
  if ( v10 )
  {
    sub_6BF30((int)v9, v10);
  }
  else
  {
    v11 = *((_DWORD *)v9 + 1);
    if ( *((_DWORD *)v9 + 2) >= (unsigned int)(v11 + 1) )
    {
      v12 = *(char **)v9;
    }
    else
    {
      v12 = (char *)qvector_reserve((int)v9, *(void **)v9, v11 + 1, 0x10u);
      *(_DWORD *)v9 = v12;
      v11 = *((_DWORD *)v9 + 1);
    }
    v13 = 16 * v11;
    *(_DWORD *)&v12[v13 + 4] = 0;
    *(_DWORD *)&v12[v13] = 0;
    *(_DWORD *)&v12[v13 + 10] = 0;
    *(_DWORD *)&v12[v13 + 6] = 0;
    ++*((_DWORD *)v9 + 1);
  }
  return 0;
}
