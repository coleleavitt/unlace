__int64 __fastcall sub_81FCD0(__int64 a1, unsigned int a2, __int64 a3, __int64 *a4, int a5)
{
  __int64 v9; // rdi
  __int64 v10; // rdx
  char v11; // al
  __int64 v13[9]; // [rsp+0h] [rbp-48h] BYREF

  v9 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v11 = *(_BYTE *)(v10 + 16);
  if ( v11 != 13 )
  {
    if ( (unsigned __int8)(v11 - 25) > 1u )
      goto LABEL_3;
LABEL_8:
    *a4 = 1;
    return 1;
  }
  if ( ((*(_WORD *)(v10 + 18) >> 3) & 0x1FF) == 0x1B2 )
    goto LABEL_8;
LABEL_3:
  if ( (*(_BYTE *)(v9 + 17) & 4) == 0 && (unsigned __int8)sub_B08470() )
  {
    if ( a5 )
    {
      sub_70E450(v13, *(_QWORD *)(a1 + 16), a3);
      *a4 = v13[0];
    }
    else
    {
      *a4 = sub_70E2F0(*(_QWORD *)(a1 + 16), a3);
    }
    return 1;
  }
  sub_A2E1A0(a1, a2, 110, 0);
  return 0;
}

