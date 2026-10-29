__int64 __fastcall sub_600970(__int64 a1)
{
  __int64 v1; // rbp
  unsigned int v4; // eax
  unsigned int v5; // ecx
  unsigned __int64 v6; // rcx
  void *zip_linput; // r13
  __int64 v8; // rdi
  int v9; // eax
  unsigned __int64 v10; // r14
  size_t v11; // rbp
  unsigned __int64 v12; // r15
  __int64 v13; // rsi
  size_t v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned int v17; // [rsp+Ch] [rbp-44Ch]
  _BYTE src[1032]; // [rsp+10h] [rbp-448h] BYREF
  unsigned __int64 v19; // [rsp+418h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 56);
  v19 = __readfsqword(0x28u);
  if ( qlread(v1, a1 + 69, 8) != 8 )
    return 2;
  if ( *(_DWORD *)(a1 + 69) != 1229014089 )
    return 2;
  if ( *(_WORD *)(a1 + 73) != 21316 )
    return 2;
  if ( (unsigned int)*(unsigned __int16 *)(a1 + 75) - 7 > 1 )
    return 2;
  if ( qlread(v1, a1 + 80, 8) != 8 )
    return 2;
  v4 = *(_DWORD *)(a1 + 84);
  if ( !v4 )
    return 2;
  v5 = *(_DWORD *)(a1 + 80);
  if ( v4 >= v5 / 9uLL )
    return 2;
  if ( v5 <= 0x10 )
    return 2;
  v6 = v5 - 16;
  *(_DWORD *)(a1 + 80) = v6;
  if ( v4 >= v6 >> 3 )
    return 2;
  zip_linput = (void *)create_zip_linput(v1, -1, 2);
  while ( 1 )
  {
    v9 = qlread(zip_linput, src, 1024);
    if ( v9 <= 0 )
      break;
    v10 = *(_QWORD *)(a1 + 96);
    v11 = v9;
    v12 = v9 + v10;
    if ( v10 < v12 )
    {
      v13 = *(_QWORD *)(a1 + 88);
      v14 = v9;
      v15 = *(_QWORD *)(a1 + 96);
      if ( *(_QWORD *)(a1 + 104) < v12 )
      {
        v16 = qvector_reserve(a1 + 88, v13, v12, 1);
        *(_QWORD *)(a1 + 88) = v16;
        v13 = v16;
        v15 = *(_QWORD *)(a1 + 96);
        v14 = v12 - v15;
      }
      memset((void *)(v13 + v15), 0, v14);
    }
    v8 = *(_QWORD *)(a1 + 88);
    *(_QWORD *)(a1 + 96) = v12;
    memmove((void *)(v10 + v8), src, v11);
  }
  v17 = sub_600650(a1);
  close_linput(zip_linput);
  return v17;
}

