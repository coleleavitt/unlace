/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80B79D0
// Address: 0x080B79D0

//----- (080B79D0) --------------------------------------------------------
unsigned __int8 *__cdecl sub_80B79D0(int a1, unsigned __int8 a2, int *a3, char a4)
{
  unsigned __int8 *v4; // eax
  unsigned __int8 *v5; // edi
  unsigned __int8 v6; // al
  int (*v7)(); // eax
  void *v9; // eax
  __int64 v10; // xmm0_8
  int v11; // edx
  __int64 v12; // xmm1_8
  void *v13; // eax
  void (__cdecl *v14)(char *, int *); // edx
  int *v15; // eax
  int v16; // [esp-8h] [ebp-48h]
  _DWORD v17[3]; // [esp+0h] [ebp-40h]
  int v18; // [esp+Ch] [ebp-34h]
  int v19; // [esp+10h] [ebp-30h]
  void *ptr; // [esp+14h] [ebp-2Ch] BYREF
  void *ptr_4[2]; // [esp+18h] [ebp-28h]
  unsigned int v22; // [esp+20h] [ebp-20h]

  v22 = __readgsdword(0x14u);
  v18 = a2;
  while ( 1 )
  {
    if ( a3[1] )
    {
      if ( sub_80BC530(a1, a3) )
        goto LABEL_26;
      if ( (a4 & 1) != 0 )
        goto LABEL_12;
      if ( *(_BYTE *)(*a3 + 4) == 52 )
      {
        if ( v22 == __readgsdword(0x14u) )
          sub_80CFF70(1);
        goto LABEL_32;
      }
    }
    v4 = (unsigned __int8 *)sub_80BCEA0(a1, v18);
    v5 = v4;
    if ( !v4 )
    {
LABEL_26:
      v14 = (void (__cdecl *)(char *, int *))sub_8058290;
      if ( !*(_BYTE *)(a1 + 36) )
        v14 = (void (__cdecl *)(char *, int *))sub_80BF890;
      v15 = &dword_80DDFD8;
      if ( *(_DWORD *)(a1 + 12) )
        v15 = *(int **)(a1 + 8);
      v5 = nullptr;
      v14("%s\n", v15);
      goto LABEL_13;
    }
    v6 = v4[4];
    if ( v6 == 2 )
    {
      sub_80A6A00((_BYTE *)a1, "rpc: no remote memory");
      goto LABEL_11;
    }
    if ( v6 <= 2u )
      break;
    if ( v6 == 6 )
    {
      sub_8058290();
      goto LABEL_11;
    }
    if ( !*(_BYTE *)(a1 + 37) )
    {
      sub_80BF890("Exploit packet has been detected and ignored\n", v16);
      goto LABEL_11;
    }
    (*(void (__stdcall **)(void **))(*(_DWORD *)a1 + 28))(&ptr);
    v9 = (void *)*a3;
    v10 = *(_QWORD *)ptr_4;
    v11 = (int)ptr;
    *(_QWORD *)ptr_4 = 0;
    ptr = nullptr;
    *(_QWORD *)&v17[1] = v10;
    if ( v9 )
    {
      v19 = v11;
      a3[1] = 0;
      sub_80CF780(v9);
      v12 = *(_QWORD *)&v17[1];
      v13 = ptr;
      *a3 = v19;
      *(_QWORD *)(a3 + 1) = v12;
      if ( v13 )
      {
        ptr_4[0] = nullptr;
        sub_80CF780(v13);
      }
    }
    else
    {
      *a3 = v11;
      *(_QWORD *)(a3 + 1) = v10;
    }
    sub_80CF780(v5);
  }
  if ( v6 )
  {
    sub_80A6A00((_BYTE *)a1, "rpc: remote did not understand our request");
LABEL_11:
    sub_80CF780(v5);
LABEL_12:
    v5 = nullptr;
  }
LABEL_13:
  v7 = *(int (**)())(*(_DWORD *)a1 + 32);
  if ( v7 != nullsub_11 )
    ((void (__cdecl *)(int, unsigned __int8 *))v7)(a1, v5);
  if ( v22 != __readgsdword(0x14u) )
LABEL_32:
    sub_80D7AB0();
  return v5;
}
// 80B7BE3: variable 'v16' is possibly undefined
// 80A5670: using guessed type int nullsub_11();
// 80DDFD8: using guessed type int dword_80DDFD8;
