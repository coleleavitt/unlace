/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_407F30
// Address: 0x00407F30

//----- (00407F30) --------------------------------------------------------
int __thiscall sub_407F30(int **this, int a2, int a3, int a4, int a5)
{
  int v6; // edx
  int v7; // edi
  int v8; // ebx
  int *v9; // ecx
  int v10; // eax
  int v11; // ecx
  int *v13; // [esp+10h] [ebp-1Ch] BYREF
  int v14; // [esp+14h] [ebp-18h] BYREF
  _DWORD *v15; // [esp+18h] [ebp-14h] BYREF
  int v16; // [esp+1Ch] [ebp-10h] BYREF
  int v17; // [esp+28h] [ebp-4h]

  v16 = 0;
  v6 = (int)*(this + 7);
  v17 = 0;
  v7 = (*(int (__stdcall **)(int, int, int *))(*(_DWORD *)v6 + 88))(v6, a3, &v16);
  if ( v7 >= 0 )
  {
    v13 = nullptr;
    LOBYTE(v17) = 2;
    v7 = (*(int (__stdcall **)(int, int **))(*(_DWORD *)v16 + 24))(v16, &v13);
    if ( v7 >= 0 )
    {
      a3 = 0;
      (*(void (__stdcall **)(int *, int, int *, int *))(*v13 + 24))(v13, 1, &v14, &a3);
      if ( a3 )
      {
        v8 = a4;
        do
        {
          v15 = nullptr;
          v9 = *(this + 7);
          LOBYTE(v17) = 5;
          v10 = *v9;
          if ( v8 )
            (*(void (__stdcall **)(int *, int, int, int, int, _DWORD **))(v10 + 108))(v9, v14, v16, v8, a5, &v15);
          else
            (*(void (__stdcall **)(int *, int, int, _DWORD **))(v10 + 92))(v9, v14, v16, &v15);
          (*(void (__stdcall **)(int))(*(_DWORD *)v14 + 8))(v14);
          if ( !v7 )
            sub_403EE0(0, a2, v15);
          LOBYTE(v17) = 6;
          if ( v15 )
            (*(void (__stdcall **)(_DWORD *))(*v15 + 8))(v15);
          a3 = 0;
          v11 = *v13;
          LOBYTE(v17) = 2;
          (*(void (__stdcall **)(int *, int, int *, int *))(v11 + 24))(v13, 1, &v14, &a3);
        }
        while ( a3 );
      }
    }
    LOBYTE(v17) = 7;
    if ( v13 )
      (*(void (__stdcall **)(int *))(*v13 + 8))(v13);
  }
  v17 = 8;
  if ( v16 )
    (*(void (__stdcall **)(int))(*(_DWORD *)v16 + 8))(v16);
  return v7;
}
