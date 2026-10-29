__int64 __fastcall sub_187B20(__int64 a1, __int64 a2, int a3, const void *a4, size_t a5)
{
  size_t v6; // rdx
  const void *v10; // rdi
  int v11; // ebx
  const char *v12; // rdi
  char *v13; // rax
  char v14; // al
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v19; // rax

  v6 = a5;
  v10 = a4;
  v11 = 1;
  while ( 1 )
  {
    v12 = (const char *)memchr(v10, 60, v6);
    if ( !v12 )
      break;
    v13 = strchr(v12, 58);
    if ( !v13 )
      break;
    v10 = v13 + 1;
    v14 = v13[1];
    if ( (v14 == 69 || v14 == 116) && v11 < *(_DWORD *)(a1 + 496) )
      v11 = *(_DWORD *)(a1 + 496);
    v6 = a5 - ((_BYTE *)v10 - (_BYTE *)a4);
  }
  v15 = *(_QWORD *)(a1 + 416);
  v16 = *(_QWORD *)(a1 + 408);
  if ( *(_QWORD *)(a1 + 424) < (unsigned __int64)(v15 + 1) )
  {
    v19 = qvector_reserve();
    v15 = *(_QWORD *)(a1 + 416);
    *(_QWORD *)(a1 + 408) = v19;
    v16 = v19;
  }
  v17 = v16 + 40 * v15;
  *(_QWORD *)(v17 + 16) = 0;
  *(_OWORD *)(v17 + 24) = 0;
  ++*(_QWORD *)(a1 + 416);
  *(_DWORD *)(v17 + 4) = a3;
  *(_DWORD *)v17 = v11;
  *(_DWORD *)(v17 + 8) = a3;
  return (unsigned int)v11;
}

