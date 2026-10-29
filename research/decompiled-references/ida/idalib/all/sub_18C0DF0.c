__int64 __fastcall sub_18C0DF0(__int64 a1, unsigned __int64 a2, double a3, double a4)
{
  __int64 v6; // r14
  char v7; // bl
  __int64 *v8; // r13
  __int64 v9; // rdi
  int v10; // ebx
  __int64 v11; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdi
  int v17; // eax
  __int64 v18; // rdi
  __int64 v19; // rsi
  unsigned __int64 v20; // rax

  v6 = *(_QWORD *)(a2 + 8);
  v7 = *(_DWORD *)(a1 + 224) >> 15;
  v8 = (__int64 *)(v6 & 0xFFFFFFFFFFFFFFF0LL);
  v9 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL);
  v10 = v7 & 3;
  if ( !v10 )
    goto LABEL_2;
  if ( !sub_F58060(v9) )
    goto LABEL_16;
  if ( ((*(_BYTE *)(*(_QWORD *)(a1 + 232) + 207LL) ^ 0x18) & 0x18) == 0 )
  {
    v15 = *(unsigned int *)(*(_QWORD *)(a1 + 240) + 532LL);
    if ( !(_DWORD)v15 )
      goto LABEL_16;
  }
  v16 = *(_QWORD *)(a1 + 248);
  if ( v10 != 1 )
  {
    if ( (int)sub_A637F0(v16, *(_QWORD *)(v16 + 18816), v6, v14, v15) <= 0 )
    {
LABEL_16:
      v9 = *v8;
LABEL_2:
      v11 = *(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v11 + 16) != 13
        || ((*(_WORD *)(v11 + 18) >> 3) & 0x1FF) != 0x1E0
        || (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 60LL) & 4) != 0 )
      {
        return a2;
      }
      v13 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18800LL);
      return sub_160A600(a1, a2, v13, 0x27u, 0, 0, a3, a4, 0);
    }
    if ( sub_F57BD0(*v8) )
    {
      v18 = *(_QWORD *)(a1 + 248);
      v19 = *(_QWORD *)(v18 + 18816);
      goto LABEL_14;
    }
    v13 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18816LL);
    return sub_160A600(a1, a2, v13, 0x27u, 0, 0, a3, a4, 0);
  }
  v17 = sub_A637F0(v16, *(_QWORD *)(v16 + 18808), v6, v14, v15);
  v9 = *v8;
  if ( v17 <= 0 )
    goto LABEL_2;
  if ( !sub_F57BD0(v9) )
  {
    v13 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18808LL);
    return sub_160A600(a1, a2, v13, 0x27u, 0, 0, a3, a4, 0);
  }
  v18 = *(_QWORD *)(a1 + 248);
  v19 = *(_QWORD *)(v18 + 18808);
LABEL_14:
  v20 = sub_A74CE0(v18, v19);
  return sub_160A600(a1, a2, v20, 0x2Fu, 0, 0, a3, a4, 0);
}
