/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A5410
// Address: 0x080A5410

//----- (080A5410) --------------------------------------------------------
// bad sp value at call has been detected, the output may be wrong!
char *__cdecl sub_80A5410(int a1, int a2)
{
  _DWORD *v2; // esi
  int *v3; // eax
  signed int v4; // eax
  int v5; // eax
  char *v6; // edx
  void *v7; // esi
  int *v8; // eax
  void *v9; // ecx
  int v11; // [esp+21ACh] [ebp-6Ch]
  int v12; // [esp+21B0h] [ebp-68h]
  int v13; // [esp+21B4h] [ebp-64h]
  int v14; // [esp+21B8h] [ebp-60h]
  int v15; // [esp+21BCh] [ebp-5Ch]
  int v16; // [esp+21C0h] [ebp-58h]
  void *v17; // [esp+21C0h] [ebp-58h]
  int v18; // [esp+21C4h] [ebp-54h]
  int v19; // [esp+21C4h] [ebp-54h]
  int v20; // [esp+21C8h] [ebp-50h]
  int (__cdecl *v21)(_DWORD *, int, int, void *, _DWORD); // [esp+21C8h] [ebp-50h]
  char *v22; // [esp+21C8h] [ebp-50h]
  int v23; // [esp+21CCh] [ebp-4Ch]
  void *v24; // [esp+21CCh] [ebp-4Ch]
  int v25; // [esp+21D0h] [ebp-48h]
  int v26; // [esp+21D4h] [ebp-44h]
  int v27; // [esp+21D8h] [ebp-40h]
  int v28; // [esp+21DCh] [ebp-3Ch] BYREF
  void *v29; // [esp+21E0h] [ebp-38h] BYREF
  void *v30; // [esp+21E4h] [ebp-34h]
  int v31; // [esp+21E8h] [ebp-30h]
  int v32; // [esp+21ECh] [ebp-2Ch] BYREF
  void *ptr; // [esp+21F0h] [ebp-28h]
  int v34; // [esp+21F4h] [ebp-24h]
  int v35; // [esp+21F8h] [ebp-20h]
  unsigned int v36; // [esp+21FCh] [ebp-1Ch]
  int v37; // [esp+2200h] [ebp-18h]
  int v38; // [esp+2204h] [ebp-14h]
  int v39; // [esp+2208h] [ebp-10h]

  v36 = __readgsdword(0x14u);
  v2 = (_DWORD *)sub_80A4C20();
  if ( *(_DWORD *)(a1 + 8) )
    v3 = *(int **)(a1 + 4);
  else
    v3 = &dword_80DDFD8;
  v23 = (*(int (__stdcall **)(_DWORD *, int *, int *, int, int, int, int, int, int, int, int, int, int, int, int))(*v2 + 244))(
          v2,
          v3,
          &v28,
          v11,
          v12,
          v13,
          v14,
          a2,
          v16,
          v18,
          v20,
          a1,
          v25,
          v26,
          v27);
  if ( v23 < 0 )
    goto LABEL_24;
  v4 = v2[87];
  if ( !v4 )
    v4 = v2[99];
  if ( v23 >= v4 )
  {
LABEL_24:
    if ( !byte_811F8A1 )
    {
      if ( v36 == __readgsdword(0x14u) )
        sub_80CFF40(30056, v37, v38, v39);
      sub_80D7AB0();
    }
    JUMPOUT(0x80500F4);
  }
  v29 = nullptr;
  v30 = nullptr;
  v31 = 0;
  v32 = -2;
  v35 = 0;
  ptr = (void *)-1;
  v34 = -1;
  sub_80A2720((int)&v29, v4, (int)&v32);
  if ( v32 >= -1 && ptr )
  {
    v34 = 0;
    sub_80CF780(ptr);
  }
  v17 = v29;
  v19 = v28;
  v21 = *(int (__cdecl **)(_DWORD *, int, int, void *, _DWORD))(*v2 + 112);
  v5 = sub_80A4C40();
  if ( v21(v2, v5, v19, v17, 0) <= 0 )
  {
    v22 = sub_80747C0(v15, "failed to read register value");
    v6 = (char *)v29;
  }
  else
  {
    v6 = (char *)v29;
    v22 = nullptr;
    *(_DWORD *)(v15 + 4) = *((_DWORD *)v29 + 4 * v23 + 1);
  }
  if ( v6 )
  {
    v7 = v30;
    if ( v30 )
    {
      v24 = nullptr;
      do
      {
        v8 = (int *)&v6[16 * (_DWORD)v24];
        if ( *v8 >= -1 )
        {
          v9 = (void *)v8[1];
          if ( v9 )
          {
            v8[2] = 0;
            sub_80CF780(v9);
            v6 = (char *)v29;
          }
        }
        v24 = (char *)v24 + 1;
      }
      while ( v7 != v24 );
    }
    v30 = nullptr;
    sub_80CF780(v6);
  }
  if ( v36 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v22;
}
// 80A5638: control flows out of bounds to 80500F4
// 80A54C9: bad sp value at call
// 80A5465: variable 'v11' is possibly undefined
// 80A5465: variable 'v12' is possibly undefined
// 80A5465: variable 'v13' is possibly undefined
// 80A5465: variable 'v14' is possibly undefined
// 80A5465: variable 'v16' is possibly undefined
// 80A5465: variable 'v18' is possibly undefined
// 80A5465: variable 'v20' is possibly undefined
// 80A5465: variable 'v25' is possibly undefined
// 80A5465: variable 'v26' is possibly undefined
// 80A5465: variable 'v27' is possibly undefined
// 80A5544: variable 'v15' is possibly undefined
// 80DDFD8: using guessed type int dword_80DDFD8;
// 811F8A1: using guessed type char byte_811F8A1;
