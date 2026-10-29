__int64 __fastcall sub_E1E820(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int v10; // eax
  __int64 *v11; // rdi
  __int64 v12; // rax
  __int64 result; // rax
  size_t v14; // r12
  void *v15; // rax
  void *v16; // rax
  void *v17; // rdi
  __int64 *v18; // r10
  __int64 *i; // r11
  __int64 v20; // rcx
  __int64 v21; // r9
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rdx

  *(_QWORD *)(a1 + 8) = a4;
  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)a1 = &off_2B4B778;
  v10 = 0;
  if ( a4 )
    v10 = *(_DWORD *)(a4 + 24) + 1;
  *(_DWORD *)(a1 + 24) = v10;
  *(_QWORD *)(a1 + 32) = a3;
  *(_QWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 64) = 1;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_OWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 112) = 1;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 136) = a5;
  *(_DWORD *)(a1 + 144) = a6;
  v11 = *(__int64 **)(a2 + 176);
  v12 = *v11;
  if ( *v11 )
    v12 = sub_E21760(v11, 0);
  *(_QWORD *)(a1 + 152) = v12;
  *(_QWORD *)(a1 + 160) = 0;
  result = *(_QWORD *)(*(_QWORD *)(a2 + 176) + 8LL);
  *(_BYTE *)(a1 + 200) = a4 == 0;
  *(_QWORD *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 168) = result;
  *(_QWORD *)(a1 + 184) = 0;
  *(_DWORD *)(a1 + 192) = 0;
  if ( a3 )
  {
    result = *(unsigned int *)(a3 + 24);
    if ( (_DWORD)result )
    {
      v14 = (unsigned int)result;
      v15 = (void *)operator new[]((unsigned int)result);
      v16 = memset(v15, 0, v14);
      v17 = *(void **)(a1 + 160);
      *(_QWORD *)(a1 + 160) = v16;
      if ( v17 )
        operator delete[](v17);
      result = *(unsigned int *)(a3 + 88);
      v18 = *(__int64 **)(a3 + 80);
      for ( i = &v18[18 * result]; i != v18; v18 += 18 )
      {
        v20 = *v18;
        v21 = *v18 + 16LL * *((unsigned int *)v18 + 2);
        if ( *v18 != v21 )
        {
          v22 = *(_QWORD *)(a1 + 160);
          do
          {
            v23 = *(_QWORD *)(v20 + 8);
            v20 += 16;
            v24 = *(unsigned int *)(v20 - 16);
            v25 = v22 + v24 - 40;
            result = v22 + v24;
            *(_DWORD *)v25 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 32LL);
            *(_QWORD *)(v25 + 8) = 0;
            *(_DWORD *)(v25 + 16) = -1;
            *(_BYTE *)(v25 + 20) = 1;
            *(_DWORD *)(v25 + 24) = 0;
            *(_WORD *)(v25 + 28) = 0;
            *(_QWORD *)(v25 + 32) = v23;
            *(_DWORD *)result = 16;
            *(_WORD *)(result + 4) &= 0xFE28u;
            *(_BYTE *)(result + 6) = 0;
            *(_QWORD *)(result + 8) = v23;
          }
          while ( v21 != v20 );
        }
      }
    }
  }
  return result;
}
