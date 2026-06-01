__int64 __fastcall sub_70B460(__int64 a1, int a2)
{
  unsigned int v2; // edx
  __int64 v3; // r12
  __int64 v4; // rcx
  int v5; // eax
  bool v7; // cf
  bool v8; // zf
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // edx
  __int64 v13; // rax
  __int64 v14; // r13
  int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // r12
  unsigned int v18; // edx
  char v19; // [rsp+Fh] [rbp-39h] BYREF
  __int64 v20; // [rsp+10h] [rbp-38h]
  unsigned __int64 v21; // [rsp+18h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  if ( a2 > 5 )
    sub_709C10(a1);
  v2 = *(_DWORD *)(a1 + 616);
  v3 = a1 + 56LL * a2;
  if ( !*(_QWORD *)(v3 + 104) || v2 < *((_DWORD *)&off_2B0E4A0 + 4 * a2 + 3) )
  {
    v4 = a1 + 56LL * a2;
    v5 = *(_DWORD *)(v4 + 136) | 0x20;
    *(_DWORD *)(v4 + 136) = v5;
    goto LABEL_4;
  }
  v7 = v2 < 4;
  v8 = v2 == 4;
  v9 = *(_QWORD *)(v3 + 104);
  v19 = 0;
  v20 = 0;
  v10 = sub_70A380(a1, (__int64)&v19, v9, !v7 && !v8);
  if ( !v10 )
  {
    v11 = *(_DWORD *)(v3 + 136);
    if ( (unsigned __int8)(*(_BYTE *)(a1 + 633) - 2) <= 1u )
    {
      *(_DWORD *)(v3 + 136) = v11 | 0x10;
      v12 = *(_DWORD *)(a1 + 616);
      if ( v12 )
      {
        if ( (v11 & 2) != 0 && v12 <= 2 )
          *(_DWORD *)(a1 + 56LL * a2 + 136) = v11 | 0x14;
      }
      else
      {
        *(_DWORD *)(v3 + 136) = v11 & 0xFFFFFFED | 0x10;
      }
      return 1;
    }
    *(_DWORD *)(v3 + 136) = v11 & 0xFFFFFFEF;
    v18 = *(_DWORD *)(a1 + 616);
    if ( v18 )
    {
      if ( (v11 & 2) != 0 && v18 <= 2 )
        *(_DWORD *)(a1 + 56LL * a2 + 136) = v11 & 0xFFFFFFEB | 4;
    }
    else
    {
      *(_DWORD *)(v3 + 136) = v11 & 0xFFFFFFED;
    }
LABEL_9:
    *(_QWORD *)(a1 + 56LL * a2 + 120) = *(_QWORD *)(a1 + 56LL * a2 + 112);
    return 1;
  }
  if ( (v19 & 0xFD) == 0 )
  {
    v13 = *(_QWORD *)(v3 + 104) + v10;
    *(_QWORD *)(v3 + 104) = v13;
    v14 = v13;
    *(_QWORD *)(v3 + 112) = v20;
    v15 = *(_DWORD *)(v3 + 136);
    if ( (unsigned __int8)(*(_BYTE *)(a1 + 633) - 2) <= 1u )
      v16 = v15 | 0x10;
    else
      v16 = v15 & 0xFFFFFFEF;
    v17 = a1 + 56LL * a2;
    *(_DWORD *)(v17 + 136) = v16;
    if ( v14 != qlseek(*(_QWORD *)(a1 + 640), 0, 1) )
    {
      if ( !under_debugger )
        interr(3301);
      BUG();
    }
    v5 = *(_DWORD *)(v17 + 136);
    v2 = *(_DWORD *)(a1 + 616);
LABEL_4:
    if ( v2 )
    {
      if ( (v5 & 2) != 0 && v2 <= 2 )
      {
        v5 |= 4u;
        *(_DWORD *)(a1 + 56LL * a2 + 136) = v5;
      }
    }
    else
    {
      v5 &= ~2u;
      *(_DWORD *)(a1 + 56LL * a2 + 136) = v5;
    }
    if ( (v5 & 0x10) != 0 )
      return 1;
    goto LABEL_9;
  }
  sub_3573A0((char **)a1);
  return 0;
}

