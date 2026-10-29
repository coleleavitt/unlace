/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8073AA0
// Address: 0x08073AA0

//----- (08073AA0) --------------------------------------------------------
int __cdecl sub_8073AA0(int a1, int a2)
{
  unsigned int v2; // eax
  FILE *v3; // eax
  char *v4; // ecx
  void *v5; // eax
  unsigned int v6; // ecx
  int v7; // edx
  void *v8; // eax
  __int64 v9; // xmm0_8
  int v11; // [esp+0h] [ebp-38h]
  unsigned int v12; // [esp+4h] [ebp-34h]
  int v13; // [esp+Ch] [ebp-2Ch]
  void *ptr; // [esp+10h] [ebp-28h] BYREF
  __int64 v15; // [esp+14h] [ebp-24h]
  unsigned int v16; // [esp+1Ch] [ebp-1Ch]

  v16 = __readgsdword(0x14u);
  v2 = *(_DWORD *)(a1 + 4);
  if ( v2 < dword_811E624 && (v3 = *(FILE **)(dword_811E620 + 4 * v2)) != nullptr )
  {
    ptr = nullptr;
    v15 = 0;
    v4 = sub_80CF4E0((char **)&ptr, v3);
    v5 = ptr;
    if ( (int)v4 < 0 )
    {
      *(_DWORD *)(a2 + 4) = -1;
      if ( v5 )
      {
        LODWORD(v15) = 0;
        sub_80CF780(v5);
      }
    }
    else
    {
      v13 = v15;
      if ( (_DWORD)v15 )
      {
        v6 = v15 + 1;
        v7 = v15;
        v13 = v15 - 1;
      }
      else
      {
        v6 = 2;
        v7 = 1;
      }
      if ( HIDWORD(v15) < v6 )
      {
        v11 = v7;
        v12 = v6;
        v5 = sub_80CF920((int)&ptr, ptr, v6, 1u);
        v7 = v11;
        v6 = v12;
        ptr = v5;
      }
      LODWORD(v15) = v6;
      *((_BYTE *)v5 + v7) = 0;
      *((_BYTE *)ptr + v13) = 10;
      v8 = ptr;
      v9 = v15;
      *(_BYTE *)a2 = 7;
      *(_DWORD *)(a2 + 4) = v8;
      *(_QWORD *)(a2 + 8) = v9;
    }
  }
  else
  {
    *(_DWORD *)(a2 + 4) = -1;
  }
  if ( v16 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return 0;
}
// 811E620: using guessed type int dword_811E620;
// 811E624: using guessed type int dword_811E624;
