/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A6200
// Address: 0x080A6200

//----- (080A6200) --------------------------------------------------------
const char *__cdecl sub_80A6200(int a1, const char **a2)
{
  int *v2; // eax
  const char *result; // eax
  const char *v4; // esi
  size_t v5; // ebp
  unsigned int v6; // edx
  char *v7; // eax
  unsigned int v8; // [esp+0h] [ebp-20h]

  if ( *(_DWORD *)(a1 + 12) )
    v2 = *(int **)(a1 + 8);
  else
    v2 = &dword_80DDFD8;
  result = sub_80CE780(v2);
  v4 = result;
  if ( result && (result = (const char *)strlen(result), (v5 = (size_t)result) != 0) )
  {
    v6 = (unsigned int)(result + 1);
    v7 = (char *)*a2;
    if ( (unsigned int)a2[2] < v6 )
    {
      v8 = v6;
      v7 = (char *)sub_80CF920((int)a2, v7, v6, 1u);
      v6 = v8;
      *a2 = v7;
    }
    a2[1] = (const char *)v6;
    memmove(v7, v4, v5);
    result = *a2;
    (*a2)[v5] = 0;
  }
  else
  {
    a2[1] = nullptr;
  }
  return result;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
