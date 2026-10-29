/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_416D80
// Address: 0x00416D80

//----- (00416D80) --------------------------------------------------------
int *__thiscall sub_416D80(_DWORD *this, _DWORD *a2)
{
  int *result; // eax
  int v3; // esi
  unsigned int v4; // edi
  __int64 v5; // xmm0_8
  unsigned int v6; // ebx
  DWORD v7; // esi
  int v8; // esi
  void **v9; // edi
  int *v10; // ebx
  unsigned int v11; // eax
  char *v12; // eax
  int v13; // ecx
  _DWORD *v14; // ebx
  bool v15; // sf
  int v16; // ecx
  int *v17; // esi
  _DWORD *v18; // edi
  int v19; // eax
  int v20; // eax
  void *v21; // eax
  int v22; // ecx
  int v23; // eax
  LPVOID v24; // [esp+34h] [ebp-18h]
  unsigned int v25; // [esp+38h] [ebp-14h]
  unsigned int v26; // [esp+3Ch] [ebp-10h]
  void *v27; // [esp+78h] [ebp+2Ch]
  void *v29; // [esp+88h] [ebp+3Ch]
  char *v30; // [esp+8Ch] [ebp+40h]
  int v31; // [esp+94h] [ebp+48h] BYREF
  int v32; // [esp+98h] [ebp+4Ch]
  int v33; // [esp+9Ch] [ebp+50h]
  int v34; // [esp+A0h] [ebp+54h]
  int v35; // [esp+A4h] [ebp+58h]
  int v36; // [esp+A8h] [ebp+5Ch]
  int v37; // [esp+ACh] [ebp+60h]
  int v38; // [esp+B0h] [ebp+64h]
  unsigned int v39; // [esp+B4h] [ebp+68h]

  result = (int *)*(this + 151);
  v3 = *result;
  v31 = v3;
  if ( (int *)v3 != result )
  {
    do
    {
      v4 = 0;
      v5 = *(_QWORD *)(v3 + 20);
      v6 = *(_DWORD *)(v3 + 60);
      v37 = *(_DWORD *)(v3 + 28);
      v36 = *(_DWORD *)(v3 + 32);
      v35 = *(_DWORD *)(v3 + 36);
      v34 = *(_DWORD *)(v3 + 44);
      v33 = *(_DWORD *)(v3 + 48);
      v32 = *(_DWORD *)(v3 + 52);
      v27 = nullptr;
      if ( v6 )
      {
        v27 = sub_4539E0(v6);
        sub_464310((unsigned int)v27, *(_DWORD *)(v3 + 56), v6);
        v4 = v6;
      }
      v7 = SuspendThread((HANDLE)v5);
      ResumeThread((HANDLE)v5);
      if ( !v7 )
      {
        v8 = SuspendThread((HANDLE)v5) != -1;
        v38 = v8;
        if ( SuspendThread((HANDLE)v5) != -1 )
          v38 = ++v8;
        v24 = nullptr;
        v25 = 0;
        v26 = 0;
        if ( v4 )
        {
          v26 = v4;
          v24 = sub_4539E0(v4);
          sub_464310((unsigned int)v24, (unsigned int)v27, v4);
          v25 = v4;
        }
        v9 = (void **)a2;
        v10 = a2 + 1;
        v11 = a2[1] + 1;
        v39 = a2[2];
        if ( v11 > v39 )
        {
          v12 = (char *)sub_453B00((int)a2, nullptr, v11, 0x30u);
          v29 = (void *)a2[2];
          a2[2] = v39;
          v13 = *v10;
          v14 = (_DWORD *)*a2;
          v15 = v13 - 1 < 0;
          v16 = v13 - 1;
          v30 = v12;
          v39 = v16;
          if ( v15 )
          {
            v10 = a2 + 1;
          }
          else
          {
            v17 = v14 + 11;
            v18 = v12 + 44;
            do
            {
              *(_QWORD *)(v18 - 11) = *(_QWORD *)v14;
              *(v18 - 9) = v14[2];
              *(v18 - 8) = *(v17 - 8);
              *(v18 - 7) = *(v17 - 7);
              *(v18 - 6) = *(v17 - 6);
              *(v18 - 5) = *(v17 - 5);
              *(v18 - 4) = *(v17 - 4);
              *(v18 - 3) = *(v17 - 3);
              *(v18 - 2) = *(v17 - 2);
              v19 = *(v17 - 1);
              *(v17 - 2) = 0;
              *(v18 - 1) = v19;
              v20 = *v17;
              *(v17 - 1) = 0;
              *v18 = v20;
              *v17 = 0;
              v21 = (void *)*(v17 - 2);
              if ( v21 )
              {
                *(v17 - 1) = 0;
                sub_453A20(v21);
                v16 = v39;
                *(v17 - 2) = 0;
                *v17 = 0;
              }
              v14 += 12;
              v17 += 12;
              v18 += 12;
              v39 = --v16;
            }
            while ( v16 >= 0 );
            v9 = (void **)a2;
            v8 = v38;
            v10 = a2 + 1;
          }
          sub_453A20(*v9);
          *v9 = v30;
          v9[2] = v29;
        }
        v22 = v37;
        v23 = (int)*v9 + 48 * (_DWORD)v9[1];
        *(_QWORD *)v23 = v5;
        *(_DWORD *)(v23 + 8) = v22;
        *(_DWORD *)(v23 + 12) = v36;
        *(_DWORD *)(v23 + 16) = v35;
        *(_DWORD *)(v23 + 24) = v34;
        *(_DWORD *)(v23 + 28) = v33;
        *(_DWORD *)(v23 + 32) = v32;
        *(_DWORD *)(v23 + 36) = v24;
        *(_DWORD *)(v23 + 40) = v25;
        *(_DWORD *)(v23 + 20) = v8;
        *(_DWORD *)(v23 + 44) = v26;
        ++*v10;
      }
      if ( v27 )
        sub_453A20(v27);
      sub_40B5E0(&v31);
      result = this;
      v3 = v31;
    }
    while ( v31 != *(this + 151) );
  }
  return result;
}
