/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C0510
// Address: 0x080C0510

//----- (080C0510) --------------------------------------------------------
void *__cdecl sub_80C0510(int a1)
{
  void (__cdecl **v1)(_DWORD); // eax
  int v2; // edx
  int v3; // edx
  void *v4; // eax
  void *result; // eax

  sub_80D12E0(*(pthread_mutex_t **)(a1 + 8));
  v1 = *(void (__cdecl ***)(_DWORD))a1;
  *(_DWORD *)(a1 + 8) = 0;
  if ( v1 )
  {
    if ( *(_DWORD *)(a1 + 20) )
    {
      v1[15](*(_DWORD *)(a1 + 20));
      v2 = *(_DWORD *)(a1 + 24);
      v1 = *(void (__cdecl ***)(_DWORD))a1;
      if ( !v2 )
        goto LABEL_5;
    }
    else
    {
      v2 = *(_DWORD *)(a1 + 24);
      if ( !v2 )
      {
        v3 = *(_DWORD *)(a1 + 4);
        if ( !v3 )
        {
LABEL_8:
          (*((void (__cdecl **)(_DWORD))*v1 + 1))(v1);
          goto LABEL_9;
        }
LABEL_6:
        (*((void (__cdecl **)(void (__cdecl **)(_DWORD), int))*v1 + 20))(v1, v3);
        v1 = *(void (__cdecl ***)(_DWORD))a1;
LABEL_7:
        if ( !v1 )
          goto LABEL_9;
        goto LABEL_8;
      }
    }
    v1[15](v2);
    v1 = *(void (__cdecl ***)(_DWORD))a1;
LABEL_5:
    v3 = *(_DWORD *)(a1 + 4);
    if ( !v3 )
      goto LABEL_7;
    goto LABEL_6;
  }
LABEL_9:
  v4 = *(void **)(a1 + 16);
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  if ( v4 )
    dlclose(v4);
  result = *(void **)(a1 + 12);
  *(_DWORD *)(a1 + 16) = 0;
  if ( result )
    return (void *)dlclose(result);
  return result;
}
