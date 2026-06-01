/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8080400
// Address: 0x08080400

//----- (08080400) --------------------------------------------------------
unsigned int __cdecl sub_8080400(_DWORD *a1, __int64 a2)
{
  int v2; // eax
  char *v3; // edi
  char *v4; // edx
  unsigned int v5; // ebp
  unsigned int result; // eax
  char *v7; // eax
  __int64 *v8; // edx
  int v9; // eax
  int v10; // eax
  _QWORD *v11; // ecx
  __int64 v12; // xmm0_8
  bool v13; // cf
  char *v14; // eax
  __int64 *v15; // edx
  int v16; // eax
  int v17; // eax
  _QWORD *v18; // ecx
  __int64 v19; // xmm0_8
  unsigned int v20; // [esp+0h] [ebp-34h]
  int v21; // [esp+0h] [ebp-34h]
  int v22; // [esp+0h] [ebp-34h]
  int v23; // [esp+4h] [ebp-30h]
  __int64 v24; // [esp+Ch] [ebp-28h] BYREF
  unsigned int v25; // [esp+14h] [ebp-20h]

  v25 = __readgsdword(0x14u);
  v2 = a1[15];
  v3 = (char *)a1[14];
  if ( v2 && (v4 = &v3[8 * v2 - 8], *(_DWORD *)v4 == (_DWORD)a2) )
  {
    *((_DWORD *)v4 + 1) = HIDWORD(a2);
  }
  else
  {
    v5 = a1[16];
    v23 = (int)(a1 + 14);
    v20 = v2 + 1;
    v24 = a2;
    if ( &v24 < (__int64 *)v3 || &v24 >= (__int64 *)&v3[8 * v5] )
    {
      if ( v5 < v20 )
      {
        v7 = (char *)sub_80CF920(v23, nullptr, v20, 8u);
        v8 = (__int64 *)a1[14];
        v3 = v7;
        v9 = a1[16];
        a1[16] = v5;
        v21 = v9;
        v10 = a1[15] - 1;
        if ( v10 >= 0 )
        {
          v11 = v3;
          do
          {
            v12 = *v8;
            ++v11;
            ++v8;
            *(v11 - 1) = v12;
            v13 = v10-- == 0;
          }
          while ( !v13 );
          v8 = (__int64 *)a1[14];
        }
        sub_80CF780(v8);
        a1[14] = v3;
        a1[16] = v21;
        v2 = a1[15];
      }
      *(_QWORD *)&v3[8 * v2] = v24;
    }
    else
    {
      if ( v5 < v20 )
      {
        v14 = (char *)sub_80CF920(v23, nullptr, v20, 8u);
        v15 = (__int64 *)a1[14];
        v3 = v14;
        v16 = a1[16];
        a1[16] = v5;
        v22 = v16;
        v17 = a1[15] - 1;
        if ( v17 >= 0 )
        {
          v18 = v3;
          do
          {
            v19 = *v15;
            ++v18;
            ++v15;
            *(v18 - 1) = v19;
            v13 = v17-- == 0;
          }
          while ( !v13 );
          v15 = (__int64 *)a1[14];
        }
        sub_80CF780(v15);
        a1[14] = v3;
        a1[16] = v22;
        v2 = a1[15];
      }
      *(_QWORD *)&v3[8 * v2] = a2;
    }
    ++a1[15];
  }
  result = v25 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
