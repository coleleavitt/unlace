/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_937B0
// Address: 0x000937B0

//----- (000937B0) --------------------------------------------------------
void __cdecl sub_937B0(int a1, int *a2)
{
  _DWORD *v2; // edi
  int v3; // eax
  int v4; // eax

  if ( (*(unsigned __int8 (__cdecl **)(_DWORD))(**(_DWORD **)(a1 + 44) + 16))(*(_DWORD *)(a1 + 44)) )
  {
    v2 = operator new(0xCu);
    *v2 = a1;
    v2[1] = a2;
    v2[2] = qsem_create(nullptr, 0);
    v3 = qthread_create((void *(*)(void *))sub_932A0, v2);
    if ( v3 )
    {
      sub_938E0(a1, (unsigned int)a2, v3);
      if ( v2[2] )
        qsem_post(v2[2]);
    }
    else
    {
      v4 = qerrstr(-1);
      sub_7CD60((int)a2, "Failed to create thread: %s; cannot handle session\n", v4);
      if ( a2 )
        (*(void (__cdecl **)(int *))(*a2 + 4))(a2);
      *v2 = 0;
      v2[1] = 0;
      qsem_free((char *)v2[2]);
      operator delete(v2);
    }
  }
  else
  {
    sub_938E0(a1, (unsigned int)a2, 0);
    sub_93310(a1, a2);
  }
}
