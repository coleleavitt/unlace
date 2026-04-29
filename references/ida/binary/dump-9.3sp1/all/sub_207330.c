unsigned __int64 __fastcall sub_207330(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v3; // r9
  __int64 v4; // rbp
  __int64 v6; // rax
  unsigned __int64 *v7; // rcx
  unsigned __int64 *v8; // r10
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  int *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // eax
  int v21; // esi
  __int64 v22; // [rsp+0h] [rbp-38h] BYREF
  char v23; // [rsp+8h] [rbp-30h]
  int v24; // [rsp+Ch] [rbp-2Ch]
  unsigned __int64 v25; // [rsp+18h] [rbp-20h]

  v3 = a3;
  v4 = (int)a2;
  v25 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 184);
  v7 = *(unsigned __int64 **)(v6 + 88);
  v8 = &v7[*(_QWORD *)(v6 + 96)];
  if ( v7 != v8 )
  {
    while ( 1 )
    {
      a2 = **(_QWORD ***)(*(_QWORD *)(a1 + 8) + 800LL);
      if ( !a2 )
        break;
      v9 = *v7;
      v10 = *a2 & 0xFFFFFFFFFFFFFFFCLL;
      if ( v10 )
      {
        if ( (*(_BYTE *)(*a2 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
          break;
        v11 = *(_QWORD *)(v10 + 24);
        v12 = v10 + 24;
        if ( v9 < v11 )
        {
LABEL_8:
          v10 = *(_QWORD *)(v10 + 8);
          goto LABEL_9;
        }
        while ( v11 < v9 )
        {
          v10 = *(_QWORD *)(v10 + 16);
LABEL_9:
          if ( (*(_BYTE *)v10 & 2) != 0 )
            goto LABEL_5;
          v11 = *(_QWORD *)(v10 + 24);
          v12 = v10 + 24;
          if ( v9 < v11 )
            goto LABEL_8;
        }
        if ( (_QWORD *)v10 == a2 )
          break;
      }
      else
      {
        v12 = 24;
      }
      if ( *(_DWORD *)(v12 + 24) != *(_DWORD *)(*(_QWORD *)(a1 + 72) + 44LL) )
      {
        if ( !under_debugger )
          sub_383060(52870);
LABEL_32:
        BUG();
      }
      *(_QWORD *)(v12 + 16) += v3;
      *(_DWORD *)(v12 + 24) = v4;
      if ( *(_BYTE *)v9 == 9 )
      {
        a2 = *(_QWORD **)(v12 + 16);
        v13 = *(_QWORD *)(v9 + 8);
        *(_QWORD *)(v13 + 8) = a2;
        *(_DWORD *)(v13 + 16) = *(_DWORD *)(v12 + 24);
      }
      if ( v8 == ++v7 )
        goto LABEL_18;
    }
LABEL_5:
    if ( !under_debugger )
      sub_383060(52869);
    goto LABEL_32;
  }
LABEL_18:
  v14 = *(_QWORD *)(a1 + 72);
  if ( *(_DWORD *)(v14 + 44) != (_DWORD)v4 )
  {
    *(_DWORD *)(v14 + 44) = v4;
    a2 = *(_QWORD **)(a1 + 72);
    sub_107060(*(_QWORD *)(a1 + 8), (unsigned __int64)a2, *(_QWORD *)(a1 + 48), *(_QWORD **)(a1 + 56));
  }
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 184) + 40LL) != 58 )
  {
    v16 = (int *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 432LL) + 104 * v4);
    v17 = *(_QWORD *)(a1 + 72);
    v18 = *(unsigned __int8 *)(v17 + 32);
    if ( (_BYTE)v18 == 1 )
    {
      v19 = *(int *)(v17 + 24);
    }
    else
    {
      if ( (_BYTE)v18 != 5 )
        sub_201340(v16, a2, v18, v7);
      v19 = *(_QWORD *)(v17 + 24);
    }
    v20 = *(_DWORD *)(v17 + 40);
    v21 = v16[22];
    v22 = v19;
    v23 = v18;
    v24 = v20;
    if ( (unsigned __int8)sub_1C3E70(v16, v21, (__int64)&v22, nullptr) )
      *(_DWORD *)(*(_QWORD *)(a1 + 184) + 40LL) = 58;
  }
  return v25 - __readfsqword(0x28u);
}
