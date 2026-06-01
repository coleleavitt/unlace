void __fastcall sub_186FA00(__int64 a1, __int64 a2)
{
  __int16 v2; // ax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r12
  __int64 v9; // rax

  v2 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
  if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x3F) == 0x15 )
  {
    v7 = *(_QWORD *)(a2 + 16);
    if ( (*(_WORD *)v7 & 0x1FF) != 0x2E )
      goto LABEL_3;
    v8 = *(_QWORD *)(v7 + 24);
    if ( (*(_BYTE *)(v8 + 28) & 0x7Fu) - 49 > 2
      || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 48)
                                                                              & 0xFFFFFFFFFFFFFFF0LL)
                                                                  + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
       - 43 <= 1 )
    {
      goto LABEL_3;
    }
    v9 = *(unsigned int *)(a1 + 40);
    if ( v9 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 44) )
    {
      sub_2237220(a1 + 32, a1 + 48, v9 + 1, 8);
      v9 = *(unsigned int *)(a1 + 40);
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v9) = v8;
    ++*(_DWORD *)(a1 + 40);
    v2 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
  }
  if ( (unsigned int)(unsigned __int8)v2 - 22 > 9 )
  {
LABEL_3:
    sub_186F790((__int64 *)a1, a2);
    return;
  }
  sub_186F530((__int64 *)a1, *(_QWORD *)(a2 + 16), 0);
  sub_186F230((__int64 *)a1, *(_QWORD *)(a2 + 24), v3, v4, v5, v6);
}
