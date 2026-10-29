__int64 __fastcall sub_AAF890(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdx
  __int64 v7; // rdi
  char v8; // al
  __int16 v10; // ax
  char v11; // r13
  _QWORD *v12; // r12
  unsigned __int64 v13; // r14
  __int64 *v14; // rbx
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  _QWORD v23[11]; // [rsp+10h] [rbp-58h] BYREF

  v6 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v8 = *(_BYTE *)(v7 + 16);
  if ( v8 == 47 )
    return *(_QWORD *)(sub_F60F10(v7, a2, v6, a4, a5) + 136);
  if ( v8 == 13
    && ((v10 = (*(_WORD *)(v7 + 18) >> 3) & 0x1FF, v11 = v10 == 450, ((v10 + 73) & 0x1FFu) <= 3) || v10 == 450) )
  {
    v12 = v23;
    v13 = sub_A97D20((__int64)a1, *(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL));
    v23[0] = a1[2340];
    v23[1] = a1[2346];
    v23[2] = a1[2341];
    v23[3] = a1[2347];
    v23[4] = a1[2342];
    v23[5] = a1[2348];
    while ( 1 )
    {
      v14 = (__int64 *)(*v12 & 0xFFFFFFFFFFFFFFF0LL);
      v15 = sub_A97D20((__int64)a1, *v14);
      if ( v13 < v15 || v13 == v15 && (unsigned __int8)sub_F65140(*v14) == v11 )
        break;
      ++v12;
    }
    return *v12;
  }
  else
  {
    if ( (unsigned __int8)sub_F65140(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL)) )
      return a1[2340];
    v19 = sub_AAC1F0((__int64)a1, a2, v16, v17, v18);
    if ( v19 != (unsigned int)sub_AAC1F0((__int64)a1, a1[2340], v20, v21, v22) )
      return a1[2340];
    else
      return a1[2346];
  }
}
