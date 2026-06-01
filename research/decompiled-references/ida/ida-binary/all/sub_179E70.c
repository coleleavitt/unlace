unsigned __int64 __fastcall sub_179E70(__int64 *a1, __int64 *a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // rbp
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int128 v16; // [rsp+6h] [rbp-42h]
  __int128 v17; // [rsp+6h] [rbp-42h]
  unsigned __int64 v18; // [rsp+18h] [rbp-30h]

  v5 = a4 + 40;
  v18 = __readfsqword(0x28u);
  v8 = sub_524FA0(a4 + 40, 2165563945LL, 0);
  *(_QWORD *)((char *)&v16 + 2) = v9;
  *a1 = v8;
  LOWORD(v16) = HIWORD(v8);
  *(__int64 *)((char *)a1 + 6) = v16;
  v10 = sub_524FA0(v5, 2165563909LL, 0);
  *a2 = v10;
  LOWORD(v16) = HIWORD(v10);
  *(_QWORD *)((char *)&v16 + 2) = v11;
  *(__int64 *)((char *)a2 + 6) = v16;
  if ( a5 == -1 )
  {
    *(_DWORD *)a3 = 1;
    *(_QWORD *)(a3 + 4) = 0;
    *(_WORD *)(a3 + 12) = 0;
  }
  else
  {
    v13 = sub_1E95B0(a5);
    v14 = sub_524FA0(v5, v13, 0);
    *(_QWORD *)a3 = v14;
    LOWORD(v17) = HIWORD(v14);
    *(_QWORD *)((char *)&v17 + 2) = v15;
    *(_QWORD *)(a3 + 6) = v17;
  }
  return v18 - __readfsqword(0x28u);
}
