__int64 __fastcall sub_9CBBD0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  char v5; // dl
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v9; // r14
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  char v12; // al
  int v13; // ebx
  int v14; // eax
  __int64 v15; // rdx
  _QWORD v16[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = a2 + 40;
  if ( *(_DWORD *)(a1 + 12) <= *(_DWORD *)(a1 + 8) )
  {
    v9 = sub_22136C0(a1, a1 + 16, 0, 64, v16);
    v10 = v9 + ((unsigned __int64)*(unsigned int *)(a1 + 8) << 6);
    *(_QWORD *)v10 = *(_QWORD *)a2;
    *(_DWORD *)(v10 + 8) = *(_DWORD *)(a2 + 8);
    *(_QWORD *)(v10 + 12) = *(_QWORD *)(a2 + 12);
    *(_DWORD *)(v10 + 20) = *(_DWORD *)(a2 + 20);
    *(_QWORD *)(v10 + 24) = v10 + 40;
    v11 = *(_QWORD *)(a2 + 24);
    if ( v11 == v2 )
    {
      *(__m128i *)(v10 + 40) = _mm_loadu_si128((const __m128i *)(a2 + 40));
    }
    else
    {
      *(_QWORD *)(v10 + 24) = v11;
      *(_QWORD *)(v10 + 40) = *(_QWORD *)(a2 + 40);
    }
    *(_QWORD *)(v10 + 32) = *(_QWORD *)(a2 + 32);
    v12 = *(_BYTE *)(a2 + 56);
    *(_QWORD *)(a2 + 24) = v2;
    *(_QWORD *)(a2 + 32) = 0;
    *(_BYTE *)(a2 + 40) = 0;
    *(_BYTE *)(v10 + 56) = v12;
    sub_9CBAD0((__int64 *)a1, v9);
    v13 = v16[0];
    if ( a1 + 16 != *(_QWORD *)a1 )
      free(*(void **)a1);
    v14 = *(_DWORD *)(a1 + 8);
    *(_QWORD *)a1 = v9;
    *(_DWORD *)(a1 + 12) = v13;
    v15 = (unsigned int)(v14 + 1);
    *(_DWORD *)(a1 + 8) = v15;
    return v9 + (v15 << 6) - 64;
  }
  else
  {
    v3 = *(_QWORD *)a1 + ((unsigned __int64)*(unsigned int *)(a1 + 8) << 6);
    *(_QWORD *)v3 = *(_QWORD *)a2;
    *(_DWORD *)(v3 + 8) = *(_DWORD *)(a2 + 8);
    *(_QWORD *)(v3 + 12) = *(_QWORD *)(a2 + 12);
    *(_DWORD *)(v3 + 20) = *(_DWORD *)(a2 + 20);
    *(_QWORD *)(v3 + 24) = v3 + 40;
    v4 = *(_QWORD *)(a2 + 24);
    if ( v4 == v2 )
    {
      *(__m128i *)(v3 + 40) = _mm_loadu_si128((const __m128i *)(a2 + 40));
    }
    else
    {
      *(_QWORD *)(v3 + 24) = v4;
      *(_QWORD *)(v3 + 40) = *(_QWORD *)(a2 + 40);
    }
    *(_QWORD *)(v3 + 32) = *(_QWORD *)(a2 + 32);
    v5 = *(_BYTE *)(a2 + 56);
    *(_BYTE *)(a2 + 40) = 0;
    *(_QWORD *)(a2 + 24) = v2;
    *(_QWORD *)(a2 + 32) = 0;
    *(_BYTE *)(v3 + 56) = v5;
    v6 = *(_QWORD *)a1;
    v7 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
    *(_DWORD *)(a1 + 8) = v7;
    return v6 + (v7 << 6) - 64;
  }
}

