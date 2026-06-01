/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_417600
// Address: 0x00417600

//----- (00417600) --------------------------------------------------------
_DWORD *__thiscall sub_417600(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax
  _DWORD *v3; // esi
  const char *v4; // ecx
  const char *v5; // eax
  int v6; // eax
  const char *v7; // eax
  _DWORD *v8; // edx
  _DWORD *v9; // ebx
  unsigned int v10; // eax
  unsigned int v11; // edi
  void **v12; // eax
  _DWORD *v13; // edx
  bool v14; // sf
  int v15; // ecx
  _DWORD *v16; // esi
  _DWORD *v17; // ebx
  int *v18; // edi
  int v19; // eax
  int v20; // eax
  void *v21; // eax
  _DWORD *v22; // ecx
  int v23; // edi
  unsigned int v24; // ebx
  unsigned int v25; // eax
  unsigned int v26; // [esp-8h] [ebp-50h]
  char *v27; // [esp+10h] [ebp-38h] BYREF
  int v28; // [esp+14h] [ebp-34h]
  int v29; // [esp+18h] [ebp-30h]
  _DWORD *v30; // [esp+1Ch] [ebp-2Ch]
  unsigned int v31; // [esp+20h] [ebp-28h]
  int v32; // [esp+28h] [ebp-20h]
  _DWORD *v33; // [esp+2Ch] [ebp-1Ch] BYREF
  char *v34; // [esp+30h] [ebp-18h]
  int v35; // [esp+34h] [ebp-14h]
  HLOCAL hMem; // [esp+38h] [ebp-10h] BYREF
  int v37; // [esp+44h] [ebp-4h]

  v30 = this;
  result = (_DWORD *)*(this + 151);
  v3 = (_DWORD *)*result;
  v32 = (int)v3;
  v33 = v3;
  if ( v3 != result )
  {
    do
    {
      if ( dword_4B69F0 && dword_4B69F0(v3[5], &hMem) >= 0 )
      {
        v27 = nullptr;
        v28 = 0;
        v29 = 0;
        v37 = 0;
        if ( sub_459D00(
               (unsigned int *)&v27,
               "UTF-16LE",
               (int)"UTF-8",
               (char *)hMem,
               (const char *)(2 * wcslen((const unsigned __int16 *)hMem)),
               0) > 0 )
        {
          v4 = MultiByteStr;
          if ( v3[15] )
            v4 = (const char *)v3[14];
          v5 = MultiByteStr;
          if ( v28 )
            v5 = v27;
          v6 = strcmp(v5, v4);
          if ( v6 )
            v6 = v6 < 0 ? -1 : 1;
          if ( v6 )
          {
            v7 = MultiByteStr;
            if ( v28 )
              v7 = v27;
            sub_401590((int)(v3 + 14), v7);
            v3[12] |= 4u;
          }
        }
        LocalFree(hMem);
        v37 = 1;
        if ( v27 )
        {
          v28 = 0;
          sub_453A20(v27);
          v27 = nullptr;
          v29 = 0;
        }
        v37 = -1;
      }
      if ( (v3[12] & 4) != 0 )
      {
        v8 = a2;
        v9 = a2 + 1;
        v10 = a2[1] + 1;
        v11 = a2[2];
        if ( v10 > v11 )
        {
          v34 = (char *)sub_453B00((int)a2, nullptr, v10, 0x10u);
          v12 = (void **)a2;
          v13 = (_DWORD *)*a2;
          v31 = a2[2];
          v14 = *v9 - 1 < 0;
          v15 = *v9 - 1;
          a2[2] = v11;
          v35 = v15;
          if ( !v14 )
          {
            v16 = v13;
            v17 = v34 + 12;
            v18 = v13 + 3;
            do
            {
              *(v17 - 3) = *v16;
              *(v17 - 2) = *(v18 - 2);
              v19 = *(v18 - 1);
              *(v18 - 2) = 0;
              *(v17 - 1) = v19;
              v20 = *v18;
              *(v18 - 1) = 0;
              *v17 = v20;
              *v18 = 0;
              v21 = (void *)*(v18 - 2);
              v37 = 2;
              if ( v21 )
              {
                *(v18 - 1) = 0;
                sub_453A20(v21);
                v15 = v35;
                *(v18 - 2) = 0;
                *v18 = 0;
              }
              v16 += 4;
              v37 = -1;
              v18 += 4;
              v17 += 4;
              v35 = --v15;
            }
            while ( v15 >= 0 );
            v12 = (void **)a2;
            v3 = (_DWORD *)v32;
            v9 = a2 + 1;
          }
          sub_453A20(*v12);
          v8 = a2;
          *a2 = v34;
          a2[2] = v31;
        }
        v22 = (_DWORD *)(*v8 + 16 * *v9);
        v22[1] = 0;
        v22[2] = 0;
        v22[3] = 0;
        ++*v9;
        v23 = (int)(v22 + 1);
        *v22 = v3[9];
        if ( v22 + 1 != v3 + 14 )
        {
          v24 = v3[15] != 0 ? v3[15] - 1 : 0;
          if ( v24 )
          {
            v31 = v3[14];
            v25 = v24 + 1;
            if ( v24 + 1 > v22[3] )
            {
              *(_DWORD *)v23 = sub_453B00(v23, *(void **)v23, v24 + 1, 1u);
              v25 = v24 + 1;
            }
            v26 = v31;
            *(_DWORD *)(v23 + 4) = v25;
            sub_464310(*(_DWORD *)v23, v26, v24);
            *(_BYTE *)(v24 + *(_DWORD *)v23) = 0;
          }
          else
          {
            v22[2] = 0;
          }
        }
        v3[12] &= ~4u;
      }
      sub_40B5E0((int *)&v33);
      result = v30;
      v3 = v33;
      v32 = (int)v33;
    }
    while ( v33 != (_DWORD *)v30[151] );
  }
  return result;
}
// 4B69F0: using guessed type int (__stdcall *dword_4B69F0)(_DWORD, _DWORD);
