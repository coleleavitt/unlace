__int64 __fastcall sub_EDB600(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  bool v8; // zf
  __int64 v9; // r9
  _QWORD *v10; // rax
  int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // esi
  __int64 v17; // rdx
  _BYTE *v18; // rax
  __int64 v19; // [rsp+8h] [rbp-30h] BYREF
  _QWORD *v20; // [rsp+10h] [rbp-28h] BYREF
  _QWORD *v21; // [rsp+18h] [rbp-20h] BYREF

  v6 = *(_QWORD *)(a2 + 128);
  v19 = a2;
  if ( v6
    || (sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), a3, a4, a5, a6),
        (v6 = *(_QWORD *)(a2 + 128)) != 0) )
  {
    v6 = *(_QWORD *)(v6 + 88);
  }
  v7 = *a1;
  v19 = v6;
  v8 = (unsigned __int8)sub_A6DDE0((__int64 *)(v7 + 88), &v19, &v20) == 0;
  v10 = v20;
  if ( !v8 )
    return v20[1];
  v12 = *(_DWORD *)(v7 + 96);
  v21 = v20;
  v13 = (unsigned int)(v12 + 1);
  v14 = *(unsigned int *)(v7 + 104);
  v15 = (unsigned int)(4 * v13);
  v16 = 2 * v14;
  if ( (unsigned int)v15 >= 3 * (int)v14 )
    goto LABEL_13;
  if ( (int)v14 - *(_DWORD *)(v7 + 100) - (int)v13 <= (unsigned int)v14 >> 3 )
  {
    v16 = *(_DWORD *)(v7 + 104);
LABEL_13:
    sub_A921D0((__int64 **)(v7 + 88), v16, v13, v14, v15, v9);
    sub_A6DDE0((__int64 *)(v7 + 88), &v19, &v21);
    LODWORD(v13) = *(_DWORD *)(v7 + 96) + 1;
    v10 = v21;
  }
  v8 = *v10 == -4096;
  *(_DWORD *)(v7 + 96) = v13;
  if ( !v8 )
    --*(_DWORD *)(v7 + 100);
  v17 = v19;
  v10[1] = 0;
  v18 = v10 + 1;
  v18[8] = 0;
  *((_QWORD *)v18 - 1) = v17;
  return *(_QWORD *)v18;
}
