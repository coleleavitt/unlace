/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_403EE0
// Address: 0x00403EE0

//----- (00403EE0) --------------------------------------------------------
int __userpurge sub_403EE0@<eax>(int a1@<edi>, int a2, _DWORD *a3)
{
  int v3; // ebx
  _DWORD *v4; // esi
  int v5; // eax
  int result; // eax
  unsigned int v7; // ebp
  unsigned int v8; // esi
  unsigned int v9; // eax
  int v10; // edx
  LPVOID v11; // eax
  int v12; // edx
  LPVOID v13; // edi
  bool v14; // sf
  int v15; // edx
  int v16; // ebp
  _QWORD *v17; // ecx
  _QWORD *v18; // esi
  int v19; // ecx
  _DWORD *v20; // eax
  _DWORD *v21; // ecx
  _DWORD *v22; // esi
  _DWORD *v23; // edi
  _DWORD *v24; // ebx
  _DWORD *v25; // ebp
  int v26; // eax
  int v27; // esi
  int v28; // ebp
  _DWORD *v30; // [esp+50h] [ebp-144h]
  int v31; // [esp+60h] [ebp-134h]
  int v32; // [esp+64h] [ebp-130h]
  unsigned int v33; // [esp+68h] [ebp-12Ch] BYREF
  int v34; // [esp+6Ch] [ebp-128h]
  int v35; // [esp+70h] [ebp-124h] BYREF
  unsigned int v36; // [esp+74h] [ebp-120h]
  int v37; // [esp+78h] [ebp-11Ch]
  int v38; // [esp+7Ch] [ebp-118h]
  _DWORD *v39; // [esp+80h] [ebp-114h]
  _DWORD *v40; // [esp+84h] [ebp-110h]
  _DWORD *v41; // [esp+88h] [ebp-10Ch]
  _DWORD *v42; // [esp+8Ch] [ebp-108h]
  _DWORD v43[64]; // [esp+90h] [ebp-104h] BYREF

  v3 = a2;
  v4 = a3;
  v34 = a2;
  v5 = *a3;
  v42 = a3;
  v35 = 0;
  result = (*(int (__stdcall **)(_DWORD *, int *))(v5 + 16))(a3, &v35);
  v38 = result;
  if ( !result )
  {
    v33 = 0;
    v37 = 0;
    if ( v35 > 0 )
    {
      do
      {
        (*(void (__stdcall **)(_DWORD *, int, _DWORD *, unsigned int *))(*v4 + 24))(v4, 64, v43, &v33);
        if ( !v33 )
          break;
        v7 = 0;
        v36 = 0;
        do
        {
          v8 = *(_DWORD *)(v3 + 8);
          v9 = *(_DWORD *)(v3 + 4) + 1;
          v10 = v43[v7];
          v31 = v10;
          if ( v9 > v8 )
          {
            v11 = sub_453B00(v3, nullptr, v9, 0x28u);
            v12 = *(_DWORD *)(v3 + 4);
            v13 = v11;
            v14 = v12 - 1 < 0;
            v15 = v12 - 1;
            v16 = *(_DWORD *)(v3 + 8);
            *(_DWORD *)(v3 + 8) = v8;
            v17 = v11;
            v18 = *(_QWORD **)v3;
            if ( !v14 )
            {
              do
              {
                --v15;
                v18 += 5;
                v17 += 5;
                *(_OWORD *)(v17 - 5) = *(_OWORD *)(v18 - 5);
                *(_OWORD *)(v17 - 3) = *(_OWORD *)(v18 - 3);
                *(v17 - 1) = *(v18 - 1);
              }
              while ( v15 >= 0 );
            }
            sub_453A20(*(void **)v3);
            v10 = v31;
            *(_DWORD *)v3 = v13;
            *(_DWORD *)(v3 + 8) = v16;
          }
          v19 = 5 * *(_DWORD *)(v3 + 4);
          v20 = *(_DWORD **)v3;
          v20[2 * v19] = -1;
          v20[2 * v19 + 1] = 0;
          v21 = &v20[2 * v19];
          v21[7] = -1;
          v21[6] = 0;
          v22 = v21 + 2;
          v39 = v21 + 6;
          v23 = v21 + 3;
          v21[8] = 0;
          v41 = v21 + 7;
          v24 = v21 + 4;
          v21[2] = 0;
          v40 = v21 + 8;
          v25 = v21 + 5;
          v26 = v34;
          v21[3] = 0;
          v21[4] = 0;
          v21[5] = 0;
          ++*(_DWORD *)(v26 + 4);
          (*(void (__stdcall **)(int, _DWORD *, int))(*(_DWORD *)v10 + 48))(v10, v21, a1);
          v30 = v22;
          v27 = v32;
          (*(void (__stdcall **)(int, _DWORD *))(*(_DWORD *)v32 + 52))(v32, v30);
          (*(void (__stdcall **)(int, _DWORD *))(*(_DWORD *)v27 + 28))(v27, v23);
          (*(void (__stdcall **)(int, _DWORD *))(*(_DWORD *)v27 + 32))(v27, v24);
          (*(void (__stdcall **)(int, _DWORD *))(*(_DWORD *)v27 + 20))(v27, v25);
          (*(void (__stdcall **)(int, _DWORD *))(*(_DWORD *)v27 + 24))(v27, v40);
          (*(void (__stdcall **)(int, _DWORD *))(*(_DWORD *)v27 + 60))(v27, v41);
          v33 = 0;
          if ( !(*(int (__stdcall **)(int, unsigned int *))(*(_DWORD *)v27 + 16))(v27, &v33) )
          {
            (*(void (__stdcall **)(unsigned int, _DWORD *))(*(_DWORD *)v33 + 12))(v33, v42);
            (*(void (__stdcall **)(unsigned int))(*(_DWORD *)v33 + 8))(v33);
          }
          v28 = v37;
          a1 = v43[v37 + 1];
          (*(void (**)(void))(*(_DWORD *)a1 + 8))();
          v7 = v28 + 1;
          v3 = v34;
          v36 = v7;
        }
        while ( v7 < v33 );
        v4 = v42;
        v37 += v33;
      }
      while ( v37 < v35 );
      return v38;
    }
  }
  return result;
}
// 403EE0: could not find valid save-restore pair for edi
// 404052: variable 'v32' is possibly undefined
