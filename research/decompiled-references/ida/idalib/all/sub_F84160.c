__int64 __fastcall sub_F84160(__int64 a1, __int64 *a2)
{
  __int64 v3; // r9
  __int64 v5; // rcx
  __int64 v6; // rdx
  int v7; // eax
  int v8; // esi
  __int64 v9; // r8
  bool v10; // zf
  __int64 v11; // rax
  __int64 v12; // [rsp+0h] [rbp-28h] BYREF
  __int64 v13[4]; // [rsp+8h] [rbp-20h] BYREF

  if ( (unsigned __int8)sub_F7E700((__int64 *)a1, a2, &v12) )
    return v12 + 8;
  v5 = *(unsigned int *)(a1 + 16);
  v6 = v12;
  v7 = *(_DWORD *)(a1 + 8) + 1;
  v8 = 2 * v5;
  v9 = (unsigned int)(4 * v7);
  v13[0] = v12;
  if ( (unsigned int)v9 >= 3 * (int)v5 )
    goto LABEL_9;
  if ( (int)v5 - *(_DWORD *)(a1 + 12) - v7 <= (unsigned int)v5 >> 3 )
  {
    v8 = v5;
LABEL_9:
    sub_F83F40(a1, v8, v12, v5, v9, v3);
    sub_F7E700((__int64 *)a1, a2, v13);
    v6 = v13[0];
    v7 = *(_DWORD *)(a1 + 8) + 1;
  }
  v10 = *(_QWORD *)v6 == -1;
  *(_DWORD *)(a1 + 8) = v7;
  if ( !v10 )
    --*(_DWORD *)(a1 + 12);
  v11 = *a2;
  *(_QWORD *)(v6 + 8) = 0;
  *(_OWORD *)(v6 + 16) = 0;
  *(_QWORD *)v6 = v11;
  *(_QWORD *)(v6 + 32) = 0;
  *(_QWORD *)(v6 + 40) = 0;
  *(_OWORD *)(v6 + 48) = 0;
  return v6 + 8;
}
