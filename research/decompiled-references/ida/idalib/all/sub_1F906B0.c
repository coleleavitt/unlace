__int64 __fastcall sub_1F906B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // ebx
  __int64 v19[6]; // [rsp+8h] [rbp-30h] BYREF

  v6 = *(_QWORD *)(a1 + 16);
  v7 = *(_QWORD *)(a1 + 8);
  v19[0] = a2;
  if ( a2 )
  {
    a2 = *(unsigned int *)sub_1F90240(v7 + 1096, v19, a3, a4, a5, a6);
    if ( !(_DWORD)a2 )
    {
      v13 = *(_QWORD *)(v7 + 48);
      if ( !v13
        || (sub_1EAC1E0(v13), a2 = *(unsigned int *)sub_1F90240(v7 + 1096, v19, v14, v15, v16, v17), !(_DWORD)a2) )
      {
        v18 = *(_DWORD *)(v7 + 1092);
        *(_DWORD *)(v7 + 1092) = v18 + 1;
        a2 = v18;
        *(_DWORD *)sub_1F90240(v7 + 1096, v19, v9, v10, v11, v12) = v18;
      }
    }
  }
  return sub_9B9C90(v6, a2);
}
