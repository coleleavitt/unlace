/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_808CC00
// Address: 0x0808CC00

//----- (0808CC00) --------------------------------------------------------
int __cdecl sub_808CC00(_DWORD *a1, int a2, int a3, unsigned __int8 **a4)
{
  int v4; // ebx
  unsigned int v5; // eax
  int v6; // eax
  int result; // eax
  int v8; // ecx
  int *v9; // edx
  int v10; // eax
  int *v11; // ecx
  char *v12; // eax
  unsigned int v13; // [esp+0h] [ebp-3Ch]
  unsigned __int8 *v14; // [esp+Ch] [ebp-30h]
  int *v15; // [esp+10h] [ebp-2Ch]
  void *ptr; // [esp+14h] [ebp-28h] BYREF
  int v17; // [esp+18h] [ebp-24h]
  int v18; // [esp+1Ch] [ebp-20h]
  unsigned int v19; // [esp+20h] [ebp-1Ch]

  v19 = __readgsdword(0x14u);
  v4 = a3;
  v14 = *a4;
  v5 = *(_DWORD *)(a2 + 28);
  if ( v5 )
  {
    v13 = *(_DWORD *)(a2 + 28);
    do
    {
      v6 = sub_8080D50(a1[1], v5);
      if ( *(_DWORD *)(v6 + 44) != -1 )
      {
        *a4 = nullptr;
        result = sub_808BC30(a1, a2, *(_DWORD *)(v6 + 44), a3, v14, 1);
        goto LABEL_16;
      }
      v5 = *(_DWORD *)(v6 + 24);
    }
    while ( v5 );
    v4 = a3;
    v5 = v13;
  }
  v8 = *(_DWORD *)(v4 + 4);
  ptr = nullptr;
  v9 = &dword_80DDFD8;
  v17 = 0;
  v18 = 0;
  if ( v8 )
    v9 = *(int **)v4;
  v15 = v9;
  v10 = sub_8080D50(a1[1], v5);
  v11 = &dword_80DDFD8;
  if ( *(_DWORD *)(v10 + 36) )
    v11 = *(int **)(v10 + 32);
  sub_805ED10(&ptr, "%s.%s", v11, v15);
  v12 = (char *)&dword_80DDFD8;
  if ( v17 )
    v12 = (char *)ptr;
  sub_80C7910(0, v12);
  sub_80C7880(1538);
  sub_808CA30(a1);
  if ( ptr )
  {
    v17 = 0;
    sub_80CF780(ptr);
  }
  result = 0;
LABEL_16:
  if ( v19 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
