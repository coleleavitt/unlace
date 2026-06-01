void __fastcall sub_1BE6FF0(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int16 v7; // dx
  _QWORD *v8; // rcx
  _QWORD *v9; // r14
  __int64 v10; // rax
  _QWORD *v11; // rbp
  char *v12; // r15
  unsigned __int8 v13; // cl
  __int64 v14; // rax

  v5 = a4;
  v6 = sub_BFB9F0(a2);
  v7 = *(_WORD *)v6 & 0x1FF;
  if ( v7 == 4 )
  {
    v6 = sub_BFB9F0(*(_QWORD *)(v6 + 16));
    v7 = *(_WORD *)v6 & 0x1FF;
  }
  v8 = (_QWORD *)(v6 + 64);
  v9 = (_QWORD *)(v6 + 80);
  v10 = *(unsigned int *)(v6 + 4);
  if ( v7 == 24 )
    v9 = v8;
  v11 = &v9[v10];
  while ( v11 != v9 )
  {
    while ( 1 )
    {
      v12 = (char *)(*v9 & 0xFFFFFFFFFFFFFFF8LL);
      v13 = v12[28] & 0x7F;
      if ( ((v13 + 52) & 0x7Fu) <= 1 || (v14 = *v9 & 0xFFFFFFFFFFFFFFF8LL, (unsigned int)v13 - 53 <= 1) )
      {
        v14 = sub_B72ED0(*v9 & 0xFFFFFFFFFFFFFFF8LL);
        v13 = *(_BYTE *)(v14 + 28) & 0x7F;
      }
      if ( v13 != 71 )
        break;
      sub_1BE6900(a1, v12, *(_QWORD *)(v14 + 48), 0, a3, v5);
LABEL_8:
      if ( v11 == ++v9 )
        return;
    }
    if ( (unsigned int)v13 - 34 > 5 )
      goto LABEL_8;
    ++v9;
    sub_1BE6900(a1, v12, v14, 0, a3, v5);
  }
}
