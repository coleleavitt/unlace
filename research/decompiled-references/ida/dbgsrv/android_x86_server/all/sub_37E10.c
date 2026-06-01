/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_37E10
// Address: 0x00037E10

//----- (00037E10) --------------------------------------------------------
_BYTE *__cdecl sub_37E10(int *a1, _DWORD *a2, __int64 a3)
{
  __int64 v3; // rax
  int v4; // esi
  int v5; // ecx
  int v6; // eax
  int v7; // edx
  void *v8; // eax
  int v9; // eax
  size_t v10; // esi
  _DWORD *v11; // edx
  void *v12; // eax
  int v13; // ecx
  int v14; // edi
  _BYTE *v15; // eax
  _DWORD *v16; // edx
  void *v17; // eax
  int v18; // ecx
  int v19; // esi
  unsigned int v20; // edi
  __int64 v22; // [esp-10h] [ebp-9Ch]
  _BYTE *v23; // [esp+4h] [ebp-88h]
  size_t v24; // [esp+4h] [ebp-88h]
  unsigned int v25; // [esp+8h] [ebp-84h]
  unsigned int v26; // [esp+Ch] [ebp-80h]
  _BYTE src[100]; // [esp+14h] [ebp-78h] BYREF
  unsigned int v28; // [esp+78h] [ebp-14h]

  v28 = __readgsdword(0x14u);
  LODWORD(v3) = qlseek(a1[90], 0, 1);
  v4 = a1[92];
  v5 = a1[91];
  v26 = v3 - v5;
  v25 = (v3 - __PAIR64__(v4, v5)) >> 32;
  v6 = qlseek(a1[90], a3 + __PAIR64__(v4, v5), 0);
  if ( (v7 & v6) == 0xFFFFFFFF )
  {
    sub_1F400((int)a2, (char *)&qword_13ACD8 - 369322, (_DWORD)a3);
  }
  else
  {
    v8 = (void *)*a2;
    if ( *a2 )
    {
      a2[1] = 0;
      qfree(v8);
      *a2 = 0;
      a2[2] = 0;
    }
    while ( 1 )
    {
      HIDWORD(v22) = src;
      LODWORD(v22) = a1[90];
      v9 = qlread(v22, 0x64u);
      if ( v9 < 0 )
        break;
      v10 = 0;
      v11 = a2;
      if ( v9 )
      {
        do
        {
          if ( !src[v10] )
            break;
          ++v10;
        }
        while ( (int)v10 < v9 );
      }
      v12 = (void *)*a2;
      v13 = a2[1];
      v14 = v13 - 1;
      if ( !v13 )
        v14 = 0;
      if ( a2[2] < v14 + v10 + 1 )
      {
        v12 = qvector_reserve((int)a2, v12, v14 + v10 + 1, 1u);
        *a2 = v12;
        v11 = a2;
      }
      v11[1] = v14 + v10 + 1;
      *((_BYTE *)v12 + v14 + v10) = 0;
      memmove((void *)(*v11 + v14), src, v10);
      v15 = src;
      if ( v10 < 0x64 )
      {
        LOBYTE(v15) = 1;
        v23 = v15;
        goto LABEL_21;
      }
    }
    v24 = __strlen_chk((char *)&qword_13ACD8 - 369306, 17);
    v16 = a2;
    v17 = (void *)*a2;
    v18 = a2[1];
    v19 = v18 - 1;
    if ( !v18 )
      v19 = 0;
    v20 = v19 + v24 + 1;
    if ( a2[2] < v20 )
    {
      v17 = qvector_reserve((int)a2, v17, v19 + v24 + 1, 1u);
      v16 = a2;
      *a2 = v17;
    }
    v16[1] = v20;
    *((_BYTE *)v17 + v19 + v24) = 0;
    memmove((void *)(*v16 + v19), (char *)&qword_13ACD8 - 369306, v24);
  }
  v23 = nullptr;
LABEL_21:
  qlseek(a1[90], *(_QWORD *)(a1 + 91) + __PAIR64__(v25, v26), 0);
  return v23;
}
// 37E61: variable 'v3' is possibly undefined
// 37E8E: variable 'v7' is possibly undefined
// 17B50: using guessed type int __cdecl __strlen_chk(_DWORD, _DWORD);
// 13ACD8: using guessed type __int64 qword_13ACD8;
