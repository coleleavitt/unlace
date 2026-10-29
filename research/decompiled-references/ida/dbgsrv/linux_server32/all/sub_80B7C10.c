/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80B7C10
// Address: 0x080B7C10

//----- (080B7C10) --------------------------------------------------------
int __cdecl sub_80B7C10(int a1, int *a2, int a3, void **a4)
{
  unsigned __int8 *(__cdecl *v4)(int, unsigned __int8, int *); // ecx
  int v5; // esi
  unsigned __int8 *v6; // esi
  int v8; // edx
  char *v9; // edx
  char *v10; // eax
  size_t v12; // eax
  char *v13; // edx
  size_t v14; // ecx
  char *desta; // [esp+0h] [ebp-3Ch]
  void *dest; // [esp+0h] [ebp-3Ch]
  size_t v17; // [esp+4h] [ebp-38h]
  size_t v18; // [esp+4h] [ebp-38h]
  char *v19; // [esp+8h] [ebp-34h]
  size_t v20; // [esp+Ch] [ebp-30h]
  char *s; // [esp+10h] [ebp-2Ch] BYREF
  unsigned __int8 *v22; // [esp+14h] [ebp-28h]
  unsigned int v23; // [esp+1Ch] [ebp-20h]

  v23 = __readgsdword(0x14u);
  v4 = *(unsigned __int8 *(__cdecl **)(int, unsigned __int8, int *))(*(_DWORD *)a1 + 8);
  v5 = *(unsigned __int8 *)(*a2 + 4);
  if ( v4 == sub_80A5C40 )
    v6 = sub_80B79D0(a1, v5, a2, 0);
  else
    v6 = v4(a1, v5, a2);
  if ( v6 )
  {
    v8 = *(_DWORD *)v6;
    s = (char *)(v6 + 5);
    v22 = &v6[v8 + 5];
    a3 = sub_80CDEC0((unsigned int *)&s, (unsigned int)v22);
    if ( a3 < 0 && a4 )
    {
      v9 = s;
      v10 = s;
      do
      {
        if ( v10 >= (char *)v22 )
          goto LABEL_9;
        ++v10;
      }
      while ( *(v10 - 1) );
      s = v10;
      if ( !v9 || (desta = v9, v12 = strlen(v9), v13 = desta, (v14 = v12) == 0) )
      {
LABEL_9:
        a4[1] = nullptr;
        goto LABEL_10;
      }
      v17 = v12 + 1;
      dest = *a4;
      if ( (unsigned int)a4[2] < v12 + 1 )
      {
        v20 = v12;
        v19 = v13;
        dest = sub_80CF920((int)a4, dest, v12 + 1, 1u);
        v14 = v20;
        *a4 = dest;
        v13 = v19;
      }
      a4[1] = (void *)v17;
      v18 = v14;
      memmove(dest, v13, v14);
      *((_BYTE *)*a4 + v18) = 0;
    }
LABEL_10:
    sub_80CF780(v6);
  }
  if ( v23 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return a3;
}
