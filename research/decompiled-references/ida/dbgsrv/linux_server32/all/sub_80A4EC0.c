/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A4EC0
// Address: 0x080A4EC0

//----- (080A4EC0) --------------------------------------------------------
int __cdecl sub_80A4EC0(int a1, int a2)
{
  int v2; // edi
  int *v3; // eax
  int v4; // ecx
  int v6; // eax
  bool v7; // cc
  int v8; // [esp-4h] [ebp-4Ch]
  int v9; // [esp+0h] [ebp-48h]
  int v10; // [esp+4h] [ebp-44h]
  int v11; // [esp+8h] [ebp-40h]
  void *v12; // [esp+8h] [ebp-40h]
  int v13; // [esp+Ch] [ebp-3Ch]
  int (*v14)(void); // [esp+Ch] [ebp-3Ch]
  int v15; // [esp+10h] [ebp-38h]
  int v16; // [esp+14h] [ebp-34h]
  int v17; // [esp+18h] [ebp-30h]
  int v18; // [esp+1Ch] [ebp-2Ch] BYREF
  void *ptr[2]; // [esp+20h] [ebp-28h]
  int *v20; // [esp+28h] [ebp-20h]
  unsigned int v21; // [esp+2Ch] [ebp-1Ch]
  int v22; // [esp+30h] [ebp-18h]
  int v23; // [esp+34h] [ebp-14h]
  int v24; // [esp+38h] [ebp-10h]

  v21 = __readgsdword(0x14u);
  v2 = sub_80A4C20();
  v3 = &dword_80DDFD8;
  if ( *(_DWORD *)(a1 + 28) )
    v3 = *(int **)(a1 + 24);
  v12 = (void *)(*(int (__stdcall **)(int, int *, _DWORD, int, int, int, int, int, int, int, int, int, void *, void *, int *))(*(_DWORD *)v2 + 244))(
                  v2,
                  v3,
                  0,
                  v8,
                  v9,
                  a2,
                  v11,
                  a1,
                  v15,
                  v16,
                  v17,
                  v18,
                  ptr[0],
                  ptr[1],
                  v20);
  if ( (int)v12 < 0 )
  {
    if ( !byte_811F8A1 )
    {
      if ( v21 == __readgsdword(0x14u) )
        sub_80CFF40(30055, v22, v23, v24);
      sub_80D7AB0();
    }
    BUG();
  }
  v4 = sub_808A540(v13);
  if ( !v4 )
  {
    v18 = -2;
    v20 = nullptr;
    *(_QWORD *)ptr = *(_QWORD *)(v13 + 4);
    v14 = *(int (**)(void))(*(_DWORD *)v2 + 116);
    v21 = 0;
    v20 = &v18;
    ptr[1] = v12;
    ptr[0] = (void *)sub_80A4C40();
    v18 = v2;
    v6 = v14();
    v7 = v18 < -1;
    v4 = 0;
    *(_DWORD *)(v10 + 4) = v6;
    if ( !v7 )
    {
      if ( ptr[0] )
      {
        ptr[1] = nullptr;
        sub_80CF780(ptr[0]);
        v4 = 0;
      }
    }
  }
  if ( v21 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v4;
}
// 80A4F15: variable 'v8' is possibly undefined
// 80A4F15: variable 'v9' is possibly undefined
// 80A4F15: variable 'v11' is possibly undefined
// 80A4F15: variable 'v15' is possibly undefined
// 80A4F15: variable 'v16' is possibly undefined
// 80A4F15: variable 'v17' is possibly undefined
// 80A4F2D: variable 'v13' is possibly undefined
// 80A4FA3: variable 'v10' is possibly undefined
// 80DDFD8: using guessed type int dword_80DDFD8;
// 811F8A1: using guessed type char byte_811F8A1;
