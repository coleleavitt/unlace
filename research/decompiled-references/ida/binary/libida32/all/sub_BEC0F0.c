__int64 __fastcall sub_BEC0F0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, int a5)
{
  __int64 v5; // r9
  __int64 v6; // r10
  int v7; // eax
  unsigned int v11; // r12d
  __int64 v13[11]; // [rsp+0h] [rbp-58h] BYREF

  v5 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *(unsigned __int8 *)(v6 + 16);
  if ( (_BYTE)v7 == 13 )
  {
    if ( ((*(_WORD *)(v6 + 18) >> 3) & 0x1FF) != 0x1B3 )
      goto LABEL_3;
LABEL_8:
    *a4 = 1;
    return 1;
  }
  if ( (unsigned int)(v7 - 25) <= 1 )
    goto LABEL_8;
LABEL_3:
  if ( (*(_BYTE *)(v5 + 17) & 4) != 0 )
  {
    v11 = 0;
    sub_E0FF40(a1, a2, 108, 0);
  }
  else
  {
    v11 = sub_F34500(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL));
    if ( (_BYTE)v11 )
    {
      if ( a5 )
      {
        sub_A8AC70(v13, *(_QWORD *)(a1 + 16), a3);
        *a4 = v13[0];
      }
      else
      {
        *a4 = sub_A8AC40(*(_QWORD *)(a1 + 16), a3);
      }
    }
    else
    {
      sub_E0FF40(a1, (unsigned int)a2, 108, 0);
    }
  }
  return v11;
}

