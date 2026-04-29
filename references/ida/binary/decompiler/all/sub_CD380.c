unsigned __int64 __fastcall sub_CD380(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // edx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rbp
  int v10; // eax
  __int64 v11; // r13
  __int64 v12; // rbp
  int v13; // eax
  _DWORD *v14; // rsi
  __int64 v15; // rdx
  int v16; // r12d
  _DWORD *v17; // rcx
  _DWORD *v18; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  _QWORD v22[5]; // [rsp+0h] [rbp-218h] BYREF
  char v23; // [rsp+28h] [rbp-1F0h]
  _QWORD *v24[55]; // [rsp+30h] [rbp-1E8h] BYREF
  unsigned __int64 v25; // [rsp+1E8h] [rbp-30h]

  v25 = __readfsqword(0x28u);
  v23 = 0;
  memset(&v22[1], 0, 32);
  v22[0] = off_4DB818;
  ((void (__fastcall *)(__int64, _QWORD *, __int64, __int64, __int64, __int64))sub_11D770)(a1, v22, a3, a4, a5, a6);
  v6 = *(_DWORD *)(a1 + 64);
  v7 = 8;
  v8 = 1;
  if ( v6 > 1 )
  {
    while ( 1 )
    {
      ++v8;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 528) + v7) + 24LL) |= 1u;
      v6 = *(_DWORD *)(a1 + 64);
      if ( v6 <= v8 )
        break;
      v7 += 8;
      if ( v8 >= (unsigned int)v6 )
      {
LABEL_25:
        if ( !under_debugger )
          sub_37EA20(52719);
        BUG();
      }
    }
  }
  v9 = 0;
  if ( v6 > 0 )
  {
    while ( 1 )
    {
      sub_BA850(*(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v9));
      v10 = *(_DWORD *)(a1 + 64);
      if ( v10 <= (int)v9 + 1 )
        break;
      if ( (unsigned int)++v9 >= v10 )
        goto LABEL_25;
    }
  }
  v11 = 0;
  sub_1D2450(a1);
  sub_667E0((_QWORD *)a1);
  sub_C21C0((__int64)v24, a1);
  if ( *(int *)(a1 + 64) > 0 )
  {
    do
    {
      v12 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v11);
      sub_CC7D0(v12);
      if ( (*(_BYTE *)(v12 + 24) & 1) != 0 || *(_DWORD *)(a1 + 64) == 1 )
        sub_BBA80((_QWORD *)v12, v24);
      if ( *(_DWORD *)(v12 + 76) == 4 )
      {
        v13 = sub_32D940(v12);
        v14 = *(_DWORD **)(v12 + 704);
        v15 = *(_QWORD *)(v12 + 712);
        v16 = v13 - 1;
        v17 = &v14[v15];
        if ( v14 == v17 )
          goto LABEL_20;
        v18 = *(_DWORD **)(v12 + 704);
        while ( v16 != *v18 )
        {
          if ( v17 == ++v18 )
            goto LABEL_20;
        }
        if ( v17 == v18 )
        {
LABEL_20:
          if ( *(_QWORD *)(v12 + 720) < (unsigned __int64)(v15 + 1) )
          {
            v20 = qvector_reserve();
            v21 = *(_QWORD *)(v12 + 712);
            *(_QWORD *)(v12 + 704) = v20;
            v17 = (_DWORD *)(v20 + 4 * v21);
          }
          *v17 = v16;
          ++*(_QWORD *)(v12 + 712);
        }
      }
      sub_BAB80(v12);
      ++v11;
    }
    while ( *(_DWORD *)(a1 + 64) > (int)v11 );
  }
  sub_C19D0(v24);
  return v25 - __readfsqword(0x28u);
}
