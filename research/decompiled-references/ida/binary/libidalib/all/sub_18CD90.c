__int64 __fastcall sub_18CD90(__int64 a1, int a2, int a3, int a4, int a5, int a6)
{
  __int64 *v8; // rax
  signed int v9; // ebx
  __int64 *v10; // rbp
  int v11; // edx
  int v12; // ecx
  unsigned int v13; // r12d
  int v14; // r15d
  __int64 v15; // rax
  int v16; // r14d
  int v17; // r13d
  __int64 v18; // rdx
  unsigned int v19; // esi
  __int64 v20; // rdi
  signed int v21; // eax
  int v24; // [rsp+4h] [rbp-54h]
  unsigned int v26; // [rsp+8h] [rbp-50h]
  int v27; // [rsp+Ch] [rbp-4Ch]
  __int64 v28[9]; // [rsp+10h] [rbp-48h] BYREF

  v28[1] = __readfsqword(0x28u);
  v8 = (__int64 *)sub_184EF0(a1, a2, nullptr, v28);
  if ( !v8 )
    return 0;
  v9 = *((_DWORD *)v8 + 8);
  v10 = v8;
  v11 = *((_DWORD *)v8 + 9);
  v12 = *((_DWORD *)v8 + 4);
  v13 = v9;
  if ( a3 != -1 )
    v13 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 468LL) * a3;
  v26 = *((_DWORD *)v8 + 9);
  if ( a4 != -1 )
    v26 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 472LL) * a4;
  v14 = *((_DWORD *)v8 + 4);
  if ( a5 != -1 )
    v14 = a5 * *(_DWORD *)(*(_QWORD *)(a1 + 8) + 468LL);
  if ( a6 == -1 )
    v27 = *((_DWORD *)v8 + 5);
  else
    v27 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 472LL) * a6;
  v15 = v28[0];
  if ( v28[0] && *(_QWORD *)(v28[0] + 16) )
  {
    v16 = 0;
    v24 = v9 + v12;
    v17 = v26 - v11;
    v18 = 0;
    do
    {
      v20 = *(_QWORD *)(*(_QWORD *)(v15 + 8) + 8 * v18);
      v21 = *(_DWORD *)(v20 + 32);
      if ( v9 >= v21 )
        v19 = v21 - v9 + v13;
      else
        v19 = v14 + v21 - v24 + v13;
      ++v16;
      sub_18CCA0((__int64 *)v20, v19, v17 + *(_DWORD *)(v20 + 36), *(_DWORD *)(v20 + 16), *(_DWORD *)(v20 + 20));
      v15 = v28[0];
      v18 = v16;
    }
    while ( (unsigned __int64)v16 < *(_QWORD *)(v28[0] + 16) );
  }
  sub_18CCA0(v10, v13, v26, v14, v27);
  return 1;
}

