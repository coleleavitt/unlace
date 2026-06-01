/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_944A0
// Address: 0x000944A0

//----- (000944A0) --------------------------------------------------------
void __cdecl __noreturn sub_944A0(int a1, int a2)
{
  int v2; // eax
  int v3; // eax
  void **v4; // esi
  void ***v5; // edi
  _DWORD *v6; // edi
  void **v7; // eax
  int v8; // esi
  bool v9; // zf
  int v10; // ecx
  void ****v11; // esi
  int v12; // [esp+8h] [ebp-14h]

  v2 = strsignal(a2);
  sub_98F70("%s: terminating the server\n", v2);
  (*(void (__cdecl **)(_DWORD))(**(_DWORD **)(a1 + 44) + 8))(*(_DWORD *)(a1 + 44));
  v3 = *(_DWORD *)(a1 + 44);
  v4 = *(void ***)(v3 + 4);
  v5 = (void ***)(v3 + 8);
  if ( (void **)(v3 + 8) == v4 )
  {
    v12 = *(_DWORD *)(a1 + 44);
    v11 = (void ****)(v3 + 4);
  }
  else
  {
    do
    {
      v6 = v4[4];
      if ( v4[5] )
        qthread_free((pthread_t)v4[5]);
      if ( v6 && v6[17] )
      {
        (*(void (__cdecl **)(_DWORD *, int))(*v6 + 12))(v6, a2);
        sub_92EA0((int)v6);
      }
      v7 = (void **)v4[1];
      if ( v7 )
      {
        do
        {
          v5 = (void ***)v7;
          v7 = (void **)*v7;
        }
        while ( v7 );
      }
      else
      {
        v5 = (void ***)v4[2];
        if ( *v5 != v4 )
        {
          v8 = (int)(v4 + 2);
          do
          {
            v5 = *(void ****)(*(_DWORD *)v8 + 8);
            v9 = *v5 == *(void ***)v8;
            v8 = *(_DWORD *)v8 + 8;
          }
          while ( !v9 );
        }
      }
      v10 = *(_DWORD *)(a1 + 44);
      v4 = (void **)v5;
    }
    while ( (void ***)(v10 + 8) != v5 );
    v12 = *(_DWORD *)(a1 + 44);
    v11 = (void ****)(v10 + 4);
  }
  sub_94950((int)v11, *v5);
  *(_DWORD *)(v12 + 12) = 0;
  *v11 = v5;
  *v5 = nullptr;
  (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(a1 + 44) + 12))(*(_DWORD *)(a1 + 44));
  sub_94D80((int *)(a1 + 40), -1);
  _exit(a2 != 15);
}
// 17C30: using guessed type int __cdecl strsignal(_DWORD);
