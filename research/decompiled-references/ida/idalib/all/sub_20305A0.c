void __fastcall sub_20305A0(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int64 v4; // rax
  int v5; // edx
  unsigned int v6; // ecx
  __int64 v7; // rcx
  __int64 v8; // rcx
  char v9; // al
  char v10; // al
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // r12
  int v14; // esi
  unsigned int v15; // edi
  unsigned __int8 v16; // cl
  __int64 *v17; // rax
  int v18; // edx
  void *v19; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v20; // [rsp+8h] [rbp-40h]
  void *v21; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v22; // [rsp+18h] [rbp-30h]
  char v23; // [rsp+20h] [rbp-28h]

  v4 = *a2;
  if ( (unsigned __int8)v4 <= 0x1Cu )
  {
LABEL_10:
    if ( (_BYTE)v4 != 18 )
      return;
    if ( (*((_WORD *)a2 + 1) & 0xFFFD) != 0xD )
    {
      if ( *((_WORD *)a2 + 1) != 34 )
        return;
      goto LABEL_19;
    }
LABEL_13:
    v9 = a2[1] >> 1;
    if ( (a2[1] & 2) != 0 )
    {
      sub_995540(a1, " nuw");
      v9 = a2[1] >> 1;
    }
    if ( (v9 & 2) != 0 )
      sub_995540(a1, " nsw");
    return;
  }
  v5 = (unsigned __int8)v4;
  v6 = (unsigned __int8)v4 - 29;
  if ( v6 > 0x39 )
    goto LABEL_3;
  v7 = 1LL << v6;
  if ( (v7 & 0x40600001255000LL) != 0 )
    goto LABEL_8;
  if ( (v7 & 0x380000000000000LL) == 0 )
    goto LABEL_3;
  v13 = *((_QWORD *)a2 + 1);
  v14 = *(unsigned __int8 *)(v13 + 8);
  v15 = v14 - 17;
  v16 = *(_BYTE *)(v13 + 8);
  if ( (unsigned int)(v14 - 17) <= 1 )
    v16 = *(_BYTE *)(**(_QWORD **)(v13 + 16) + 8LL);
  if ( v16 <= 5u && ((1LL << v16) & 0x2F) != 0 || (v16 & 0xFD) == 4 )
  {
LABEL_8:
    LODWORD(v19) = a2[1] >> 1;
    sub_20BEF00(&v19, a1);
    goto LABEL_9;
  }
  if ( (_BYTE)v14 != 15 )
  {
    if ( (_BYTE)v14 == 16 )
    {
      do
      {
        v13 = *(_QWORD *)(v13 + 24);
        LOBYTE(v14) = *(_BYTE *)(v13 + 8);
      }
      while ( (_BYTE)v14 == 16 );
      v15 = (unsigned __int8)v14 - 17;
    }
LABEL_41:
    if ( v15 <= 1 )
      LOBYTE(v14) = *(_BYTE *)(**(_QWORD **)(v13 + 16) + 8LL);
    if ( ((unsigned __int8)v14 > 5u || ((1LL << v14) & 0x2F) == 0) && (v14 & 0xFD) != 4 )
      goto LABEL_9;
    goto LABEL_8;
  }
  if ( (*(_BYTE *)(v13 + 9) & 4) == 0 )
    goto LABEL_3;
  if ( (unsigned __int8)sub_20C3210(*((_QWORD *)a2 + 1)) )
  {
    v17 = *(__int64 **)(v13 + 16);
    v13 = *v17;
    v14 = *(unsigned __int8 *)(*v17 + 8);
    v15 = v14 - 17;
    goto LABEL_41;
  }
LABEL_9:
  v4 = *a2;
  if ( (unsigned __int8)v4 <= 0x1Cu )
    goto LABEL_10;
  v5 = (unsigned __int8)v4;
LABEL_3:
  if ( (unsigned __int8)v4 <= 0x36u )
  {
    v8 = 0x40540000000000LL;
    if ( !_bittest64(&v8, v4) )
    {
      if ( (unsigned int)(v5 - 48) <= 1 )
      {
LABEL_5:
        if ( (a2[1] & 2) != 0 )
          sub_995540(a1, " exact");
        return;
      }
      goto LABEL_49;
    }
    goto LABEL_13;
  }
  if ( (unsigned __int8)(v4 - 55) <= 1u )
    goto LABEL_5;
  if ( (_BYTE)v4 == 58 )
  {
    if ( (a2[1] & 2) != 0 )
      sub_995540(a1, " disjoint");
    return;
  }
  if ( (_BYTE)v4 == 63 )
  {
LABEL_19:
    v10 = a2[1] >> 1;
    if ( (a2[1] & 2) != 0 )
    {
      sub_995540(a1, " inbounds");
      v10 = a2[1] >> 1;
    }
    else if ( (v10 & 2) != 0 )
    {
      sub_995540(a1, " nusw");
      v10 = a2[1] >> 1;
    }
    if ( (v10 & 4) != 0 )
      sub_995540(a1, " nuw");
    sub_20BEED0(&v19, a2);
    if ( v23 )
    {
      v11 = sub_995540(a1, " inrange(");
      sub_220C370(&v19, v11, 1);
      v12 = sub_995540(v11, ", ");
      sub_220C370(&v21, v12, 1);
      sub_995540(v12, ")");
      if ( v23 )
      {
        if ( v22 > 0x40 && v21 )
          operator delete[](v21);
        if ( v20 > 0x40 && v19 )
          operator delete[](v19);
      }
    }
    return;
  }
LABEL_49:
  v18 = v5 - 29;
  if ( v18 != 39 && v18 != 43 )
  {
    if ( (_BYTE)v4 != 67 )
    {
      if ( (_BYTE)v4 == 82 && (a2[1] & 2) != 0 )
        sub_995540(a1, " samesign");
      return;
    }
    goto LABEL_13;
  }
  if ( (unsigned __int8)sub_20900B0(a2) )
    sub_995540(a1, " nneg");
}
