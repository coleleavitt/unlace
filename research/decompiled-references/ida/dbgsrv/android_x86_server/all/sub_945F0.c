/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_945F0
// Address: 0x000945F0

//----- (000945F0) --------------------------------------------------------
int __cdecl sub_945F0(int a1, int a2)
{
  int v3; // ebx
  _DWORD *v4; // edi
  int v5; // eax
  _DWORD *v6; // ecx
  _DWORD *v7; // esi
  int v8; // edi
  bool v9; // zf
  int v10; // eax
  _DWORD *v11; // ecx
  _DWORD *v12; // edx
  int *v13; // ecx
  int v14; // ecx
  int result; // eax
  _DWORD *v16; // [esp+18h] [ebp-14h]

  (*(void (__cdecl **)(_DWORD))(**(_DWORD **)(a1 + 44) + 8))(*(_DWORD *)(a1 + 44));
  v3 = *(_DWORD *)(a1 + 44);
  v4 = *(_DWORD **)(v3 + 4);
  if ( (_DWORD *)(v3 + 8) == v4 )
  {
LABEL_11:
    v10 = *(_DWORD *)(a1 + 44);
  }
  else
  {
    v16 = (_DWORD *)(v3 + 4);
    while ( v4[4] != a2 )
    {
      v5 = a2;
      v6 = (_DWORD *)v4[1];
      if ( v6 )
      {
        do
        {
          v7 = v6;
          v6 = (_DWORD *)*v6;
        }
        while ( v6 );
      }
      else
      {
        v7 = (_DWORD *)v4[2];
        if ( (_DWORD *)*v7 != v4 )
        {
          v8 = (int)(v4 + 2);
          do
          {
            v7 = *(_DWORD **)(*(_DWORD *)v8 + 8);
            v9 = *v7 == *(_DWORD *)v8;
            v8 = *(_DWORD *)v8 + 8;
          }
          while ( !v9 );
        }
      }
      v9 = v3 + 8 == (_DWORD)v7;
      v4 = v7;
      a2 = v5;
      if ( v9 )
        goto LABEL_11;
    }
    if ( v4[5] )
    {
      qthread_free(v4[5]);
      v3 = *(_DWORD *)(a1 + 44);
      v16 = (_DWORD *)(v3 + 4);
    }
    v11 = (_DWORD *)v4[1];
    if ( v11 )
    {
      do
      {
        v12 = v11;
        v11 = (_DWORD *)*v11;
      }
      while ( v11 );
    }
    else
    {
      v12 = (_DWORD *)v4[2];
      if ( (_DWORD *)*v12 != v4 )
      {
        v13 = v4 + 2;
        do
        {
          v14 = *v13;
          v12 = *(_DWORD **)(v14 + 8);
          v9 = *v12 == v14;
          v13 = (int *)(v14 + 8);
        }
        while ( !v9 );
      }
    }
    if ( (_DWORD *)*v16 == v4 )
      *v16 = v12;
    --*(_DWORD *)(v3 + 12);
    sub_2F420(*(int ***)(v3 + 8), (int **)v4);
    operator delete(v4);
    v10 = *(_DWORD *)(a1 + 44);
  }
  result = (*(int (__cdecl **)(int))(*(_DWORD *)v10 + 12))(v10);
  if ( a2 )
    return (*(int (__cdecl **)(int))(*(_DWORD *)a2 + 4))(a2);
  return result;
}
