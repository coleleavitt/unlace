/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6BC68
// Address: 0x0006BC68

//----- (0006BC68) --------------------------------------------------------
void __fastcall sub_6BC68(int a1, int *a2)
{
  _DWORD *v4; // r5
  int v5; // r0
  int v6; // r0

  if ( (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 44) + 16))(*(_DWORD *)(a1 + 44)) )
  {
    v4 = operator new(0xCu);
    *v4 = a1;
    v4[1] = a2;
    v4[2] = qsem_create(nullptr, 0);
    v5 = qthread_create((void *(*)(void *))sub_6B948, v4);
    if ( v5 )
    {
      sub_6BD20(a1, (unsigned int)a2, v5);
      v6 = v4[2];
      if ( v6 )
        qsem_post(v6);
    }
    else
    {
      qerrstr(-1);
      sub_5B24C((int)a2, "Failed to create thread: %s; cannot handle session\n");
      if ( a2 )
        (*(void (__fastcall **)(int *))(*a2 + 4))(a2);
      *v4 = 0;
      v4[1] = 0;
      qsem_free(v4[2]);
      operator delete(v4);
    }
  }
  else
  {
    sub_6BD20(a1, (unsigned int)a2, 0);
    sub_6B97C(a1, a2);
  }
}
