__int64 __fastcall sub_3CB5C0(__int64 a1, unsigned __int64 a2)
{
  int v2; // eax
  __int64 v3; // rbx
  unsigned __int64 v4; // rax
  unsigned __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // r12
  __int64 *v9; // rbp
  __int64 v10; // rdx
  _DWORD *v11; // rcx
  _DWORD *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  _QWORD *v18[7]; // [rsp+0h] [rbp-38h] BYREF

  v18[1] = (_QWORD *)__readfsqword(0x28u);
  v2 = sub_3CB3E0(a1, a2);
  v3 = v2;
  if ( v2 != -1 )
  {
    v4 = *(_QWORD *)(a1 + 24);
    if ( v4 <= 1 )
      goto LABEL_3;
    v18[0] = (_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v4 - 8);
    v6 = sub_3CB120((__m128i *)(a1 + 72), v18[0], v18);
    v7 = *(_QWORD *)(a1 + 64);
    v8 = *(int *)(v6 + 32);
    v9 = (__int64 *)(*(_QWORD *)(v7 + 48) + 24 * v8);
    v10 = v9[1];
    v11 = (_DWORD *)(*v9 + 4 * v10);
    if ( (_DWORD *)*v9 == v11 )
      goto LABEL_10;
    v12 = (_DWORD *)*v9;
    while ( (_DWORD)v3 != *v12 )
    {
      if ( v11 == ++v12 )
        goto LABEL_10;
    }
    if ( v11 == v12 )
    {
LABEL_10:
      if ( v9[2] < (unsigned __int64)(v10 + 1) )
      {
        v15 = qvector_reserve();
        v16 = v9[1];
        *v9 = v15;
        v11 = (_DWORD *)(v15 + 4 * v16);
      }
      *v11 = v3;
      ++v9[1];
      v3 = *(_QWORD *)(v7 + 72) + 24 * v3;
      v13 = *(_QWORD *)(v3 + 8);
      v14 = *(_QWORD *)v3;
      if ( *(_QWORD *)(v3 + 16) < (unsigned __int64)(v13 + 1) )
      {
        v17 = qvector_reserve();
        *(_QWORD *)v3 = v17;
        v14 = v17;
        v13 = *(_QWORD *)(v3 + 8);
      }
      *(_DWORD *)(v14 + 4 * v13) = v8;
      ++*(_QWORD *)(v3 + 8);
      LODWORD(v3) = 0;
    }
    else
    {
LABEL_3:
      LODWORD(v3) = 0;
    }
  }
  return (unsigned int)v3;
}
