/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cliopts_t_add
// Address: 0x0009F250

//----- (0009F250) --------------------------------------------------------
unsigned int __cdecl cliopts_t_add(_DWORD *a1, __int64 *a2, int a3)
{
  int v3; // esi
  int v5; // edx
  int v6; // ecx
  _DWORD *v7; // eax
  int v8; // ecx
  __int64 v10; // [esp+0h] [ebp-2Ch]
  __int64 v11; // [esp+8h] [ebp-24h]
  int v12; // [esp+10h] [ebp-1Ch]

  v3 = a3;
  if ( a3 )
  {
    v5 = (int)a1;
    v6 = a1[1];
    do
    {
      v12 = *((_DWORD *)a2 + 4);
      v11 = a2[1];
      v10 = *a2;
      if ( *(_DWORD *)(v5 + 8) >= (unsigned int)(v6 + 1) )
      {
        v7 = *(_DWORD **)v5;
      }
      else
      {
        v7 = qvector_reserve(v5, *(void **)v5, v6 + 1, 0x14u);
        *a1 = v7;
        v6 = a1[1];
      }
      v8 = 5 * v6;
      v7[v8 + 4] = v12;
      *(_QWORD *)&v7[v8 + 2] = v11;
      *(_QWORD *)&v7[v8] = v10;
      v5 = (int)a1;
      v6 = a1[1] + 1;
      a1[1] = v6;
      a2 = (__int64 *)((char *)a2 + 20);
      --v3;
    }
    while ( v3 );
  }
  return __readgsdword(0x14u);
}
