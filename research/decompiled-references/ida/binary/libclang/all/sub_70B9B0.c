__int64 __fastcall sub_70B9B0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdi
  char v5; // al
  __int16 v7; // ax
  char v8; // r13
  _QWORD *v9; // rbp
  unsigned __int64 v10; // r14
  __int64 *v11; // rbx
  unsigned __int64 v12; // rax
  int v13; // ebx
  int v14; // edx
  __int64 *v15; // rax
  __int64 *v16; // r12
  _QWORD v17[11]; // [rsp+0h] [rbp-58h] BYREF

  v3 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v5 = *(_BYTE *)(v4 + 16);
  if ( v5 == 46 )
    return *(_QWORD *)(sub_B14A40(v4) + 136);
  if ( v5 == 13 && ((v7 = (*(_WORD *)(v4 + 18) >> 3) & 0x1FF, v8 = v7 == 449, ((v7 + 74) & 0x1FFu) <= 3) || v7 == 449) )
  {
    v9 = v17;
    v10 = sub_6F6DE0((__int64)a1, *(_QWORD *)(*(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF0LL));
    v17[0] = a1[2320];
    v17[1] = a1[2326];
    v17[2] = a1[2321];
    v17[3] = a1[2327];
    v17[4] = a1[2322];
    v17[5] = a1[2328];
    while ( 1 )
    {
      v11 = (__int64 *)(*v9 & 0xFFFFFFFFFFFFFFF0LL);
      v12 = sub_6F6DE0((__int64)a1, *v11);
      if ( v10 < v12 || v10 == v12 && (unsigned __int8)sub_B100B0(*v11) == v8 )
        break;
      ++v9;
    }
    return *v9;
  }
  else if ( (unsigned __int8)sub_B100B0(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL)) )
  {
    return a1[2320];
  }
  else
  {
    v13 = sub_70B280((__int64)a1, a2);
    v14 = sub_70B280((__int64)a1, a1[2320]);
    v15 = a1 + 2320;
    v16 = a1 + 2326;
    if ( v13 != v14 )
      v16 = v15;
    return *v16;
  }
}

