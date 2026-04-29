__int64 __fastcall sub_230E0(__int64 a1, unsigned int a2, __int64 *a3)
{
  unsigned int v3; // ebx
  _BYTE *v5; // rax
  const void *v6; // rbp
  _BYTE *v7; // rdx
  unsigned int v8; // eax
  size_t v9; // r15
  __int64 v10; // r13
  size_t v11; // r14
  __int64 v12; // rsi
  size_t v13; // rdx
  __int64 v15; // rax
  int v16; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v17; // [rsp+18h] [rbp-40h]

  v3 = 0;
  v17 = __readfsqword(0x28u);
  v16 = 0;
  v5 = (_BYTE *)sub_23020(a1, 1u, a2, &v16);
  if ( v5 )
  {
    v6 = v5;
    v7 = &v5[v16];
    if ( *v5 && v5 < v7 )
    {
      do
        ++v5;
      while ( *v5 && v5 < v7 );
      v8 = (_DWORD)v5 - (_DWORD)v6;
      v9 = v8;
      v3 = v8;
    }
    else
    {
      v3 = 0;
      v9 = 0;
    }
    v10 = a3[1];
    v11 = v9;
    if ( v10 )
      v11 = --v10 + v9;
    v12 = *a3;
    v13 = v11 + 1;
    if ( a3[2] < v11 + 1 )
    {
      v15 = qvector_reserve();
      v13 = v11 + 1;
      *a3 = v15;
      v12 = v15;
    }
    a3[1] = v13;
    *(_BYTE *)(v12 + v11) = 0;
    memmove((void *)(v10 + *a3), v6, v9);
  }
  return v3;
}
