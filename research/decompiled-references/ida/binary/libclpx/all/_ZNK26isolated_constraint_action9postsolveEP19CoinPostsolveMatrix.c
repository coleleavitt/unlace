__int64 __fastcall isolated_constraint_action::postsolve(isolated_constraint_action *this, CoinPostsolveMatrix *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r11
  __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // r12
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // r15
  int v11; // r10d
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _DWORD *v15; // r8
  __int64 v16; // xmm0_8
  __int64 v18; // [rsp+0h] [rbp-58h]
  __int64 v19; // [rsp+10h] [rbp-48h]
  __int64 v20; // [rsp+18h] [rbp-40h]
  __int64 v21; // [rsp+20h] [rbp-38h]

  v2 = *((int *)this + 8);
  v3 = *((_QWORD *)a2 + 8);
  v20 = *((_QWORD *)a2 + 21);
  v4 = *((_QWORD *)a2 + 7);
  v5 = *((_QWORD *)a2 + 5);
  v6 = *((_QWORD *)a2 + 33);
  v7 = *((_QWORD *)a2 + 6);
  v8 = *((_QWORD *)a2 + 20);
  v21 = *((_QWORD *)a2 + 22);
  v9 = *((_QWORD *)a2 + 13);
  *(_QWORD *)(*((_QWORD *)a2 + 14) + 8 * v2) = *((_QWORD *)this + 3);
  v19 = v2;
  *(_QWORD *)(v9 + 8 * v2) = *((_QWORD *)this + 2);
  if ( *((int *)this + 9) > 0 )
  {
    v10 = *((_QWORD *)this + 6);
    v11 = v2;
    v18 = *((_QWORD *)this + 5);
    v12 = 1;
    do
    {
      v13 = *(int *)(v18 + 4 * v12 - 4);
      v14 = *((int *)a2 + 64);
      v15 = (_DWORD *)(v6 + 4 * v14);
      *(_QWORD *)(v8 + 8 * v13) = 0;
      v16 = *(_QWORD *)(v10 + 8 * v12 - 8);
      *((_DWORD *)a2 + 64) = *v15;
      *(_DWORD *)(v5 + 4 * v13) = v14;
      *(_QWORD *)(v3 + 8 * v14) = v16;
      *(_DWORD *)(v4 + 4 * v14) = v11;
      *v15 = -66666666;
      *(_DWORD *)(v7 + 4 * v13) = 1;
      LODWORD(v13) = v12++;
    }
    while ( *((_DWORD *)this + 9) > (int)v13 );
  }
  *(_BYTE *)(v19 + *((_QWORD *)a2 + 25)) = *(_BYTE *)(v19 + *((_QWORD *)a2 + 25)) & 0xF8 | 1;
  *(_QWORD *)(v20 + 8 * v19) = 0;
  *(_QWORD *)(v21 + 8 * v19) = 0;
  return v21;
}

