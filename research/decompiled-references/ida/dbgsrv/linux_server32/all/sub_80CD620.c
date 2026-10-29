/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CD620
// Address: 0x080CD620

//----- (080CD620) --------------------------------------------------------
void __cdecl sub_80CD620(void *a1)
{
  int v1; // eax

  if ( a1 )
  {
    v1 = *((_DWORD *)a1 + 1);
    if ( *(int *)a1 <= 1 )
    {
      sub_80CF060(*((FILE **)a1 + 1));
    }
    else
    {
      if ( v1 )
        (*(void (__cdecl **)(_DWORD))(*(_DWORD *)v1 + 8))(*((_DWORD *)a1 + 1));
      sub_80CF780(*((void **)a1 + 7));
      sub_80CF780(*((void **)a1 + 6));
    }
    operator delete(a1, 0x24u);
  }
}
