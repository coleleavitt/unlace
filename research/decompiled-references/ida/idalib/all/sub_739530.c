__int64 __fastcall sub_739530(__int64 a1, unsigned __int16 *a2)
{
  __int64 v2; // rbx
  int v4; // ecx
  __int64 v5; // rdx
  int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // r13
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // r12

  if ( !*(_QWORD *)(a1 + 8) )
    return 0;
  v4 = *a2;
  v5 = *(unsigned __int16 *)((char *)a2 + (unsigned __int16)v4 + 2);
  if ( (unsigned __int16)v4 > 0x204u || (unsigned int)v5 > 0x404 )
    sub_743130(a1, a2, v5);
  *(_QWORD *)(a1 + 4232) = a2;
  v6 = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 4240) = v4 + v5 + 4;
  if ( v6 )
  {
    v7 = *(unsigned int *)(a1 + 36);
    *(_WORD *)(a1 + 1634) = 1;
    *(_QWORD *)(a1 + 2664) = a1 + 1640;
    byte_2CCC5CA = 0;
    sub_745040(a1, a1 + 1640, v7);
    if ( (unsigned __int8)sub_739240((_DWORD *)a1, (_QWORD *)(a1 + 1640), v8, v9, v10, v11, v2) )
    {
      if ( !unk_2CCC5C8 )
        goto LABEL_7;
      goto LABEL_12;
    }
  }
  else
  {
    v13 = *(_QWORD *)(a1 + 16);
    v14 = *(_QWORD *)(v13 + 8);
    v15 = sub_73ABC0();
    v16 = v15;
    if ( v15 )
    {
      sub_745920(a1, v15, 0, *(_QWORD *)(a1 + 4232), 0);
      **(_DWORD **)v16 = 0;
      *(_DWORD *)(a1 + 36) = *(_DWORD *)(v16 + 12);
      sub_73AB60(a1, v16);
      *(_QWORD *)(v13 + 8) = v14;
      if ( !unk_2CCC5C8 )
      {
LABEL_7:
        if ( !byte_2CCC5CA )
        {
LABEL_8:
          *(_BYTE *)(a1 + 4220) = 1;
LABEL_9:
          sub_73D680(a1 + 2672, a2);
          ++*(_DWORD *)(a1 + 28);
          return 1;
        }
LABEL_13:
        *(_BYTE *)(a1 + 4220) = 0;
        sub_744F90(a1, 1);
        byte_2CCC5CA = 0;
        *(_WORD *)(a1 + 1634) = 0;
        goto LABEL_9;
      }
LABEL_12:
      sub_73CF10(a1, *(unsigned int *)(a1 + 5796), a1 + 4244, *(unsigned int *)(a1 + 5792));
      if ( !byte_2CCC5CA )
        goto LABEL_8;
      goto LABEL_13;
    }
    *(_QWORD *)(v13 + 8) = v14;
  }
  return 0;
}
