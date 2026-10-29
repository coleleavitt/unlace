/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C45E0
// Address: 0x080C45E0

//----- (080C45E0) --------------------------------------------------------
int __cdecl sub_80C45E0(int *a1)
{
  __int64 v1; // rax
  __int64 v2; // kr00_8
  unsigned int v3; // eax
  int v4; // edx
  size_t v5; // eax
  unsigned __int64 v7; // [esp+10h] [ebp-103Ch]
  int v8; // [esp+18h] [ebp-1034h]
  _BYTE v9[4096]; // [esp+2Ch] [ebp-1020h] BYREF
  unsigned int v10; // [esp+102Ch] [ebp-20h]

  v10 = __readgsdword(0x14u);
  sub_80CD730((int)a1, 0, 0);
  LODWORD(v1) = sub_80CD6E0(a1);
  if ( v1 <= 0 )
  {
    v8 = 0;
  }
  else
  {
    v8 = 0;
    v2 = v1;
    while ( 1 )
    {
      v3 = 0;
      v4 = 4096;
      if ( v2 <= 4096 )
      {
        v3 = HIDWORD(v2);
        v4 = v2;
      }
      v7 = __PAIR64__(v3, v4);
      v5 = sub_80CD690((int)a1, v9, v4);
      if ( v5 != (_DWORD)v7 )
        break;
      v8 = sub_80C45B0(v8, (int)v9, v5);
      v2 -= v7;
      if ( ((_DWORD)v2 != 0) + HIDWORD(v2) <= 0 )
        goto LABEL_8;
    }
    v8 = -1;
  }
LABEL_8:
  if ( v10 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v8;
}
// 80C462D: variable 'v1' is possibly undefined
