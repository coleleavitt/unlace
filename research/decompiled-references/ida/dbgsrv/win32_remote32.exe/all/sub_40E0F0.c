/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40E0F0
// Address: 0x0040E0F0

//----- (0040E0F0) --------------------------------------------------------
char __userpurge sub_40E0F0@<al>(__m128i a1@<xmm0>, int a2, _DWORD *a3)
{
  int v3; // edi
  _DWORD *v5; // eax
  void (__stdcall *v6)(HANDLE); // ebx
  _DWORD *v7; // esi
  void *i; // eax
  void *v9; // edi
  DWORD v10; // edi
  _DWORD *v11; // edx
  _DWORD *v12; // eax
  char *v13; // ecx
  char *v14; // esi
  int v15; // edx
  _DWORD *v16; // ebx
  _DWORD *v17; // ecx
  unsigned int v18; // esi
  LPVOID v19; // eax
  char *v20; // edx
  char *v21; // eax
  int *v22; // esi
  char *v23; // ecx
  void *v24; // edi
  char *v25; // [esp+10h] [ebp-1Ch] BYREF
  _DWORD *v26; // [esp+14h] [ebp-18h]
  _DWORD *v27; // [esp+18h] [ebp-14h]
  HANDLE hThread; // [esp+1Ch] [ebp-10h]
  int v29; // [esp+28h] [ebp-4h]
  int v30; // [esp+34h] [ebp+8h]
  char *v31; // [esp+34h] [ebp+8h]

  v3 = a2;
  sub_40D1C0((void **)(a2 + 188));
  if ( !*(_DWORD *)(a2 + 688) )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(676);
  }
  SetEvent(*(HANDLE *)(a2 + 688));
  if ( WaitForSingleObject(*(HANDLE *)(a2 + 688), 0x3A98u) )
  {
    sub_402760("Error restoring broken connection");
    return 0;
  }
  if ( (*(int (__stdcall **)(int, _DWORD *, int, _DWORD, _DWORD))(*(_DWORD *)a2 + 68))(a2, a3, -1, 0, 0) != 1
    || !dword_4B69EC )
  {
    return 0;
  }
  v5 = *(_DWORD **)(a2 + 604);
  v6 = (void (__stdcall *)(HANDLE))ResumeThread;
  v7 = (_DWORD *)*v5;
  a3 = v7;
  if ( v7 != v5 )
  {
    for ( i = (void *)((int (__stdcall *)(int, int, _DWORD))dword_4B69EC)(2032639, 1, v7[9]);
          ;
          i = (void *)((int (__stdcall *)(int, int, _DWORD))dword_4B69EC)(2032639, 1, a3[9]) )
    {
      v9 = i;
      hThread = i;
      if ( i )
        v7[5] = i;
      else
        sub_43C950(a1, a2, (int)"OpenThread");
      v10 = SuspendThread(v9);
      ResumeThread(hThread);
      v7[10] = v10;
      sub_40B5E0((int *)&a3);
      v3 = a2;
      v7 = a3;
      if ( a3 == *(_DWORD **)(a2 + 604) )
        break;
    }
  }
  v11 = *(_DWORD **)(v3 + 680);
  v12 = nullptr;
  v13 = nullptr;
  v26 = nullptr;
  v25 = nullptr;
  v27 = nullptr;
  a3 = v11;
  if ( v11 )
  {
    v14 = (char *)sub_4539E0(48 * (_DWORD)v11);
    v15 = 0;
    v16 = a3;
    v25 = v14;
    v27 = a3;
    v30 = 0;
    while ( 1 )
    {
      v17 = (_DWORD *)(v15 + *(_DWORD *)(v3 + 676));
      hThread = v17;
      *(_QWORD *)&v14[v15] = *(_QWORD *)v17;
      *(_DWORD *)&v14[v15 + 8] = v17[2];
      *(_DWORD *)&v14[v15 + 12] = v17[3];
      *(_DWORD *)&v14[v15 + 16] = v17[4];
      *(_DWORD *)&v14[v15 + 20] = v17[5];
      *(_DWORD *)&v14[v15 + 24] = v17[6];
      *(_DWORD *)&v14[v15 + 28] = v17[7];
      *(_DWORD *)&v14[v15 + 32] = v17[8];
      *(_DWORD *)&v14[v15 + 36] = 0;
      *(_DWORD *)&v14[v15 + 40] = 0;
      *(_DWORD *)&v14[v15 + 44] = 0;
      v18 = v17[10];
      if ( v18 )
      {
        v19 = sub_4539E0(v17[10]);
        v20 = v25;
        *(_DWORD *)&v25[v30 + 36] = v19;
        *(_DWORD *)&v20[v30 + 44] = v18;
        sub_464310((unsigned int)v19, *((_DWORD *)hThread + 9), v18);
        v15 = v30;
        v13 = v25;
        *(_DWORD *)&v25[v30 + 40] = v18;
      }
      else
      {
        v13 = v25;
      }
      v15 += 48;
      v30 = v15;
      v16 = (_DWORD *)((char *)v16 - 1);
      if ( !v16 )
        break;
      v14 = v25;
    }
    v12 = a3;
    v6 = (void (__stdcall *)(HANDLE))ResumeThread;
    v26 = a3;
  }
  v29 = 0;
  v21 = &v13[48 * (_DWORD)v12];
  v31 = v21;
  if ( v13 != v21 )
  {
    v22 = (int *)(v13 + 20);
    v23 = v21;
    do
    {
      v24 = (void *)*(v22 - 5);
      if ( *v22 > 0 )
      {
        do
        {
          v6(v24);
          --*v22;
        }
        while ( *v22 > 0 );
        v23 = v31;
      }
      v22 += 12;
    }
    while ( v22 - 5 != (int *)v23 );
  }
  sub_40A150((void **)&v25);
  return 1;
}
// 4B69EC: using guessed type int dword_4B69EC;
// 4B70F0: using guessed type char byte_4B70F0;
