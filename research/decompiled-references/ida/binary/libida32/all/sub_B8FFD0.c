_BYTE *__fastcall sub_B8FFD0(__int64 *a1, __int64 a2, char a3, __int64 a4)
{
  __int64 v6; // rdi
  _BYTE *v7; // rax
  __int64 v8; // r12
  __int64 v9; // rdi
  _BYTE *result; // rax
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  const void *v15; // rax
  size_t v16; // rdx
  __int64 v17; // rax
  _BYTE *v18; // rdx
  __int64 v19; // [rsp+8h] [rbp-60h] BYREF
  unsigned __int64 v20; // [rsp+18h] [rbp-50h] BYREF
  void *v21[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v22; // [rsp+30h] [rbp-38h] BYREF

  v6 = *a1;
  v19 = a4;
  v7 = *(_BYTE **)(v6 + 32);
  if ( *(_QWORD *)(v6 + 24) <= (unsigned __int64)v7 )
  {
    sub_2257CD0(v6, 40);
    if ( (a3 & 1) == 0 )
    {
LABEL_3:
      if ( (a3 & 2) == 0 )
        goto LABEL_4;
      goto LABEL_15;
    }
  }
  else
  {
    *(_QWORD *)(v6 + 32) = v7 + 1;
    *v7 = 40;
    if ( (a3 & 1) == 0 )
      goto LABEL_3;
  }
  sub_971800(*a1, "in ");
  if ( (a3 & 2) == 0 )
  {
LABEL_4:
    if ( (a3 & 4) == 0 )
      goto LABEL_5;
    goto LABEL_16;
  }
LABEL_15:
  sub_971800(*a1, "inout ");
  if ( (a3 & 4) == 0 )
  {
LABEL_5:
    if ( (a3 & 8) == 0 )
      goto LABEL_6;
    goto LABEL_17;
  }
LABEL_16:
  sub_971800(*a1, "out ");
  if ( (a3 & 8) == 0 )
  {
LABEL_6:
    if ( (a3 & 0x10) == 0 )
      goto LABEL_7;
    goto LABEL_18;
  }
LABEL_17:
  sub_971800(*a1, "bycopy ");
  if ( (a3 & 0x10) == 0 )
  {
LABEL_7:
    if ( (a3 & 0x20) == 0 )
      goto LABEL_8;
LABEL_19:
    sub_971800(*a1, "oneway ");
    if ( (a3 & 0x40) == 0 )
      goto LABEL_9;
    goto LABEL_20;
  }
LABEL_18:
  sub_971800(*a1, "byref ");
  if ( (a3 & 0x20) != 0 )
    goto LABEL_19;
LABEL_8:
  if ( (a3 & 0x40) == 0 )
    goto LABEL_9;
LABEL_20:
  v11 = sub_F3AC60(&v19);
  v13 = v11;
  if ( BYTE1(v11) )
  {
    v14 = *a1;
    LOWORD(v13) = BYTE1(v11);
    v15 = (const void *)sub_FBBEA0(v11, 1, v12, v13);
    v17 = sub_9717A0(v14, v15, v16);
    v18 = *(_BYTE **)(v17 + 32);
    if ( (unsigned __int64)v18 >= *(_QWORD *)(v17 + 24) )
    {
      sub_2257CD0(v17, 32);
    }
    else
    {
      *(_QWORD *)(v17 + 32) = v18 + 1;
      *v18 = 32;
    }
  }
LABEL_9:
  v8 = *a1;
  v20 = sub_B8FF10(a2, v19);
  sub_F54860(v21, &v20, a1 + 1);
  sub_22581D0(v8, v21[0], v21[1]);
  if ( v21[0] != &v22 )
    operator delete(v21[0]);
  v9 = *a1;
  result = *(_BYTE **)(*a1 + 32);
  if ( (unsigned __int64)result >= *(_QWORD *)(*a1 + 24) )
    return (_BYTE *)sub_2257CD0(v9, 41);
  *(_QWORD *)(v9 + 32) = result + 1;
  *result = 41;
  return result;
}

