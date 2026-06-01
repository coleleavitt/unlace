__int64 __fastcall sub_AB4300(__int64 a1, _QWORD *a2, char a3)
{
  char v4; // r12
  __int64 v6; // r9
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned int v10; // r15d
  unsigned int v11; // ebp
  __int64 v12; // rdx
  unsigned int v14; // ebp
  __int64 v15; // rdx
  __int64 v16; // rdx
  unsigned int v17; // [rsp+4h] [rbp-44h]
  unsigned int v18; // [rsp+8h] [rbp-40h]
  unsigned int v19; // [rsp+Ch] [rbp-3Ch]

  v4 = a3;
  sub_B6E740(*(_QWORD *)(a1 + 16));
  v7 = *(_QWORD *)(a1 + 16);
  v8 = *(_QWORD *)(v7 + 8832);
  if ( !v8
    || (v9 = *(unsigned int *)a2, (unsigned int)v9 >= *(_DWORD *)(v8 - 4))
    || (v10 = *(_DWORD *)(v8 + 4LL * (unsigned int)v9), v10 == 0x7FFFFFFF) )
  {
    v10 = sub_B67520(v7, a2);
    v18 = sub_B645B0(*(_QWORD *)(a1 + 16), a2[4]);
    v14 = sub_B645B0(*(_QWORD *)(a1 + 16), a2[5]);
    v19 = sub_B645B0(*(_QWORD *)(a1 + 16), a2[6]);
    v17 = (2 * v10) ^ 1;
    sub_B6B9E0(*(_QWORD *)(a1 + 16), v17, v18, v14);
    sub_B6B9E0(*(_QWORD *)(a1 + 16), v17, v18, v19);
    v15 = v14;
    v14 ^= 1u;
    sub_B6B9E0(*(_QWORD *)(a1 + 16), v17, v15, v19);
    v18 ^= 1u;
    sub_B6B9E0(*(_QWORD *)(a1 + 16), 2 * v10, v18, v14);
    sub_B6B9E0(*(_QWORD *)(a1 + 16), 2 * v10, v18, v19 ^ 1);
    v16 = v14;
    v11 = 1;
    sub_B6B9E0(*(_QWORD *)(a1 + 16), 2 * v10, v16, v19 ^ 1);
    v7 = *(_QWORD *)(a1 + 16);
    v9 = *(unsigned int *)a2;
  }
  else
  {
    v11 = 0;
  }
  v12 = *(_QWORD *)(v7 + 8656);
  if ( v12 && (unsigned int)v9 < *(_DWORD *)(v12 - 4) )
    v4 = a3 | (*(_QWORD *)(v12 + 8 * v9) != 0);
  if ( !v4 )
  {
    sub_B68280(v7, a2, 1, 1, 1, v6);
    sub_B66DE0(*(_QWORD *)(a1 + 16), v10, v11);
  }
  return 1;
}

