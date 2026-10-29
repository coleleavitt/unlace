__int64 __fastcall sub_5A29E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v4; // edx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  void (***v21)(void); // rdi
  void (__fastcall ***v22)(_QWORD); // r12
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
  v4 = *(_DWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 32) = v2;
  LODWORD(v2) = *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 40) = v4;
  v5 = *(_QWORD *)(a2 + 48);
  *(_DWORD *)(a2 + 40) = v2;
  v6 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = v5;
  v7 = *(_QWORD *)(a2 + 56);
  *(_QWORD *)(a2 + 48) = v6;
  v8 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 56) = v7;
  v9 = *(_QWORD *)(a2 + 64);
  *(_QWORD *)(a2 + 56) = v8;
  v10 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 64) = v9;
  v11 = *(_QWORD *)(a2 + 72);
  *(_QWORD *)(a2 + 64) = v10;
  v12 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 72) = v11;
  v13 = *(_QWORD *)(a2 + 80);
  *(_QWORD *)(a2 + 72) = v12;
  v14 = *(_QWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 80) = v13;
  v15 = *(_QWORD *)(a2 + 104);
  *(_QWORD *)(a2 + 80) = v14;
  v16 = *(_QWORD *)(a1 + 104);
  *(_QWORD *)(a1 + 104) = v15;
  v17 = *(_QWORD *)(a2 + 112);
  *(_QWORD *)(a2 + 104) = v16;
  v18 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 112) = v17;
  v19 = *(_QWORD *)(a2 + 120);
  *(_QWORD *)(a2 + 112) = v18;
  v20 = *(_QWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 120) = v19;
  LODWORD(v19) = *(_DWORD *)(a2 + 128);
  *(_QWORD *)(a2 + 120) = v20;
  LODWORD(v20) = *(_DWORD *)(a1 + 128);
  *(_DWORD *)(a1 + 128) = v19;
  v21 = *(void (****)(void))(a1 + 144);
  *(_DWORD *)(a2 + 128) = v20;
  if ( v21 )
  {
    sub_4CFE00(v21);
    *(_QWORD *)(a1 + 144) = 0;
  }
  v22 = *(void (__fastcall ****)(_QWORD))(a1 + 152);
  if ( v22 )
  {
    (**v22)(*(_QWORD *)(a1 + 152));
    sub_186B220(v22);
    *(_QWORD *)(a1 + 152) = 0;
  }
  result = *(unsigned int *)(a1 + 24);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a2 + 24) = result;
  return result;
}

