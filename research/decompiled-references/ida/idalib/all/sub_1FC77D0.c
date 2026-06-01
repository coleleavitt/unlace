__int64 __fastcall sub_1FC77D0(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r13
  int v6; // ebx
  int v7; // r12d
  int v8; // ebp
  int v9; // edx
  __int64 v10; // rdi
  int v11; // r12d
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 v15; // rsi
  __int64 result; // rax
  int v17; // esi
  __int64 v18; // [rsp+0h] [rbp-48h]
  __int64 v19; // [rsp+8h] [rbp-40h]

  v4 = *a2;
  if ( (*a2 & 0x1000) != 0 )
  {
    v5 = a2[((v4 & 0x4000) != 0) + 4 + (unsigned int)((v4 & 0x2000) != 0)];
    v6 = v5 != 0;
    if ( (v4 & 0x2000) != 0 )
      goto LABEL_3;
LABEL_23:
    v19 = 0;
    v7 = 0;
    if ( (v4 & 0x4000) != 0 )
      goto LABEL_4;
    goto LABEL_24;
  }
  v6 = 0;
  v5 = 0;
  if ( (v4 & 0x2000) == 0 )
    goto LABEL_23;
LABEL_3:
  v19 = a2[((v4 & 0x4000) != 0) + 2];
  v7 = v19 != 0;
  if ( (v4 & 0x4000) != 0 )
  {
LABEL_4:
    v18 = a2[2];
    v8 = v18 != 0;
    goto LABEL_5;
  }
LABEL_24:
  v8 = 0;
  v18 = 0;
LABEL_5:
  sub_1FC23C0((unsigned int *)(a1 + 232));
  v9 = *(_DWORD *)(a1 + 236);
  v10 = *(_QWORD *)(a1 + 24);
  v11 = *(_DWORD *)(a1 + 232) | (v6 << v9) | (v7 << (v9 + 1));
  *(_DWORD *)(a1 + 236) = v9 + 3;
  *(_DWORD *)(a1 + 232) = (v8 << (v9 + 2)) | v11;
  sub_9B9C90(v10, (*((_BYTE *)a2 + 1) >> 1) & 7);
  sub_183F100(a1 + 32, a2[((*a2 & 0x4000) != 0) + 2 + ((*a2 & 0x2000) != 0)]);
  sub_183F100(a1 + 32, a2[((*a2 & 0x2000) != 0) + 3 + (unsigned int)((*a2 & 0x4000) != 0)]);
  if ( v5 )
  {
    v12 = *a2;
    v13 = 0;
    if ( (*a2 & 0x1000) != 0 )
      v13 = a2[((v12 & 0x4000) != 0) + 4 + (unsigned int)((v12 & 0x2000) != 0)];
    sub_183F100(a1 + 32, v13);
  }
  if ( v19 )
  {
    v14 = 0;
    if ( (*a2 & 0x2000) != 0 )
      v14 = a2[((*a2 & 0x4000) != 0) + 2];
    sub_183F100(a1 + 32, v14);
  }
  if ( v18 )
  {
    v15 = 0;
    if ( (*(_WORD *)a2 & 0x4000) != 0 )
      v15 = a2[2];
    sub_183F100(a1 + 32, v15);
  }
  sub_1F6F570(*(_QWORD **)(a1 + 16), *((_DWORD *)a2 + 1), *(_QWORD *)(a1 + 24));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *((_DWORD *)a2 + 2), *(_QWORD *)(a1 + 24));
  result = sub_1F6F570(*(_QWORD **)(a1 + 16), *((_DWORD *)a2 + 3), *(_QWORD *)(a1 + 24));
  if ( v5 )
  {
    v17 = 0;
    if ( (*a2 & 0x1000) != 0 )
      v17 = a2[((*a2 & 0x1000) != 0) + 4 + ((*a2 & 0x2000) != 0) + ((*a2 & 0x4000) != 0)];
    result = sub_1F6F570(*(_QWORD **)(a1 + 16), v17, *(_QWORD *)(a1 + 24));
  }
  *(_DWORD *)(a1 + 224) = 156;
  return result;
}
