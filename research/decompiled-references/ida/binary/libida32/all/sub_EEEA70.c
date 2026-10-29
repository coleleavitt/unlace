__int64 __fastcall sub_EEEA70(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  _QWORD *v4; // r12
  __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  unsigned __int64 *v7; // r8
  __int64 v8; // r9
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // [rsp+8h] [rbp-40h]
  _QWORD *v13; // [rsp+10h] [rbp-38h] BYREF

  if ( a3 )
  {
    v10 = *(_QWORD *)(a1 + 8);
    v11 = *(unsigned int *)(v10 + 8);
    if ( v11 + 1 > (unsigned __int64)*(unsigned int *)(v10 + 12) )
    {
      sub_22134E0(*(_QWORD *)(a1 + 8), v10 + 16, v11 + 1, 4);
      v11 = *(unsigned int *)(v10 + 8);
    }
    *(_DWORD *)(*(_QWORD *)v10 + 4 * v11) = 1;
    ++*(_DWORD *)(v10 + 8);
  }
  v4 = *(_QWORD **)(a1 + 24);
  LODWORD(v12) = 0;
  sub_B61B50(&v13, a2);
  return sub_E81A20(v4, a3, v5, v6, v7, v8, a2, v12, v13);
}

