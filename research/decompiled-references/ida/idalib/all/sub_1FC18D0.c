char __fastcall sub_1FC18D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  int v4; // eax
  unsigned int v5; // ecx
  unsigned __int64 v6; // rdx
  char v7; // al
  char v8; // al
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // r12

  v2 = a2;
  sub_1FC1210(a1, a2);
  v4 = *(_BYTE *)(a2 + 28) & 0x7F;
  v5 = v4 - 34;
  if ( (unsigned int)(v4 - 34) > 0x11 )
    goto LABEL_13;
  v6 = *(_QWORD *)(a2 + 56) & 0xFFFFFFFFFFFFFFF8LL;
  a2 = *(_QWORD *)(a2 + 56) & 4LL;
  if ( (*(_QWORD *)(v2 + 56) & 4) == 0 )
  {
    if ( !v6 )
      goto LABEL_5;
    goto LABEL_4;
  }
  v6 = *(_QWORD *)(v6 + 32);
  if ( v6 )
  {
LABEL_4:
    a2 = *(_QWORD *)v6;
    sub_1F9A3D0(a1 + 8, *(_QWORD *)v6, (int *)(v6 + 8));
    v4 = *(_BYTE *)(v2 + 28) & 0x7F;
    v5 = v4 - 34;
  }
LABEL_5:
  if ( v5 <= 5 )
  {
    if ( *(_BYTE *)(a1 + 232) && sub_1FB2220(v2, a2) )
    {
      sub_1FB1190(*(_QWORD *)(a1 + 24));
      v4 = *(_BYTE *)(v2 + 28) & 0x7F;
    }
    else
    {
      v7 = *(_BYTE *)(v2 + 83);
      if ( (v7 & 8) != 0 || (a2 = 1, (*(_BYTE *)(v2 + 128) & 1) == 0) && !*(_QWORD *)(v2 + 128) )
        a2 = (v7 & 0x40) != 0;
      sub_9B9C90(*(_QWORD *)(a1 + 24), a2);
      v8 = *(_BYTE *)(v2 + 83);
      if ( (v8 & 8) == 0 && ((*(_BYTE *)(v2 + 128) & 1) != 0 || *(_QWORD *)(v2 + 128)) || (v8 & 0x40) != 0 )
      {
        a2 = v2;
        sub_1FB2560(a1 + 8, (_QWORD *)v2);
      }
      v4 = *(_BYTE *)(v2 + 28) & 0x7F;
    }
  }
LABEL_13:
  if ( (unsigned int)(v4 - 40) <= 6 )
  {
    if ( *(_BYTE *)(a1 + 232) && sub_1FB2220(v2, a2) )
    {
      sub_1FB1190(*(_QWORD *)(a1 + 24));
      v4 = *(_BYTE *)(v2 + 28) & 0x7F;
    }
    else
    {
      sub_1F991F0((__int64 *)(a1 + 8), v2);
      v4 = *(_BYTE *)(v2 + 28) & 0x7F;
    }
  }
  if ( (unsigned int)(v4 - 49) <= 2 && (*(_BYTE *)(v2 + 68) & 0xC) != 0xC && (*(_BYTE *)(v2 + 68) & 0xC) != 0 )
  {
    v10 = sub_B780B0(v2);
    v11 = *(_QWORD *)(a1 + 24);
    v12 = v10;
    if ( v10 )
    {
      sub_9B9C90(v11, 1);
      sub_183F100(a1 + 32, v12);
    }
    else
    {
      sub_1FB1190(v11);
    }
  }
  LOBYTE(v9) = sub_B8E0B0(v2);
  if ( (_BYTE)v9 )
  {
    v9 = sub_B8D340(v2);
    if ( v9 )
      LOBYTE(v9) = sub_1FB22F0(a1, v9);
  }
  return v9;
}
