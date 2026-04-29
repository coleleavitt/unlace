__int64 __fastcall sub_398A00(__int64 a1, const void *a2, _QWORD *a3, double a4)
{
  __int64 v4; // rax
  __int64 *v6; // rbx
  __int64 *v7; // rbp
  __int64 v8; // r15
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v12; // rax
  int v13; // edx
  __int64 v14; // rbx
  unsigned __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  const char *v20; // rdx
  __int64 v21; // rax
  _QWORD v22[3]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v23; // [rsp+18h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 1008);
  v23 = __readfsqword(0x28u);
  v6 = *(__int64 **)(v4 + 40);
  v7 = &v6[*(_QWORD *)(v4 + 48)];
  if ( v6 == v7 )
    goto LABEL_5;
  while ( 1 )
  {
    v8 = *v6;
    if ( *v6 )
    {
      if ( (unsigned __int8)sub_38A0C0(*v6, (unsigned __int64)a2) )
        break;
    }
    if ( v7 == ++v6 )
      goto LABEL_5;
  }
  v12 = *(_QWORD *)(v8 + 32);
  if ( v12 )
  {
    v13 = *(_DWORD *)(v12 + 108);
    if ( (v13 & 8) == 0 && (*(_BYTE *)v8 & 2) != 0 )
    {
      *(_DWORD *)(v12 + 108) = v13 | 8;
      goto LABEL_11;
    }
LABEL_5:
    v9 = *(_QWORD *)(a1 + 112);
    v10 = *a3 >> 3;
    v22[0] = off_4E0D18;
    v22[1] = v10;
    sub_2BC680(v9, a2, (__int64)v22);
    return v23 - __readfsqword(0x28u);
  }
  if ( (*(_BYTE *)v8 & 2) == 0 )
    goto LABEL_5;
LABEL_11:
  v14 = *(_QWORD *)(v8 + 24);
  v15 = sub_1CF860(v14, *a3 >> 3, (unsigned __int64)a2);
  v16 = sub_2293A0((_QWORD *)(v14 + 432), *(_QWORD *)(a1 + 112), v15, 1);
  if ( v16 != -1 )
  {
    v20 = s1;
    if ( a3[3] )
      v20 = (const char *)a3[2];
    sub_397AB0(v8, *(_QWORD *)(v14 + 432) + 104LL * v16, v20, 0, 1, a4);
  }
  v21 = *(_QWORD *)(v8 + 32);
  if ( !v21 )
    return v23 - __readfsqword(0x28u);
  *(_DWORD *)(v21 + 108) &= ~8u;
  if ( (*(_BYTE *)v8 & 2) != 0 )
    return v23 - __readfsqword(0x28u);
  return sub_395FD0(v8, 0, a4, v17, v18, v19);
}
