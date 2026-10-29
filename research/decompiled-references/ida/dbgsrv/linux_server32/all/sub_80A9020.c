/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A9020
// Address: 0x080A9020

//----- (080A9020) --------------------------------------------------------
int __cdecl sub_80A9020(int a1)
{
  int v1; // ebx
  int *v2; // eax
  int *v3; // edi
  int v4; // eax
  char *v5; // eax
  char *v6; // eax
  void *v7; // ecx
  void *v8; // ecx
  char *v10; // [esp+0h] [ebp-458h]
  int v11; // [esp+4h] [ebp-454h]
  int v12; // [esp+8h] [ebp-450h]
  int v13; // [esp+Ch] [ebp-44Ch]
  int (__cdecl **v14)(int, int, int); // [esp+18h] [ebp-440h] BYREF
  void *v15; // [esp+1Ch] [ebp-43Ch]
  int v16; // [esp+20h] [ebp-438h]
  int v17; // [esp+24h] [ebp-434h]
  int v18; // [esp+250h] [ebp-208h]
  _WORD v19[8]; // [esp+25Ch] [ebp-1FCh] BYREF
  void *v20; // [esp+26Ch] [ebp-1ECh]
  int v21; // [esp+270h] [ebp-1E8h]
  int v22; // [esp+278h] [ebp-1E0h]
  void *v23; // [esp+294h] [ebp-1C4h]
  int v24; // [esp+298h] [ebp-1C0h]
  void *v25; // [esp+330h] [ebp-128h]
  int v26; // [esp+334h] [ebp-124h]
  void *ptr; // [esp+424h] [ebp-34h]
  int v28; // [esp+428h] [ebp-30h]
  int v29; // [esp+430h] [ebp-28h]
  unsigned int v30; // [esp+43Ch] [ebp-1Ch]

  v1 = *(_DWORD *)(a1 + 4);
  v30 = __readgsdword(0x14u);
  v2 = &dword_80DDFD8;
  if ( v1 )
    v2 = *(int **)a1;
  v3 = sub_80CD4D0((int)v2, 0);
  if ( v3 )
  {
    v4 = *(_DWORD *)(a1 + 12);
    if ( v4 == 11 )
    {
      v15 = nullptr;
      v14 = &off_811C184;
      v16 = 0;
      v17 = 0;
      v12 = 0;
      if ( (unsigned __int8)sub_80A7C10((int)&v14, (int)v3, 1, 1) )
        v12 = v18;
      v14 = &off_811C184;
      if ( v15 )
      {
        v16 = 0;
        sub_80CF780(v15);
      }
    }
    else if ( v4 == 18 )
    {
      sub_806D700((int)v19, v3, 0);
      sub_8069F90((int)v19, nullptr);
      if ( (unsigned __int8)sub_8069FC0((int)v19)
        && (unsigned __int8)sub_806A5B0(v19)
        && (unsigned __int8)sub_806D970((int)v19) )
      {
        v12 = v22;
      }
      else
      {
        v12 = 0;
      }
      if ( v29 )
        (*(void (__cdecl **)(int))(*(_DWORD *)v29 + 4))(v29);
      if ( ptr )
      {
        v28 = 0;
        sub_80CF780(ptr);
      }
      v5 = (char *)v25;
      if ( v25 )
      {
        v11 = v26;
        if ( v26 )
        {
          v13 = 0;
          do
          {
            v6 = &v5[68 * v13];
            v7 = *((void **)v6 + 3);
            if ( v7 )
            {
              *((_DWORD *)v6 + 4) = 0;
              v10 = v6;
              sub_80CF780(v7);
              v6 = v10;
            }
            v8 = *(void **)v6;
            if ( *(_DWORD *)v6 )
            {
              *((_DWORD *)v6 + 1) = 0;
              sub_80CF780(v8);
            }
            ++v13;
            v5 = (char *)v25;
          }
          while ( v11 != v13 );
        }
        v26 = 0;
        sub_80CF780(v5);
      }
      if ( v23 )
      {
        v24 = 0;
        sub_80CF780(v23);
      }
      if ( v20 )
      {
        v21 = 0;
        sub_80CF780(v20);
      }
    }
    else
    {
      v12 = 0;
    }
    sub_80CD620(v3);
  }
  else
  {
    v12 = 0;
  }
  if ( v30 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v12;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
// 811C184: using guessed type int (__cdecl *off_811C184)(int, int, int);
